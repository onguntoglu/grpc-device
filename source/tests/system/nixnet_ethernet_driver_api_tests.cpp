#include <gmock/gmock.h>
#include <google/protobuf/util/time_util.h>
#include <gtest/gtest.h>
#undef interface
#include <nixnet/nixnet_client.h>

#include <iostream>
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "device_server.h"
#include "enumerate_devices.h"
#include "nixnet_utilities.h"

using namespace nixnet_grpc;
namespace client = nixnet_grpc::experimental::client;
namespace pb = google::protobuf;
using namespace ::testing;
using namespace ::nixnet_utilities;
using nlohmann::json;

namespace ni {
namespace tests {
namespace system {
namespace {

typedef pb::uint8 u8;
typedef pb::uint16 u16;
typedef pb::uint32 u32;
typedef pb::uint64 u64;

constexpr auto SCHEMA = "file:///NIXNET_Documentation/xnetIpStackSchema-03.json";
const auto SIMPLE_INTERFACE_CONFIG = R"(
        {
          "address": "inherit",
          "VLANs": [
            {
              "IPv4": {
                "mode": "static",
                "staticAddresses": [
                  {
                    "address": "192.22.33.44",
                    "subnetMask": "255.0.0.0"
                  }
                ]
              }
            }
          ]
        }
)"_json;

std::string create_simple_config(const std::string& interface_name)
{
  auto interface_config = json{};
  interface_config["name"] = interface_name;
  interface_config["MACs"] = std::vector<json>{SIMPLE_INTERFACE_CONFIG};

  auto config = json{};
  config["schema"] = SCHEMA;
  config["xnetInterfaces"] = std::vector<json>{interface_config};

  return config.dump();
}

class NiXnetEthernetDriverApiTests : public ::testing::Test {
 protected:
  NiXnetEthernetDriverApiTests()
      : device_server_(DeviceServerInterface::Singleton()),
        stub_(NiXnet::NewStub(device_server_->InProcessChannel()))
  {
    device_server_->ResetServer();
  }
  virtual ~NiXnetEthernetDriverApiTests() {}

  void TearDown() override
  {
    device_server_->ResetServer();
  }

  template <typename TService>
  std::unique_ptr<typename TService::Stub> create_stub()
  {
    return TService::NewStub(device_server_->InProcessChannel());
  }

  std::unique_ptr<NiXnet::Stub>& stub()
  {
    return stub_;
  }

 private:
  DeviceServerInterface* device_server_;
  std::unique_ptr<NiXnet::Stub> stub_;
};

TEST_F(NiXnetEthernetDriverApiTests, FrameStreamInputLoggerFromExample_FetchData_DataLooksReasonable)
{
  constexpr u16 VLAN_ID = 2;
  constexpr u32 ENABLE_VID_AND_PRIORITY = 3;
  constexpr u8 PCP = 3;
  std::string log_path = "C:\\Users\\Public\\Documents\\log.pcap";
  auto session = EXPECT_SUCCESS(client::create_session(stub(), NULL, NULL, NULL, "ENET4", CREATE_SESSION_MODE_MODE_FRAME_IN_STREAM)).session_ref();
  /* TODO
  std::vector<EptRxFilter> rx_filter(1);
  rx_filter[0].set_use_flags(ENABLE_VID_AND_PRIORITY);
  rx_filter[0].set_vid(VLAN_ID);
  rx_filter[0].set_priority(PCP);
  rx_filter[0].set_destination_mac("AA:BB:CC:DD:EE:FF");
  EXPECT_SUCCESS(client::set_property(stub(), session, PROPERTY_SESSION_INTF_ENET_EPT_RECEIVE_FILTER, rx_filter));
  */
  EXPECT_SUCCESS(set_property(stub(), session, PROPERTY_SESSION_ENET_LOG_MODE, PROPERTY_VALUE_ENET_LOG_MODE_LOG));
  EXPECT_SUCCESS(set_property(stub(), session, PROPERTY_SESSION_ENET_LOG_OPERATION, PROPERTY_VALUE_ENET_LOG_OPERATION_CREATE_OR_REPLACE));
  EXPECT_SUCCESS(set_property(stub(), session, PROPERTY_SESSION_ENET_LOG_FILE, log_path));
  EXPECT_SUCCESS(client::start(stub(), session, 0));
  auto get_property_response = EXPECT_SUCCESS(get_property(stub(), session, PROPERTY_SESSION_ENET_NUM_FRAMES_RECEIVED));
  EXPECT_SUCCESS(client::clear(stub(), session));

  EXPECT_EQ(0, get_property_response.u64_scalar());
}

TEST_F(NiXnetEthernetDriverApiTests, FrameStreamInputReaderFromExample_FetchData_DataLooksReasonable)
{
  constexpr u16 VLAN_ID = 2;
  constexpr u32 ENABLE_VID_AND_PRIORITY = 3;
  constexpr u8 PCP = 3;
  auto session = EXPECT_SUCCESS(client::create_session(stub(), NULL, NULL, NULL, "ENET4", CREATE_SESSION_MODE_MODE_FRAME_IN_STREAM)).session_ref();
  /* TODO
  std::vector<EptRxFilter> rx_filter(1);
  rx_filter[0].set_use_flags(ENABLE_VID_AND_PRIORITY);
  rx_filter[0].set_vid(VLAN_ID);
  rx_filter[0].set_priority(PCP);
  rx_filter[0].set_destination_mac("AA:BB:CC:DD:EE:FF");
  EXPECT_SUCCESS(client::set_property(stub(), session, PROPERTY_SESSION_INTF_ENET_EPT_RECEIVE_FILTER, rx_filter));
  */
  /* TODO
  auto read_frame_response = EXPECT_SUCCESS(client::read_frame(stub(), session, 250, TIME_OUT_TIMEOUT_NONE, FRAME_TYPE_ENET));
  */
  EXPECT_SUCCESS(client::clear(stub(), session));

  /*
  EXPECT_EQ(999, read_frame_response.buffer_size());
  EXPECT_EQ(999, read_frame_response.buffer().size());
  //EXPECT_EQ(FrameBuffer(), read_frame_response.buffer(0));
  */
}

TEST_F(NiXnetEthernetDriverApiTests, FrameStreamOutputFromExample_FetchData_DataLooksReasonable)
{
  constexpr u8 NUM_FRAMES = 2;
  constexpr u16 PAYLOAD_SIZE = 150;
  constexpr u16 VLAN_ID = 2;
  std::vector<FrameBuffer> frames(NUM_FRAMES);
  char payload[PAYLOAD_SIZE + 1] = {0};
  nixnet_grpc::EnetFrame* frame = NULL;
  auto session = EXPECT_SUCCESS(client::create_session(stub(), NULL, NULL, NULL, "ENET1", CREATE_SESSION_MODE_MODE_FRAME_OUT_STREAM)).session_ref();
  for (int i = 0; i < PAYLOAD_SIZE; ++i) {
    payload[i] = (char)i;
  }
  frame = new nixnet_grpc::EnetFrame();
  // TODO: set no vlan
  frame->set_device_timestamp(0);
  frame->set_network_timestamp(0);
  frame->set_flags(0);
  frame->set_type(FRAME_TYPE_ENET);
  frame->set_frame_data(payload);
  frames.push_back(nixnet_grpc::FrameBuffer());
  frames.back().set_allocated_enet(frame);
  frame = new nixnet_grpc::EnetFrame();
  // TODO: set VLAN_ID
  frame->set_device_timestamp(0);
  frame->set_network_timestamp(0);
  frame->set_flags(0);
  frame->set_type(FRAME_TYPE_ENET);
  frame->set_frame_data(payload);
  frames.push_back(nixnet_grpc::FrameBuffer());
  frames.back().set_allocated_enet(frame);
  /* TODO
  EXPECT_SUCCESS(client::write_frame(stub(), session, frames, 10.0));
  */
  EXPECT_SUCCESS(client::clear(stub(), session));
}

}  // namespace
}  // namespace system
}  // namespace tests
}  // namespace ni

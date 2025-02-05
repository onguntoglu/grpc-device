
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-FAKE-EXTENSION.
//---------------------------------------------------------------------
#include "nifake_extension_client.h"

#include <grpcpp/grpcpp.h>

#include <nifake_extension.grpc.pb.h>

#include <cstdint>
#include <memory>
#include <stdexcept>
#include <vector>

namespace nifake_extension_grpc::experimental::client {

AddCoolFunctionalityResponse
add_cool_functionality(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& param)
{
  ::grpc::ClientContext context;

  auto request = AddCoolFunctionalityRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_param(param);

  auto response = AddCoolFunctionalityResponse{};

  raise_if_error(
      stub->AddCoolFunctionality(&context, request, &response),
      context);

  return response;
}


} // namespace nifake_extension_grpc::experimental::client


//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-TClk Metadata
//---------------------------------------------------------------------
#ifndef NITCLK_GRPC_SERVICE_H
#define NITCLK_GRPC_SERVICE_H

#include <nitclk.grpc.pb.h>
#include <condition_variable>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <map>
#include <server/session_repository.h>
#include <server/shared_library.h>

#include "nitclk_library_interface.h"

namespace nitclk_grpc {

class NiTClkService final : public NiTClk::Service {
public:
  NiTClkService(NiTClkLibraryInterface* library, nidevice_grpc::SessionRepository* session_repository);
  virtual ~NiTClkService();
  ::grpc::Status ConfigureForHomogeneousTriggers(::grpc::ServerContext* context, const ConfigureForHomogeneousTriggersRequest* request, ConfigureForHomogeneousTriggersResponse* response) override;
  ::grpc::Status FinishSyncPulseSenderSynchronize(::grpc::ServerContext* context, const FinishSyncPulseSenderSynchronizeRequest* request, FinishSyncPulseSenderSynchronizeResponse* response) override;
  ::grpc::Status GetAttributeViReal64(::grpc::ServerContext* context, const GetAttributeViReal64Request* request, GetAttributeViReal64Response* response) override;
  ::grpc::Status GetAttributeViSession(::grpc::ServerContext* context, const GetAttributeViSessionRequest* request, GetAttributeViSessionResponse* response) override;
  ::grpc::Status GetAttributeViString(::grpc::ServerContext* context, const GetAttributeViStringRequest* request, GetAttributeViStringResponse* response) override;
  ::grpc::Status GetExtendedErrorInfo(::grpc::ServerContext* context, const GetExtendedErrorInfoRequest* request, GetExtendedErrorInfoResponse* response) override;
  ::grpc::Status Initiate(::grpc::ServerContext* context, const InitiateRequest* request, InitiateResponse* response) override;
  ::grpc::Status IsDone(::grpc::ServerContext* context, const IsDoneRequest* request, IsDoneResponse* response) override;
  ::grpc::Status SetAttributeViReal64(::grpc::ServerContext* context, const SetAttributeViReal64Request* request, SetAttributeViReal64Response* response) override;
  ::grpc::Status SetAttributeViSession(::grpc::ServerContext* context, const SetAttributeViSessionRequest* request, SetAttributeViSessionResponse* response) override;
  ::grpc::Status SetAttributeViString(::grpc::ServerContext* context, const SetAttributeViStringRequest* request, SetAttributeViStringResponse* response) override;
  ::grpc::Status SetupForSyncPulseSenderSynchronize(::grpc::ServerContext* context, const SetupForSyncPulseSenderSynchronizeRequest* request, SetupForSyncPulseSenderSynchronizeResponse* response) override;
  ::grpc::Status Synchronize(::grpc::ServerContext* context, const SynchronizeRequest* request, SynchronizeResponse* response) override;
  ::grpc::Status SynchronizeToSyncPulseSender(::grpc::ServerContext* context, const SynchronizeToSyncPulseSenderRequest* request, SynchronizeToSyncPulseSenderResponse* response) override;
  ::grpc::Status WaitUntilDone(::grpc::ServerContext* context, const WaitUntilDoneRequest* request, WaitUntilDoneResponse* response) override;
private:
  NiTClkLibraryInterface* library_;
  nidevice_grpc::SessionRepository* session_repository_;
};

} // namespace nitclk_grpc

#endif  // NITCLK_GRPC_SERVICE_H
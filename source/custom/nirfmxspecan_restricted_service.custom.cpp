#include <nirfmxspecan_restricted/nirfmxspecan_restricted_service.h>

namespace nirfmxspecan_restricted_grpc {

::grpc::Status NiRFmxSpecAnRestrictedService::ConvertApiErrorStatusForNiRFmxInstrHandle(::grpc::ServerContext* context, int32_t status, niRFmxInstrHandle instrumentHandle)
{
  ViStatus error_code{};
  std::string description(nidevice_grpc::kMaxGrpcErrorDescriptionSize, '\0');
  // Try first to get the most recent error with a dynamic message.
  library_->GetError(instrumentHandle, &error_code, nidevice_grpc::kMaxGrpcErrorDescriptionSize, &description[0]);
  if (error_code != status) {
    // Since another thread has changed the status, fall back to the static message lookup.
    library_->GetErrorString(instrumentHandle, status, nidevice_grpc::kMaxGrpcErrorDescriptionSize, &description[0]);
  }
  return nidevice_grpc::ApiErrorAndDescriptionToStatus(context, status, description);
}

}  // namespace nirfmxspecan_restricted_grpc

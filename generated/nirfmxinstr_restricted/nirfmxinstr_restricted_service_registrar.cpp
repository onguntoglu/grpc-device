
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service registrar implementation for the NI-RFMXINSTR-RESTRICTED Metadata
//---------------------------------------------------------------------
#include "nirfmxinstr_restricted_library.h"

#include <grpcpp/server_builder.h>

#include "nirfmxinstr_restricted_service.h"
#include "nirfmxinstr_restricted_service_registrar.h"

namespace nirfmxinstr_restricted_grpc {

namespace {
struct LibraryAndService {
  LibraryAndService(
    const std::shared_ptr<nidevice_grpc::SessionResourceRepository<niRFmxInstrHandle>>& resource_repository,
    const NiRFmxInstrRestrictedFeatureToggles& feature_toggles) 
      : library(), 
      service(
        &library, 
        resource_repository,
        feature_toggles) {
  }
  NiRFmxInstrRestrictedLibrary library;
  NiRFmxInstrRestrictedService service;
};
}

std::shared_ptr<void> register_service(
  grpc::ServerBuilder& builder, 
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<niRFmxInstrHandle>>& resource_repository,
  const nidevice_grpc::FeatureToggles& feature_toggles)
{
  auto toggles = NiRFmxInstrRestrictedFeatureToggles(feature_toggles);

  if (toggles.is_enabled)
  {
    auto library_and_service_ptr = std::make_shared<LibraryAndService>(
      resource_repository,
      toggles);
    auto& service = library_and_service_ptr->service;
    builder.RegisterService(&service);
    return library_and_service_ptr;
  }

  return {};
}

} // nirfmxinstr_restricted_grpc

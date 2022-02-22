
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service registrar implementation for the NI-RFMXLTE Metadata
//---------------------------------------------------------------------
#include "nirfmxlte_library.h"

#include <grpcpp/server_builder.h>

#include "nirfmxlte_service.h"
#include "nirfmxlte_service_registrar.h"

namespace nirfmxlte_grpc {

namespace {
struct LibraryAndService {
  LibraryAndService(
    const std::shared_ptr<nidevice_grpc::SessionResourceRepository<niRFmxInstrHandle>>& resource_repository,
    const std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>& vi_session_resource_repository,
    const NiRFmxLTEFeatureToggles& feature_toggles) 
      : library(), 
      service(
        &library, 
        resource_repository, 
        vi_session_resource_repository,
        feature_toggles) {
  }
  NiRFmxLTELibrary library;
  NiRFmxLTEService service;
};
}

std::shared_ptr<void> register_service(
  grpc::ServerBuilder& builder, 
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<niRFmxInstrHandle>>& resource_repository,
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>& vi_session_resource_repository,
  const nidevice_grpc::FeatureToggles& feature_toggles)
{
  auto toggles = NiRFmxLTEFeatureToggles(feature_toggles);

  if (toggles.is_enabled)
  {
    auto library_and_service_ptr = std::make_shared<LibraryAndService>(
      resource_repository,
      vi_session_resource_repository,
      toggles);
    auto& service = library_and_service_ptr->service;
    builder.RegisterService(&service);
    return library_and_service_ptr;
  }

  return {};
}

} // nirfmxlte_grpc


//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service registrar header for the NI-XNET Metadata
//---------------------------------------------------------------------
#ifndef NIXNET_GRPC_SERVICE_REGISTRAR_H
#define NIXNET_GRPC_SERVICE_REGISTRAR_H
#include <server/feature_toggles.h>
#include <server/session_resource_repository.h>

#include <memory>

#include <nixnet.h> // for nxSessionRef_t, nxDatabaseRef_t

namespace grpc {
class ServerBuilder;
}

namespace nixnet_grpc {
using CodeReadiness = nidevice_grpc::FeatureToggles::CodeReadiness;

std::shared_ptr<void> register_service(
  grpc::ServerBuilder& server_builder, 
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<nxSessionRef_t>>& resource_repository,
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<nxDatabaseRef_t>>& nx_database_ref_t_resource_repository,
  const nidevice_grpc::FeatureToggles& feature_toggles);

} // nixnet_grpc

#endif  // NIXNET_GRPC_SERVICE_REGISTRAR_H

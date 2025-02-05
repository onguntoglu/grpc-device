//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-FAKE-EXTENSION
//---------------------------------------------------------------------
#ifndef NIFAKE_EXTENSION_GRPC_LIBRARY_H
#define NIFAKE_EXTENSION_GRPC_LIBRARY_H

#include "nifake_extension_library_interface.h"

#include <server/shared_library.h>

namespace nifake_extension_grpc {

class NiFakeExtensionLibrary : public nifake_extension_grpc::NiFakeExtensionLibraryInterface {
 public:
  NiFakeExtensionLibrary();
  virtual ~NiFakeExtensionLibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  ViStatus AddCoolFunctionality(ViSession vi, ViInt32 param);

 private:
  using AddCoolFunctionalityPtr = decltype(&niFakeExtension_AddCoolFunctionality);

  typedef struct FunctionPointers {
    AddCoolFunctionalityPtr AddCoolFunctionality;
  } FunctionLoadStatus;

  nidevice_grpc::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace nifake_extension_grpc

#endif  // NIFAKE_EXTENSION_GRPC_LIBRARY_H

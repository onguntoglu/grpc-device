//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service implementation for the NI-SCOPE Metadata
//---------------------------------------------------------------------
#include "niscope_library.h"

#if defined(_MSC_VER)
static const char* kLibraryName = "niScope_64.dll";
#else
static const char* kLibraryName = "libniscope.so";
#endif

namespace ni {
namespace scope {
namespace grpc {

NiScopeLibrary::NiScopeLibrary() : shared_library_(kLibraryName)
{
  shared_library_.load();
  bool loaded = shared_library_.is_loaded();
  memset(&function_pointers_, 0, sizeof(function_pointers_));
  if (!loaded) {
    return;
  }
  function_pointers_.Abort = reinterpret_cast<AbortPtr>(shared_library_.get_function_pointer("niScope_Abort"));
  function_pointers_.AcquisitionStatus = reinterpret_cast<AcquisitionStatusPtr>(shared_library_.get_function_pointer("niScope_AcquisitionStatus"));
  function_pointers_.ActualMeasWfmSize = reinterpret_cast<ActualMeasWfmSizePtr>(shared_library_.get_function_pointer("niScope_ActualMeasWfmSize"));
  function_pointers_.ActualNumWfms = reinterpret_cast<ActualNumWfmsPtr>(shared_library_.get_function_pointer("niScope_ActualNumWfms"));
  function_pointers_.AddWaveformProcessing = reinterpret_cast<AddWaveformProcessingPtr>(shared_library_.get_function_pointer("niScope_AddWaveformProcessing"));
  function_pointers_.AutoSetup = reinterpret_cast<AutoSetupPtr>(shared_library_.get_function_pointer("niScope_AutoSetup"));
  function_pointers_.CalSelfCalibrate = reinterpret_cast<CalSelfCalibratePtr>(shared_library_.get_function_pointer("niScope_CalSelfCalibrate"));
  function_pointers_.ClearWaveformMeasurementStats = reinterpret_cast<ClearWaveformMeasurementStatsPtr>(shared_library_.get_function_pointer("niScope_ClearWaveformMeasurementStats"));
  function_pointers_.ClearWaveformProcessing = reinterpret_cast<ClearWaveformProcessingPtr>(shared_library_.get_function_pointer("niScope_ClearWaveformProcessing"));
  function_pointers_.Commit = reinterpret_cast<CommitPtr>(shared_library_.get_function_pointer("niScope_Commit"));
  function_pointers_.ConfigureChanCharacteristics = reinterpret_cast<ConfigureChanCharacteristicsPtr>(shared_library_.get_function_pointer("niScope_ConfigureChanCharacteristics"));
  function_pointers_.ConfigureEqualizationFilterCoefficients = reinterpret_cast<ConfigureEqualizationFilterCoefficientsPtr>(shared_library_.get_function_pointer("niScope_ConfigureEqualizationFilterCoefficients"));
  function_pointers_.ConfigureHorizontalTiming = reinterpret_cast<ConfigureHorizontalTimingPtr>(shared_library_.get_function_pointer("niScope_ConfigureHorizontalTiming"));
  function_pointers_.ConfigureTriggerDigital = reinterpret_cast<ConfigureTriggerDigitalPtr>(shared_library_.get_function_pointer("niScope_ConfigureTriggerDigital"));
  function_pointers_.ConfigureTriggerEdge = reinterpret_cast<ConfigureTriggerEdgePtr>(shared_library_.get_function_pointer("niScope_ConfigureTriggerEdge"));
  function_pointers_.ConfigureTriggerHysteresis = reinterpret_cast<ConfigureTriggerHysteresisPtr>(shared_library_.get_function_pointer("niScope_ConfigureTriggerHysteresis"));
  function_pointers_.ConfigureTriggerImmediate = reinterpret_cast<ConfigureTriggerImmediatePtr>(shared_library_.get_function_pointer("niScope_ConfigureTriggerImmediate"));
  function_pointers_.ConfigureTriggerSoftware = reinterpret_cast<ConfigureTriggerSoftwarePtr>(shared_library_.get_function_pointer("niScope_ConfigureTriggerSoftware"));
  function_pointers_.ConfigureTriggerVideo = reinterpret_cast<ConfigureTriggerVideoPtr>(shared_library_.get_function_pointer("niScope_ConfigureTriggerVideo"));
  function_pointers_.ConfigureTriggerWindow = reinterpret_cast<ConfigureTriggerWindowPtr>(shared_library_.get_function_pointer("niScope_ConfigureTriggerWindow"));
  function_pointers_.ConfigureVertical = reinterpret_cast<ConfigureVerticalPtr>(shared_library_.get_function_pointer("niScope_ConfigureVertical"));
  function_pointers_.Disable = reinterpret_cast<DisablePtr>(shared_library_.get_function_pointer("niScope_Disable"));
  function_pointers_.ExportAttributeConfigurationBuffer = reinterpret_cast<ExportAttributeConfigurationBufferPtr>(shared_library_.get_function_pointer("niScope_ExportAttributeConfigurationBuffer"));
  function_pointers_.ExportAttributeConfigurationFile = reinterpret_cast<ExportAttributeConfigurationFilePtr>(shared_library_.get_function_pointer("niScope_ExportAttributeConfigurationFile"));
  function_pointers_.Fetch = reinterpret_cast<FetchPtr>(shared_library_.get_function_pointer("niScope_Fetch"));
  function_pointers_.FetchArrayMeasurement = reinterpret_cast<FetchArrayMeasurementPtr>(shared_library_.get_function_pointer("niScope_FetchArrayMeasurement"));
  function_pointers_.FetchBinary16 = reinterpret_cast<FetchBinary16Ptr>(shared_library_.get_function_pointer("niScope_FetchBinary16"));
  function_pointers_.FetchBinary32 = reinterpret_cast<FetchBinary32Ptr>(shared_library_.get_function_pointer("niScope_FetchBinary32"));
  function_pointers_.FetchBinary8 = reinterpret_cast<FetchBinary8Ptr>(shared_library_.get_function_pointer("niScope_FetchBinary8"));
  function_pointers_.FetchMeasurementStats = reinterpret_cast<FetchMeasurementStatsPtr>(shared_library_.get_function_pointer("niScope_FetchMeasurementStats"));
  function_pointers_.GetAttributeViBoolean = reinterpret_cast<GetAttributeViBooleanPtr>(shared_library_.get_function_pointer("niScope_GetAttributeViBoolean"));
  function_pointers_.GetAttributeViInt32 = reinterpret_cast<GetAttributeViInt32Ptr>(shared_library_.get_function_pointer("niScope_GetAttributeViInt32"));
  function_pointers_.GetAttributeViInt64 = reinterpret_cast<GetAttributeViInt64Ptr>(shared_library_.get_function_pointer("niScope_GetAttributeViInt64"));
  function_pointers_.GetAttributeViReal64 = reinterpret_cast<GetAttributeViReal64Ptr>(shared_library_.get_function_pointer("niScope_GetAttributeViReal64"));
  function_pointers_.GetAttributeViString = reinterpret_cast<GetAttributeViStringPtr>(shared_library_.get_function_pointer("niScope_GetAttributeViString"));
  function_pointers_.GetEqualizationFilterCoefficients = reinterpret_cast<GetEqualizationFilterCoefficientsPtr>(shared_library_.get_function_pointer("niScope_GetEqualizationFilterCoefficients"));
  function_pointers_.GetError = reinterpret_cast<GetErrorPtr>(shared_library_.get_function_pointer("niScope_GetError"));
  function_pointers_.ImportAttributeConfigurationBuffer = reinterpret_cast<ImportAttributeConfigurationBufferPtr>(shared_library_.get_function_pointer("niScope_ImportAttributeConfigurationBuffer"));
  function_pointers_.ImportAttributeConfigurationFile = reinterpret_cast<ImportAttributeConfigurationFilePtr>(shared_library_.get_function_pointer("niScope_ImportAttributeConfigurationFile"));
  function_pointers_.InitWithOptions = reinterpret_cast<InitWithOptionsPtr>(shared_library_.get_function_pointer("niScope_InitWithOptions"));
  function_pointers_.InitiateAcquisition = reinterpret_cast<InitiateAcquisitionPtr>(shared_library_.get_function_pointer("niScope_InitiateAcquisition"));
  function_pointers_.LockSession = reinterpret_cast<LockSessionPtr>(shared_library_.get_function_pointer("niScope_LockSession"));
  function_pointers_.ProbeCompensationSignalStart = reinterpret_cast<ProbeCompensationSignalStartPtr>(shared_library_.get_function_pointer("niScope_ProbeCompensationSignalStart"));
  function_pointers_.ProbeCompensationSignalStop = reinterpret_cast<ProbeCompensationSignalStopPtr>(shared_library_.get_function_pointer("niScope_ProbeCompensationSignalStop"));
  function_pointers_.Read = reinterpret_cast<ReadPtr>(shared_library_.get_function_pointer("niScope_Read"));
  function_pointers_.ResetDevice = reinterpret_cast<ResetDevicePtr>(shared_library_.get_function_pointer("niScope_ResetDevice"));
  function_pointers_.ResetWithDefaults = reinterpret_cast<ResetWithDefaultsPtr>(shared_library_.get_function_pointer("niScope_ResetWithDefaults"));
  function_pointers_.SendSoftwareTriggerEdge = reinterpret_cast<SendSoftwareTriggerEdgePtr>(shared_library_.get_function_pointer("niScope_SendSoftwareTriggerEdge"));
  function_pointers_.SetAttributeViBoolean = reinterpret_cast<SetAttributeViBooleanPtr>(shared_library_.get_function_pointer("niScope_SetAttributeViBoolean"));
  function_pointers_.SetAttributeViInt32 = reinterpret_cast<SetAttributeViInt32Ptr>(shared_library_.get_function_pointer("niScope_SetAttributeViInt32"));
  function_pointers_.SetAttributeViInt64 = reinterpret_cast<SetAttributeViInt64Ptr>(shared_library_.get_function_pointer("niScope_SetAttributeViInt64"));
  function_pointers_.SetAttributeViReal64 = reinterpret_cast<SetAttributeViReal64Ptr>(shared_library_.get_function_pointer("niScope_SetAttributeViReal64"));
  function_pointers_.SetAttributeViString = reinterpret_cast<SetAttributeViStringPtr>(shared_library_.get_function_pointer("niScope_SetAttributeViString"));
  function_pointers_.UnlockSession = reinterpret_cast<UnlockSessionPtr>(shared_library_.get_function_pointer("niScope_UnlockSession"));
  function_pointers_.close = reinterpret_cast<closePtr>(shared_library_.get_function_pointer("niScope_close"));
  function_pointers_.error_message = reinterpret_cast<error_messagePtr>(shared_library_.get_function_pointer("niScope_error_message"));
  function_pointers_.reset = reinterpret_cast<resetPtr>(shared_library_.get_function_pointer("niScope_reset"));
  function_pointers_.self_test = reinterpret_cast<self_testPtr>(shared_library_.get_function_pointer("niScope_self_test"));
}

NiScopeLibrary::~NiScopeLibrary()
{
}

::grpc::Status NiScopeLibrary::check_function_exists(std::string functionName)
{
  return shared_library_.function_exists(functionName.c_str())
    ? ::grpc::Status::OK
    : ::grpc::Status(::grpc::NOT_FOUND, "Could not find the function " + functionName);
}

ViStatus NiScopeLibrary::Abort(ViSession vi)
{
  if (!function_pointers_.Abort) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_Abort.");
  }
#if defined(_MSC_VER)
  return niScope_Abort(vi);
#else
  return function_pointers_.Abort(vi);
#endif
}

ViStatus NiScopeLibrary::AcquisitionStatus(ViSession vi, ViInt32* acquisitionStatus)
{
  if (!function_pointers_.AcquisitionStatus) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_AcquisitionStatus.");
  }
#if defined(_MSC_VER)
  return niScope_AcquisitionStatus(vi, acquisitionStatus);
#else
  return function_pointers_.AcquisitionStatus(vi, acquisitionStatus);
#endif
}

ViStatus NiScopeLibrary::ActualMeasWfmSize(ViSession vi, ViInt32 arrayMeasFunction, ViInt32* measWaveformSize)
{
  if (!function_pointers_.ActualMeasWfmSize) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ActualMeasWfmSize.");
  }
#if defined(_MSC_VER)
  return niScope_ActualMeasWfmSize(vi, arrayMeasFunction, measWaveformSize);
#else
  return function_pointers_.ActualMeasWfmSize(vi, arrayMeasFunction, measWaveformSize);
#endif
}

ViStatus NiScopeLibrary::ActualNumWfms(ViSession vi, ViConstString channelList, ViInt32* numWfms)
{
  if (!function_pointers_.ActualNumWfms) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ActualNumWfms.");
  }
#if defined(_MSC_VER)
  return niScope_ActualNumWfms(vi, channelList, numWfms);
#else
  return function_pointers_.ActualNumWfms(vi, channelList, numWfms);
#endif
}

ViStatus NiScopeLibrary::AddWaveformProcessing(ViSession vi, ViConstString channelList, ViInt32 measFunction)
{
  if (!function_pointers_.AddWaveformProcessing) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_AddWaveformProcessing.");
  }
#if defined(_MSC_VER)
  return niScope_AddWaveformProcessing(vi, channelList, measFunction);
#else
  return function_pointers_.AddWaveformProcessing(vi, channelList, measFunction);
#endif
}

ViStatus NiScopeLibrary::AutoSetup(ViSession vi)
{
  if (!function_pointers_.AutoSetup) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_AutoSetup.");
  }
#if defined(_MSC_VER)
  return niScope_AutoSetup(vi);
#else
  return function_pointers_.AutoSetup(vi);
#endif
}

ViStatus NiScopeLibrary::CalSelfCalibrate(ViSession vi, ViConstString channelList, ViInt32 option)
{
  if (!function_pointers_.CalSelfCalibrate) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_CalSelfCalibrate.");
  }
#if defined(_MSC_VER)
  return niScope_CalSelfCalibrate(vi, channelList, option);
#else
  return function_pointers_.CalSelfCalibrate(vi, channelList, option);
#endif
}

ViStatus NiScopeLibrary::ClearWaveformMeasurementStats(ViSession vi, ViConstString channelList, ViInt32 clearableMeasurementFunction)
{
  if (!function_pointers_.ClearWaveformMeasurementStats) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ClearWaveformMeasurementStats.");
  }
#if defined(_MSC_VER)
  return niScope_ClearWaveformMeasurementStats(vi, channelList, clearableMeasurementFunction);
#else
  return function_pointers_.ClearWaveformMeasurementStats(vi, channelList, clearableMeasurementFunction);
#endif
}

ViStatus NiScopeLibrary::ClearWaveformProcessing(ViSession vi, ViConstString channelList)
{
  if (!function_pointers_.ClearWaveformProcessing) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ClearWaveformProcessing.");
  }
#if defined(_MSC_VER)
  return niScope_ClearWaveformProcessing(vi, channelList);
#else
  return function_pointers_.ClearWaveformProcessing(vi, channelList);
#endif
}

ViStatus NiScopeLibrary::Commit(ViSession vi)
{
  if (!function_pointers_.Commit) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_Commit.");
  }
#if defined(_MSC_VER)
  return niScope_Commit(vi);
#else
  return function_pointers_.Commit(vi);
#endif
}

ViStatus NiScopeLibrary::ConfigureChanCharacteristics(ViSession vi, ViConstString channelList, ViReal64 inputImpedance, ViReal64 maxInputFrequency)
{
  if (!function_pointers_.ConfigureChanCharacteristics) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ConfigureChanCharacteristics.");
  }
#if defined(_MSC_VER)
  return niScope_ConfigureChanCharacteristics(vi, channelList, inputImpedance, maxInputFrequency);
#else
  return function_pointers_.ConfigureChanCharacteristics(vi, channelList, inputImpedance, maxInputFrequency);
#endif
}

ViStatus NiScopeLibrary::ConfigureEqualizationFilterCoefficients(ViSession vi, ViConstString channelList, ViInt32 numberOfCoefficients, ViReal64 coefficients[])
{
  if (!function_pointers_.ConfigureEqualizationFilterCoefficients) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ConfigureEqualizationFilterCoefficients.");
  }
#if defined(_MSC_VER)
  return niScope_ConfigureEqualizationFilterCoefficients(vi, channelList, numberOfCoefficients, coefficients);
#else
  return function_pointers_.ConfigureEqualizationFilterCoefficients(vi, channelList, numberOfCoefficients, coefficients);
#endif
}

ViStatus NiScopeLibrary::ConfigureHorizontalTiming(ViSession vi, ViReal64 minSampleRate, ViInt32 minNumPts, ViReal64 refPosition, ViInt32 numRecords, ViBoolean enforceRealtime)
{
  if (!function_pointers_.ConfigureHorizontalTiming) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ConfigureHorizontalTiming.");
  }
#if defined(_MSC_VER)
  return niScope_ConfigureHorizontalTiming(vi, minSampleRate, minNumPts, refPosition, numRecords, enforceRealtime);
#else
  return function_pointers_.ConfigureHorizontalTiming(vi, minSampleRate, minNumPts, refPosition, numRecords, enforceRealtime);
#endif
}

ViStatus NiScopeLibrary::ConfigureTriggerDigital(ViSession vi, ViConstString triggerSource, ViInt32 slope, ViReal64 holdoff, ViReal64 delay)
{
  if (!function_pointers_.ConfigureTriggerDigital) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ConfigureTriggerDigital.");
  }
#if defined(_MSC_VER)
  return niScope_ConfigureTriggerDigital(vi, triggerSource, slope, holdoff, delay);
#else
  return function_pointers_.ConfigureTriggerDigital(vi, triggerSource, slope, holdoff, delay);
#endif
}

ViStatus NiScopeLibrary::ConfigureTriggerEdge(ViSession vi, ViConstString triggerSource, ViReal64 level, ViInt32 slope, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay)
{
  if (!function_pointers_.ConfigureTriggerEdge) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ConfigureTriggerEdge.");
  }
#if defined(_MSC_VER)
  return niScope_ConfigureTriggerEdge(vi, triggerSource, level, slope, triggerCoupling, holdoff, delay);
#else
  return function_pointers_.ConfigureTriggerEdge(vi, triggerSource, level, slope, triggerCoupling, holdoff, delay);
#endif
}

ViStatus NiScopeLibrary::ConfigureTriggerHysteresis(ViSession vi, ViConstString triggerSource, ViReal64 level, ViReal64 hysteresis, ViInt32 slope, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay)
{
  if (!function_pointers_.ConfigureTriggerHysteresis) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ConfigureTriggerHysteresis.");
  }
#if defined(_MSC_VER)
  return niScope_ConfigureTriggerHysteresis(vi, triggerSource, level, hysteresis, slope, triggerCoupling, holdoff, delay);
#else
  return function_pointers_.ConfigureTriggerHysteresis(vi, triggerSource, level, hysteresis, slope, triggerCoupling, holdoff, delay);
#endif
}

ViStatus NiScopeLibrary::ConfigureTriggerImmediate(ViSession vi)
{
  if (!function_pointers_.ConfigureTriggerImmediate) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ConfigureTriggerImmediate.");
  }
#if defined(_MSC_VER)
  return niScope_ConfigureTriggerImmediate(vi);
#else
  return function_pointers_.ConfigureTriggerImmediate(vi);
#endif
}

ViStatus NiScopeLibrary::ConfigureTriggerSoftware(ViSession vi, ViReal64 holdoff, ViReal64 delay)
{
  if (!function_pointers_.ConfigureTriggerSoftware) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ConfigureTriggerSoftware.");
  }
#if defined(_MSC_VER)
  return niScope_ConfigureTriggerSoftware(vi, holdoff, delay);
#else
  return function_pointers_.ConfigureTriggerSoftware(vi, holdoff, delay);
#endif
}

ViStatus NiScopeLibrary::ConfigureTriggerVideo(ViSession vi, ViConstString triggerSource, ViBoolean enableDcRestore, ViInt32 signalFormat, ViInt32 eventParameter, ViInt32 lineNumber, ViInt32 polarity, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay)
{
  if (!function_pointers_.ConfigureTriggerVideo) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ConfigureTriggerVideo.");
  }
#if defined(_MSC_VER)
  return niScope_ConfigureTriggerVideo(vi, triggerSource, enableDcRestore, signalFormat, eventParameter, lineNumber, polarity, triggerCoupling, holdoff, delay);
#else
  return function_pointers_.ConfigureTriggerVideo(vi, triggerSource, enableDcRestore, signalFormat, eventParameter, lineNumber, polarity, triggerCoupling, holdoff, delay);
#endif
}

ViStatus NiScopeLibrary::ConfigureTriggerWindow(ViSession vi, ViConstString triggerSource, ViReal64 lowLevel, ViReal64 highLevel, ViInt32 windowMode, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay)
{
  if (!function_pointers_.ConfigureTriggerWindow) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ConfigureTriggerWindow.");
  }
#if defined(_MSC_VER)
  return niScope_ConfigureTriggerWindow(vi, triggerSource, lowLevel, highLevel, windowMode, triggerCoupling, holdoff, delay);
#else
  return function_pointers_.ConfigureTriggerWindow(vi, triggerSource, lowLevel, highLevel, windowMode, triggerCoupling, holdoff, delay);
#endif
}

ViStatus NiScopeLibrary::ConfigureVertical(ViSession vi, ViConstString channelList, ViReal64 range, ViReal64 offset, ViInt32 coupling, ViReal64 probeAttenuation, ViBoolean enabled)
{
  if (!function_pointers_.ConfigureVertical) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ConfigureVertical.");
  }
#if defined(_MSC_VER)
  return niScope_ConfigureVertical(vi, channelList, range, offset, coupling, probeAttenuation, enabled);
#else
  return function_pointers_.ConfigureVertical(vi, channelList, range, offset, coupling, probeAttenuation, enabled);
#endif
}

ViStatus NiScopeLibrary::Disable(ViSession vi)
{
  if (!function_pointers_.Disable) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_Disable.");
  }
#if defined(_MSC_VER)
  return niScope_Disable(vi);
#else
  return function_pointers_.Disable(vi);
#endif
}

ViStatus NiScopeLibrary::ExportAttributeConfigurationBuffer(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[])
{
  if (!function_pointers_.ExportAttributeConfigurationBuffer) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ExportAttributeConfigurationBuffer.");
  }
#if defined(_MSC_VER)
  return niScope_ExportAttributeConfigurationBuffer(vi, sizeInBytes, configuration);
#else
  return function_pointers_.ExportAttributeConfigurationBuffer(vi, sizeInBytes, configuration);
#endif
}

ViStatus NiScopeLibrary::ExportAttributeConfigurationFile(ViSession vi, ViConstString filePath)
{
  if (!function_pointers_.ExportAttributeConfigurationFile) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ExportAttributeConfigurationFile.");
  }
#if defined(_MSC_VER)
  return niScope_ExportAttributeConfigurationFile(vi, filePath);
#else
  return function_pointers_.ExportAttributeConfigurationFile(vi, filePath);
#endif
}

ViStatus NiScopeLibrary::Fetch(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViReal64 waveform[], struct niScope_wfmInfo wfmInfo[])
{
  if (!function_pointers_.Fetch) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_Fetch.");
  }
#if defined(_MSC_VER)
  return niScope_Fetch(vi, channelList, timeout, numSamples, waveform, wfmInfo);
#else
  return function_pointers_.Fetch(vi, channelList, timeout, numSamples, waveform, wfmInfo);
#endif
}

ViStatus NiScopeLibrary::FetchArrayMeasurement(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 arrayMeasFunction, ViInt32 measurementWaveformSize, ViReal64 measWfm[], struct niScope_wfmInfo wfmInfo[])
{
  if (!function_pointers_.FetchArrayMeasurement) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_FetchArrayMeasurement.");
  }
#if defined(_MSC_VER)
  return niScope_FetchArrayMeasurement(vi, channelList, timeout, arrayMeasFunction, measurementWaveformSize, measWfm, wfmInfo);
#else
  return function_pointers_.FetchArrayMeasurement(vi, channelList, timeout, arrayMeasFunction, measurementWaveformSize, measWfm, wfmInfo);
#endif
}

ViStatus NiScopeLibrary::FetchBinary16(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViInt16 waveform[], struct niScope_wfmInfo wfmInfo[])
{
  if (!function_pointers_.FetchBinary16) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_FetchBinary16.");
  }
#if defined(_MSC_VER)
  return niScope_FetchBinary16(vi, channelList, timeout, numSamples, waveform, wfmInfo);
#else
  return function_pointers_.FetchBinary16(vi, channelList, timeout, numSamples, waveform, wfmInfo);
#endif
}

ViStatus NiScopeLibrary::FetchBinary32(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViInt32 waveform[], struct niScope_wfmInfo wfmInfo[])
{
  if (!function_pointers_.FetchBinary32) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_FetchBinary32.");
  }
#if defined(_MSC_VER)
  return niScope_FetchBinary32(vi, channelList, timeout, numSamples, waveform, wfmInfo);
#else
  return function_pointers_.FetchBinary32(vi, channelList, timeout, numSamples, waveform, wfmInfo);
#endif
}

ViStatus NiScopeLibrary::FetchBinary8(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViInt8 waveform[], struct niScope_wfmInfo wfmInfo[])
{
  if (!function_pointers_.FetchBinary8) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_FetchBinary8.");
  }
#if defined(_MSC_VER)
  return niScope_FetchBinary8(vi, channelList, timeout, numSamples, waveform, wfmInfo);
#else
  return function_pointers_.FetchBinary8(vi, channelList, timeout, numSamples, waveform, wfmInfo);
#endif
}

ViStatus NiScopeLibrary::FetchMeasurementStats(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 scalarMeasFunction, ViReal64 result[], ViReal64 mean[], ViReal64 stdev[], ViReal64 min[], ViReal64 max[], ViInt32 numInStats[])
{
  if (!function_pointers_.FetchMeasurementStats) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_FetchMeasurementStats.");
  }
#if defined(_MSC_VER)
  return niScope_FetchMeasurementStats(vi, channelList, timeout, scalarMeasFunction, result, mean, stdev, min, max, numInStats);
#else
  return function_pointers_.FetchMeasurementStats(vi, channelList, timeout, scalarMeasFunction, result, mean, stdev, min, max, numInStats);
#endif
}

ViStatus NiScopeLibrary::GetAttributeViBoolean(ViSession vi, ViConstString channelList, ViAttr attributeId, ViBoolean* value)
{
  if (!function_pointers_.GetAttributeViBoolean) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_GetAttributeViBoolean.");
  }
#if defined(_MSC_VER)
  return niScope_GetAttributeViBoolean(vi, channelList, attributeId, value);
#else
  return function_pointers_.GetAttributeViBoolean(vi, channelList, attributeId, value);
#endif
}

ViStatus NiScopeLibrary::GetAttributeViInt32(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt32* value)
{
  if (!function_pointers_.GetAttributeViInt32) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_GetAttributeViInt32.");
  }
#if defined(_MSC_VER)
  return niScope_GetAttributeViInt32(vi, channelList, attributeId, value);
#else
  return function_pointers_.GetAttributeViInt32(vi, channelList, attributeId, value);
#endif
}

ViStatus NiScopeLibrary::GetAttributeViInt64(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt64* value)
{
  if (!function_pointers_.GetAttributeViInt64) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_GetAttributeViInt64.");
  }
#if defined(_MSC_VER)
  return niScope_GetAttributeViInt64(vi, channelList, attributeId, value);
#else
  return function_pointers_.GetAttributeViInt64(vi, channelList, attributeId, value);
#endif
}

ViStatus NiScopeLibrary::GetAttributeViReal64(ViSession vi, ViConstString channelList, ViAttr attributeId, ViReal64* value)
{
  if (!function_pointers_.GetAttributeViReal64) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_GetAttributeViReal64.");
  }
#if defined(_MSC_VER)
  return niScope_GetAttributeViReal64(vi, channelList, attributeId, value);
#else
  return function_pointers_.GetAttributeViReal64(vi, channelList, attributeId, value);
#endif
}

ViStatus NiScopeLibrary::GetAttributeViString(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt32 bufSize, ViChar value[])
{
  if (!function_pointers_.GetAttributeViString) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_GetAttributeViString.");
  }
#if defined(_MSC_VER)
  return niScope_GetAttributeViString(vi, channelList, attributeId, bufSize, value);
#else
  return function_pointers_.GetAttributeViString(vi, channelList, attributeId, bufSize, value);
#endif
}

ViStatus NiScopeLibrary::GetEqualizationFilterCoefficients(ViSession vi, ViConstString channel, ViInt32 numberOfCoefficients, ViReal64 coefficients[])
{
  if (!function_pointers_.GetEqualizationFilterCoefficients) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_GetEqualizationFilterCoefficients.");
  }
#if defined(_MSC_VER)
  return niScope_GetEqualizationFilterCoefficients(vi, channel, numberOfCoefficients, coefficients);
#else
  return function_pointers_.GetEqualizationFilterCoefficients(vi, channel, numberOfCoefficients, coefficients);
#endif
}

ViStatus NiScopeLibrary::GetError(ViSession vi, ViStatus* errorCode, ViInt32 bufferSize, ViChar description[])
{
  if (!function_pointers_.GetError) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_GetError.");
  }
#if defined(_MSC_VER)
  return niScope_GetError(vi, errorCode, bufferSize, description);
#else
  return function_pointers_.GetError(vi, errorCode, bufferSize, description);
#endif
}

ViStatus NiScopeLibrary::ImportAttributeConfigurationBuffer(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[])
{
  if (!function_pointers_.ImportAttributeConfigurationBuffer) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ImportAttributeConfigurationBuffer.");
  }
#if defined(_MSC_VER)
  return niScope_ImportAttributeConfigurationBuffer(vi, sizeInBytes, configuration);
#else
  return function_pointers_.ImportAttributeConfigurationBuffer(vi, sizeInBytes, configuration);
#endif
}

ViStatus NiScopeLibrary::ImportAttributeConfigurationFile(ViSession vi, ViConstString filePath)
{
  if (!function_pointers_.ImportAttributeConfigurationFile) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ImportAttributeConfigurationFile.");
  }
#if defined(_MSC_VER)
  return niScope_ImportAttributeConfigurationFile(vi, filePath);
#else
  return function_pointers_.ImportAttributeConfigurationFile(vi, filePath);
#endif
}

ViStatus NiScopeLibrary::InitWithOptions(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi)
{
  if (!function_pointers_.InitWithOptions) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_InitWithOptions.");
  }
#if defined(_MSC_VER)
  return niScope_InitWithOptions(resourceName, idQuery, resetDevice, optionString, vi);
#else
  return function_pointers_.InitWithOptions(resourceName, idQuery, resetDevice, optionString, vi);
#endif
}

ViStatus NiScopeLibrary::InitiateAcquisition(ViSession vi)
{
  if (!function_pointers_.InitiateAcquisition) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_InitiateAcquisition.");
  }
#if defined(_MSC_VER)
  return niScope_InitiateAcquisition(vi);
#else
  return function_pointers_.InitiateAcquisition(vi);
#endif
}

ViStatus NiScopeLibrary::LockSession(ViSession vi, ViBoolean* callerHasLock)
{
  if (!function_pointers_.LockSession) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_LockSession.");
  }
#if defined(_MSC_VER)
  return niScope_LockSession(vi, callerHasLock);
#else
  return function_pointers_.LockSession(vi, callerHasLock);
#endif
}

ViStatus NiScopeLibrary::ProbeCompensationSignalStart(ViSession vi)
{
  if (!function_pointers_.ProbeCompensationSignalStart) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ProbeCompensationSignalStart.");
  }
#if defined(_MSC_VER)
  return niScope_ProbeCompensationSignalStart(vi);
#else
  return function_pointers_.ProbeCompensationSignalStart(vi);
#endif
}

ViStatus NiScopeLibrary::ProbeCompensationSignalStop(ViSession vi)
{
  if (!function_pointers_.ProbeCompensationSignalStop) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ProbeCompensationSignalStop.");
  }
#if defined(_MSC_VER)
  return niScope_ProbeCompensationSignalStop(vi);
#else
  return function_pointers_.ProbeCompensationSignalStop(vi);
#endif
}

ViStatus NiScopeLibrary::Read(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViReal64 waveform[], struct niScope_wfmInfo wfmInfo[])
{
  if (!function_pointers_.Read) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_Read.");
  }
#if defined(_MSC_VER)
  return niScope_Read(vi, channelList, timeout, numSamples, waveform, wfmInfo);
#else
  return function_pointers_.Read(vi, channelList, timeout, numSamples, waveform, wfmInfo);
#endif
}

ViStatus NiScopeLibrary::ResetDevice(ViSession vi)
{
  if (!function_pointers_.ResetDevice) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ResetDevice.");
  }
#if defined(_MSC_VER)
  return niScope_ResetDevice(vi);
#else
  return function_pointers_.ResetDevice(vi);
#endif
}

ViStatus NiScopeLibrary::ResetWithDefaults(ViSession vi)
{
  if (!function_pointers_.ResetWithDefaults) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_ResetWithDefaults.");
  }
#if defined(_MSC_VER)
  return niScope_ResetWithDefaults(vi);
#else
  return function_pointers_.ResetWithDefaults(vi);
#endif
}

ViStatus NiScopeLibrary::SendSoftwareTriggerEdge(ViSession vi, ViInt32 whichTrigger)
{
  if (!function_pointers_.SendSoftwareTriggerEdge) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_SendSoftwareTriggerEdge.");
  }
#if defined(_MSC_VER)
  return niScope_SendSoftwareTriggerEdge(vi, whichTrigger);
#else
  return function_pointers_.SendSoftwareTriggerEdge(vi, whichTrigger);
#endif
}

ViStatus NiScopeLibrary::SetAttributeViBoolean(ViSession vi, ViConstString channelList, ViAttr attributeId, ViBoolean value)
{
  if (!function_pointers_.SetAttributeViBoolean) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_SetAttributeViBoolean.");
  }
#if defined(_MSC_VER)
  return niScope_SetAttributeViBoolean(vi, channelList, attributeId, value);
#else
  return function_pointers_.SetAttributeViBoolean(vi, channelList, attributeId, value);
#endif
}

ViStatus NiScopeLibrary::SetAttributeViInt32(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt32 value)
{
  if (!function_pointers_.SetAttributeViInt32) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_SetAttributeViInt32.");
  }
#if defined(_MSC_VER)
  return niScope_SetAttributeViInt32(vi, channelList, attributeId, value);
#else
  return function_pointers_.SetAttributeViInt32(vi, channelList, attributeId, value);
#endif
}

ViStatus NiScopeLibrary::SetAttributeViInt64(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt64 value)
{
  if (!function_pointers_.SetAttributeViInt64) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_SetAttributeViInt64.");
  }
#if defined(_MSC_VER)
  return niScope_SetAttributeViInt64(vi, channelList, attributeId, value);
#else
  return function_pointers_.SetAttributeViInt64(vi, channelList, attributeId, value);
#endif
}

ViStatus NiScopeLibrary::SetAttributeViReal64(ViSession vi, ViConstString channelList, ViAttr attributeId, ViReal64 value)
{
  if (!function_pointers_.SetAttributeViReal64) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_SetAttributeViReal64.");
  }
#if defined(_MSC_VER)
  return niScope_SetAttributeViReal64(vi, channelList, attributeId, value);
#else
  return function_pointers_.SetAttributeViReal64(vi, channelList, attributeId, value);
#endif
}

ViStatus NiScopeLibrary::SetAttributeViString(ViSession vi, ViConstString channelList, ViAttr attributeId, ViConstString value)
{
  if (!function_pointers_.SetAttributeViString) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_SetAttributeViString.");
  }
#if defined(_MSC_VER)
  return niScope_SetAttributeViString(vi, channelList, attributeId, value);
#else
  return function_pointers_.SetAttributeViString(vi, channelList, attributeId, value);
#endif
}

ViStatus NiScopeLibrary::UnlockSession(ViSession vi, ViBoolean* callerHasLock)
{
  if (!function_pointers_.UnlockSession) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_UnlockSession.");
  }
#if defined(_MSC_VER)
  return niScope_UnlockSession(vi, callerHasLock);
#else
  return function_pointers_.UnlockSession(vi, callerHasLock);
#endif
}

ViStatus NiScopeLibrary::close(ViSession vi)
{
  if (!function_pointers_.close) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_close.");
  }
#if defined(_MSC_VER)
  return niScope_close(vi);
#else
  return function_pointers_.close(vi);
#endif
}

ViStatus NiScopeLibrary::error_message(ViSession vi, ViStatus errorCode, ViChar errorMessage[256])
{
  if (!function_pointers_.error_message) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_error_message.");
  }
#if defined(_MSC_VER)
  return niScope_error_message(vi, errorCode, errorMessage);
#else
  return function_pointers_.error_message(vi, errorCode, errorMessage);
#endif
}

ViStatus NiScopeLibrary::reset(ViSession vi)
{
  if (!function_pointers_.reset) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_reset.");
  }
#if defined(_MSC_VER)
  return niScope_reset(vi);
#else
  return function_pointers_.reset(vi);
#endif
}

ViStatus NiScopeLibrary::self_test(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256])
{
  if (!function_pointers_.self_test) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niScope_self_test.");
  }
#if defined(_MSC_VER)
  return niScope_self_test(vi, selfTestResult, selfTestMessage);
#else
  return function_pointers_.self_test(vi, selfTestResult, selfTestMessage);
#endif
}

}  // namespace ni
}  // namespace scope
}  // namespace grpc
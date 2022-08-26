//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-RFSA
//---------------------------------------------------------------------
#ifndef NIRFSA_GRPC_LIBRARY_H
#define NIRFSA_GRPC_LIBRARY_H

#include "nirfsa_library_interface.h"

#include <server/shared_library.h>

namespace nirfsa_grpc {

class NiRFSALibrary : public nirfsa_grpc::NiRFSALibraryInterface {
 public:
  NiRFSALibrary();
  virtual ~NiRFSALibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  ViStatus Abort(ViSession vi);
  ViStatus CheckAcquisitionStatus(ViSession vi, ViBoolean* isDone);
  ViStatus ClearError(ViSession vi);
  ViStatus ClearSelfCalibrateRange(ViSession vi);
  ViStatus Close(ViSession vi);
  ViStatus Commit(ViSession vi);
  ViStatus ConfigureAcquisitionType(ViSession vi, ViInt32 acquisitionType);
  ViStatus ConfigureDeembeddingTableInterpolationLinear(ViSession vi, ViConstString port, ViConstString tableName, ViInt32 format);
  ViStatus ConfigureDeembeddingTableInterpolationNearest(ViSession vi, ViConstString port, ViConstString tableName);
  ViStatus ConfigureDeembeddingTableInterpolationSpline(ViSession vi, ViConstString port, ViConstString tableName);
  ViStatus ConfigureDigitalEdgeAdvanceTrigger(ViSession vi, ViConstString source, ViInt32 edge);
  ViStatus ConfigureDigitalEdgeRefTrigger(ViSession vi, ViConstString source, ViInt32 edge, ViInt64 pretriggerSamples);
  ViStatus ConfigureDigitalEdgeStartTrigger(ViSession vi, ViConstString source, ViInt32 edge);
  ViStatus ConfigureIQCarrierFrequency(ViSession vi, ViConstString channelList, ViReal64 carrierFrequency);
  ViStatus ConfigureIQPowerEdgeRefTrigger(ViSession vi, ViConstString source, ViReal64 level, ViInt32 slope, ViInt64 pretriggerSamples);
  ViStatus ConfigureIQRate(ViSession vi, ViConstString channelList, ViReal64 iqRate);
  ViStatus ConfigureNumberOfRecords(ViSession vi, ViConstString channelList, ViBoolean numberOfRecordsIsFinite, ViInt64 numberOfRecords);
  ViStatus ConfigureNumberOfSamples(ViSession vi, ViConstString channelList, ViBoolean numberOfSamplesIsFinite, ViInt64 samplesPerRecord);
  ViStatus ConfigurePXIChassisClk10(ViSession vi, ViConstString pxiClk10Source);
  ViStatus ConfigureRefClock(ViSession vi, ViConstString clockSource, ViReal64 refClockRate);
  ViStatus ConfigureReferenceLevel(ViSession vi, ViConstString channelList, ViReal64 referenceLevel);
  ViStatus ConfigureResolutionBandwidth(ViSession vi, ViConstString channelList, ViReal64 resolutionBandwidth);
  ViStatus ConfigureSoftwareEdgeAdvanceTrigger(ViSession vi);
  ViStatus ConfigureSoftwareEdgeRefTrigger(ViSession vi, ViInt64 pretriggerSamples);
  ViStatus ConfigureSoftwareEdgeStartTrigger(ViSession vi);
  ViStatus ConfigureSpectrumFrequencyCenterSpan(ViSession vi, ViConstString channelList, ViReal64 centerFrequency, ViReal64 span);
  ViStatus ConfigureSpectrumFrequencyStartStop(ViSession vi, ViConstString channelList, ViReal64 startFrequency, ViReal64 stopFrequency);
  ViStatus CreateConfigurationList(ViSession vi, ViConstString listName, ViInt32 numberOfListAttributes, ViAttr listAttributeIds[], ViBoolean setAsActiveList);
  ViStatus CreateConfigurationListStep(ViSession vi, ViBoolean setAsActiveStep);
  ViStatus CreateDeembeddingSparameterTableArray(ViSession vi, ViConstString port, ViConstString tableName, ViReal64 frequencies[], ViInt32 frequenciesSize, NIComplexNumber_struct sparameterTable[], ViInt32 sparameterTableSize, ViInt32 numberOfPorts, ViInt32 sparameterOrientation);
  ViStatus CreateDeembeddingSparameterTableS2PFile(ViSession vi, ViConstString port, ViConstString tableName, ViConstString s2pFilePath, ViInt32 sparameterOrientation);
  ViStatus DeleteAllDeembeddingTables(ViSession vi);
  ViStatus DeleteConfigurationList(ViSession vi, ViConstString listName);
  ViStatus DeleteDeembeddingTable(ViSession vi, ViConstString port, ViConstString tableName);
  ViStatus Disable(ViSession vi);
  ViStatus DisableAdvanceTrigger(ViSession vi);
  ViStatus DisableRefTrigger(ViSession vi);
  ViStatus DisableStartTrigger(ViSession vi);
  ViStatus EnableSessionAccess(ViSession vi, ViBoolean enable);
  ViStatus ErrorMessage(ViSession vi, ViStatus statusCode, ViChar errorMessage[1024]);
  ViStatus ErrorQuery(ViSession vi, ViInt32* errorCode, ViChar errorMessage[1024]);
  ViStatus ExportSignal(ViSession vi, ViInt32 signal, ViConstString signalIdentifier, ViConstString outputTerminal);
  ViStatus FetchIQMultiRecordComplexF32(ViSession vi, ViConstString channelList, ViInt64 startingRecord, ViInt64 numberOfRecords, ViInt64 numberOfSamples, ViReal64 timeout, NIComplexNumberF32_struct data[], niRFSA_wfmInfo_struct wfmInfo[]);
  ViStatus FetchIQMultiRecordComplexF64(ViSession vi, ViConstString channelList, ViInt64 startingRecord, ViInt64 numberOfRecords, ViInt64 numberOfSamples, ViReal64 timeout, NIComplexNumber_struct data[], niRFSA_wfmInfo_struct wfmInfo[]);
  ViStatus FetchIQMultiRecordComplexI16(ViSession vi, ViConstString channelList, ViInt64 startingRecord, ViInt64 numberOfRecords, ViInt64 numberOfSamples, ViReal64 timeout, NIComplexI16_struct data[], niRFSA_wfmInfo_struct wfmInfo[]);
  ViStatus FetchIQSingleRecordComplexF32(ViSession vi, ViConstString channelList, ViInt64 recordNumber, ViInt64 numberOfSamples, ViReal64 timeout, NIComplexNumberF32_struct data[], niRFSA_wfmInfo_struct* wfmInfo);
  ViStatus FetchIQSingleRecordComplexF64(ViSession vi, ViConstString channelList, ViInt64 recordNumber, ViInt64 numberOfSamples, ViReal64 timeout, NIComplexNumber_struct data[], niRFSA_wfmInfo_struct* wfmInfo);
  ViStatus FetchIQSingleRecordComplexI16(ViSession vi, ViConstString channelList, ViInt64 recordNumber, ViInt64 numberOfSamples, ViReal64 timeout, NIComplexI16_struct data[], niRFSA_wfmInfo_struct* wfmInfo);
  ViStatus GetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* value);
  ViStatus GetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* value);
  ViStatus GetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64* value);
  ViStatus GetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* value);
  ViStatus GetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession* value);
  ViStatus GetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 bufSize, ViChar value[]);
  ViStatus GetCalUserDefinedInfo(ViSession vi, ViChar info[2048]);
  ViStatus GetCalUserDefinedInfoMaxSize(ViSession vi, ViInt32* infoSize);
  ViStatus GetDeembeddingSparameters(ViSession vi, NIComplexNumber_struct sparameters[], ViInt32 sparametersArraySize, ViInt32* numberOfSparameters, ViInt32* numberOfPorts);
  ViStatus GetDeviceResponse(ViSession vi, ViConstString channelList, ViInt32 responseType, ViInt32 bufferSize, ViReal64 frequencies[], ViReal64 magnitudeResponse[], ViReal64 phaseResponse[], ViInt32* numberOfFrequencies);
  ViStatus GetError(ViSession vi, ViStatus* errorCode, ViInt32 errorDescriptionBufferSize, ViChar errorDescription[]);
  ViStatus GetExtCalLastDateAndTime(ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute);
  ViStatus GetExtCalLastTemp(ViSession vi, ViReal64* temperature);
  ViStatus GetExtCalRecommendedInterval(ViSession vi, ViInt32* months);
  ViStatus GetFetchBacklog(ViSession vi, ViConstString channelList, ViInt64 recordNumber, ViInt64* backlog);
  ViStatus GetFrequencyResponse(ViSession vi, ViConstString channelList, ViInt32 bufferSize, ViReal64 frequencies[], ViReal64 magnitudeResponse[], ViReal64 phaseResponse[], ViInt32* numberOfFrequencies);
  ViStatus GetNormalizationCoefficients(ViSession vi, ViConstString channelList, ViInt32 arraySize, niRFSA_coefficientInfo_struct coefficientInfo[], ViInt32* numberOfCoefficientSets);
  ViStatus GetNumberOfSpectralLines(ViSession vi, ViConstString channelList, ViInt32* numberOfSpectralLines);
  ViStatus GetRelayName(ViSession vi, ViConstString channelList, ViInt32 index, ViChar name[], ViInt32* bufferSize);
  ViStatus GetRelayOperationsCount(ViSession vi, ViConstString channelList, ViInt32 operationsCount[], ViInt32* bufferSize);
  ViStatus GetScalingCoefficients(ViSession vi, ViConstString channelList, ViInt32 arraySize, niRFSA_coefficientInfo_struct coefficientInfo[], ViInt32* numberOfCoefficientSets);
  ViStatus GetSelfCalLastDateAndTime(ViSession vi, ViInt64 selfCalibrationStep, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute);
  ViStatus GetSelfCalLastTemp(ViSession vi, ViInt64 selfCalibrationStep, ViReal64* temp);
  ViStatus GetSpectralInfoForSMT(ViSession vi, SmtSpectrumInfo_struct* spectrumInfo);
  ViStatus GetStreamEndpointHandle(ViSession vi, ViConstString streamEndpoint, ViUInt32* writerHandle);
  ViStatus GetTerminalName(ViSession vi, ViInt32 signal, ViConstString signalIdentifier, ViInt32 bufferSize, ViChar terminalName[]);
  ViStatus GetUserData(ViSession vi, ViConstString identifier, ViInt32 bufferSize, ViInt8 data[], ViInt32* actualDataSize);
  ViStatus Init(ViRsrc resourceName, ViBoolean idQuery, ViBoolean reset, ViSession* vi);
  ViStatus InitWithOptions(ViRsrc resourceName, ViBoolean idQuery, ViBoolean reset, ViConstString optionString, ViSession* vi);
  ViStatus Initiate(ViSession vi);
  ViStatus InvalidateAllAttributes(ViSession vi);
  ViStatus IsSelfCalValid(ViSession vi, ViBoolean* selfCalValid, ViInt64* validSteps);
  ViStatus LockSession(ViSession vi, ViBoolean* callerHasLock);
  ViStatus PerformThermalCorrection(ViSession vi);
  ViStatus ReadIQSingleRecordComplexF64(ViSession vi, ViConstString channelList, ViReal64 timeout, NIComplexNumber_struct data[], ViInt64 dataArraySize, niRFSA_wfmInfo_struct* wfmInfo);
  ViStatus ReadPowerSpectrumF32(ViSession vi, ViConstString channelList, ViReal64 timeout, ViReal32 powerSpectrumData[], ViInt32 dataArraySize, niRFSA_spectrumInfo_struct* spectrumInfo);
  ViStatus ReadPowerSpectrumF64(ViSession vi, ViConstString channelList, ViReal64 timeout, ViReal64 powerSpectrumData[], ViInt32 dataArraySize, niRFSA_spectrumInfo_struct* spectrumInfo);
  ViStatus Reset(ViSession vi);
  ViStatus ResetAttribute(ViSession vi, ViConstString channelName, ViAttr attributeId);
  ViStatus ResetDevice(ViSession vi);
  ViStatus ResetWithDefaults(ViSession vi);
  ViStatus ResetWithOptions(ViSession vi, ViUInt64 stepsToOmit);
  ViStatus RevisionQuery(ViSession vi, ViChar driverRev[256], ViChar instrRev[256]);
  ViStatus SelfCal(ViSession vi);
  ViStatus SelfCalibrate(ViSession vi, ViInt64 stepsToOmit);
  ViStatus SelfCalibrateRange(ViSession vi, ViInt64 stepsToOmit, ViReal64 minFrequency, ViReal64 maxFrequency, ViReal64 minReferenceLevel, ViReal64 maxReferenceLevel);
  ViStatus SelfTest(ViSession vi, ViInt16* testResult, ViChar testMessage[2048]);
  ViStatus SendSoftwareEdgeTrigger(ViSession vi, ViInt32 trigger, ViConstString triggerIdentifier);
  ViStatus SetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean value);
  ViStatus SetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 value);
  ViStatus SetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 value);
  ViStatus SetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 value);
  ViStatus SetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession value);
  ViStatus SetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString value);
  ViStatus SetCalUserDefinedInfo(ViSession vi, ViConstString info);
  ViStatus SetUserData(ViSession vi, ViConstString identifier, ViInt32 bufferSize, ViInt8 data[]);
  ViStatus UnlockSession(ViSession vi, ViBoolean* callerHasLock);

 private:
  using AbortPtr = decltype(&niRFSA_Abort);
  using CheckAcquisitionStatusPtr = decltype(&niRFSA_CheckAcquisitionStatus);
  using ClearErrorPtr = decltype(&niRFSA_ClearError);
  using ClearSelfCalibrateRangePtr = decltype(&niRFSA_ClearSelfCalibrateRange);
  using ClosePtr = decltype(&niRFSA_close);
  using CommitPtr = decltype(&niRFSA_Commit);
  using ConfigureAcquisitionTypePtr = decltype(&niRFSA_ConfigureAcquisitionType);
  using ConfigureDeembeddingTableInterpolationLinearPtr = decltype(&niRFSA_ConfigureDeembeddingTableInterpolationLinear);
  using ConfigureDeembeddingTableInterpolationNearestPtr = decltype(&niRFSA_ConfigureDeembeddingTableInterpolationNearest);
  using ConfigureDeembeddingTableInterpolationSplinePtr = decltype(&niRFSA_ConfigureDeembeddingTableInterpolationSpline);
  using ConfigureDigitalEdgeAdvanceTriggerPtr = decltype(&niRFSA_ConfigureDigitalEdgeAdvanceTrigger);
  using ConfigureDigitalEdgeRefTriggerPtr = decltype(&niRFSA_ConfigureDigitalEdgeRefTrigger);
  using ConfigureDigitalEdgeStartTriggerPtr = decltype(&niRFSA_ConfigureDigitalEdgeStartTrigger);
  using ConfigureIQCarrierFrequencyPtr = decltype(&niRFSA_ConfigureIQCarrierFrequency);
  using ConfigureIQPowerEdgeRefTriggerPtr = decltype(&niRFSA_ConfigureIQPowerEdgeRefTrigger);
  using ConfigureIQRatePtr = decltype(&niRFSA_ConfigureIQRate);
  using ConfigureNumberOfRecordsPtr = decltype(&niRFSA_ConfigureNumberOfRecords);
  using ConfigureNumberOfSamplesPtr = decltype(&niRFSA_ConfigureNumberOfSamples);
  using ConfigurePXIChassisClk10Ptr = decltype(&niRFSA_ConfigurePXIChassisClk10);
  using ConfigureRefClockPtr = decltype(&niRFSA_ConfigureRefClock);
  using ConfigureReferenceLevelPtr = decltype(&niRFSA_ConfigureReferenceLevel);
  using ConfigureResolutionBandwidthPtr = decltype(&niRFSA_ConfigureResolutionBandwidth);
  using ConfigureSoftwareEdgeAdvanceTriggerPtr = decltype(&niRFSA_ConfigureSoftwareEdgeAdvanceTrigger);
  using ConfigureSoftwareEdgeRefTriggerPtr = decltype(&niRFSA_ConfigureSoftwareEdgeRefTrigger);
  using ConfigureSoftwareEdgeStartTriggerPtr = decltype(&niRFSA_ConfigureSoftwareEdgeStartTrigger);
  using ConfigureSpectrumFrequencyCenterSpanPtr = decltype(&niRFSA_ConfigureSpectrumFrequencyCenterSpan);
  using ConfigureSpectrumFrequencyStartStopPtr = decltype(&niRFSA_ConfigureSpectrumFrequencyStartStop);
  using CreateConfigurationListPtr = decltype(&niRFSA_CreateConfigurationList);
  using CreateConfigurationListStepPtr = decltype(&niRFSA_CreateConfigurationListStep);
  using CreateDeembeddingSparameterTableArrayPtr = decltype(&niRFSA_CreateDeembeddingSparameterTableArray);
  using CreateDeembeddingSparameterTableS2PFilePtr = decltype(&niRFSA_CreateDeembeddingSparameterTableS2PFile);
  using DeleteAllDeembeddingTablesPtr = decltype(&niRFSA_DeleteAllDeembeddingTables);
  using DeleteConfigurationListPtr = decltype(&niRFSA_DeleteConfigurationList);
  using DeleteDeembeddingTablePtr = decltype(&niRFSA_DeleteDeembeddingTable);
  using DisablePtr = decltype(&niRFSA_Disable);
  using DisableAdvanceTriggerPtr = decltype(&niRFSA_DisableAdvanceTrigger);
  using DisableRefTriggerPtr = decltype(&niRFSA_DisableRefTrigger);
  using DisableStartTriggerPtr = decltype(&niRFSA_DisableStartTrigger);
  using EnableSessionAccessPtr = decltype(&niRFSA_EnableSessionAccess);
  using ErrorMessagePtr = decltype(&niRFSA_error_message);
  using ErrorQueryPtr = decltype(&niRFSA_error_query);
  using ExportSignalPtr = decltype(&niRFSA_ExportSignal);
  using FetchIQMultiRecordComplexF32Ptr = decltype(&niRFSA_FetchIQMultiRecordComplexF32);
  using FetchIQMultiRecordComplexF64Ptr = decltype(&niRFSA_FetchIQMultiRecordComplexF64);
  using FetchIQMultiRecordComplexI16Ptr = decltype(&niRFSA_FetchIQMultiRecordComplexI16);
  using FetchIQSingleRecordComplexF32Ptr = decltype(&niRFSA_FetchIQSingleRecordComplexF32);
  using FetchIQSingleRecordComplexF64Ptr = decltype(&niRFSA_FetchIQSingleRecordComplexF64);
  using FetchIQSingleRecordComplexI16Ptr = decltype(&niRFSA_FetchIQSingleRecordComplexI16);
  using GetAttributeViBooleanPtr = decltype(&niRFSA_GetAttributeViBoolean);
  using GetAttributeViInt32Ptr = decltype(&niRFSA_GetAttributeViInt32);
  using GetAttributeViInt64Ptr = decltype(&niRFSA_GetAttributeViInt64);
  using GetAttributeViReal64Ptr = decltype(&niRFSA_GetAttributeViReal64);
  using GetAttributeViSessionPtr = decltype(&niRFSA_GetAttributeViSession);
  using GetAttributeViStringPtr = decltype(&niRFSA_GetAttributeViString);
  using GetCalUserDefinedInfoPtr = decltype(&niRFSA_GetCalUserDefinedInfo);
  using GetCalUserDefinedInfoMaxSizePtr = decltype(&niRFSA_GetCalUserDefinedInfoMaxSize);
  using GetDeembeddingSparametersPtr = decltype(&niRFSA_GetDeembeddingSparameters);
  using GetDeviceResponsePtr = decltype(&niRFSA_GetDeviceResponse);
  using GetErrorPtr = decltype(&niRFSA_GetError);
  using GetExtCalLastDateAndTimePtr = decltype(&niRFSA_GetExtCalLastDateAndTime);
  using GetExtCalLastTempPtr = decltype(&niRFSA_GetExtCalLastTemp);
  using GetExtCalRecommendedIntervalPtr = decltype(&niRFSA_GetExtCalRecommendedInterval);
  using GetFetchBacklogPtr = decltype(&niRFSA_GetFetchBacklog);
  using GetFrequencyResponsePtr = decltype(&niRFSA_GetFrequencyResponse);
  using GetNormalizationCoefficientsPtr = decltype(&niRFSA_GetNormalizationCoefficients);
  using GetNumberOfSpectralLinesPtr = decltype(&niRFSA_GetNumberOfSpectralLines);
  using GetRelayNamePtr = decltype(&niRFSA_GetRelayName);
  using GetRelayOperationsCountPtr = decltype(&niRFSA_GetRelayOperationsCount);
  using GetScalingCoefficientsPtr = decltype(&niRFSA_GetScalingCoefficients);
  using GetSelfCalLastDateAndTimePtr = decltype(&niRFSA_GetSelfCalLastDateAndTime);
  using GetSelfCalLastTempPtr = decltype(&niRFSA_GetSelfCalLastTemp);
  using GetSpectralInfoForSMTPtr = decltype(&niRFSA_GetSpectralInfoForSMT);
  using GetStreamEndpointHandlePtr = decltype(&niRFSA_GetStreamEndpointHandle);
  using GetTerminalNamePtr = decltype(&niRFSA_GetTerminalName);
  using GetUserDataPtr = decltype(&niRFSA_GetUserData);
  using InitPtr = decltype(&niRFSA_init);
  using InitWithOptionsPtr = decltype(&niRFSA_InitWithOptions);
  using InitiatePtr = decltype(&niRFSA_Initiate);
  using InvalidateAllAttributesPtr = decltype(&niRFSA_InvalidateAllAttributes);
  using IsSelfCalValidPtr = decltype(&niRFSA_IsSelfCalValid);
  using LockSessionPtr = ViStatus (*)(ViSession vi, ViBoolean* callerHasLock);
  using PerformThermalCorrectionPtr = decltype(&niRFSA_PerformThermalCorrection);
  using ReadIQSingleRecordComplexF64Ptr = decltype(&niRFSA_ReadIQSingleRecordComplexF64);
  using ReadPowerSpectrumF32Ptr = decltype(&niRFSA_ReadPowerSpectrumF32);
  using ReadPowerSpectrumF64Ptr = decltype(&niRFSA_ReadPowerSpectrumF64);
  using ResetPtr = decltype(&niRFSA_reset);
  using ResetAttributePtr = decltype(&niRFSA_ResetAttribute);
  using ResetDevicePtr = decltype(&niRFSA_ResetDevice);
  using ResetWithDefaultsPtr = decltype(&niRFSA_ResetWithDefaults);
  using ResetWithOptionsPtr = decltype(&niRFSA_ResetWithOptions);
  using RevisionQueryPtr = decltype(&niRFSA_revision_query);
  using SelfCalPtr = decltype(&niRFSA_SelfCal);
  using SelfCalibratePtr = decltype(&niRFSA_SelfCalibrate);
  using SelfCalibrateRangePtr = decltype(&niRFSA_SelfCalibrateRange);
  using SelfTestPtr = decltype(&niRFSA_self_test);
  using SendSoftwareEdgeTriggerPtr = decltype(&niRFSA_SendSoftwareEdgeTrigger);
  using SetAttributeViBooleanPtr = decltype(&niRFSA_SetAttributeViBoolean);
  using SetAttributeViInt32Ptr = decltype(&niRFSA_SetAttributeViInt32);
  using SetAttributeViInt64Ptr = decltype(&niRFSA_SetAttributeViInt64);
  using SetAttributeViReal64Ptr = decltype(&niRFSA_SetAttributeViReal64);
  using SetAttributeViSessionPtr = decltype(&niRFSA_SetAttributeViSession);
  using SetAttributeViStringPtr = decltype(&niRFSA_SetAttributeViString);
  using SetCalUserDefinedInfoPtr = decltype(&niRFSA_SetCalUserDefinedInfo);
  using SetUserDataPtr = decltype(&niRFSA_SetUserData);
  using UnlockSessionPtr = ViStatus (*)(ViSession vi, ViBoolean* callerHasLock);

  typedef struct FunctionPointers {
    AbortPtr Abort;
    CheckAcquisitionStatusPtr CheckAcquisitionStatus;
    ClearErrorPtr ClearError;
    ClearSelfCalibrateRangePtr ClearSelfCalibrateRange;
    ClosePtr Close;
    CommitPtr Commit;
    ConfigureAcquisitionTypePtr ConfigureAcquisitionType;
    ConfigureDeembeddingTableInterpolationLinearPtr ConfigureDeembeddingTableInterpolationLinear;
    ConfigureDeembeddingTableInterpolationNearestPtr ConfigureDeembeddingTableInterpolationNearest;
    ConfigureDeembeddingTableInterpolationSplinePtr ConfigureDeembeddingTableInterpolationSpline;
    ConfigureDigitalEdgeAdvanceTriggerPtr ConfigureDigitalEdgeAdvanceTrigger;
    ConfigureDigitalEdgeRefTriggerPtr ConfigureDigitalEdgeRefTrigger;
    ConfigureDigitalEdgeStartTriggerPtr ConfigureDigitalEdgeStartTrigger;
    ConfigureIQCarrierFrequencyPtr ConfigureIQCarrierFrequency;
    ConfigureIQPowerEdgeRefTriggerPtr ConfigureIQPowerEdgeRefTrigger;
    ConfigureIQRatePtr ConfigureIQRate;
    ConfigureNumberOfRecordsPtr ConfigureNumberOfRecords;
    ConfigureNumberOfSamplesPtr ConfigureNumberOfSamples;
    ConfigurePXIChassisClk10Ptr ConfigurePXIChassisClk10;
    ConfigureRefClockPtr ConfigureRefClock;
    ConfigureReferenceLevelPtr ConfigureReferenceLevel;
    ConfigureResolutionBandwidthPtr ConfigureResolutionBandwidth;
    ConfigureSoftwareEdgeAdvanceTriggerPtr ConfigureSoftwareEdgeAdvanceTrigger;
    ConfigureSoftwareEdgeRefTriggerPtr ConfigureSoftwareEdgeRefTrigger;
    ConfigureSoftwareEdgeStartTriggerPtr ConfigureSoftwareEdgeStartTrigger;
    ConfigureSpectrumFrequencyCenterSpanPtr ConfigureSpectrumFrequencyCenterSpan;
    ConfigureSpectrumFrequencyStartStopPtr ConfigureSpectrumFrequencyStartStop;
    CreateConfigurationListPtr CreateConfigurationList;
    CreateConfigurationListStepPtr CreateConfigurationListStep;
    CreateDeembeddingSparameterTableArrayPtr CreateDeembeddingSparameterTableArray;
    CreateDeembeddingSparameterTableS2PFilePtr CreateDeembeddingSparameterTableS2PFile;
    DeleteAllDeembeddingTablesPtr DeleteAllDeembeddingTables;
    DeleteConfigurationListPtr DeleteConfigurationList;
    DeleteDeembeddingTablePtr DeleteDeembeddingTable;
    DisablePtr Disable;
    DisableAdvanceTriggerPtr DisableAdvanceTrigger;
    DisableRefTriggerPtr DisableRefTrigger;
    DisableStartTriggerPtr DisableStartTrigger;
    EnableSessionAccessPtr EnableSessionAccess;
    ErrorMessagePtr ErrorMessage;
    ErrorQueryPtr ErrorQuery;
    ExportSignalPtr ExportSignal;
    FetchIQMultiRecordComplexF32Ptr FetchIQMultiRecordComplexF32;
    FetchIQMultiRecordComplexF64Ptr FetchIQMultiRecordComplexF64;
    FetchIQMultiRecordComplexI16Ptr FetchIQMultiRecordComplexI16;
    FetchIQSingleRecordComplexF32Ptr FetchIQSingleRecordComplexF32;
    FetchIQSingleRecordComplexF64Ptr FetchIQSingleRecordComplexF64;
    FetchIQSingleRecordComplexI16Ptr FetchIQSingleRecordComplexI16;
    GetAttributeViBooleanPtr GetAttributeViBoolean;
    GetAttributeViInt32Ptr GetAttributeViInt32;
    GetAttributeViInt64Ptr GetAttributeViInt64;
    GetAttributeViReal64Ptr GetAttributeViReal64;
    GetAttributeViSessionPtr GetAttributeViSession;
    GetAttributeViStringPtr GetAttributeViString;
    GetCalUserDefinedInfoPtr GetCalUserDefinedInfo;
    GetCalUserDefinedInfoMaxSizePtr GetCalUserDefinedInfoMaxSize;
    GetDeembeddingSparametersPtr GetDeembeddingSparameters;
    GetDeviceResponsePtr GetDeviceResponse;
    GetErrorPtr GetError;
    GetExtCalLastDateAndTimePtr GetExtCalLastDateAndTime;
    GetExtCalLastTempPtr GetExtCalLastTemp;
    GetExtCalRecommendedIntervalPtr GetExtCalRecommendedInterval;
    GetFetchBacklogPtr GetFetchBacklog;
    GetFrequencyResponsePtr GetFrequencyResponse;
    GetNormalizationCoefficientsPtr GetNormalizationCoefficients;
    GetNumberOfSpectralLinesPtr GetNumberOfSpectralLines;
    GetRelayNamePtr GetRelayName;
    GetRelayOperationsCountPtr GetRelayOperationsCount;
    GetScalingCoefficientsPtr GetScalingCoefficients;
    GetSelfCalLastDateAndTimePtr GetSelfCalLastDateAndTime;
    GetSelfCalLastTempPtr GetSelfCalLastTemp;
    GetSpectralInfoForSMTPtr GetSpectralInfoForSMT;
    GetStreamEndpointHandlePtr GetStreamEndpointHandle;
    GetTerminalNamePtr GetTerminalName;
    GetUserDataPtr GetUserData;
    InitPtr Init;
    InitWithOptionsPtr InitWithOptions;
    InitiatePtr Initiate;
    InvalidateAllAttributesPtr InvalidateAllAttributes;
    IsSelfCalValidPtr IsSelfCalValid;
    LockSessionPtr LockSession;
    PerformThermalCorrectionPtr PerformThermalCorrection;
    ReadIQSingleRecordComplexF64Ptr ReadIQSingleRecordComplexF64;
    ReadPowerSpectrumF32Ptr ReadPowerSpectrumF32;
    ReadPowerSpectrumF64Ptr ReadPowerSpectrumF64;
    ResetPtr Reset;
    ResetAttributePtr ResetAttribute;
    ResetDevicePtr ResetDevice;
    ResetWithDefaultsPtr ResetWithDefaults;
    ResetWithOptionsPtr ResetWithOptions;
    RevisionQueryPtr RevisionQuery;
    SelfCalPtr SelfCal;
    SelfCalibratePtr SelfCalibrate;
    SelfCalibrateRangePtr SelfCalibrateRange;
    SelfTestPtr SelfTest;
    SendSoftwareEdgeTriggerPtr SendSoftwareEdgeTrigger;
    SetAttributeViBooleanPtr SetAttributeViBoolean;
    SetAttributeViInt32Ptr SetAttributeViInt32;
    SetAttributeViInt64Ptr SetAttributeViInt64;
    SetAttributeViReal64Ptr SetAttributeViReal64;
    SetAttributeViSessionPtr SetAttributeViSession;
    SetAttributeViStringPtr SetAttributeViString;
    SetCalUserDefinedInfoPtr SetCalUserDefinedInfo;
    SetUserDataPtr SetUserData;
    UnlockSessionPtr UnlockSession;
  } FunctionLoadStatus;

  nidevice_grpc::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace nirfsa_grpc

#endif  // NIRFSA_GRPC_LIBRARY_H

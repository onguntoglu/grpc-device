//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Library wrapper for implementing interactions with NI-DCPower
//---------------------------------------------------------------------
#ifndef NIDCPOWER_GRPC_LIBRARY_WRAPPER_H
#define NIDCPOWER_GRPC_LIBRARY_WRAPPER_H

#include <grpcpp/grpcpp.h>
#include <nidcpower.h>

namespace nidcpower_grpc {

class NiDCPowerLibraryInterface {
 public:
  virtual ~NiDCPowerLibraryInterface() {}

  virtual ViStatus AbortWithChannels(ViSession vi, ViConstString channelName) = 0;
  virtual ViStatus CommitWithChannels(ViSession vi, ViConstString channelName) = 0;
  virtual ViStatus ConfigureDigitalEdgeMeasureTriggerWithChannels(ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge) = 0;
  virtual ViStatus ConfigureDigitalEdgePulseTriggerWithChannels(ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge) = 0;
  virtual ViStatus ConfigureDigitalEdgeSequenceAdvanceTriggerWithChannels(ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge) = 0;
  virtual ViStatus ConfigureDigitalEdgeShutdownTriggerWithChannels(ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge) = 0;
  virtual ViStatus ConfigureDigitalEdgeSourceTriggerWithChannels(ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge) = 0;
  virtual ViStatus ConfigureDigitalEdgeStartTriggerWithChannels(ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge) = 0;
  virtual ViStatus ConfigureOvp(ViSession vi, ViConstString channelName, ViBoolean enabled, ViReal64 limit) = 0;
  virtual ViStatus ConfigureSoftwareEdgeMeasureTriggerWithChannels(ViSession vi, ViConstString channelName) = 0;
  virtual ViStatus ConfigureSoftwareEdgePulseTriggerWithChannels(ViSession vi, ViConstString channelName) = 0;
  virtual ViStatus ConfigureSoftwareEdgeSequenceAdvanceTriggerWithChannels(ViSession vi, ViConstString channelName) = 0;
  virtual ViStatus ConfigureSoftwareEdgeShutdownTriggerWithChannels(ViSession vi, ViConstString channelName) = 0;
  virtual ViStatus ConfigureSoftwareEdgeSourceTriggerWithChannels(ViSession vi, ViConstString channelName) = 0;
  virtual ViStatus ConfigureSoftwareEdgeStartTriggerWithChannels(ViSession vi, ViConstString channelName) = 0;
  virtual ViStatus ConfigureSourceModeWithChannels(ViSession vi, ViConstString channelName, ViInt32 sourceMode) = 0;
  virtual ViStatus CreateAdvancedSequenceCommitStepWithChannels(ViSession vi, ViConstString channelName, ViBoolean setAsActiveStep) = 0;
  virtual ViStatus CreateAdvancedSequenceStepWithChannels(ViSession vi, ViConstString channelName, ViBoolean setAsActiveStep) = 0;
  virtual ViStatus CreateAdvancedSequenceWithChannels(ViSession vi, ViConstString channelName, ViConstString sequenceName, ViInt32 attributeIdCount, ViInt32 attributeIds[], ViBoolean setAsActiveSequence) = 0;
  virtual ViStatus CreateAdvancedSequence(ViSession vi, ViConstString sequenceName, ViInt32 attributeIdCount, ViInt32 attributeIds[], ViBoolean setAsActiveSequence) = 0;
  virtual ViStatus DeleteAdvancedSequenceWithChannels(ViSession vi, ViConstString channelName, ViConstString sequenceName) = 0;
  virtual ViStatus DisablePulseTriggerWithChannels(ViSession vi, ViConstString channelName) = 0;
  virtual ViStatus DisableSequenceAdvanceTriggerWithChannels(ViSession vi, ViConstString channelName) = 0;
  virtual ViStatus DisableShutdownTriggerWithChannels(ViSession vi, ViConstString channelName) = 0;
  virtual ViStatus DisableSourceTriggerWithChannels(ViSession vi, ViConstString channelName) = 0;
  virtual ViStatus DisableStartTriggerWithChannels(ViSession vi, ViConstString channelName) = 0;
  virtual ViStatus ErrorQuery(ViSession vi, ViInt32* errorCode, ViChar errorMessage[256]) = 0;
  virtual ViStatus ExportSignalWithChannels(ViSession vi, ViConstString channelName, ViInt32 signal, ViConstString signalIdentifier, ViConstString outputTerminal) = 0;
  virtual ViStatus InitializeWithIndependentChannels(ViRsrc resourceName, ViBoolean reset, ViConstString optionString, ViSession* vi) = 0;
  virtual ViStatus InitiateWithChannels(ViSession vi, ViConstString channelName) = 0;
  virtual ViStatus InvalidateAllAttributes(ViSession vi) = 0;
  virtual ViStatus ResetWithChannels(ViSession vi, ViConstString channelName) = 0;
  virtual ViStatus SendSoftwareEdgeTriggerWithChannels(ViSession vi, ViConstString channelName, ViInt32 trigger) = 0;
  virtual ViStatus WaitForEventWithChannels(ViSession vi, ViConstString channelName, ViInt32 eventId, ViReal64 timeout) = 0;
  virtual ViStatus Abort(ViSession vi) = 0;
  virtual ViStatus CalSelfCalibrate(ViSession vi, ViConstString channelName) = 0;
  virtual ViStatus ClearError(ViSession vi) = 0;
  virtual ViStatus ClearInterchangeWarnings(ViSession vi) = 0;
  virtual ViStatus Close(ViSession vi) = 0;
  virtual ViStatus Commit(ViSession vi) = 0;
  virtual ViStatus ConfigureApertureTime(ViSession vi, ViConstString channelName, ViReal64 apertureTime, ViInt32 units) = 0;
  virtual ViStatus ConfigureAutoZero(ViSession vi, ViConstString channelName, ViInt32 autoZero) = 0;
  virtual ViStatus ConfigureCurrentLevel(ViSession vi, ViConstString channelName, ViReal64 level) = 0;
  virtual ViStatus ConfigureCurrentLevelRange(ViSession vi, ViConstString channelName, ViReal64 range) = 0;
  virtual ViStatus ConfigureCurrentLimit(ViSession vi, ViConstString channelName, ViInt32 behavior, ViReal64 limit) = 0;
  virtual ViStatus ConfigureCurrentLimitRange(ViSession vi, ViConstString channelName, ViReal64 range) = 0;
  virtual ViStatus ConfigureDigitalEdgeMeasureTrigger(ViSession vi, ViConstString inputTerminal, ViInt32 edge) = 0;
  virtual ViStatus ConfigureDigitalEdgePulseTrigger(ViSession vi, ViConstString inputTerminal, ViInt32 edge) = 0;
  virtual ViStatus ConfigureDigitalEdgeSequenceAdvanceTrigger(ViSession vi, ViConstString inputTerminal, ViInt32 edge) = 0;
  virtual ViStatus ConfigureDigitalEdgeSourceTrigger(ViSession vi, ViConstString inputTerminal, ViInt32 edge) = 0;
  virtual ViStatus ConfigureDigitalEdgeStartTrigger(ViSession vi, ViConstString inputTerminal, ViInt32 edge) = 0;
  virtual ViStatus ConfigureOutputEnabled(ViSession vi, ViConstString channelName, ViBoolean enabled) = 0;
  virtual ViStatus ConfigureOutputFunction(ViSession vi, ViConstString channelName, ViInt32 function) = 0;
  virtual ViStatus ConfigureOutputResistance(ViSession vi, ViConstString channelName, ViReal64 resistance) = 0;
  virtual ViStatus ConfigurePowerLineFrequency(ViSession vi, ViReal64 powerlineFrequency) = 0;
  virtual ViStatus ConfigurePulseBiasCurrentLevel(ViSession vi, ViConstString channelName, ViReal64 level) = 0;
  virtual ViStatus ConfigurePulseBiasCurrentLimit(ViSession vi, ViConstString channelName, ViReal64 limit) = 0;
  virtual ViStatus ConfigurePulseBiasVoltageLevel(ViSession vi, ViConstString channelName, ViReal64 level) = 0;
  virtual ViStatus ConfigurePulseBiasVoltageLimit(ViSession vi, ViConstString channelName, ViReal64 limit) = 0;
  virtual ViStatus ConfigurePulseCurrentLevel(ViSession vi, ViConstString channelName, ViReal64 level) = 0;
  virtual ViStatus ConfigurePulseCurrentLevelRange(ViSession vi, ViConstString channelName, ViReal64 range) = 0;
  virtual ViStatus ConfigurePulseCurrentLimit(ViSession vi, ViConstString channelName, ViReal64 limit) = 0;
  virtual ViStatus ConfigurePulseCurrentLimitRange(ViSession vi, ViConstString channelName, ViReal64 range) = 0;
  virtual ViStatus ConfigurePulseVoltageLevel(ViSession vi, ViConstString channelName, ViReal64 level) = 0;
  virtual ViStatus ConfigurePulseVoltageLevelRange(ViSession vi, ViConstString channelName, ViReal64 range) = 0;
  virtual ViStatus ConfigurePulseVoltageLimit(ViSession vi, ViConstString channelName, ViReal64 limit) = 0;
  virtual ViStatus ConfigurePulseVoltageLimitRange(ViSession vi, ViConstString channelName, ViReal64 range) = 0;
  virtual ViStatus ConfigureSense(ViSession vi, ViConstString channelName, ViInt32 sense) = 0;
  virtual ViStatus ConfigureSoftwareEdgeMeasureTrigger(ViSession vi) = 0;
  virtual ViStatus ConfigureSoftwareEdgePulseTrigger(ViSession vi) = 0;
  virtual ViStatus ConfigureSoftwareEdgeSequenceAdvanceTrigger(ViSession vi) = 0;
  virtual ViStatus ConfigureSoftwareEdgeSourceTrigger(ViSession vi) = 0;
  virtual ViStatus ConfigureSoftwareEdgeStartTrigger(ViSession vi) = 0;
  virtual ViStatus ConfigureSourceMode(ViSession vi, ViInt32 sourceMode) = 0;
  virtual ViStatus ConfigureVoltageLevel(ViSession vi, ViConstString channelName, ViReal64 level) = 0;
  virtual ViStatus ConfigureVoltageLevelRange(ViSession vi, ViConstString channelName, ViReal64 range) = 0;
  virtual ViStatus ConfigureVoltageLimit(ViSession vi, ViConstString channelName, ViReal64 limit) = 0;
  virtual ViStatus ConfigureVoltageLimitRange(ViSession vi, ViConstString channelName, ViReal64 range) = 0;
  virtual ViStatus CreateAdvancedSequenceStep(ViSession vi, ViBoolean setAsActiveStep) = 0;
  virtual ViStatus DeleteAdvancedSequence(ViSession vi, ViConstString sequenceName) = 0;
  virtual ViStatus Disable(ViSession vi) = 0;
  virtual ViStatus DisablePulseTrigger(ViSession vi) = 0;
  virtual ViStatus DisableSequenceAdvanceTrigger(ViSession vi) = 0;
  virtual ViStatus DisableSourceTrigger(ViSession vi) = 0;
  virtual ViStatus DisableStartTrigger(ViSession vi) = 0;
  virtual ViStatus ErrorMessage(ViSession vi, ViStatus errorCode, ViChar errorMessage[256]) = 0;
  virtual ViStatus ExportAttributeConfigurationBuffer(ViSession vi, ViInt32 size, ViAddr configuration[]) = 0;
  virtual ViStatus ExportAttributeConfigurationFile(ViSession vi, ViConstString filePath) = 0;
  virtual ViStatus ExportSignal(ViSession vi, ViInt32 signal, ViConstString signalIdentifier, ViConstString outputTerminal) = 0;
  virtual ViStatus FetchMultiple(ViSession vi, ViConstString channelName, ViReal64 timeout, ViInt32 count, ViReal64 voltageMeasurements[], ViReal64 currentMeasurements[], ViBoolean inCompliance[], ViInt32* actualCount) = 0;
  virtual ViStatus GetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue) = 0;
  virtual ViStatus GetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue) = 0;
  virtual ViStatus GetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64* attributeValue) = 0;
  virtual ViStatus GetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue) = 0;
  virtual ViStatus GetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession* attributeValue) = 0;
  virtual ViStatus GetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 bufferSize, ViChar attributeValue[]) = 0;
  virtual ViStatus GetChannelName(ViSession vi, ViInt32 index, ViInt32 bufferSize, ViChar channelName[]) = 0;
  virtual ViStatus GetChannelNameFromString(ViSession vi, ViConstString index, ViInt32 bufferSize, ViChar channelName[]) = 0;
  virtual ViStatus GetError(ViSession vi, ViStatus* code, ViInt32 bufferSize, ViChar description[]) = 0;
  virtual ViStatus GetExtCalLastDateAndTime(ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute) = 0;
  virtual ViStatus GetExtCalLastTemp(ViSession vi, ViReal64* temperature) = 0;
  virtual ViStatus GetExtCalRecommendedInterval(ViSession vi, ViInt32* months) = 0;
  virtual ViStatus GetNextCoercionRecord(ViSession vi, ViInt32 bufferSize, ViChar coercionRecord[]) = 0;
  virtual ViStatus GetNextInterchangeWarning(ViSession vi, ViInt32 bufferSize, ViChar interchangeWarning[]) = 0;
  virtual ViStatus GetSelfCalLastDateAndTime(ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute) = 0;
  virtual ViStatus GetSelfCalLastTemp(ViSession vi, ViReal64* temperature) = 0;
  virtual ViStatus ImportAttributeConfigurationBuffer(ViSession vi, ViInt32 size, ViAddr configuration[]) = 0;
  virtual ViStatus ImportAttributeConfigurationFile(ViSession vi, ViConstString filePath) = 0;
  virtual ViStatus InitializeWithChannels(ViRsrc resourceName, ViConstString channels, ViBoolean reset, ViConstString optionString, ViSession* vi) = 0;
  virtual ViStatus Initiate(ViSession vi) = 0;
  virtual ViStatus LockSession(ViSession vi, ViBoolean* callerHasLock) = 0;
  virtual ViStatus Measure(ViSession vi, ViConstString channelName, ViInt32 measurementType, ViReal64* measurement) = 0;
  virtual ViStatus MeasureMultiple(ViSession vi, ViConstString channelName, ViReal64 voltageMeasurements[], ViReal64 currentMeasurements[]) = 0;
  virtual ViStatus ParseChannelCount(ViSession vi, ViConstString channelsString, ViUInt32* numberOfChannels) = 0;
  virtual ViStatus QueryInCompliance(ViSession vi, ViConstString channelName, ViBoolean* inCompliance) = 0;
  virtual ViStatus QueryMaxCurrentLimit(ViSession vi, ViConstString channelName, ViReal64 voltageLevel, ViReal64* maxCurrentLimit) = 0;
  virtual ViStatus QueryMaxVoltageLevel(ViSession vi, ViConstString channelName, ViReal64 currentLimit, ViReal64* maxVoltageLevel) = 0;
  virtual ViStatus QueryMinCurrentLimit(ViSession vi, ViConstString channelName, ViReal64 voltageLevel, ViReal64* minCurrentLimit) = 0;
  virtual ViStatus QueryOutputState(ViSession vi, ViConstString channelName, ViInt32 outputState, ViBoolean* inState) = 0;
  virtual ViStatus ReadCurrentTemperature(ViSession vi, ViReal64* temperature) = 0;
  virtual ViStatus Reset(ViSession vi) = 0;
  virtual ViStatus ResetDevice(ViSession vi) = 0;
  virtual ViStatus ResetInterchangeCheck(ViSession vi) = 0;
  virtual ViStatus ResetWithDefaults(ViSession vi) = 0;
  virtual ViStatus RevisionQuery(ViSession vi, ViChar instrumentDriverRevision[256], ViChar firmwareRevision[256]) = 0;
  virtual ViStatus SelfTest(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]) = 0;
  virtual ViStatus SendSoftwareEdgeTrigger(ViSession vi, ViInt32 trigger) = 0;
  virtual ViStatus SetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue) = 0;
  virtual ViStatus SetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue) = 0;
  virtual ViStatus SetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue) = 0;
  virtual ViStatus SetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue) = 0;
  virtual ViStatus SetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession attributeValue) = 0;
  virtual ViStatus SetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue) = 0;
  virtual ViStatus SetSequence(ViSession vi, ViConstString channelName, ViReal64 values[], ViReal64 sourceDelays[], ViUInt32 size) = 0;
  virtual ViStatus UnlockSession(ViSession vi, ViBoolean* callerHasLock) = 0;
  virtual ViStatus WaitForEvent(ViSession vi, ViInt32 eventId, ViReal64 timeout) = 0;
};

}  // namespace nidcpower_grpc
#endif  // NIDCPOWER_GRPC_LIBRARY_WRAPPER_H

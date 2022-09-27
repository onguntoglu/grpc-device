
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-Digital Pattern Driver Metadata
//---------------------------------------------------------------------
#ifndef NIDIGITALPATTERN_GRPC_SERVICE_H
#define NIDIGITALPATTERN_GRPC_SERVICE_H

#include <nidigitalpattern.grpc.pb.h>
#include <condition_variable>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <map>
#include <server/converters.h>
#include <server/feature_toggles.h>
#include <server/session_resource_repository.h>
#include <server/shared_library.h>
#include <server/exceptions.h>

#include "nidigitalpattern_library_interface.h"

namespace nidigitalpattern_grpc {

struct NiDigitalFeatureToggles
{
  using CodeReadiness = nidevice_grpc::FeatureToggles::CodeReadiness;
  NiDigitalFeatureToggles(const nidevice_grpc::FeatureToggles& feature_toggles = {});

  bool is_enabled;
};

class NiDigitalService final : public NiDigital::Service {
public:
  using ResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>;

  NiDigitalService(
    NiDigitalLibraryInterface* library,
    ResourceRepositorySharedPtr resource_repository,
    const NiDigitalFeatureToggles& feature_toggles = {});
  virtual ~NiDigitalService();
  
  ::grpc::Status Abort(::grpc::ServerContext* context, const AbortRequest* request, AbortResponse* response) override;
  ::grpc::Status AbortKeepAlive(::grpc::ServerContext* context, const AbortKeepAliveRequest* request, AbortKeepAliveResponse* response) override;
  ::grpc::Status ApplyLevelsAndTiming(::grpc::ServerContext* context, const ApplyLevelsAndTimingRequest* request, ApplyLevelsAndTimingResponse* response) override;
  ::grpc::Status ApplyTDROffsets(::grpc::ServerContext* context, const ApplyTDROffsetsRequest* request, ApplyTDROffsetsResponse* response) override;
  ::grpc::Status BurstPattern(::grpc::ServerContext* context, const BurstPatternRequest* request, BurstPatternResponse* response) override;
  ::grpc::Status BurstPatternSynchronized(::grpc::ServerContext* context, const BurstPatternSynchronizedRequest* request, BurstPatternSynchronizedResponse* response) override;
  ::grpc::Status ClearError(::grpc::ServerContext* context, const ClearErrorRequest* request, ClearErrorResponse* response) override;
  ::grpc::Status ClockGeneratorAbort(::grpc::ServerContext* context, const ClockGeneratorAbortRequest* request, ClockGeneratorAbortResponse* response) override;
  ::grpc::Status ClockGeneratorGenerateClock(::grpc::ServerContext* context, const ClockGeneratorGenerateClockRequest* request, ClockGeneratorGenerateClockResponse* response) override;
  ::grpc::Status ClockGeneratorInitiate(::grpc::ServerContext* context, const ClockGeneratorInitiateRequest* request, ClockGeneratorInitiateResponse* response) override;
  ::grpc::Status Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response) override;
  ::grpc::Status Commit(::grpc::ServerContext* context, const CommitRequest* request, CommitResponse* response) override;
  ::grpc::Status ConfigureActiveLoadLevels(::grpc::ServerContext* context, const ConfigureActiveLoadLevelsRequest* request, ConfigureActiveLoadLevelsResponse* response) override;
  ::grpc::Status ConfigureCycleNumberHistoryRAMTrigger(::grpc::ServerContext* context, const ConfigureCycleNumberHistoryRAMTriggerRequest* request, ConfigureCycleNumberHistoryRAMTriggerResponse* response) override;
  ::grpc::Status ConfigureDigitalEdgeConditionalJumpTrigger(::grpc::ServerContext* context, const ConfigureDigitalEdgeConditionalJumpTriggerRequest* request, ConfigureDigitalEdgeConditionalJumpTriggerResponse* response) override;
  ::grpc::Status ConfigureDigitalEdgeStartTrigger(::grpc::ServerContext* context, const ConfigureDigitalEdgeStartTriggerRequest* request, ConfigureDigitalEdgeStartTriggerResponse* response) override;
  ::grpc::Status ConfigureFirstFailureHistoryRAMTrigger(::grpc::ServerContext* context, const ConfigureFirstFailureHistoryRAMTriggerRequest* request, ConfigureFirstFailureHistoryRAMTriggerResponse* response) override;
  ::grpc::Status ConfigureHistoryRAMCyclesToAcquire(::grpc::ServerContext* context, const ConfigureHistoryRAMCyclesToAcquireRequest* request, ConfigureHistoryRAMCyclesToAcquireResponse* response) override;
  ::grpc::Status ConfigurePatternBurstSites(::grpc::ServerContext* context, const ConfigurePatternBurstSitesRequest* request, ConfigurePatternBurstSitesResponse* response) override;
  ::grpc::Status ConfigurePatternLabelHistoryRAMTrigger(::grpc::ServerContext* context, const ConfigurePatternLabelHistoryRAMTriggerRequest* request, ConfigurePatternLabelHistoryRAMTriggerResponse* response) override;
  ::grpc::Status ConfigureSoftwareEdgeConditionalJumpTrigger(::grpc::ServerContext* context, const ConfigureSoftwareEdgeConditionalJumpTriggerRequest* request, ConfigureSoftwareEdgeConditionalJumpTriggerResponse* response) override;
  ::grpc::Status ConfigureSoftwareEdgeStartTrigger(::grpc::ServerContext* context, const ConfigureSoftwareEdgeStartTriggerRequest* request, ConfigureSoftwareEdgeStartTriggerResponse* response) override;
  ::grpc::Status ConfigureStartLabel(::grpc::ServerContext* context, const ConfigureStartLabelRequest* request, ConfigureStartLabelResponse* response) override;
  ::grpc::Status ConfigureTerminationMode(::grpc::ServerContext* context, const ConfigureTerminationModeRequest* request, ConfigureTerminationModeResponse* response) override;
  ::grpc::Status ConfigureTimeSetCompareEdgesStrobe(::grpc::ServerContext* context, const ConfigureTimeSetCompareEdgesStrobeRequest* request, ConfigureTimeSetCompareEdgesStrobeResponse* response) override;
  ::grpc::Status ConfigureTimeSetCompareEdgesStrobe2x(::grpc::ServerContext* context, const ConfigureTimeSetCompareEdgesStrobe2xRequest* request, ConfigureTimeSetCompareEdgesStrobe2xResponse* response) override;
  ::grpc::Status ConfigureTimeSetDriveEdges(::grpc::ServerContext* context, const ConfigureTimeSetDriveEdgesRequest* request, ConfigureTimeSetDriveEdgesResponse* response) override;
  ::grpc::Status ConfigureTimeSetDriveEdges2x(::grpc::ServerContext* context, const ConfigureTimeSetDriveEdges2xRequest* request, ConfigureTimeSetDriveEdges2xResponse* response) override;
  ::grpc::Status ConfigureTimeSetDriveFormat(::grpc::ServerContext* context, const ConfigureTimeSetDriveFormatRequest* request, ConfigureTimeSetDriveFormatResponse* response) override;
  ::grpc::Status ConfigureTimeSetEdge(::grpc::ServerContext* context, const ConfigureTimeSetEdgeRequest* request, ConfigureTimeSetEdgeResponse* response) override;
  ::grpc::Status ConfigureTimeSetEdgeMultiplier(::grpc::ServerContext* context, const ConfigureTimeSetEdgeMultiplierRequest* request, ConfigureTimeSetEdgeMultiplierResponse* response) override;
  ::grpc::Status ConfigureTimeSetPeriod(::grpc::ServerContext* context, const ConfigureTimeSetPeriodRequest* request, ConfigureTimeSetPeriodResponse* response) override;
  ::grpc::Status ConfigureVoltageLevels(::grpc::ServerContext* context, const ConfigureVoltageLevelsRequest* request, ConfigureVoltageLevelsResponse* response) override;
  ::grpc::Status CreateCaptureWaveformFromFileDigicapture(::grpc::ServerContext* context, const CreateCaptureWaveformFromFileDigicaptureRequest* request, CreateCaptureWaveformFromFileDigicaptureResponse* response) override;
  ::grpc::Status CreateCaptureWaveformParallel(::grpc::ServerContext* context, const CreateCaptureWaveformParallelRequest* request, CreateCaptureWaveformParallelResponse* response) override;
  ::grpc::Status CreateCaptureWaveformSerial(::grpc::ServerContext* context, const CreateCaptureWaveformSerialRequest* request, CreateCaptureWaveformSerialResponse* response) override;
  ::grpc::Status CreateChannelMap(::grpc::ServerContext* context, const CreateChannelMapRequest* request, CreateChannelMapResponse* response) override;
  ::grpc::Status CreatePinGroup(::grpc::ServerContext* context, const CreatePinGroupRequest* request, CreatePinGroupResponse* response) override;
  ::grpc::Status CreatePinMap(::grpc::ServerContext* context, const CreatePinMapRequest* request, CreatePinMapResponse* response) override;
  ::grpc::Status CreateSourceWaveformFromFileTDMS(::grpc::ServerContext* context, const CreateSourceWaveformFromFileTDMSRequest* request, CreateSourceWaveformFromFileTDMSResponse* response) override;
  ::grpc::Status CreateSourceWaveformParallel(::grpc::ServerContext* context, const CreateSourceWaveformParallelRequest* request, CreateSourceWaveformParallelResponse* response) override;
  ::grpc::Status CreateSourceWaveformSerial(::grpc::ServerContext* context, const CreateSourceWaveformSerialRequest* request, CreateSourceWaveformSerialResponse* response) override;
  ::grpc::Status CreateTimeSet(::grpc::ServerContext* context, const CreateTimeSetRequest* request, CreateTimeSetResponse* response) override;
  ::grpc::Status DeleteAllTimeSets(::grpc::ServerContext* context, const DeleteAllTimeSetsRequest* request, DeleteAllTimeSetsResponse* response) override;
  ::grpc::Status DisableConditionalJumpTrigger(::grpc::ServerContext* context, const DisableConditionalJumpTriggerRequest* request, DisableConditionalJumpTriggerResponse* response) override;
  ::grpc::Status DisableSites(::grpc::ServerContext* context, const DisableSitesRequest* request, DisableSitesResponse* response) override;
  ::grpc::Status DisableStartTrigger(::grpc::ServerContext* context, const DisableStartTriggerRequest* request, DisableStartTriggerResponse* response) override;
  ::grpc::Status EnableMatchFailCombination(::grpc::ServerContext* context, const EnableMatchFailCombinationRequest* request, EnableMatchFailCombinationResponse* response) override;
  ::grpc::Status EnableSites(::grpc::ServerContext* context, const EnableSitesRequest* request, EnableSitesResponse* response) override;
  ::grpc::Status EndChannelMap(::grpc::ServerContext* context, const EndChannelMapRequest* request, EndChannelMapResponse* response) override;
  ::grpc::Status ErrorMessage(::grpc::ServerContext* context, const ErrorMessageRequest* request, ErrorMessageResponse* response) override;
  ::grpc::Status ExportSignal(::grpc::ServerContext* context, const ExportSignalRequest* request, ExportSignalResponse* response) override;
  ::grpc::Status FetchCaptureWaveformU32(::grpc::ServerContext* context, const FetchCaptureWaveformU32Request* request, FetchCaptureWaveformU32Response* response) override;
  ::grpc::Status FetchHistoryRAMCycleInformation(::grpc::ServerContext* context, const FetchHistoryRAMCycleInformationRequest* request, FetchHistoryRAMCycleInformationResponse* response) override;
  ::grpc::Status FetchHistoryRAMCyclePinData(::grpc::ServerContext* context, const FetchHistoryRAMCyclePinDataRequest* request, FetchHistoryRAMCyclePinDataResponse* response) override;
  ::grpc::Status FetchHistoryRAMScanCycleNumber(::grpc::ServerContext* context, const FetchHistoryRAMScanCycleNumberRequest* request, FetchHistoryRAMScanCycleNumberResponse* response) override;
  ::grpc::Status FrequencyCounterConfigureMeasurementMode(::grpc::ServerContext* context, const FrequencyCounterConfigureMeasurementModeRequest* request, FrequencyCounterConfigureMeasurementModeResponse* response) override;
  ::grpc::Status FrequencyCounterConfigureMeasurementTime(::grpc::ServerContext* context, const FrequencyCounterConfigureMeasurementTimeRequest* request, FrequencyCounterConfigureMeasurementTimeResponse* response) override;
  ::grpc::Status FrequencyCounterMeasureFrequency(::grpc::ServerContext* context, const FrequencyCounterMeasureFrequencyRequest* request, FrequencyCounterMeasureFrequencyResponse* response) override;
  ::grpc::Status GetAttributeViBoolean(::grpc::ServerContext* context, const GetAttributeViBooleanRequest* request, GetAttributeViBooleanResponse* response) override;
  ::grpc::Status GetAttributeViInt32(::grpc::ServerContext* context, const GetAttributeViInt32Request* request, GetAttributeViInt32Response* response) override;
  ::grpc::Status GetAttributeViInt64(::grpc::ServerContext* context, const GetAttributeViInt64Request* request, GetAttributeViInt64Response* response) override;
  ::grpc::Status GetAttributeViReal64(::grpc::ServerContext* context, const GetAttributeViReal64Request* request, GetAttributeViReal64Response* response) override;
  ::grpc::Status GetAttributeViSession(::grpc::ServerContext* context, const GetAttributeViSessionRequest* request, GetAttributeViSessionResponse* response) override;
  ::grpc::Status GetAttributeViString(::grpc::ServerContext* context, const GetAttributeViStringRequest* request, GetAttributeViStringResponse* response) override;
  ::grpc::Status GetChannelName(::grpc::ServerContext* context, const GetChannelNameRequest* request, GetChannelNameResponse* response) override;
  ::grpc::Status GetChannelNameFromString(::grpc::ServerContext* context, const GetChannelNameFromStringRequest* request, GetChannelNameFromStringResponse* response) override;
  ::grpc::Status GetError(::grpc::ServerContext* context, const GetErrorRequest* request, GetErrorResponse* response) override;
  ::grpc::Status GetFailCount(::grpc::ServerContext* context, const GetFailCountRequest* request, GetFailCountResponse* response) override;
  ::grpc::Status GetHistoryRAMSampleCount(::grpc::ServerContext* context, const GetHistoryRAMSampleCountRequest* request, GetHistoryRAMSampleCountResponse* response) override;
  ::grpc::Status GetPatternName(::grpc::ServerContext* context, const GetPatternNameRequest* request, GetPatternNameResponse* response) override;
  ::grpc::Status GetPatternPinIndexes(::grpc::ServerContext* context, const GetPatternPinIndexesRequest* request, GetPatternPinIndexesResponse* response) override;
  ::grpc::Status GetPatternPinList(::grpc::ServerContext* context, const GetPatternPinListRequest* request, GetPatternPinListResponse* response) override;
  ::grpc::Status GetPinName(::grpc::ServerContext* context, const GetPinNameRequest* request, GetPinNameResponse* response) override;
  ::grpc::Status GetPinResultsPinInformation(::grpc::ServerContext* context, const GetPinResultsPinInformationRequest* request, GetPinResultsPinInformationResponse* response) override;
  ::grpc::Status GetSitePassFail(::grpc::ServerContext* context, const GetSitePassFailRequest* request, GetSitePassFailResponse* response) override;
  ::grpc::Status GetSiteResultsSiteNumbers(::grpc::ServerContext* context, const GetSiteResultsSiteNumbersRequest* request, GetSiteResultsSiteNumbersResponse* response) override;
  ::grpc::Status GetTimeSetDriveFormat(::grpc::ServerContext* context, const GetTimeSetDriveFormatRequest* request, GetTimeSetDriveFormatResponse* response) override;
  ::grpc::Status GetTimeSetEdge(::grpc::ServerContext* context, const GetTimeSetEdgeRequest* request, GetTimeSetEdgeResponse* response) override;
  ::grpc::Status GetTimeSetEdgeMultiplier(::grpc::ServerContext* context, const GetTimeSetEdgeMultiplierRequest* request, GetTimeSetEdgeMultiplierResponse* response) override;
  ::grpc::Status GetTimeSetName(::grpc::ServerContext* context, const GetTimeSetNameRequest* request, GetTimeSetNameResponse* response) override;
  ::grpc::Status GetTimeSetPeriod(::grpc::ServerContext* context, const GetTimeSetPeriodRequest* request, GetTimeSetPeriodResponse* response) override;
  ::grpc::Status Init(::grpc::ServerContext* context, const InitRequest* request, InitResponse* response) override;
  ::grpc::Status InitWithOptions(::grpc::ServerContext* context, const InitWithOptionsRequest* request, InitWithOptionsResponse* response) override;
  ::grpc::Status Initiate(::grpc::ServerContext* context, const InitiateRequest* request, InitiateResponse* response) override;
  ::grpc::Status IsDone(::grpc::ServerContext* context, const IsDoneRequest* request, IsDoneResponse* response) override;
  ::grpc::Status IsSiteEnabled(::grpc::ServerContext* context, const IsSiteEnabledRequest* request, IsSiteEnabledResponse* response) override;
  ::grpc::Status LoadLevels(::grpc::ServerContext* context, const LoadLevelsRequest* request, LoadLevelsResponse* response) override;
  ::grpc::Status LoadPattern(::grpc::ServerContext* context, const LoadPatternRequest* request, LoadPatternResponse* response) override;
  ::grpc::Status LoadPinMap(::grpc::ServerContext* context, const LoadPinMapRequest* request, LoadPinMapResponse* response) override;
  ::grpc::Status LoadSpecifications(::grpc::ServerContext* context, const LoadSpecificationsRequest* request, LoadSpecificationsResponse* response) override;
  ::grpc::Status LoadTiming(::grpc::ServerContext* context, const LoadTimingRequest* request, LoadTimingResponse* response) override;
  ::grpc::Status MapPinToChannel(::grpc::ServerContext* context, const MapPinToChannelRequest* request, MapPinToChannelResponse* response) override;
  ::grpc::Status PPMUConfigureApertureTime(::grpc::ServerContext* context, const PPMUConfigureApertureTimeRequest* request, PPMUConfigureApertureTimeResponse* response) override;
  ::grpc::Status PPMUConfigureCurrentLevel(::grpc::ServerContext* context, const PPMUConfigureCurrentLevelRequest* request, PPMUConfigureCurrentLevelResponse* response) override;
  ::grpc::Status PPMUConfigureCurrentLevelRange(::grpc::ServerContext* context, const PPMUConfigureCurrentLevelRangeRequest* request, PPMUConfigureCurrentLevelRangeResponse* response) override;
  ::grpc::Status PPMUConfigureCurrentLimit(::grpc::ServerContext* context, const PPMUConfigureCurrentLimitRequest* request, PPMUConfigureCurrentLimitResponse* response) override;
  ::grpc::Status PPMUConfigureCurrentLimitRange(::grpc::ServerContext* context, const PPMUConfigureCurrentLimitRangeRequest* request, PPMUConfigureCurrentLimitRangeResponse* response) override;
  ::grpc::Status PPMUConfigureOutputFunction(::grpc::ServerContext* context, const PPMUConfigureOutputFunctionRequest* request, PPMUConfigureOutputFunctionResponse* response) override;
  ::grpc::Status PPMUConfigureVoltageLevel(::grpc::ServerContext* context, const PPMUConfigureVoltageLevelRequest* request, PPMUConfigureVoltageLevelResponse* response) override;
  ::grpc::Status PPMUConfigureVoltageLimits(::grpc::ServerContext* context, const PPMUConfigureVoltageLimitsRequest* request, PPMUConfigureVoltageLimitsResponse* response) override;
  ::grpc::Status PPMUMeasure(::grpc::ServerContext* context, const PPMUMeasureRequest* request, PPMUMeasureResponse* response) override;
  ::grpc::Status PPMUSource(::grpc::ServerContext* context, const PPMUSourceRequest* request, PPMUSourceResponse* response) override;
  ::grpc::Status ReadSequencerFlag(::grpc::ServerContext* context, const ReadSequencerFlagRequest* request, ReadSequencerFlagResponse* response) override;
  ::grpc::Status ReadSequencerRegister(::grpc::ServerContext* context, const ReadSequencerRegisterRequest* request, ReadSequencerRegisterResponse* response) override;
  ::grpc::Status ReadStatic(::grpc::ServerContext* context, const ReadStaticRequest* request, ReadStaticResponse* response) override;
  ::grpc::Status Reset(::grpc::ServerContext* context, const ResetRequest* request, ResetResponse* response) override;
  ::grpc::Status ResetAttribute(::grpc::ServerContext* context, const ResetAttributeRequest* request, ResetAttributeResponse* response) override;
  ::grpc::Status ResetDevice(::grpc::ServerContext* context, const ResetDeviceRequest* request, ResetDeviceResponse* response) override;
  ::grpc::Status SelectFunction(::grpc::ServerContext* context, const SelectFunctionRequest* request, SelectFunctionResponse* response) override;
  ::grpc::Status SelfCalibrate(::grpc::ServerContext* context, const SelfCalibrateRequest* request, SelfCalibrateResponse* response) override;
  ::grpc::Status SelfTest(::grpc::ServerContext* context, const SelfTestRequest* request, SelfTestResponse* response) override;
  ::grpc::Status SendSoftwareEdgeTrigger(::grpc::ServerContext* context, const SendSoftwareEdgeTriggerRequest* request, SendSoftwareEdgeTriggerResponse* response) override;
  ::grpc::Status SetAttributeViBoolean(::grpc::ServerContext* context, const SetAttributeViBooleanRequest* request, SetAttributeViBooleanResponse* response) override;
  ::grpc::Status SetAttributeViInt32(::grpc::ServerContext* context, const SetAttributeViInt32Request* request, SetAttributeViInt32Response* response) override;
  ::grpc::Status SetAttributeViInt64(::grpc::ServerContext* context, const SetAttributeViInt64Request* request, SetAttributeViInt64Response* response) override;
  ::grpc::Status SetAttributeViReal64(::grpc::ServerContext* context, const SetAttributeViReal64Request* request, SetAttributeViReal64Response* response) override;
  ::grpc::Status SetAttributeViSession(::grpc::ServerContext* context, const SetAttributeViSessionRequest* request, SetAttributeViSessionResponse* response) override;
  ::grpc::Status SetAttributeViString(::grpc::ServerContext* context, const SetAttributeViStringRequest* request, SetAttributeViStringResponse* response) override;
  ::grpc::Status TDR(::grpc::ServerContext* context, const TDRRequest* request, TDRResponse* response) override;
  ::grpc::Status UnloadAllPatterns(::grpc::ServerContext* context, const UnloadAllPatternsRequest* request, UnloadAllPatternsResponse* response) override;
  ::grpc::Status UnloadSpecifications(::grpc::ServerContext* context, const UnloadSpecificationsRequest* request, UnloadSpecificationsResponse* response) override;
  ::grpc::Status WaitUntilDone(::grpc::ServerContext* context, const WaitUntilDoneRequest* request, WaitUntilDoneResponse* response) override;
  ::grpc::Status WriteSequencerFlag(::grpc::ServerContext* context, const WriteSequencerFlagRequest* request, WriteSequencerFlagResponse* response) override;
  ::grpc::Status WriteSequencerFlagSynchronized(::grpc::ServerContext* context, const WriteSequencerFlagSynchronizedRequest* request, WriteSequencerFlagSynchronizedResponse* response) override;
  ::grpc::Status WriteSequencerRegister(::grpc::ServerContext* context, const WriteSequencerRegisterRequest* request, WriteSequencerRegisterResponse* response) override;
  ::grpc::Status WriteSourceWaveformBroadcastU32(::grpc::ServerContext* context, const WriteSourceWaveformBroadcastU32Request* request, WriteSourceWaveformBroadcastU32Response* response) override;
  ::grpc::Status WriteSourceWaveformDataFromFileTDMS(::grpc::ServerContext* context, const WriteSourceWaveformDataFromFileTDMSRequest* request, WriteSourceWaveformDataFromFileTDMSResponse* response) override;
  ::grpc::Status WriteSourceWaveformSiteUniqueU32(::grpc::ServerContext* context, const WriteSourceWaveformSiteUniqueU32Request* request, WriteSourceWaveformSiteUniqueU32Response* response) override;
  ::grpc::Status WriteStatic(::grpc::ServerContext* context, const WriteStaticRequest* request, WriteStaticResponse* response) override;
private:
  NiDigitalLibraryInterface* library_;
  ResourceRepositorySharedPtr session_repository_;
  ::grpc::Status ConvertApiErrorStatusForViSession(::grpc::ServerContext* context, int32_t status, ViSession vi);
  void Copy(const std::vector<ViBoolean>& input, google::protobuf::RepeatedField<bool>* output);
  template <typename TEnum>
  void CopyBytesToEnums(const std::string& input, google::protobuf::RepeatedField<TEnum>* output);

  NiDigitalFeatureToggles feature_toggles_;
};

} // namespace nidigitalpattern_grpc

#endif  // NIDIGITALPATTERN_GRPC_SERVICE_H

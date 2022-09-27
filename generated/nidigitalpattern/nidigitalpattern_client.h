
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-Digital Pattern Driver.
//---------------------------------------------------------------------
#ifndef NIDIGITALPATTERN_GRPC_CLIENT_H
#define NIDIGITALPATTERN_GRPC_CLIENT_H

#include <grpcpp/grpcpp.h>

#include <nidigitalpattern.grpc.pb.h>
#include <tests/utilities/client_helpers.h>

#include <memory>
#include <vector>

namespace nidigitalpattern_grpc::experimental::client {

namespace pb = ::google::protobuf;
using StubPtr = std::unique_ptr<NiDigital::Stub>;
using namespace nidevice_grpc::experimental::client;


AbortResponse abort(const StubPtr& stub, const nidevice_grpc::Session& vi);
AbortKeepAliveResponse abort_keep_alive(const StubPtr& stub, const nidevice_grpc::Session& vi);
ApplyLevelsAndTimingResponse apply_levels_and_timing(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& site_list, const pb::string& levels_sheet, const pb::string& timing_sheet, const pb::string& initial_state_high_pins, const pb::string& initial_state_low_pins, const pb::string& initial_state_tristate_pins);
ApplyTDROffsetsResponse apply_tdr_offsets(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const std::vector<double>& offsets);
BurstPatternResponse burst_pattern(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& site_list, const pb::string& start_label, const bool& select_digital_function, const bool& wait_until_done, const double& timeout);
BurstPatternSynchronizedResponse burst_pattern_synchronized(const StubPtr& stub, const pb::uint32& session_count, const std::vector<nidevice_grpc::Session>& sessions, const pb::string& site_list, const pb::string& start_label, const bool& select_digital_function, const bool& wait_until_done, const double& timeout);
ClearErrorResponse clear_error(const StubPtr& stub, const nidevice_grpc::Session& vi);
ClockGeneratorAbortResponse clock_generator_abort(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list);
ClockGeneratorGenerateClockResponse clock_generator_generate_clock(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& frequency, const bool& select_digital_function);
ClockGeneratorInitiateResponse clock_generator_initiate(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list);
CloseResponse close(const StubPtr& stub, const nidevice_grpc::Session& vi);
CommitResponse commit(const StubPtr& stub, const nidevice_grpc::Session& vi);
ConfigureActiveLoadLevelsResponse configure_active_load_levels(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& iol, const double& ioh, const double& vcom);
ConfigureCycleNumberHistoryRAMTriggerResponse configure_cycle_number_history_ram_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int64& cycle_number, const pb::int32& pretrigger_samples);
ConfigureDigitalEdgeConditionalJumpTriggerResponse configure_digital_edge_conditional_jump_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& trigger_identifier, const pb::string& source, const simple_variant<DigitalEdge, pb::int32>& edge);
ConfigureDigitalEdgeStartTriggerResponse configure_digital_edge_start_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& source, const simple_variant<DigitalEdge, pb::int32>& edge);
ConfigureFirstFailureHistoryRAMTriggerResponse configure_first_failure_history_ram_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& pretrigger_samples);
ConfigureHistoryRAMCyclesToAcquireResponse configure_history_ram_cycles_to_acquire(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<HistoryRamCyclesToAcquire, pb::int32>& cycles_to_acquire);
ConfigurePatternBurstSitesResponse configure_pattern_burst_sites(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& site_list);
ConfigurePatternLabelHistoryRAMTriggerResponse configure_pattern_label_history_ram_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& label, const pb::int64& vector_offset, const pb::int64& cycle_offset, const pb::int32& pretrigger_samples);
ConfigureSoftwareEdgeConditionalJumpTriggerResponse configure_software_edge_conditional_jump_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& trigger_identifier);
ConfigureSoftwareEdgeStartTriggerResponse configure_software_edge_start_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi);
ConfigureStartLabelResponse configure_start_label(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& label);
ConfigureTerminationModeResponse configure_termination_mode(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const simple_variant<TerminationMode, pb::int32>& mode);
ConfigureTimeSetCompareEdgesStrobeResponse configure_time_set_compare_edges_strobe(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& pin_list, const pb::string& time_set_name, const double& strobe_edge);
ConfigureTimeSetCompareEdgesStrobe2xResponse configure_time_set_compare_edges_strobe2x(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& pin_list, const pb::string& time_set_name, const double& strobe_edge, const double& strobe2_edge);
ConfigureTimeSetDriveEdgesResponse configure_time_set_drive_edges(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& pin_list, const pb::string& time_set_name, const simple_variant<DriveFormat, pb::int32>& format, const double& drive_on_edge, const double& drive_data_edge, const double& drive_return_edge, const double& drive_off_edge);
ConfigureTimeSetDriveEdges2xResponse configure_time_set_drive_edges2x(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& pin_list, const pb::string& time_set_name, const simple_variant<DriveFormat, pb::int32>& format, const double& drive_on_edge, const double& drive_data_edge, const double& drive_return_edge, const double& drive_off_edge, const double& drive_data2_edge, const double& drive_return2_edge);
ConfigureTimeSetDriveFormatResponse configure_time_set_drive_format(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& pin_list, const pb::string& time_set_name, const simple_variant<DriveFormat, pb::int32>& drive_format);
ConfigureTimeSetEdgeResponse configure_time_set_edge(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& pin_list, const pb::string& time_set_name, const simple_variant<TimeSetEdgeType, pb::int32>& edge, const double& time);
ConfigureTimeSetEdgeMultiplierResponse configure_time_set_edge_multiplier(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& pin_list, const pb::string& time_set_name, const pb::int32& edge_multiplier);
ConfigureTimeSetPeriodResponse configure_time_set_period(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& time_set_name, const double& period);
ConfigureVoltageLevelsResponse configure_voltage_levels(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& vil, const double& vih, const double& vol, const double& voh, const double& vterm);
CreateCaptureWaveformFromFileDigicaptureResponse create_capture_waveform_from_file_digicapture(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& waveform_name, const pb::string& waveform_file_path);
CreateCaptureWaveformParallelResponse create_capture_waveform_parallel(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& pin_list, const pb::string& waveform_name);
CreateCaptureWaveformSerialResponse create_capture_waveform_serial(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& pin_list, const pb::string& waveform_name, const pb::uint32& sample_width, const simple_variant<BitOrder, pb::int32>& bit_order);
CreateChannelMapResponse create_channel_map(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& num_sites);
CreatePinGroupResponse create_pin_group(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& pin_group_name, const pb::string& pin_list);
CreatePinMapResponse create_pin_map(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& dut_pin_list, const pb::string& system_pin_list);
CreateSourceWaveformFromFileTDMSResponse create_source_waveform_from_file_tdms(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& waveform_name, const pb::string& waveform_file_path, const bool& write_waveform_data);
CreateSourceWaveformParallelResponse create_source_waveform_parallel(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& pin_list, const pb::string& waveform_name, const simple_variant<SourceDataMapping, pb::int32>& data_mapping);
CreateSourceWaveformSerialResponse create_source_waveform_serial(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& pin_list, const pb::string& waveform_name, const simple_variant<SourceDataMapping, pb::int32>& data_mapping, const pb::uint32& sample_width, const simple_variant<BitOrder, pb::int32>& bit_order);
CreateTimeSetResponse create_time_set(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& name);
DeleteAllTimeSetsResponse delete_all_time_sets(const StubPtr& stub, const nidevice_grpc::Session& vi);
DisableConditionalJumpTriggerResponse disable_conditional_jump_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& trigger_identifier);
DisableSitesResponse disable_sites(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& site_list);
DisableStartTriggerResponse disable_start_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi);
EnableMatchFailCombinationResponse enable_match_fail_combination(const StubPtr& stub, const pb::uint32& session_count, const std::vector<nidevice_grpc::Session>& sessions, const nidevice_grpc::Session& sync_session);
EnableSitesResponse enable_sites(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& site_list);
EndChannelMapResponse end_channel_map(const StubPtr& stub, const nidevice_grpc::Session& vi);
ErrorMessageResponse error_message(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& error_code);
ExportSignalResponse export_signal(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<ExportSignal, pb::int32>& signal, const pb::string& signal_identifier, const pb::string& output_terminal);
FetchCaptureWaveformU32Response fetch_capture_waveform_u32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& site_list, const pb::string& waveform_name, const pb::int32& samples_to_read, const double& timeout);
FetchHistoryRAMCycleInformationResponse fetch_history_ram_cycle_information(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& site, const pb::int64& sample_index);
FetchHistoryRAMCyclePinDataResponse fetch_history_ram_cycle_pin_data(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& site, const pb::string& pin_list, const pb::int64& sample_index, const pb::int32& dut_cycle_index);
FetchHistoryRAMScanCycleNumberResponse fetch_history_ram_scan_cycle_number(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& site, const pb::int64& sample_index);
FrequencyCounterConfigureMeasurementModeResponse frequency_counter_configure_measurement_mode(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<FrequencyMeasurementMode, pb::int32>& measurement_mode);
FrequencyCounterConfigureMeasurementTimeResponse frequency_counter_configure_measurement_time(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& measurement_time);
FrequencyCounterMeasureFrequencyResponse frequency_counter_measure_frequency(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list);
GetAttributeViBooleanResponse get_attribute_vi_boolean(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiDigitalAttribute& attribute);
GetAttributeViInt32Response get_attribute_vi_int32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiDigitalAttribute& attribute);
GetAttributeViInt64Response get_attribute_vi_int64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiDigitalAttribute& attribute);
GetAttributeViReal64Response get_attribute_vi_real64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiDigitalAttribute& attribute);
GetAttributeViSessionResponse get_attribute_vi_session(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const NiDigitalAttribute& attribute);
GetAttributeViStringResponse get_attribute_vi_string(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiDigitalAttribute& attribute);
GetChannelNameResponse get_channel_name(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& index);
GetChannelNameFromStringResponse get_channel_name_from_string(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& indices);
GetErrorResponse get_error(const StubPtr& stub, const nidevice_grpc::Session& vi);
GetFailCountResponse get_fail_count(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list);
GetHistoryRAMSampleCountResponse get_history_ram_sample_count(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& site);
GetPatternNameResponse get_pattern_name(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& pattern_index);
GetPatternPinIndexesResponse get_pattern_pin_indexes(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& start_label);
GetPatternPinListResponse get_pattern_pin_list(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& start_label);
GetPinNameResponse get_pin_name(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& pin_index);
GetPinResultsPinInformationResponse get_pin_results_pin_information(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list);
GetSitePassFailResponse get_site_pass_fail(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& site_list);
GetSiteResultsSiteNumbersResponse get_site_results_site_numbers(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& site_list, const simple_variant<SiteResultType, pb::int32>& site_result_type);
GetTimeSetDriveFormatResponse get_time_set_drive_format(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& pin, const pb::string& time_set_name);
GetTimeSetEdgeResponse get_time_set_edge(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& pin, const pb::string& time_set_name, const simple_variant<TimeSetEdgeType, pb::int32>& edge);
GetTimeSetEdgeMultiplierResponse get_time_set_edge_multiplier(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& pin, const pb::string& time_set_name);
GetTimeSetNameResponse get_time_set_name(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& time_set_index);
GetTimeSetPeriodResponse get_time_set_period(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& time_set_name);
InitResponse init(const StubPtr& stub, const pb::string& resource_name, const bool& id_query, const bool& reset_device);
InitWithOptionsResponse init_with_options(const StubPtr& stub, const pb::string& resource_name, const bool& id_query, const bool& reset_device, const pb::string& option_string);
InitiateResponse initiate(const StubPtr& stub, const nidevice_grpc::Session& vi);
IsDoneResponse is_done(const StubPtr& stub, const nidevice_grpc::Session& vi);
IsSiteEnabledResponse is_site_enabled(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& site);
LoadLevelsResponse load_levels(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& file_path);
LoadPatternResponse load_pattern(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& file_path);
LoadPinMapResponse load_pin_map(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& file_path);
LoadSpecificationsResponse load_specifications(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& file_path);
LoadTimingResponse load_timing(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& file_path);
MapPinToChannelResponse map_pin_to_channel(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& pin, const pb::int32& site, const pb::string& channel);
PPMUConfigureApertureTimeResponse ppmu_configure_aperture_time(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& aperture_time, const simple_variant<PpmuApertureTimeUnits, pb::int32>& units);
PPMUConfigureCurrentLevelResponse ppmu_configure_current_level(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& current_level);
PPMUConfigureCurrentLevelRangeResponse ppmu_configure_current_level_range(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& range);
PPMUConfigureCurrentLimitResponse ppmu_configure_current_limit(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const simple_variant<PpmuCurrentLimitBehavior, pb::int32>& behavior, const double& limit);
PPMUConfigureCurrentLimitRangeResponse ppmu_configure_current_limit_range(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& range);
PPMUConfigureOutputFunctionResponse ppmu_configure_output_function(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const simple_variant<PpmuOutputFunction, pb::int32>& output_function);
PPMUConfigureVoltageLevelResponse ppmu_configure_voltage_level(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& voltage_level);
PPMUConfigureVoltageLimitsResponse ppmu_configure_voltage_limits(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& lower_voltage_limit, const double& upper_voltage_limit);
PPMUMeasureResponse ppmu_measure(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const simple_variant<PpmuMeasurementType, pb::int32>& measurement_type);
PPMUSourceResponse ppmu_source(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list);
ReadSequencerFlagResponse read_sequencer_flag(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& flag);
ReadSequencerRegisterResponse read_sequencer_register(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& reg);
ReadStaticResponse read_static(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list);
ResetResponse reset(const StubPtr& stub, const nidevice_grpc::Session& vi);
ResetAttributeResponse reset_attribute(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiDigitalAttribute& attribute_id);
ResetDeviceResponse reset_device(const StubPtr& stub, const nidevice_grpc::Session& vi);
SelectFunctionResponse select_function(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const simple_variant<SelectedFunction, pb::int32>& function);
SelfCalibrateResponse self_calibrate(const StubPtr& stub, const nidevice_grpc::Session& vi);
SelfTestResponse self_test(const StubPtr& stub, const nidevice_grpc::Session& vi);
SendSoftwareEdgeTriggerResponse send_software_edge_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<SoftwareTrigger, pb::int32>& trigger, const pb::string& trigger_identifier);
SetAttributeViBooleanResponse set_attribute_vi_boolean(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiDigitalAttribute& attribute, const bool& value);
SetAttributeViInt32Response set_attribute_vi_int32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiDigitalAttribute& attribute, const simple_variant<NiDigitalInt32AttributeValues, pb::int32>& value);
SetAttributeViInt64Response set_attribute_vi_int64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiDigitalAttribute& attribute, const pb::int64& value);
SetAttributeViReal64Response set_attribute_vi_real64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiDigitalAttribute& attribute, const double& value);
SetAttributeViSessionResponse set_attribute_vi_session(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const NiDigitalAttribute& attribute, const nidevice_grpc::Session& value);
SetAttributeViStringResponse set_attribute_vi_string(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiDigitalAttribute& attribute, const pb::string& value);
TDRResponse tdr(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const bool& apply_offsets);
UnloadAllPatternsResponse unload_all_patterns(const StubPtr& stub, const nidevice_grpc::Session& vi, const bool& unload_keep_alive_pattern);
UnloadSpecificationsResponse unload_specifications(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& file_path);
WaitUntilDoneResponse wait_until_done(const StubPtr& stub, const nidevice_grpc::Session& vi, const double& timeout);
WriteSequencerFlagResponse write_sequencer_flag(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& flag, const bool& value);
WriteSequencerFlagSynchronizedResponse write_sequencer_flag_synchronized(const StubPtr& stub, const pb::uint32& session_count, const std::vector<nidevice_grpc::Session>& sessions, const pb::string& flag, const bool& value);
WriteSequencerRegisterResponse write_sequencer_register(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& reg, const pb::int32& value);
WriteSourceWaveformBroadcastU32Response write_source_waveform_broadcast_u32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& waveform_name, const std::vector<pb::uint32>& waveform_data);
WriteSourceWaveformDataFromFileTDMSResponse write_source_waveform_data_from_file_tdms(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& waveform_name, const pb::string& waveform_file_path);
WriteSourceWaveformSiteUniqueU32Response write_source_waveform_site_unique_u32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& site_list, const pb::string& waveform_name, const pb::int32& num_waveforms, const pb::int32& samples_per_waveform, const std::vector<pb::uint32>& waveform_data);
WriteStaticResponse write_static(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const simple_variant<WriteStaticPinState, pb::uint32>& state);

} // namespace nidigitalpattern_grpc::experimental::client

#endif /* NIDIGITALPATTERN_GRPC_CLIENT_H */

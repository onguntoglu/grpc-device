
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-RFMXBLUETOOTH.
//---------------------------------------------------------------------
#ifndef NIRFMXBLUETOOTH_GRPC_CLIENT_H
#define NIRFMXBLUETOOTH_GRPC_CLIENT_H

#include <grpcpp/grpcpp.h>

#include <nirfmxbluetooth.grpc.pb.h>
#include <tests/utilities/client_helpers.h>

#include <memory>
#include <vector>

namespace nirfmxbluetooth_grpc::experimental::client {

namespace pb = ::google::protobuf;
using StubPtr = std::unique_ptr<NiRFmxBluetooth::Stub>;
using namespace nidevice_grpc::experimental::client;


ACPCfgAveragingResponse acp_cfg_averaging(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const simple_variant<AcpAveragingEnabled, pb::int32>& averaging_enabled, const pb::int32& averaging_count);
ACPCfgBurstSynchronizationTypeResponse acp_cfg_burst_synchronization_type(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const simple_variant<AcpBurstSynchronizationType, pb::int32>& burst_synchronization_type);
ACPCfgNumberOfOffsetsResponse acp_cfg_number_of_offsets(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const pb::int32& number_of_offsets);
ACPCfgOffsetChannelModeResponse acp_cfg_offset_channel_mode(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const simple_variant<AcpOffsetChannelMode, pb::int32>& offset_channel_mode);
ACPFetchAbsolutePowerTraceResponse acp_fetch_absolute_power_trace(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ACPFetchMaskTraceResponse acp_fetch_mask_trace(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ACPFetchMeasurementStatusResponse acp_fetch_measurement_status(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ACPFetchOffsetMeasurementResponse acp_fetch_offset_measurement(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ACPFetchOffsetMeasurementArrayResponse acp_fetch_offset_measurement_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ACPFetchReferenceChannelPowerResponse acp_fetch_reference_channel_power(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ACPFetchSpectrumResponse acp_fetch_spectrum(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
AbortMeasurementsResponse abort_measurements(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string);
AnalyzeIQ1WaveformResponse analyze_iq1_waveform(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const pb::string& result_name, const double& x0, const double& dx, const std::vector<nidevice_grpc::NIComplexNumberF32>& iq, const pb::int32& reset);
AutoDetectSignalResponse auto_detect_signal(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
AutoLevelResponse auto_level(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& measurement_interval);
BuildOffsetStringResponse build_offset_string(const StubPtr& stub, const pb::string& selector_string, const pb::int32& offset_number);
BuildSignalStringResponse build_signal_string(const StubPtr& stub, const pb::string& signal_name, const pb::string& result_name);
BuildSlotStringResponse build_slot_string(const StubPtr& stub, const pb::string& selector_string, const pb::int32& slot_number);
CfgChannelNumberResponse cfg_channel_number(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const pb::int32& channel_number);
CfgDataRateResponse cfg_data_rate(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const pb::int32& data_rate);
CfgDigitalEdgeTriggerResponse cfg_digital_edge_trigger(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const pb::string& digital_edge_source, const simple_variant<DigitalEdgeTriggerEdge, pb::int32>& digital_edge, const double& trigger_delay, const pb::int32& enable_trigger);
CfgExternalAttenuationResponse cfg_external_attenuation(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& external_attenuation);
CfgFrequencyResponse cfg_frequency(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& center_frequency);
CfgFrequencyChannelNumberResponse cfg_frequency_channel_number(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const simple_variant<Standard, pb::int32>& standard, const pb::int32& channel_number);
CfgFrequencyReferenceResponse cfg_frequency_reference(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const simple_variant<FrequencyReferenceSource, std::string>& frequency_reference_source, const double& frequency_reference_frequency);
CfgIQPowerEdgeTriggerResponse cfg_iq_power_edge_trigger(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const pb::string& iq_power_edge_source, const simple_variant<IQPowerEdgeTriggerSlope, pb::int32>& iq_power_edge_slope, const double& iq_power_edge_level, const double& trigger_delay, const simple_variant<TriggerMinimumQuietTimeMode, pb::int32>& trigger_min_quiet_time_mode, const double& trigger_min_quiet_time_duration, const simple_variant<IQPowerEdgeTriggerLevelType, pb::int32>& iq_power_edge_level_type, const pb::int32& enable_trigger);
CfgLEDirectionFindingResponse cfg_le_direction_finding(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const simple_variant<DirectionFindingMode, pb::int32>& direction_finding_mode, const double& cte_length, const double& cte_slot_duration);
CfgMechanicalAttenuationResponse cfg_mechanical_attenuation(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const simple_variant<MechanicalAttenuationAuto, pb::int32>& mechanical_attenuation_auto, const double& mechanical_attenuation_value);
CfgPacketTypeResponse cfg_packet_type(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const simple_variant<PacketType, pb::int32>& packet_type);
CfgPayloadBitPatternResponse cfg_payload_bit_pattern(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const simple_variant<PayloadBitPattern, pb::int32>& payload_bit_pattern);
CfgPayloadLengthResponse cfg_payload_length(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const simple_variant<PayloadLengthMode, pb::int32>& payload_length_mode, const pb::int32& payload_length);
CfgRFResponse cfg_rf(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& center_frequency, const double& reference_level, const double& external_attenuation);
CfgRFAttenuationResponse cfg_rf_attenuation(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const simple_variant<RFAttenuationAuto, pb::int32>& rf_attenuation_auto, const double& rf_attenuation_value);
CfgReferenceLevelResponse cfg_reference_level(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& reference_level);
CfgSoftwareEdgeTriggerResponse cfg_software_edge_trigger(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& trigger_delay, const pb::int32& enable_trigger);
CheckMeasurementStatusResponse check_measurement_status(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string);
ClearAllNamedResultsResponse clear_all_named_results(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string);
ClearNamedResultResponse clear_named_result(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string);
CloneSignalConfigurationResponse clone_signal_configuration(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& old_signal_name, const pb::string& new_signal_name);
CloseResponse close(const StubPtr& stub, const nidevice_grpc::Session& instrument, const bool& force_destroy);
CommitResponse commit(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string);
CreateSignalConfigurationResponse create_signal_configuration(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& signal_name);
DeleteSignalConfigurationResponse delete_signal_configuration(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& signal_name);
DisableTriggerResponse disable_trigger(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string);
FrequencyRangeCfgAveragingResponse frequency_range_cfg_averaging(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const simple_variant<FrequencyRangeAveragingEnabled, pb::int32>& averaging_enabled, const pb::int32& averaging_count);
FrequencyRangeCfgSpanResponse frequency_range_cfg_span(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& span);
FrequencyRangeFetchMeasurementResponse frequency_range_fetch_measurement(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
FrequencyRangeFetchSpectrumResponse frequency_range_fetch_spectrum(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
GetAllNamedResultNamesResponse get_all_named_result_names(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string);
GetAttributeF32Response get_attribute_f32(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id);
GetAttributeF32ArrayResponse get_attribute_f32_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id);
GetAttributeF64Response get_attribute_f64(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id);
GetAttributeF64ArrayResponse get_attribute_f64_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id);
GetAttributeI16Response get_attribute_i16(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id);
GetAttributeI32Response get_attribute_i32(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id);
GetAttributeI32ArrayResponse get_attribute_i32_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id);
GetAttributeI64Response get_attribute_i64(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id);
GetAttributeI64ArrayResponse get_attribute_i64_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id);
GetAttributeI8Response get_attribute_i8(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id);
GetAttributeI8ArrayResponse get_attribute_i8_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id);
GetAttributeNIComplexDoubleArrayResponse get_attribute_ni_complex_double_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id);
GetAttributeNIComplexSingleArrayResponse get_attribute_ni_complex_single_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id);
GetAttributeStringResponse get_attribute_string(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id);
GetAttributeU16Response get_attribute_u16(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id);
GetAttributeU32Response get_attribute_u32(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id);
GetAttributeU32ArrayResponse get_attribute_u32_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id);
GetAttributeU64ArrayResponse get_attribute_u64_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id);
GetAttributeU8Response get_attribute_u8(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id);
GetAttributeU8ArrayResponse get_attribute_u8_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id);
GetErrorResponse get_error(const StubPtr& stub, const nidevice_grpc::Session& instrument);
GetErrorStringResponse get_error_string(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::int32& error_code);
InitializeResponse initialize(const StubPtr& stub, const pb::string& resource_name, const pb::string& option_string);
InitializeFromNIRFSASessionResponse initialize_from_nirfsa_session(const StubPtr& stub, const nidevice_grpc::Session& nirfsa_session);
InitiateResponse initiate(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const pb::string& result_name);
ModAccCfgAveragingResponse mod_acc_cfg_averaging(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const simple_variant<ModAccAveragingEnabled, pb::int32>& averaging_enabled, const pb::int32& averaging_count);
ModAccCfgBurstSynchronizationTypeResponse mod_acc_cfg_burst_synchronization_type(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const simple_variant<ModAccBurstSynchronizationType, pb::int32>& burst_synchronization_type);
ModAccFetchConstellationTraceResponse mod_acc_fetch_constellation_trace(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ModAccFetchDEVMResponse mod_acc_fetch_devm(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ModAccFetchDEVMMagnitudeErrorResponse mod_acc_fetch_devm_magnitude_error(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ModAccFetchDEVMPerSymbolTraceResponse mod_acc_fetch_devm_per_symbol_trace(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ModAccFetchDEVMPhaseErrorResponse mod_acc_fetch_devm_phase_error(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ModAccFetchDemodulatedBitTraceResponse mod_acc_fetch_demodulated_bit_trace(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ModAccFetchDf1Response mod_acc_fetch_df1(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ModAccFetchDf1maxTraceResponse mod_acc_fetch_df1max_trace(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ModAccFetchDf2Response mod_acc_fetch_df2(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ModAccFetchDf2maxTraceResponse mod_acc_fetch_df2max_trace(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ModAccFetchFrequencyErrorBRResponse mod_acc_fetch_frequency_error_br(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ModAccFetchFrequencyErrorEDRResponse mod_acc_fetch_frequency_error_edr(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ModAccFetchFrequencyErrorLEResponse mod_acc_fetch_frequency_error_le(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ModAccFetchFrequencyErrorTraceBRResponse mod_acc_fetch_frequency_error_trace_br(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ModAccFetchFrequencyErrorTraceLEResponse mod_acc_fetch_frequency_error_trace_le(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ModAccFetchFrequencyErrorWiPlusW0TraceEDRResponse mod_acc_fetch_frequency_error_wi_plus_w0_trace_edr(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ModAccFetchFrequencyTraceResponse mod_acc_fetch_frequency_trace(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ModAccFetchRMSDEVMTraceResponse mod_acc_fetch_rmsdevm_trace(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
ResetAttributeResponse reset_attribute(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id);
ResetToDefaultResponse reset_to_default(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string);
SelectMeasurementsResponse select_measurements(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const simple_variant<MeasurementTypes, pb::uint32>& measurements, const bool& enable_all_traces);
SendSoftwareEdgeTriggerResponse send_software_edge_trigger(const StubPtr& stub, const nidevice_grpc::Session& instrument);
SetAttributeF32Response set_attribute_f32(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id, const float& attr_val);
SetAttributeF32ArrayResponse set_attribute_f32_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id, const std::vector<float>& attr_val);
SetAttributeF64Response set_attribute_f64(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id, const double& attr_val);
SetAttributeF64ArrayResponse set_attribute_f64_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id, const std::vector<double>& attr_val);
SetAttributeI16Response set_attribute_i16(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id, const pb::int32& attr_val);
SetAttributeI32Response set_attribute_i32(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id, const simple_variant<NiRFmxBluetoothInt32AttributeValues, pb::int32>& attr_val);
SetAttributeI32ArrayResponse set_attribute_i32_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id, const std::vector<pb::int32>& attr_val);
SetAttributeI64Response set_attribute_i64(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id, const pb::int64& attr_val);
SetAttributeI64ArrayResponse set_attribute_i64_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id, const std::vector<pb::int64>& attr_val);
SetAttributeI8Response set_attribute_i8(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id, const pb::int32& attr_val);
SetAttributeI8ArrayResponse set_attribute_i8_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id, const std::vector<pb::int32>& attr_val);
SetAttributeNIComplexDoubleArrayResponse set_attribute_ni_complex_double_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id, const std::vector<nidevice_grpc::NIComplexNumber>& attr_val);
SetAttributeNIComplexSingleArrayResponse set_attribute_ni_complex_single_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id, const std::vector<nidevice_grpc::NIComplexNumberF32>& attr_val);
SetAttributeStringResponse set_attribute_string(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id, const simple_variant<NiRFmxBluetoothStringAttributeValuesMapped, std::string>& attr_val);
SetAttributeU16Response set_attribute_u16(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id, const pb::uint32& attr_val);
SetAttributeU32Response set_attribute_u32(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id, const pb::uint32& attr_val);
SetAttributeU32ArrayResponse set_attribute_u32_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id, const std::vector<pb::uint32>& attr_val);
SetAttributeU64ArrayResponse set_attribute_u64_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id, const std::vector<pb::uint64>& attr_val);
SetAttributeU8Response set_attribute_u8(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id, const pb::uint32& attr_val);
SetAttributeU8ArrayResponse set_attribute_u8_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const NiRFmxBluetoothAttribute& attribute_id, const pb::string& attr_val);
TXPCfgAveragingResponse txp_cfg_averaging(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const simple_variant<TxpAveragingEnabled, pb::int32>& averaging_enabled, const pb::int32& averaging_count);
TXPCfgBurstSynchronizationTypeResponse txp_cfg_burst_synchronization_type(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const simple_variant<TxpBurstSynchronizationType, pb::int32>& burst_synchronization_type);
TXPFetchEDRPowersResponse txp_fetch_edr_powers(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
TXPFetchLECTEReferencePeriodPowersResponse txp_fetch_lecte_reference_period_powers(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
TXPFetchLECTETransmitSlotPowersResponse txp_fetch_lecte_transmit_slot_powers(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
TXPFetchLECTETransmitSlotPowersArrayResponse txp_fetch_lecte_transmit_slot_powers_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
TXPFetchPowerTraceResponse txp_fetch_power_trace(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
TXPFetchPowersResponse txp_fetch_powers(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
TwentydBBandwidthCfgAveragingResponse twentyd_b_bandwidth_cfg_averaging(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const simple_variant<TwentydBBandwidthAveragingEnabled, pb::int32>& averaging_enabled, const pb::int32& averaging_count);
TwentydBBandwidthFetchMeasurementResponse twentyd_b_bandwidth_fetch_measurement(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
TwentydBBandwidthFetchSpectrumResponse twentyd_b_bandwidth_fetch_spectrum(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);
WaitForAcquisitionCompleteResponse wait_for_acquisition_complete(const StubPtr& stub, const nidevice_grpc::Session& instrument, const double& timeout);
WaitForMeasurementCompleteResponse wait_for_measurement_complete(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const double& timeout);

} // namespace nirfmxbluetooth_grpc::experimental::client

#endif /* NIRFMXBLUETOOTH_GRPC_CLIENT_H */

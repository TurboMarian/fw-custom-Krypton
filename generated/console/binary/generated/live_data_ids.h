// generated by gen_live_documentation.sh / LiveDataProcessor.java
#pragma once

// this generated C header is mostly used as input for java code generation
typedef enum {
LDS_output_channels,
LDS_fuel_computer,
LDS_ignition_state,
LDS_knock_controller,
LDS_tcu_controller,
LDS_throttle_model,
LDS_high_pressure_fuel_pump,
LDS_injector_model,
LDS_launch_control_state,
LDS_antilag_system_state,
LDS_boost_control,
LDS_ac_control,
LDS_fan_control0,
LDS_fan_control1,
LDS_fuel_pump_control,
LDS_main_relay,
LDS_engine_state,
LDS_tps_accel_state,
LDS_trigger_central,
LDS_trigger_state0,
LDS_trigger_state1,
LDS_trigger_state2,
LDS_trigger_state3,
LDS_trigger_state4,
LDS_trigger_state_primary,
LDS_wall_fuel_state,
LDS_idle_state,
LDS_electronic_throttle0,
LDS_electronic_throttle1,
LDS_wideband_state0,
LDS_wideband_state1,
LDS_dc_motors,
LDS_sent_state,
LDS_vvt,
LDS_lambda_monitor,
} live_data_e;
#define OUTPUT_CHANNELS_BASE_ADDRESS 0
#define FUEL_COMPUTER_BASE_ADDRESS 840
#define IGNITION_STATE_BASE_ADDRESS 892
#define KNOCK_CONTROLLER_BASE_ADDRESS 932
#define TCU_CONTROLLER_BASE_ADDRESS 968
#define THROTTLE_MODEL_BASE_ADDRESS 984
#define HIGH_PRESSURE_FUEL_PUMP_BASE_ADDRESS 996
#define INJECTOR_MODEL_BASE_ADDRESS 1024
#define LAUNCH_CONTROL_STATE_BASE_ADDRESS 1036
#define ANTILAG_SYSTEM_STATE_BASE_ADDRESS 1044
#define BOOST_CONTROL_BASE_ADDRESS 1056
#define AC_CONTROL_BASE_ADDRESS 1080
#define FAN_CONTROL_BASE_ADDRESS 1092
#define FUEL_PUMP_CONTROL_BASE_ADDRESS 1108
#define MAIN_RELAY_BASE_ADDRESS 1112
#define ENGINE_STATE_BASE_ADDRESS 1116
#define TPS_ACCEL_STATE_BASE_ADDRESS 1216
#define TRIGGER_CENTRAL_BASE_ADDRESS 1264
#define TRIGGER_STATE_BASE_ADDRESS 1328
#define TRIGGER_STATE_PRIMARY_BASE_ADDRESS 1528
#define WALL_FUEL_STATE_BASE_ADDRESS 1536
#define IDLE_STATE_BASE_ADDRESS 1544
#define ELECTRONIC_THROTTLE_BASE_ADDRESS 1592
#define WIDEBAND_STATE_BASE_ADDRESS 1696
#define DC_MOTORS_BASE_ADDRESS 1720
#define SENT_STATE_BASE_ADDRESS 1732
#define VVT_BASE_ADDRESS 1740
#define LAMBDA_MONITOR_BASE_ADDRESS 1744

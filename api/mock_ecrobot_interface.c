#include "mock_ecrobot_interface.h"
#include "PCUnit/PCUnit.h"

struct mock_ecrobot_interface_t {
	nxt_motor_get_count_Callback nxt_motor_get_count_funcptr;
	nxt_motor_set_count_Callback nxt_motor_set_count_funcptr;
	nxt_motor_set_speed_Callback nxt_motor_set_speed_funcptr;
	ecrobot_set_light_sensor_active_Callback ecrobot_set_light_sensor_active_funcptr;
	ecrobot_set_light_sensor_inactive_Callback ecrobot_set_light_sensor_inactive_funcptr;
	ecrobot_get_light_sensor_Callback ecrobot_get_light_sensor_funcptr;
	ecrobot_get_touch_sensor_Callback ecrobot_get_touch_sensor_funcptr;
	ecrobot_init_sonar_sensor_Callback ecrobot_init_sonar_sensor_funcptr;
	ecrobot_get_sonar_sensor_Callback ecrobot_get_sonar_sensor_funcptr;
	ecrobot_term_sonar_sensor_Callback ecrobot_term_sonar_sensor_funcptr;
	ecrobot_init_bt_master_Callback ecrobot_init_bt_master_funcptr;
	ecrobot_init_bt_slave_Callback ecrobot_init_bt_slave_funcptr;
	ecrobot_get_bt_device_name_Callback ecrobot_get_bt_device_name_funcptr;
	ecrobot_set_bt_device_name_Callback ecrobot_set_bt_device_name_funcptr;
	ecrobot_get_bt_status_Callback ecrobot_get_bt_status_funcptr;
	ecrobot_get_bt_signal_strength_Callback ecrobot_get_bt_signal_strength_funcptr;
	ecrobot_send_bt_packet_Callback ecrobot_send_bt_packet_funcptr;
	ecrobot_send_bt_Callback ecrobot_send_bt_funcptr;
	ecrobot_read_bt_packet_Callback ecrobot_read_bt_packet_funcptr;
	ecrobot_read_bt_Callback ecrobot_read_bt_funcptr;
	ecrobot_set_bt_factory_settings_Callback ecrobot_set_bt_factory_settings_funcptr;
	ecrobot_term_bt_connection_Callback ecrobot_term_bt_connection_funcptr;
	ecrobot_bt_data_logger_Callback ecrobot_bt_data_logger_funcptr;
	ecrobot_bmp2lcd_Callback ecrobot_bmp2lcd_funcptr;
	display_bitmap_copy_Callback display_bitmap_copy_funcptr;
	display_update_Callback display_update_funcptr;
	display_clear_Callback display_clear_funcptr;
	display_goto_xy_Callback display_goto_xy_funcptr;
	display_string_Callback display_string_funcptr;
	display_hex_Callback display_hex_funcptr;
	display_unsigned_Callback display_unsigned_funcptr;
	display_int_Callback display_int_funcptr;
	ecrobot_status_monitor_Callback ecrobot_status_monitor_funcptr;
	ecrobot_sound_tone_Callback ecrobot_sound_tone_funcptr;
	ecrobot_sound_wav_Callback ecrobot_sound_wav_funcptr;
	ecrobot_is_ENTER_button_pressed_Callback ecrobot_is_ENTER_button_pressed_funcptr;
	ecrobot_is_RUN_button_pressed_Callback ecrobot_is_RUN_button_pressed_funcptr;
	ecrobot_get_battery_voltage_Callback ecrobot_get_battery_voltage_funcptr;
	systick_get_ms_Callback systick_get_ms_funcptr;
	systick_wait_ms_Callback systick_wait_ms_funcptr;
	ecrobot_get_gyro_sensor_Callback ecrobot_get_gyro_sensor_funcptr;
	const nxt_motor_get_count_Expectation *nxt_motor_get_count_expectations;
	const nxt_motor_set_count_Expectation *nxt_motor_set_count_expectations;
	const nxt_motor_set_speed_Expectation *nxt_motor_set_speed_expectations;
	const ecrobot_set_light_sensor_active_Expectation *ecrobot_set_light_sensor_active_expectations;
	const ecrobot_set_light_sensor_inactive_Expectation *ecrobot_set_light_sensor_inactive_expectations;
	const ecrobot_get_light_sensor_Expectation *ecrobot_get_light_sensor_expectations;
	const ecrobot_get_touch_sensor_Expectation *ecrobot_get_touch_sensor_expectations;
	const ecrobot_init_sonar_sensor_Expectation *ecrobot_init_sonar_sensor_expectations;
	const ecrobot_get_sonar_sensor_Expectation *ecrobot_get_sonar_sensor_expectations;
	const ecrobot_term_sonar_sensor_Expectation *ecrobot_term_sonar_sensor_expectations;
	const ecrobot_init_bt_master_Expectation *ecrobot_init_bt_master_expectations;
	const ecrobot_init_bt_slave_Expectation *ecrobot_init_bt_slave_expectations;
	const ecrobot_get_bt_device_name_Expectation *ecrobot_get_bt_device_name_expectations;
	const ecrobot_set_bt_device_name_Expectation *ecrobot_set_bt_device_name_expectations;
	const ecrobot_get_bt_status_Expectation *ecrobot_get_bt_status_expectations;
	const ecrobot_get_bt_signal_strength_Expectation *ecrobot_get_bt_signal_strength_expectations;
	const ecrobot_send_bt_packet_Expectation *ecrobot_send_bt_packet_expectations;
	const ecrobot_send_bt_Expectation *ecrobot_send_bt_expectations;
	const ecrobot_read_bt_packet_Expectation *ecrobot_read_bt_packet_expectations;
	const ecrobot_read_bt_Expectation *ecrobot_read_bt_expectations;
	const ecrobot_set_bt_factory_settings_Expectation *ecrobot_set_bt_factory_settings_expectations;
	const ecrobot_term_bt_connection_Expectation *ecrobot_term_bt_connection_expectations;
	const ecrobot_bt_data_logger_Expectation *ecrobot_bt_data_logger_expectations;
	const ecrobot_bmp2lcd_Expectation *ecrobot_bmp2lcd_expectations;
	const display_bitmap_copy_Expectation *display_bitmap_copy_expectations;
	const display_update_Expectation *display_update_expectations;
	const display_clear_Expectation *display_clear_expectations;
	const display_goto_xy_Expectation *display_goto_xy_expectations;
	const display_string_Expectation *display_string_expectations;
	const display_hex_Expectation *display_hex_expectations;
	const display_unsigned_Expectation *display_unsigned_expectations;
	const display_int_Expectation *display_int_expectations;
	const ecrobot_status_monitor_Expectation *ecrobot_status_monitor_expectations;
	const ecrobot_sound_tone_Expectation *ecrobot_sound_tone_expectations;
	const ecrobot_sound_wav_Expectation *ecrobot_sound_wav_expectations;
	const ecrobot_is_ENTER_button_pressed_Expectation *ecrobot_is_ENTER_button_pressed_expectations;
	const ecrobot_is_RUN_button_pressed_Expectation *ecrobot_is_RUN_button_pressed_expectations;
	const ecrobot_get_battery_voltage_Expectation *ecrobot_get_battery_voltage_expectations;
	const systick_get_ms_Expectation *systick_get_ms_expectations;
	const systick_wait_ms_Expectation *systick_wait_ms_expectations;
	const ecrobot_get_gyro_sensor_Expectation *ecrobot_get_gyro_sensor_expectations;
	const char *nxt_motor_get_count_file;
	const char *nxt_motor_set_count_file;
	const char *nxt_motor_set_speed_file;
	const char *ecrobot_set_light_sensor_active_file;
	const char *ecrobot_set_light_sensor_inactive_file;
	const char *ecrobot_get_light_sensor_file;
	const char *ecrobot_get_touch_sensor_file;
	const char *ecrobot_init_sonar_sensor_file;
	const char *ecrobot_get_sonar_sensor_file;
	const char *ecrobot_term_sonar_sensor_file;
	const char *ecrobot_init_bt_master_file;
	const char *ecrobot_init_bt_slave_file;
	const char *ecrobot_get_bt_device_name_file;
	const char *ecrobot_set_bt_device_name_file;
	const char *ecrobot_get_bt_status_file;
	const char *ecrobot_get_bt_signal_strength_file;
	const char *ecrobot_send_bt_packet_file;
	const char *ecrobot_send_bt_file;
	const char *ecrobot_read_bt_packet_file;
	const char *ecrobot_read_bt_file;
	const char *ecrobot_set_bt_factory_settings_file;
	const char *ecrobot_term_bt_connection_file;
	const char *ecrobot_bt_data_logger_file;
	const char *ecrobot_bmp2lcd_file;
	const char *display_bitmap_copy_file;
	const char *display_update_file;
	const char *display_clear_file;
	const char *display_goto_xy_file;
	const char *display_string_file;
	const char *display_hex_file;
	const char *display_unsigned_file;
	const char *display_int_file;
	const char *ecrobot_status_monitor_file;
	const char *ecrobot_sound_tone_file;
	const char *ecrobot_sound_wav_file;
	const char *ecrobot_is_ENTER_button_pressed_file;
	const char *ecrobot_is_RUN_button_pressed_file;
	const char *ecrobot_get_battery_voltage_file;
	const char *systick_get_ms_file;
	const char *systick_wait_ms_file;
	const char *ecrobot_get_gyro_sensor_file;
	int nxt_motor_get_count_expected_num_calls;
	int nxt_motor_set_count_expected_num_calls;
	int nxt_motor_set_speed_expected_num_calls;
	int ecrobot_set_light_sensor_active_expected_num_calls;
	int ecrobot_set_light_sensor_inactive_expected_num_calls;
	int ecrobot_get_light_sensor_expected_num_calls;
	int ecrobot_get_touch_sensor_expected_num_calls;
	int ecrobot_init_sonar_sensor_expected_num_calls;
	int ecrobot_get_sonar_sensor_expected_num_calls;
	int ecrobot_term_sonar_sensor_expected_num_calls;
	int ecrobot_init_bt_master_expected_num_calls;
	int ecrobot_init_bt_slave_expected_num_calls;
	int ecrobot_get_bt_device_name_expected_num_calls;
	int ecrobot_set_bt_device_name_expected_num_calls;
	int ecrobot_get_bt_status_expected_num_calls;
	int ecrobot_get_bt_signal_strength_expected_num_calls;
	int ecrobot_send_bt_packet_expected_num_calls;
	int ecrobot_send_bt_expected_num_calls;
	int ecrobot_read_bt_packet_expected_num_calls;
	int ecrobot_read_bt_expected_num_calls;
	int ecrobot_set_bt_factory_settings_expected_num_calls;
	int ecrobot_term_bt_connection_expected_num_calls;
	int ecrobot_bt_data_logger_expected_num_calls;
	int ecrobot_bmp2lcd_expected_num_calls;
	int display_bitmap_copy_expected_num_calls;
	int display_update_expected_num_calls;
	int display_clear_expected_num_calls;
	int display_goto_xy_expected_num_calls;
	int display_string_expected_num_calls;
	int display_hex_expected_num_calls;
	int display_unsigned_expected_num_calls;
	int display_int_expected_num_calls;
	int ecrobot_status_monitor_expected_num_calls;
	int ecrobot_sound_tone_expected_num_calls;
	int ecrobot_sound_wav_expected_num_calls;
	int ecrobot_is_ENTER_button_pressed_expected_num_calls;
	int ecrobot_is_RUN_button_pressed_expected_num_calls;
	int ecrobot_get_battery_voltage_expected_num_calls;
	int systick_get_ms_expected_num_calls;
	int systick_wait_ms_expected_num_calls;
	int ecrobot_get_gyro_sensor_expected_num_calls;
	int nxt_motor_get_count_actual_num_calls;
	int nxt_motor_set_count_actual_num_calls;
	int nxt_motor_set_speed_actual_num_calls;
	int ecrobot_set_light_sensor_active_actual_num_calls;
	int ecrobot_set_light_sensor_inactive_actual_num_calls;
	int ecrobot_get_light_sensor_actual_num_calls;
	int ecrobot_get_touch_sensor_actual_num_calls;
	int ecrobot_init_sonar_sensor_actual_num_calls;
	int ecrobot_get_sonar_sensor_actual_num_calls;
	int ecrobot_term_sonar_sensor_actual_num_calls;
	int ecrobot_init_bt_master_actual_num_calls;
	int ecrobot_init_bt_slave_actual_num_calls;
	int ecrobot_get_bt_device_name_actual_num_calls;
	int ecrobot_set_bt_device_name_actual_num_calls;
	int ecrobot_get_bt_status_actual_num_calls;
	int ecrobot_get_bt_signal_strength_actual_num_calls;
	int ecrobot_send_bt_packet_actual_num_calls;
	int ecrobot_send_bt_actual_num_calls;
	int ecrobot_read_bt_packet_actual_num_calls;
	int ecrobot_read_bt_actual_num_calls;
	int ecrobot_set_bt_factory_settings_actual_num_calls;
	int ecrobot_term_bt_connection_actual_num_calls;
	int ecrobot_bt_data_logger_actual_num_calls;
	int ecrobot_bmp2lcd_actual_num_calls;
	int display_bitmap_copy_actual_num_calls;
	int display_update_actual_num_calls;
	int display_clear_actual_num_calls;
	int display_goto_xy_actual_num_calls;
	int display_string_actual_num_calls;
	int display_hex_actual_num_calls;
	int display_unsigned_actual_num_calls;
	int display_int_actual_num_calls;
	int ecrobot_status_monitor_actual_num_calls;
	int ecrobot_sound_tone_actual_num_calls;
	int ecrobot_sound_wav_actual_num_calls;
	int ecrobot_is_ENTER_button_pressed_actual_num_calls;
	int ecrobot_is_RUN_button_pressed_actual_num_calls;
	int ecrobot_get_battery_voltage_actual_num_calls;
	int systick_get_ms_actual_num_calls;
	int systick_wait_ms_actual_num_calls;
	int ecrobot_get_gyro_sensor_actual_num_calls;
	unsigned int nxt_motor_get_count_line;
	unsigned int nxt_motor_set_count_line;
	unsigned int nxt_motor_set_speed_line;
	unsigned int ecrobot_set_light_sensor_active_line;
	unsigned int ecrobot_set_light_sensor_inactive_line;
	unsigned int ecrobot_get_light_sensor_line;
	unsigned int ecrobot_get_touch_sensor_line;
	unsigned int ecrobot_init_sonar_sensor_line;
	unsigned int ecrobot_get_sonar_sensor_line;
	unsigned int ecrobot_term_sonar_sensor_line;
	unsigned int ecrobot_init_bt_master_line;
	unsigned int ecrobot_init_bt_slave_line;
	unsigned int ecrobot_get_bt_device_name_line;
	unsigned int ecrobot_set_bt_device_name_line;
	unsigned int ecrobot_get_bt_status_line;
	unsigned int ecrobot_get_bt_signal_strength_line;
	unsigned int ecrobot_send_bt_packet_line;
	unsigned int ecrobot_send_bt_line;
	unsigned int ecrobot_read_bt_packet_line;
	unsigned int ecrobot_read_bt_line;
	unsigned int ecrobot_set_bt_factory_settings_line;
	unsigned int ecrobot_term_bt_connection_line;
	unsigned int ecrobot_bt_data_logger_line;
	unsigned int ecrobot_bmp2lcd_line;
	unsigned int display_bitmap_copy_line;
	unsigned int display_update_line;
	unsigned int display_clear_line;
	unsigned int display_goto_xy_line;
	unsigned int display_string_line;
	unsigned int display_hex_line;
	unsigned int display_unsigned_line;
	unsigned int display_int_line;
	unsigned int ecrobot_status_monitor_line;
	unsigned int ecrobot_sound_tone_line;
	unsigned int ecrobot_sound_wav_line;
	unsigned int ecrobot_is_ENTER_button_pressed_line;
	unsigned int ecrobot_is_RUN_button_pressed_line;
	unsigned int ecrobot_get_battery_voltage_line;
	unsigned int systick_get_ms_line;
	unsigned int systick_wait_ms_line;
	unsigned int ecrobot_get_gyro_sensor_line;
};
static struct mock_ecrobot_interface_t mock_ecrobot_interface;

void mock_ecrobot_interface_init(void)
{
	char *p = (char *) &mock_ecrobot_interface;
	size_t i;
	for (i = 0; i < sizeof mock_ecrobot_interface; i++) {
		*(p++) = 0;
	}
}

#ifdef _MSC_VER
#define LINE_FORMAT	"(%u) "
#else
#define LINE_FORMAT	":%u"
#endif

void mock_ecrobot_interface_verify_aux(const char *file, unsigned int line)
{
	if (PCU_test_has_failed()) {
		return;
	}
	if ((mock_ecrobot_interface.nxt_motor_get_count_expectations || mock_ecrobot_interface.nxt_motor_get_count_funcptr) && mock_ecrobot_interface.nxt_motor_get_count_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.nxt_motor_get_count_expected_num_calls, mock_ecrobot_interface.nxt_motor_get_count_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of nxt_motor_get_count().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.nxt_motor_set_count_expectations || mock_ecrobot_interface.nxt_motor_set_count_funcptr) && mock_ecrobot_interface.nxt_motor_set_count_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.nxt_motor_set_count_expected_num_calls, mock_ecrobot_interface.nxt_motor_set_count_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of nxt_motor_set_count().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.nxt_motor_set_speed_expectations || mock_ecrobot_interface.nxt_motor_set_speed_funcptr) && mock_ecrobot_interface.nxt_motor_set_speed_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.nxt_motor_set_speed_expected_num_calls, mock_ecrobot_interface.nxt_motor_set_speed_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of nxt_motor_set_speed().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_set_light_sensor_active_expectations || mock_ecrobot_interface.ecrobot_set_light_sensor_active_funcptr) && mock_ecrobot_interface.ecrobot_set_light_sensor_active_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_set_light_sensor_active_expected_num_calls, mock_ecrobot_interface.ecrobot_set_light_sensor_active_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_set_light_sensor_active().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_expectations || mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_funcptr) && mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_expected_num_calls, mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_set_light_sensor_inactive().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_get_light_sensor_expectations || mock_ecrobot_interface.ecrobot_get_light_sensor_funcptr) && mock_ecrobot_interface.ecrobot_get_light_sensor_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_get_light_sensor_expected_num_calls, mock_ecrobot_interface.ecrobot_get_light_sensor_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_light_sensor().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_get_touch_sensor_expectations || mock_ecrobot_interface.ecrobot_get_touch_sensor_funcptr) && mock_ecrobot_interface.ecrobot_get_touch_sensor_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_get_touch_sensor_expected_num_calls, mock_ecrobot_interface.ecrobot_get_touch_sensor_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_touch_sensor().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_init_sonar_sensor_expectations || mock_ecrobot_interface.ecrobot_init_sonar_sensor_funcptr) && mock_ecrobot_interface.ecrobot_init_sonar_sensor_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_init_sonar_sensor_expected_num_calls, mock_ecrobot_interface.ecrobot_init_sonar_sensor_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_init_sonar_sensor().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_get_sonar_sensor_expectations || mock_ecrobot_interface.ecrobot_get_sonar_sensor_funcptr) && mock_ecrobot_interface.ecrobot_get_sonar_sensor_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_get_sonar_sensor_expected_num_calls, mock_ecrobot_interface.ecrobot_get_sonar_sensor_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_sonar_sensor().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_term_sonar_sensor_expectations || mock_ecrobot_interface.ecrobot_term_sonar_sensor_funcptr) && mock_ecrobot_interface.ecrobot_term_sonar_sensor_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_term_sonar_sensor_expected_num_calls, mock_ecrobot_interface.ecrobot_term_sonar_sensor_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_term_sonar_sensor().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_init_bt_master_expectations || mock_ecrobot_interface.ecrobot_init_bt_master_funcptr) && mock_ecrobot_interface.ecrobot_init_bt_master_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_init_bt_master_expected_num_calls, mock_ecrobot_interface.ecrobot_init_bt_master_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_init_bt_master().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_init_bt_slave_expectations || mock_ecrobot_interface.ecrobot_init_bt_slave_funcptr) && mock_ecrobot_interface.ecrobot_init_bt_slave_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_init_bt_slave_expected_num_calls, mock_ecrobot_interface.ecrobot_init_bt_slave_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_init_bt_slave().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_get_bt_device_name_expectations || mock_ecrobot_interface.ecrobot_get_bt_device_name_funcptr) && mock_ecrobot_interface.ecrobot_get_bt_device_name_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_get_bt_device_name_expected_num_calls, mock_ecrobot_interface.ecrobot_get_bt_device_name_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_bt_device_name().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_set_bt_device_name_expectations || mock_ecrobot_interface.ecrobot_set_bt_device_name_funcptr) && mock_ecrobot_interface.ecrobot_set_bt_device_name_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_set_bt_device_name_expected_num_calls, mock_ecrobot_interface.ecrobot_set_bt_device_name_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_set_bt_device_name().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_get_bt_status_expectations || mock_ecrobot_interface.ecrobot_get_bt_status_funcptr) && mock_ecrobot_interface.ecrobot_get_bt_status_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_get_bt_status_expected_num_calls, mock_ecrobot_interface.ecrobot_get_bt_status_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_bt_status().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_get_bt_signal_strength_expectations || mock_ecrobot_interface.ecrobot_get_bt_signal_strength_funcptr) && mock_ecrobot_interface.ecrobot_get_bt_signal_strength_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_get_bt_signal_strength_expected_num_calls, mock_ecrobot_interface.ecrobot_get_bt_signal_strength_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_bt_signal_strength().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_send_bt_packet_expectations || mock_ecrobot_interface.ecrobot_send_bt_packet_funcptr) && mock_ecrobot_interface.ecrobot_send_bt_packet_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_send_bt_packet_expected_num_calls, mock_ecrobot_interface.ecrobot_send_bt_packet_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_send_bt_packet().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_send_bt_expectations || mock_ecrobot_interface.ecrobot_send_bt_funcptr) && mock_ecrobot_interface.ecrobot_send_bt_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_send_bt_expected_num_calls, mock_ecrobot_interface.ecrobot_send_bt_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_send_bt().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_read_bt_packet_expectations || mock_ecrobot_interface.ecrobot_read_bt_packet_funcptr) && mock_ecrobot_interface.ecrobot_read_bt_packet_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_read_bt_packet_expected_num_calls, mock_ecrobot_interface.ecrobot_read_bt_packet_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_read_bt_packet().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_read_bt_expectations || mock_ecrobot_interface.ecrobot_read_bt_funcptr) && mock_ecrobot_interface.ecrobot_read_bt_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_read_bt_expected_num_calls, mock_ecrobot_interface.ecrobot_read_bt_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_read_bt().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_set_bt_factory_settings_expectations || mock_ecrobot_interface.ecrobot_set_bt_factory_settings_funcptr) && mock_ecrobot_interface.ecrobot_set_bt_factory_settings_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_set_bt_factory_settings_expected_num_calls, mock_ecrobot_interface.ecrobot_set_bt_factory_settings_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_set_bt_factory_settings().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_term_bt_connection_expectations || mock_ecrobot_interface.ecrobot_term_bt_connection_funcptr) && mock_ecrobot_interface.ecrobot_term_bt_connection_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_term_bt_connection_expected_num_calls, mock_ecrobot_interface.ecrobot_term_bt_connection_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_term_bt_connection().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_bt_data_logger_expectations || mock_ecrobot_interface.ecrobot_bt_data_logger_funcptr) && mock_ecrobot_interface.ecrobot_bt_data_logger_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_bt_data_logger_expected_num_calls, mock_ecrobot_interface.ecrobot_bt_data_logger_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_bt_data_logger().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_bmp2lcd_expectations || mock_ecrobot_interface.ecrobot_bmp2lcd_funcptr) && mock_ecrobot_interface.ecrobot_bmp2lcd_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_bmp2lcd_expected_num_calls, mock_ecrobot_interface.ecrobot_bmp2lcd_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_bmp2lcd().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.display_bitmap_copy_expectations || mock_ecrobot_interface.display_bitmap_copy_funcptr) && mock_ecrobot_interface.display_bitmap_copy_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.display_bitmap_copy_expected_num_calls, mock_ecrobot_interface.display_bitmap_copy_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_bitmap_copy().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.display_update_expectations || mock_ecrobot_interface.display_update_funcptr) && mock_ecrobot_interface.display_update_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.display_update_expected_num_calls, mock_ecrobot_interface.display_update_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_update().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.display_clear_expectations || mock_ecrobot_interface.display_clear_funcptr) && mock_ecrobot_interface.display_clear_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.display_clear_expected_num_calls, mock_ecrobot_interface.display_clear_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_clear().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.display_goto_xy_expectations || mock_ecrobot_interface.display_goto_xy_funcptr) && mock_ecrobot_interface.display_goto_xy_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.display_goto_xy_expected_num_calls, mock_ecrobot_interface.display_goto_xy_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_goto_xy().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.display_string_expectations || mock_ecrobot_interface.display_string_funcptr) && mock_ecrobot_interface.display_string_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.display_string_expected_num_calls, mock_ecrobot_interface.display_string_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_string().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.display_hex_expectations || mock_ecrobot_interface.display_hex_funcptr) && mock_ecrobot_interface.display_hex_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.display_hex_expected_num_calls, mock_ecrobot_interface.display_hex_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_hex().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.display_unsigned_expectations || mock_ecrobot_interface.display_unsigned_funcptr) && mock_ecrobot_interface.display_unsigned_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.display_unsigned_expected_num_calls, mock_ecrobot_interface.display_unsigned_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_unsigned().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.display_int_expectations || mock_ecrobot_interface.display_int_funcptr) && mock_ecrobot_interface.display_int_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.display_int_expected_num_calls, mock_ecrobot_interface.display_int_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_int().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_status_monitor_expectations || mock_ecrobot_interface.ecrobot_status_monitor_funcptr) && mock_ecrobot_interface.ecrobot_status_monitor_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_status_monitor_expected_num_calls, mock_ecrobot_interface.ecrobot_status_monitor_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_status_monitor().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_sound_tone_expectations || mock_ecrobot_interface.ecrobot_sound_tone_funcptr) && mock_ecrobot_interface.ecrobot_sound_tone_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_sound_tone_expected_num_calls, mock_ecrobot_interface.ecrobot_sound_tone_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_sound_tone().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_sound_wav_expectations || mock_ecrobot_interface.ecrobot_sound_wav_funcptr) && mock_ecrobot_interface.ecrobot_sound_wav_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_sound_wav_expected_num_calls, mock_ecrobot_interface.ecrobot_sound_wav_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_sound_wav().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_expectations || mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_funcptr) && mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_expected_num_calls, mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_is_ENTER_button_pressed().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_expectations || mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_funcptr) && mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_expected_num_calls, mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_is_RUN_button_pressed().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_get_battery_voltage_expectations || mock_ecrobot_interface.ecrobot_get_battery_voltage_funcptr) && mock_ecrobot_interface.ecrobot_get_battery_voltage_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_get_battery_voltage_expected_num_calls, mock_ecrobot_interface.ecrobot_get_battery_voltage_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_battery_voltage().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.systick_get_ms_expectations || mock_ecrobot_interface.systick_get_ms_funcptr) && mock_ecrobot_interface.systick_get_ms_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.systick_get_ms_expected_num_calls, mock_ecrobot_interface.systick_get_ms_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of systick_get_ms().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.systick_wait_ms_expectations || mock_ecrobot_interface.systick_wait_ms_funcptr) && mock_ecrobot_interface.systick_wait_ms_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.systick_wait_ms_expected_num_calls, mock_ecrobot_interface.systick_wait_ms_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of systick_wait_ms().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
	if ((mock_ecrobot_interface.ecrobot_get_gyro_sensor_expectations || mock_ecrobot_interface.ecrobot_get_gyro_sensor_funcptr) && mock_ecrobot_interface.ecrobot_get_gyro_sensor_expected_num_calls >= 0) {
		PCU_ASSERT_EQUAL_MESSAGE(mock_ecrobot_interface.ecrobot_get_gyro_sensor_expected_num_calls, mock_ecrobot_interface.ecrobot_get_gyro_sensor_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_gyro_sensor().", file, line));
		if (PCU_test_has_failed()) {
			return;
		}
	}
}

static const char *mock_ecrobot_interface_ordinal(int num)
{
	switch (num) {
	case 1:
		return "st";
	case 2:
		return "nd";
	case 3:
		return "rd";
	default:
		return "th";
	}
}


int nxt_motor_get_count(U32 n)
{
	int ret;
	if (mock_ecrobot_interface.nxt_motor_get_count_expectations && mock_ecrobot_interface.nxt_motor_get_count_expected_num_calls >= 0) {
		const nxt_motor_get_count_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.nxt_motor_get_count_expected_num_calls, >, mock_ecrobot_interface.nxt_motor_get_count_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of nxt_motor_get_count().", mock_ecrobot_interface.nxt_motor_get_count_file, mock_ecrobot_interface.nxt_motor_get_count_line));
		e = mock_ecrobot_interface.nxt_motor_get_count_expectations + mock_ecrobot_interface.nxt_motor_get_count_actual_num_calls;
		if (!e->ignored.n) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.n, &n, sizeof(n), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'n' of nxt_motor_get_count() called for the %d%s time.", mock_ecrobot_interface.nxt_motor_get_count_file, mock_ecrobot_interface.nxt_motor_get_count_line, mock_ecrobot_interface.nxt_motor_get_count_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.nxt_motor_get_count_actual_num_calls)));
		}
		ret = e->retval;
	} else if (mock_ecrobot_interface.nxt_motor_get_count_funcptr) {
		if (mock_ecrobot_interface.nxt_motor_get_count_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.nxt_motor_get_count_expected_num_calls, >, mock_ecrobot_interface.nxt_motor_get_count_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of nxt_motor_get_count().", mock_ecrobot_interface.nxt_motor_get_count_file, mock_ecrobot_interface.nxt_motor_get_count_line));
		}
		ret = mock_ecrobot_interface.nxt_motor_get_count_funcptr(n);
	} else {
		PCU_FAIL("Call nxt_motor_get_count_expect() or nxt_motor_get_count_set_callback().");
	}
	mock_ecrobot_interface.nxt_motor_get_count_actual_num_calls++;
	return ret;
}

void nxt_motor_get_count_expect_aux(const nxt_motor_get_count_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.nxt_motor_get_count_expectations = expectations;
	mock_ecrobot_interface.nxt_motor_get_count_expected_num_calls = num;
	mock_ecrobot_interface.nxt_motor_get_count_file = file;
	mock_ecrobot_interface.nxt_motor_get_count_line = line;
}

void nxt_motor_get_count_set_callback_aux(nxt_motor_get_count_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.nxt_motor_get_count_funcptr = callback;
	mock_ecrobot_interface.nxt_motor_get_count_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.nxt_motor_get_count_file = file;
	mock_ecrobot_interface.nxt_motor_get_count_line = line;
}

int nxt_motor_get_count_num_calls(void)
{
	return mock_ecrobot_interface.nxt_motor_get_count_actual_num_calls;
}

void nxt_motor_set_count(U32 n, int count)
{
	if (mock_ecrobot_interface.nxt_motor_set_count_expectations && mock_ecrobot_interface.nxt_motor_set_count_expected_num_calls >= 0) {
		const nxt_motor_set_count_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.nxt_motor_set_count_expected_num_calls, >, mock_ecrobot_interface.nxt_motor_set_count_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of nxt_motor_set_count().", mock_ecrobot_interface.nxt_motor_set_count_file, mock_ecrobot_interface.nxt_motor_set_count_line));
		e = mock_ecrobot_interface.nxt_motor_set_count_expectations + mock_ecrobot_interface.nxt_motor_set_count_actual_num_calls;
		if (!e->ignored.n) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.n, &n, sizeof(n), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'n' of nxt_motor_set_count() called for the %d%s time.", mock_ecrobot_interface.nxt_motor_set_count_file, mock_ecrobot_interface.nxt_motor_set_count_line, mock_ecrobot_interface.nxt_motor_set_count_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.nxt_motor_set_count_actual_num_calls)));
		}
		if (!e->ignored.count) {
			PCU_ASSERT_EQUAL_MESSAGE(e->expected.count, count, PCU_format("%s" LINE_FORMAT ": Check the parameter 'count' of nxt_motor_set_count() called for the %d%s time.", mock_ecrobot_interface.nxt_motor_set_count_file, mock_ecrobot_interface.nxt_motor_set_count_line, mock_ecrobot_interface.nxt_motor_set_count_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.nxt_motor_set_count_actual_num_calls)));
		}
	} else if (mock_ecrobot_interface.nxt_motor_set_count_funcptr) {
		if (mock_ecrobot_interface.nxt_motor_set_count_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.nxt_motor_set_count_expected_num_calls, >, mock_ecrobot_interface.nxt_motor_set_count_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of nxt_motor_set_count().", mock_ecrobot_interface.nxt_motor_set_count_file, mock_ecrobot_interface.nxt_motor_set_count_line));
		}
		mock_ecrobot_interface.nxt_motor_set_count_funcptr(n, count);
	} else {
		PCU_FAIL("Call nxt_motor_set_count_expect() or nxt_motor_set_count_set_callback().");
	}
	mock_ecrobot_interface.nxt_motor_set_count_actual_num_calls++;
}

void nxt_motor_set_count_expect_aux(const nxt_motor_set_count_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.nxt_motor_set_count_expectations = expectations;
	mock_ecrobot_interface.nxt_motor_set_count_expected_num_calls = num;
	mock_ecrobot_interface.nxt_motor_set_count_file = file;
	mock_ecrobot_interface.nxt_motor_set_count_line = line;
}

void nxt_motor_set_count_set_callback_aux(nxt_motor_set_count_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.nxt_motor_set_count_funcptr = callback;
	mock_ecrobot_interface.nxt_motor_set_count_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.nxt_motor_set_count_file = file;
	mock_ecrobot_interface.nxt_motor_set_count_line = line;
}

int nxt_motor_set_count_num_calls(void)
{
	return mock_ecrobot_interface.nxt_motor_set_count_actual_num_calls;
}

void nxt_motor_set_speed(U32 n, int speed_percent, int brake)
{
	if (mock_ecrobot_interface.nxt_motor_set_speed_expectations && mock_ecrobot_interface.nxt_motor_set_speed_expected_num_calls >= 0) {
		const nxt_motor_set_speed_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.nxt_motor_set_speed_expected_num_calls, >, mock_ecrobot_interface.nxt_motor_set_speed_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of nxt_motor_set_speed().", mock_ecrobot_interface.nxt_motor_set_speed_file, mock_ecrobot_interface.nxt_motor_set_speed_line));
		e = mock_ecrobot_interface.nxt_motor_set_speed_expectations + mock_ecrobot_interface.nxt_motor_set_speed_actual_num_calls;
		if (!e->ignored.n) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.n, &n, sizeof(n), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'n' of nxt_motor_set_speed() called for the %d%s time.", mock_ecrobot_interface.nxt_motor_set_speed_file, mock_ecrobot_interface.nxt_motor_set_speed_line, mock_ecrobot_interface.nxt_motor_set_speed_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.nxt_motor_set_speed_actual_num_calls)));
		}
		if (!e->ignored.speed_percent) {
			PCU_ASSERT_EQUAL_MESSAGE(e->expected.speed_percent, speed_percent, PCU_format("%s" LINE_FORMAT ": Check the parameter 'speed_percent' of nxt_motor_set_speed() called for the %d%s time.", mock_ecrobot_interface.nxt_motor_set_speed_file, mock_ecrobot_interface.nxt_motor_set_speed_line, mock_ecrobot_interface.nxt_motor_set_speed_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.nxt_motor_set_speed_actual_num_calls)));
		}
		if (!e->ignored.brake) {
			PCU_ASSERT_EQUAL_MESSAGE(e->expected.brake, brake, PCU_format("%s" LINE_FORMAT ": Check the parameter 'brake' of nxt_motor_set_speed() called for the %d%s time.", mock_ecrobot_interface.nxt_motor_set_speed_file, mock_ecrobot_interface.nxt_motor_set_speed_line, mock_ecrobot_interface.nxt_motor_set_speed_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.nxt_motor_set_speed_actual_num_calls)));
		}
	} else if (mock_ecrobot_interface.nxt_motor_set_speed_funcptr) {
		if (mock_ecrobot_interface.nxt_motor_set_speed_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.nxt_motor_set_speed_expected_num_calls, >, mock_ecrobot_interface.nxt_motor_set_speed_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of nxt_motor_set_speed().", mock_ecrobot_interface.nxt_motor_set_speed_file, mock_ecrobot_interface.nxt_motor_set_speed_line));
		}
		mock_ecrobot_interface.nxt_motor_set_speed_funcptr(n, speed_percent, brake);
	} else {
		PCU_FAIL("Call nxt_motor_set_speed_expect() or nxt_motor_set_speed_set_callback().");
	}
	mock_ecrobot_interface.nxt_motor_set_speed_actual_num_calls++;
}

void nxt_motor_set_speed_expect_aux(const nxt_motor_set_speed_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.nxt_motor_set_speed_expectations = expectations;
	mock_ecrobot_interface.nxt_motor_set_speed_expected_num_calls = num;
	mock_ecrobot_interface.nxt_motor_set_speed_file = file;
	mock_ecrobot_interface.nxt_motor_set_speed_line = line;
}

void nxt_motor_set_speed_set_callback_aux(nxt_motor_set_speed_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.nxt_motor_set_speed_funcptr = callback;
	mock_ecrobot_interface.nxt_motor_set_speed_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.nxt_motor_set_speed_file = file;
	mock_ecrobot_interface.nxt_motor_set_speed_line = line;
}

int nxt_motor_set_speed_num_calls(void)
{
	return mock_ecrobot_interface.nxt_motor_set_speed_actual_num_calls;
}

void ecrobot_set_light_sensor_active(U8 port_id)
{
	if (mock_ecrobot_interface.ecrobot_set_light_sensor_active_expectations && mock_ecrobot_interface.ecrobot_set_light_sensor_active_expected_num_calls >= 0) {
		const ecrobot_set_light_sensor_active_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_set_light_sensor_active_expected_num_calls, >, mock_ecrobot_interface.ecrobot_set_light_sensor_active_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_set_light_sensor_active().", mock_ecrobot_interface.ecrobot_set_light_sensor_active_file, mock_ecrobot_interface.ecrobot_set_light_sensor_active_line));
		e = mock_ecrobot_interface.ecrobot_set_light_sensor_active_expectations + mock_ecrobot_interface.ecrobot_set_light_sensor_active_actual_num_calls;
		if (!e->ignored.port_id) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.port_id, &port_id, sizeof(port_id), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'port_id' of ecrobot_set_light_sensor_active() called for the %d%s time.", mock_ecrobot_interface.ecrobot_set_light_sensor_active_file, mock_ecrobot_interface.ecrobot_set_light_sensor_active_line, mock_ecrobot_interface.ecrobot_set_light_sensor_active_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_set_light_sensor_active_actual_num_calls)));
		}
	} else if (mock_ecrobot_interface.ecrobot_set_light_sensor_active_funcptr) {
		if (mock_ecrobot_interface.ecrobot_set_light_sensor_active_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_set_light_sensor_active_expected_num_calls, >, mock_ecrobot_interface.ecrobot_set_light_sensor_active_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_set_light_sensor_active().", mock_ecrobot_interface.ecrobot_set_light_sensor_active_file, mock_ecrobot_interface.ecrobot_set_light_sensor_active_line));
		}
		mock_ecrobot_interface.ecrobot_set_light_sensor_active_funcptr(port_id);
	} else {
		PCU_FAIL("Call ecrobot_set_light_sensor_active_expect() or ecrobot_set_light_sensor_active_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_set_light_sensor_active_actual_num_calls++;
}

void ecrobot_set_light_sensor_active_expect_aux(const ecrobot_set_light_sensor_active_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_set_light_sensor_active_expectations = expectations;
	mock_ecrobot_interface.ecrobot_set_light_sensor_active_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_set_light_sensor_active_file = file;
	mock_ecrobot_interface.ecrobot_set_light_sensor_active_line = line;
}

void ecrobot_set_light_sensor_active_set_callback_aux(ecrobot_set_light_sensor_active_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_set_light_sensor_active_funcptr = callback;
	mock_ecrobot_interface.ecrobot_set_light_sensor_active_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_set_light_sensor_active_file = file;
	mock_ecrobot_interface.ecrobot_set_light_sensor_active_line = line;
}

int ecrobot_set_light_sensor_active_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_set_light_sensor_active_actual_num_calls;
}

void ecrobot_set_light_sensor_inactive(U8 port_id)
{
	if (mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_expectations && mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_expected_num_calls >= 0) {
		const ecrobot_set_light_sensor_inactive_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_expected_num_calls, >, mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_set_light_sensor_inactive().", mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_file, mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_line));
		e = mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_expectations + mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_actual_num_calls;
		if (!e->ignored.port_id) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.port_id, &port_id, sizeof(port_id), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'port_id' of ecrobot_set_light_sensor_inactive() called for the %d%s time.", mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_file, mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_line, mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_actual_num_calls)));
		}
	} else if (mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_funcptr) {
		if (mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_expected_num_calls, >, mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_set_light_sensor_inactive().", mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_file, mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_line));
		}
		mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_funcptr(port_id);
	} else {
		PCU_FAIL("Call ecrobot_set_light_sensor_inactive_expect() or ecrobot_set_light_sensor_inactive_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_actual_num_calls++;
}

void ecrobot_set_light_sensor_inactive_expect_aux(const ecrobot_set_light_sensor_inactive_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_expectations = expectations;
	mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_file = file;
	mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_line = line;
}

void ecrobot_set_light_sensor_inactive_set_callback_aux(ecrobot_set_light_sensor_inactive_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_funcptr = callback;
	mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_file = file;
	mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_line = line;
}

int ecrobot_set_light_sensor_inactive_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_set_light_sensor_inactive_actual_num_calls;
}

U16 ecrobot_get_light_sensor(U8 port_id)
{
	U16 ret;
	if (mock_ecrobot_interface.ecrobot_get_light_sensor_expectations && mock_ecrobot_interface.ecrobot_get_light_sensor_expected_num_calls >= 0) {
		const ecrobot_get_light_sensor_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_get_light_sensor_expected_num_calls, >, mock_ecrobot_interface.ecrobot_get_light_sensor_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_light_sensor().", mock_ecrobot_interface.ecrobot_get_light_sensor_file, mock_ecrobot_interface.ecrobot_get_light_sensor_line));
		e = mock_ecrobot_interface.ecrobot_get_light_sensor_expectations + mock_ecrobot_interface.ecrobot_get_light_sensor_actual_num_calls;
		if (!e->ignored.port_id) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.port_id, &port_id, sizeof(port_id), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'port_id' of ecrobot_get_light_sensor() called for the %d%s time.", mock_ecrobot_interface.ecrobot_get_light_sensor_file, mock_ecrobot_interface.ecrobot_get_light_sensor_line, mock_ecrobot_interface.ecrobot_get_light_sensor_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_get_light_sensor_actual_num_calls)));
		}
		ret = e->retval;
	} else if (mock_ecrobot_interface.ecrobot_get_light_sensor_funcptr) {
		if (mock_ecrobot_interface.ecrobot_get_light_sensor_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_get_light_sensor_expected_num_calls, >, mock_ecrobot_interface.ecrobot_get_light_sensor_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_light_sensor().", mock_ecrobot_interface.ecrobot_get_light_sensor_file, mock_ecrobot_interface.ecrobot_get_light_sensor_line));
		}
		ret = mock_ecrobot_interface.ecrobot_get_light_sensor_funcptr(port_id);
	} else {
		PCU_FAIL("Call ecrobot_get_light_sensor_expect() or ecrobot_get_light_sensor_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_get_light_sensor_actual_num_calls++;
	return ret;
}

void ecrobot_get_light_sensor_expect_aux(const ecrobot_get_light_sensor_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_get_light_sensor_expectations = expectations;
	mock_ecrobot_interface.ecrobot_get_light_sensor_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_get_light_sensor_file = file;
	mock_ecrobot_interface.ecrobot_get_light_sensor_line = line;
}

void ecrobot_get_light_sensor_set_callback_aux(ecrobot_get_light_sensor_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_get_light_sensor_funcptr = callback;
	mock_ecrobot_interface.ecrobot_get_light_sensor_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_get_light_sensor_file = file;
	mock_ecrobot_interface.ecrobot_get_light_sensor_line = line;
}

int ecrobot_get_light_sensor_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_get_light_sensor_actual_num_calls;
}

U8 ecrobot_get_touch_sensor(U8 port_id)
{
	U8 ret;
	if (mock_ecrobot_interface.ecrobot_get_touch_sensor_expectations && mock_ecrobot_interface.ecrobot_get_touch_sensor_expected_num_calls >= 0) {
		const ecrobot_get_touch_sensor_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_get_touch_sensor_expected_num_calls, >, mock_ecrobot_interface.ecrobot_get_touch_sensor_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_touch_sensor().", mock_ecrobot_interface.ecrobot_get_touch_sensor_file, mock_ecrobot_interface.ecrobot_get_touch_sensor_line));
		e = mock_ecrobot_interface.ecrobot_get_touch_sensor_expectations + mock_ecrobot_interface.ecrobot_get_touch_sensor_actual_num_calls;
		if (!e->ignored.port_id) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.port_id, &port_id, sizeof(port_id), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'port_id' of ecrobot_get_touch_sensor() called for the %d%s time.", mock_ecrobot_interface.ecrobot_get_touch_sensor_file, mock_ecrobot_interface.ecrobot_get_touch_sensor_line, mock_ecrobot_interface.ecrobot_get_touch_sensor_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_get_touch_sensor_actual_num_calls)));
		}
		ret = e->retval;
	} else if (mock_ecrobot_interface.ecrobot_get_touch_sensor_funcptr) {
		if (mock_ecrobot_interface.ecrobot_get_touch_sensor_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_get_touch_sensor_expected_num_calls, >, mock_ecrobot_interface.ecrobot_get_touch_sensor_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_touch_sensor().", mock_ecrobot_interface.ecrobot_get_touch_sensor_file, mock_ecrobot_interface.ecrobot_get_touch_sensor_line));
		}
		ret = mock_ecrobot_interface.ecrobot_get_touch_sensor_funcptr(port_id);
	} else {
		PCU_FAIL("Call ecrobot_get_touch_sensor_expect() or ecrobot_get_touch_sensor_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_get_touch_sensor_actual_num_calls++;
	return ret;
}

void ecrobot_get_touch_sensor_expect_aux(const ecrobot_get_touch_sensor_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_get_touch_sensor_expectations = expectations;
	mock_ecrobot_interface.ecrobot_get_touch_sensor_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_get_touch_sensor_file = file;
	mock_ecrobot_interface.ecrobot_get_touch_sensor_line = line;
}

void ecrobot_get_touch_sensor_set_callback_aux(ecrobot_get_touch_sensor_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_get_touch_sensor_funcptr = callback;
	mock_ecrobot_interface.ecrobot_get_touch_sensor_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_get_touch_sensor_file = file;
	mock_ecrobot_interface.ecrobot_get_touch_sensor_line = line;
}

int ecrobot_get_touch_sensor_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_get_touch_sensor_actual_num_calls;
}

void ecrobot_init_sonar_sensor(U8 port_id)
{
	if (mock_ecrobot_interface.ecrobot_init_sonar_sensor_expectations && mock_ecrobot_interface.ecrobot_init_sonar_sensor_expected_num_calls >= 0) {
		const ecrobot_init_sonar_sensor_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_init_sonar_sensor_expected_num_calls, >, mock_ecrobot_interface.ecrobot_init_sonar_sensor_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_init_sonar_sensor().", mock_ecrobot_interface.ecrobot_init_sonar_sensor_file, mock_ecrobot_interface.ecrobot_init_sonar_sensor_line));
		e = mock_ecrobot_interface.ecrobot_init_sonar_sensor_expectations + mock_ecrobot_interface.ecrobot_init_sonar_sensor_actual_num_calls;
		if (!e->ignored.port_id) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.port_id, &port_id, sizeof(port_id), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'port_id' of ecrobot_init_sonar_sensor() called for the %d%s time.", mock_ecrobot_interface.ecrobot_init_sonar_sensor_file, mock_ecrobot_interface.ecrobot_init_sonar_sensor_line, mock_ecrobot_interface.ecrobot_init_sonar_sensor_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_init_sonar_sensor_actual_num_calls)));
		}
	} else if (mock_ecrobot_interface.ecrobot_init_sonar_sensor_funcptr) {
		if (mock_ecrobot_interface.ecrobot_init_sonar_sensor_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_init_sonar_sensor_expected_num_calls, >, mock_ecrobot_interface.ecrobot_init_sonar_sensor_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_init_sonar_sensor().", mock_ecrobot_interface.ecrobot_init_sonar_sensor_file, mock_ecrobot_interface.ecrobot_init_sonar_sensor_line));
		}
		mock_ecrobot_interface.ecrobot_init_sonar_sensor_funcptr(port_id);
	} else {
		PCU_FAIL("Call ecrobot_init_sonar_sensor_expect() or ecrobot_init_sonar_sensor_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_init_sonar_sensor_actual_num_calls++;
}

void ecrobot_init_sonar_sensor_expect_aux(const ecrobot_init_sonar_sensor_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_init_sonar_sensor_expectations = expectations;
	mock_ecrobot_interface.ecrobot_init_sonar_sensor_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_init_sonar_sensor_file = file;
	mock_ecrobot_interface.ecrobot_init_sonar_sensor_line = line;
}

void ecrobot_init_sonar_sensor_set_callback_aux(ecrobot_init_sonar_sensor_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_init_sonar_sensor_funcptr = callback;
	mock_ecrobot_interface.ecrobot_init_sonar_sensor_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_init_sonar_sensor_file = file;
	mock_ecrobot_interface.ecrobot_init_sonar_sensor_line = line;
}

int ecrobot_init_sonar_sensor_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_init_sonar_sensor_actual_num_calls;
}

S32 ecrobot_get_sonar_sensor(U8 port_id)
{
	S32 ret;
	if (mock_ecrobot_interface.ecrobot_get_sonar_sensor_expectations && mock_ecrobot_interface.ecrobot_get_sonar_sensor_expected_num_calls >= 0) {
		const ecrobot_get_sonar_sensor_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_get_sonar_sensor_expected_num_calls, >, mock_ecrobot_interface.ecrobot_get_sonar_sensor_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_sonar_sensor().", mock_ecrobot_interface.ecrobot_get_sonar_sensor_file, mock_ecrobot_interface.ecrobot_get_sonar_sensor_line));
		e = mock_ecrobot_interface.ecrobot_get_sonar_sensor_expectations + mock_ecrobot_interface.ecrobot_get_sonar_sensor_actual_num_calls;
		if (!e->ignored.port_id) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.port_id, &port_id, sizeof(port_id), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'port_id' of ecrobot_get_sonar_sensor() called for the %d%s time.", mock_ecrobot_interface.ecrobot_get_sonar_sensor_file, mock_ecrobot_interface.ecrobot_get_sonar_sensor_line, mock_ecrobot_interface.ecrobot_get_sonar_sensor_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_get_sonar_sensor_actual_num_calls)));
		}
		ret = e->retval;
	} else if (mock_ecrobot_interface.ecrobot_get_sonar_sensor_funcptr) {
		if (mock_ecrobot_interface.ecrobot_get_sonar_sensor_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_get_sonar_sensor_expected_num_calls, >, mock_ecrobot_interface.ecrobot_get_sonar_sensor_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_sonar_sensor().", mock_ecrobot_interface.ecrobot_get_sonar_sensor_file, mock_ecrobot_interface.ecrobot_get_sonar_sensor_line));
		}
		ret = mock_ecrobot_interface.ecrobot_get_sonar_sensor_funcptr(port_id);
	} else {
		PCU_FAIL("Call ecrobot_get_sonar_sensor_expect() or ecrobot_get_sonar_sensor_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_get_sonar_sensor_actual_num_calls++;
	return ret;
}

void ecrobot_get_sonar_sensor_expect_aux(const ecrobot_get_sonar_sensor_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_get_sonar_sensor_expectations = expectations;
	mock_ecrobot_interface.ecrobot_get_sonar_sensor_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_get_sonar_sensor_file = file;
	mock_ecrobot_interface.ecrobot_get_sonar_sensor_line = line;
}

void ecrobot_get_sonar_sensor_set_callback_aux(ecrobot_get_sonar_sensor_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_get_sonar_sensor_funcptr = callback;
	mock_ecrobot_interface.ecrobot_get_sonar_sensor_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_get_sonar_sensor_file = file;
	mock_ecrobot_interface.ecrobot_get_sonar_sensor_line = line;
}

int ecrobot_get_sonar_sensor_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_get_sonar_sensor_actual_num_calls;
}

void ecrobot_term_sonar_sensor(U8 port_id)
{
	if (mock_ecrobot_interface.ecrobot_term_sonar_sensor_expectations && mock_ecrobot_interface.ecrobot_term_sonar_sensor_expected_num_calls >= 0) {
		const ecrobot_term_sonar_sensor_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_term_sonar_sensor_expected_num_calls, >, mock_ecrobot_interface.ecrobot_term_sonar_sensor_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_term_sonar_sensor().", mock_ecrobot_interface.ecrobot_term_sonar_sensor_file, mock_ecrobot_interface.ecrobot_term_sonar_sensor_line));
		e = mock_ecrobot_interface.ecrobot_term_sonar_sensor_expectations + mock_ecrobot_interface.ecrobot_term_sonar_sensor_actual_num_calls;
		if (!e->ignored.port_id) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.port_id, &port_id, sizeof(port_id), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'port_id' of ecrobot_term_sonar_sensor() called for the %d%s time.", mock_ecrobot_interface.ecrobot_term_sonar_sensor_file, mock_ecrobot_interface.ecrobot_term_sonar_sensor_line, mock_ecrobot_interface.ecrobot_term_sonar_sensor_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_term_sonar_sensor_actual_num_calls)));
		}
	} else if (mock_ecrobot_interface.ecrobot_term_sonar_sensor_funcptr) {
		if (mock_ecrobot_interface.ecrobot_term_sonar_sensor_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_term_sonar_sensor_expected_num_calls, >, mock_ecrobot_interface.ecrobot_term_sonar_sensor_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_term_sonar_sensor().", mock_ecrobot_interface.ecrobot_term_sonar_sensor_file, mock_ecrobot_interface.ecrobot_term_sonar_sensor_line));
		}
		mock_ecrobot_interface.ecrobot_term_sonar_sensor_funcptr(port_id);
	} else {
		PCU_FAIL("Call ecrobot_term_sonar_sensor_expect() or ecrobot_term_sonar_sensor_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_term_sonar_sensor_actual_num_calls++;
}

void ecrobot_term_sonar_sensor_expect_aux(const ecrobot_term_sonar_sensor_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_term_sonar_sensor_expectations = expectations;
	mock_ecrobot_interface.ecrobot_term_sonar_sensor_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_term_sonar_sensor_file = file;
	mock_ecrobot_interface.ecrobot_term_sonar_sensor_line = line;
}

void ecrobot_term_sonar_sensor_set_callback_aux(ecrobot_term_sonar_sensor_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_term_sonar_sensor_funcptr = callback;
	mock_ecrobot_interface.ecrobot_term_sonar_sensor_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_term_sonar_sensor_file = file;
	mock_ecrobot_interface.ecrobot_term_sonar_sensor_line = line;
}

int ecrobot_term_sonar_sensor_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_term_sonar_sensor_actual_num_calls;
}

void ecrobot_init_bt_master(const U8 *bd_addr, const CHAR *pin)
{
	if (mock_ecrobot_interface.ecrobot_init_bt_master_expectations && mock_ecrobot_interface.ecrobot_init_bt_master_expected_num_calls >= 0) {
		const ecrobot_init_bt_master_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_init_bt_master_expected_num_calls, >, mock_ecrobot_interface.ecrobot_init_bt_master_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_init_bt_master().", mock_ecrobot_interface.ecrobot_init_bt_master_file, mock_ecrobot_interface.ecrobot_init_bt_master_line));
		e = mock_ecrobot_interface.ecrobot_init_bt_master_expectations + mock_ecrobot_interface.ecrobot_init_bt_master_actual_num_calls;
		if (!e->ignored.bd_addr) {
			PCU_ASSERT_PTR_EQUAL_MESSAGE(e->expected.bd_addr, bd_addr, PCU_format("%s" LINE_FORMAT ": Check the parameter 'bd_addr' of ecrobot_init_bt_master() called for the %d%s time.", mock_ecrobot_interface.ecrobot_init_bt_master_file, mock_ecrobot_interface.ecrobot_init_bt_master_line, mock_ecrobot_interface.ecrobot_init_bt_master_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_init_bt_master_actual_num_calls)));
		}
		if (!e->ignored.pin) {
			PCU_ASSERT_PTR_EQUAL_MESSAGE(e->expected.pin, pin, PCU_format("%s" LINE_FORMAT ": Check the parameter 'pin' of ecrobot_init_bt_master() called for the %d%s time.", mock_ecrobot_interface.ecrobot_init_bt_master_file, mock_ecrobot_interface.ecrobot_init_bt_master_line, mock_ecrobot_interface.ecrobot_init_bt_master_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_init_bt_master_actual_num_calls)));
		}
	} else if (mock_ecrobot_interface.ecrobot_init_bt_master_funcptr) {
		if (mock_ecrobot_interface.ecrobot_init_bt_master_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_init_bt_master_expected_num_calls, >, mock_ecrobot_interface.ecrobot_init_bt_master_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_init_bt_master().", mock_ecrobot_interface.ecrobot_init_bt_master_file, mock_ecrobot_interface.ecrobot_init_bt_master_line));
		}
		mock_ecrobot_interface.ecrobot_init_bt_master_funcptr(bd_addr, pin);
	} else {
		PCU_FAIL("Call ecrobot_init_bt_master_expect() or ecrobot_init_bt_master_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_init_bt_master_actual_num_calls++;
}

void ecrobot_init_bt_master_expect_aux(const ecrobot_init_bt_master_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_init_bt_master_expectations = expectations;
	mock_ecrobot_interface.ecrobot_init_bt_master_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_init_bt_master_file = file;
	mock_ecrobot_interface.ecrobot_init_bt_master_line = line;
}

void ecrobot_init_bt_master_set_callback_aux(ecrobot_init_bt_master_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_init_bt_master_funcptr = callback;
	mock_ecrobot_interface.ecrobot_init_bt_master_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_init_bt_master_file = file;
	mock_ecrobot_interface.ecrobot_init_bt_master_line = line;
}

int ecrobot_init_bt_master_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_init_bt_master_actual_num_calls;
}

void ecrobot_init_bt_slave(const CHAR *pin)
{
	if (mock_ecrobot_interface.ecrobot_init_bt_slave_expectations && mock_ecrobot_interface.ecrobot_init_bt_slave_expected_num_calls >= 0) {
		const ecrobot_init_bt_slave_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_init_bt_slave_expected_num_calls, >, mock_ecrobot_interface.ecrobot_init_bt_slave_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_init_bt_slave().", mock_ecrobot_interface.ecrobot_init_bt_slave_file, mock_ecrobot_interface.ecrobot_init_bt_slave_line));
		e = mock_ecrobot_interface.ecrobot_init_bt_slave_expectations + mock_ecrobot_interface.ecrobot_init_bt_slave_actual_num_calls;
		if (!e->ignored.pin) {
			PCU_ASSERT_PTR_EQUAL_MESSAGE(e->expected.pin, pin, PCU_format("%s" LINE_FORMAT ": Check the parameter 'pin' of ecrobot_init_bt_slave() called for the %d%s time.", mock_ecrobot_interface.ecrobot_init_bt_slave_file, mock_ecrobot_interface.ecrobot_init_bt_slave_line, mock_ecrobot_interface.ecrobot_init_bt_slave_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_init_bt_slave_actual_num_calls)));
		}
	} else if (mock_ecrobot_interface.ecrobot_init_bt_slave_funcptr) {
		if (mock_ecrobot_interface.ecrobot_init_bt_slave_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_init_bt_slave_expected_num_calls, >, mock_ecrobot_interface.ecrobot_init_bt_slave_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_init_bt_slave().", mock_ecrobot_interface.ecrobot_init_bt_slave_file, mock_ecrobot_interface.ecrobot_init_bt_slave_line));
		}
		mock_ecrobot_interface.ecrobot_init_bt_slave_funcptr(pin);
	} else {
		PCU_FAIL("Call ecrobot_init_bt_slave_expect() or ecrobot_init_bt_slave_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_init_bt_slave_actual_num_calls++;
}

void ecrobot_init_bt_slave_expect_aux(const ecrobot_init_bt_slave_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_init_bt_slave_expectations = expectations;
	mock_ecrobot_interface.ecrobot_init_bt_slave_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_init_bt_slave_file = file;
	mock_ecrobot_interface.ecrobot_init_bt_slave_line = line;
}

void ecrobot_init_bt_slave_set_callback_aux(ecrobot_init_bt_slave_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_init_bt_slave_funcptr = callback;
	mock_ecrobot_interface.ecrobot_init_bt_slave_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_init_bt_slave_file = file;
	mock_ecrobot_interface.ecrobot_init_bt_slave_line = line;
}

int ecrobot_init_bt_slave_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_init_bt_slave_actual_num_calls;
}

U8 ecrobot_get_bt_device_name(CHAR* bd_name)
{
	U8 ret;
	if (mock_ecrobot_interface.ecrobot_get_bt_device_name_expectations && mock_ecrobot_interface.ecrobot_get_bt_device_name_expected_num_calls >= 0) {
		const ecrobot_get_bt_device_name_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_get_bt_device_name_expected_num_calls, >, mock_ecrobot_interface.ecrobot_get_bt_device_name_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_bt_device_name().", mock_ecrobot_interface.ecrobot_get_bt_device_name_file, mock_ecrobot_interface.ecrobot_get_bt_device_name_line));
		e = mock_ecrobot_interface.ecrobot_get_bt_device_name_expectations + mock_ecrobot_interface.ecrobot_get_bt_device_name_actual_num_calls;
		if (!e->ignored.bd_name) {
			PCU_ASSERT_PTR_EQUAL_MESSAGE(e->expected.bd_name, bd_name, PCU_format("%s" LINE_FORMAT ": Check the parameter 'bd_name' of ecrobot_get_bt_device_name() called for the %d%s time.", mock_ecrobot_interface.ecrobot_get_bt_device_name_file, mock_ecrobot_interface.ecrobot_get_bt_device_name_line, mock_ecrobot_interface.ecrobot_get_bt_device_name_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_get_bt_device_name_actual_num_calls)));
		}
		ret = e->retval;
	} else if (mock_ecrobot_interface.ecrobot_get_bt_device_name_funcptr) {
		if (mock_ecrobot_interface.ecrobot_get_bt_device_name_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_get_bt_device_name_expected_num_calls, >, mock_ecrobot_interface.ecrobot_get_bt_device_name_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_bt_device_name().", mock_ecrobot_interface.ecrobot_get_bt_device_name_file, mock_ecrobot_interface.ecrobot_get_bt_device_name_line));
		}
		ret = mock_ecrobot_interface.ecrobot_get_bt_device_name_funcptr(bd_name);
	} else {
		PCU_FAIL("Call ecrobot_get_bt_device_name_expect() or ecrobot_get_bt_device_name_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_get_bt_device_name_actual_num_calls++;
	return ret;
}

void ecrobot_get_bt_device_name_expect_aux(const ecrobot_get_bt_device_name_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_get_bt_device_name_expectations = expectations;
	mock_ecrobot_interface.ecrobot_get_bt_device_name_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_get_bt_device_name_file = file;
	mock_ecrobot_interface.ecrobot_get_bt_device_name_line = line;
}

void ecrobot_get_bt_device_name_set_callback_aux(ecrobot_get_bt_device_name_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_get_bt_device_name_funcptr = callback;
	mock_ecrobot_interface.ecrobot_get_bt_device_name_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_get_bt_device_name_file = file;
	mock_ecrobot_interface.ecrobot_get_bt_device_name_line = line;
}

int ecrobot_get_bt_device_name_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_get_bt_device_name_actual_num_calls;
}

U8 ecrobot_set_bt_device_name(const CHAR* bd_name)
{
	U8 ret;
	if (mock_ecrobot_interface.ecrobot_set_bt_device_name_expectations && mock_ecrobot_interface.ecrobot_set_bt_device_name_expected_num_calls >= 0) {
		const ecrobot_set_bt_device_name_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_set_bt_device_name_expected_num_calls, >, mock_ecrobot_interface.ecrobot_set_bt_device_name_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_set_bt_device_name().", mock_ecrobot_interface.ecrobot_set_bt_device_name_file, mock_ecrobot_interface.ecrobot_set_bt_device_name_line));
		e = mock_ecrobot_interface.ecrobot_set_bt_device_name_expectations + mock_ecrobot_interface.ecrobot_set_bt_device_name_actual_num_calls;
		if (!e->ignored.bd_name) {
			PCU_ASSERT_PTR_EQUAL_MESSAGE(e->expected.bd_name, bd_name, PCU_format("%s" LINE_FORMAT ": Check the parameter 'bd_name' of ecrobot_set_bt_device_name() called for the %d%s time.", mock_ecrobot_interface.ecrobot_set_bt_device_name_file, mock_ecrobot_interface.ecrobot_set_bt_device_name_line, mock_ecrobot_interface.ecrobot_set_bt_device_name_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_set_bt_device_name_actual_num_calls)));
		}
		ret = e->retval;
	} else if (mock_ecrobot_interface.ecrobot_set_bt_device_name_funcptr) {
		if (mock_ecrobot_interface.ecrobot_set_bt_device_name_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_set_bt_device_name_expected_num_calls, >, mock_ecrobot_interface.ecrobot_set_bt_device_name_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_set_bt_device_name().", mock_ecrobot_interface.ecrobot_set_bt_device_name_file, mock_ecrobot_interface.ecrobot_set_bt_device_name_line));
		}
		ret = mock_ecrobot_interface.ecrobot_set_bt_device_name_funcptr(bd_name);
	} else {
		PCU_FAIL("Call ecrobot_set_bt_device_name_expect() or ecrobot_set_bt_device_name_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_set_bt_device_name_actual_num_calls++;
	return ret;
}

void ecrobot_set_bt_device_name_expect_aux(const ecrobot_set_bt_device_name_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_set_bt_device_name_expectations = expectations;
	mock_ecrobot_interface.ecrobot_set_bt_device_name_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_set_bt_device_name_file = file;
	mock_ecrobot_interface.ecrobot_set_bt_device_name_line = line;
}

void ecrobot_set_bt_device_name_set_callback_aux(ecrobot_set_bt_device_name_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_set_bt_device_name_funcptr = callback;
	mock_ecrobot_interface.ecrobot_set_bt_device_name_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_set_bt_device_name_file = file;
	mock_ecrobot_interface.ecrobot_set_bt_device_name_line = line;
}

int ecrobot_set_bt_device_name_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_set_bt_device_name_actual_num_calls;
}

SINT ecrobot_get_bt_status(void)
{
	SINT ret;
	if (mock_ecrobot_interface.ecrobot_get_bt_status_expectations && mock_ecrobot_interface.ecrobot_get_bt_status_expected_num_calls >= 0) {
		const ecrobot_get_bt_status_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_get_bt_status_expected_num_calls, >, mock_ecrobot_interface.ecrobot_get_bt_status_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_bt_status().", mock_ecrobot_interface.ecrobot_get_bt_status_file, mock_ecrobot_interface.ecrobot_get_bt_status_line));
		e = mock_ecrobot_interface.ecrobot_get_bt_status_expectations + mock_ecrobot_interface.ecrobot_get_bt_status_actual_num_calls;
		ret = e->retval;
	} else if (mock_ecrobot_interface.ecrobot_get_bt_status_funcptr) {
		if (mock_ecrobot_interface.ecrobot_get_bt_status_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_get_bt_status_expected_num_calls, >, mock_ecrobot_interface.ecrobot_get_bt_status_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_bt_status().", mock_ecrobot_interface.ecrobot_get_bt_status_file, mock_ecrobot_interface.ecrobot_get_bt_status_line));
		}
		ret = mock_ecrobot_interface.ecrobot_get_bt_status_funcptr();
	} else {
		PCU_FAIL("Call ecrobot_get_bt_status_expect() or ecrobot_get_bt_status_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_get_bt_status_actual_num_calls++;
	return ret;
}

void ecrobot_get_bt_status_expect_aux(const ecrobot_get_bt_status_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_get_bt_status_expectations = expectations;
	mock_ecrobot_interface.ecrobot_get_bt_status_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_get_bt_status_file = file;
	mock_ecrobot_interface.ecrobot_get_bt_status_line = line;
}

void ecrobot_get_bt_status_set_callback_aux(ecrobot_get_bt_status_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_get_bt_status_funcptr = callback;
	mock_ecrobot_interface.ecrobot_get_bt_status_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_get_bt_status_file = file;
	mock_ecrobot_interface.ecrobot_get_bt_status_line = line;
}

int ecrobot_get_bt_status_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_get_bt_status_actual_num_calls;
}

S16 ecrobot_get_bt_signal_strength(void)
{
	S16 ret;
	if (mock_ecrobot_interface.ecrobot_get_bt_signal_strength_expectations && mock_ecrobot_interface.ecrobot_get_bt_signal_strength_expected_num_calls >= 0) {
		const ecrobot_get_bt_signal_strength_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_get_bt_signal_strength_expected_num_calls, >, mock_ecrobot_interface.ecrobot_get_bt_signal_strength_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_bt_signal_strength().", mock_ecrobot_interface.ecrobot_get_bt_signal_strength_file, mock_ecrobot_interface.ecrobot_get_bt_signal_strength_line));
		e = mock_ecrobot_interface.ecrobot_get_bt_signal_strength_expectations + mock_ecrobot_interface.ecrobot_get_bt_signal_strength_actual_num_calls;
		ret = e->retval;
	} else if (mock_ecrobot_interface.ecrobot_get_bt_signal_strength_funcptr) {
		if (mock_ecrobot_interface.ecrobot_get_bt_signal_strength_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_get_bt_signal_strength_expected_num_calls, >, mock_ecrobot_interface.ecrobot_get_bt_signal_strength_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_bt_signal_strength().", mock_ecrobot_interface.ecrobot_get_bt_signal_strength_file, mock_ecrobot_interface.ecrobot_get_bt_signal_strength_line));
		}
		ret = mock_ecrobot_interface.ecrobot_get_bt_signal_strength_funcptr();
	} else {
		PCU_FAIL("Call ecrobot_get_bt_signal_strength_expect() or ecrobot_get_bt_signal_strength_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_get_bt_signal_strength_actual_num_calls++;
	return ret;
}

void ecrobot_get_bt_signal_strength_expect_aux(const ecrobot_get_bt_signal_strength_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_get_bt_signal_strength_expectations = expectations;
	mock_ecrobot_interface.ecrobot_get_bt_signal_strength_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_get_bt_signal_strength_file = file;
	mock_ecrobot_interface.ecrobot_get_bt_signal_strength_line = line;
}

void ecrobot_get_bt_signal_strength_set_callback_aux(ecrobot_get_bt_signal_strength_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_get_bt_signal_strength_funcptr = callback;
	mock_ecrobot_interface.ecrobot_get_bt_signal_strength_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_get_bt_signal_strength_file = file;
	mock_ecrobot_interface.ecrobot_get_bt_signal_strength_line = line;
}

int ecrobot_get_bt_signal_strength_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_get_bt_signal_strength_actual_num_calls;
}

U32 ecrobot_send_bt_packet(U8 *buf, U32 bufLen)
{
	U32 ret;
	if (mock_ecrobot_interface.ecrobot_send_bt_packet_expectations && mock_ecrobot_interface.ecrobot_send_bt_packet_expected_num_calls >= 0) {
		const ecrobot_send_bt_packet_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_send_bt_packet_expected_num_calls, >, mock_ecrobot_interface.ecrobot_send_bt_packet_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_send_bt_packet().", mock_ecrobot_interface.ecrobot_send_bt_packet_file, mock_ecrobot_interface.ecrobot_send_bt_packet_line));
		e = mock_ecrobot_interface.ecrobot_send_bt_packet_expectations + mock_ecrobot_interface.ecrobot_send_bt_packet_actual_num_calls;
		if (!e->ignored.buf) {
			PCU_ASSERT_PTR_EQUAL_MESSAGE(e->expected.buf, buf, PCU_format("%s" LINE_FORMAT ": Check the parameter 'buf' of ecrobot_send_bt_packet() called for the %d%s time.", mock_ecrobot_interface.ecrobot_send_bt_packet_file, mock_ecrobot_interface.ecrobot_send_bt_packet_line, mock_ecrobot_interface.ecrobot_send_bt_packet_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_send_bt_packet_actual_num_calls)));
		}
		if (!e->ignored.bufLen) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.bufLen, &bufLen, sizeof(bufLen), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'bufLen' of ecrobot_send_bt_packet() called for the %d%s time.", mock_ecrobot_interface.ecrobot_send_bt_packet_file, mock_ecrobot_interface.ecrobot_send_bt_packet_line, mock_ecrobot_interface.ecrobot_send_bt_packet_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_send_bt_packet_actual_num_calls)));
		}
		ret = e->retval;
	} else if (mock_ecrobot_interface.ecrobot_send_bt_packet_funcptr) {
		if (mock_ecrobot_interface.ecrobot_send_bt_packet_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_send_bt_packet_expected_num_calls, >, mock_ecrobot_interface.ecrobot_send_bt_packet_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_send_bt_packet().", mock_ecrobot_interface.ecrobot_send_bt_packet_file, mock_ecrobot_interface.ecrobot_send_bt_packet_line));
		}
		ret = mock_ecrobot_interface.ecrobot_send_bt_packet_funcptr(buf, bufLen);
	} else {
		PCU_FAIL("Call ecrobot_send_bt_packet_expect() or ecrobot_send_bt_packet_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_send_bt_packet_actual_num_calls++;
	return ret;
}

void ecrobot_send_bt_packet_expect_aux(const ecrobot_send_bt_packet_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_send_bt_packet_expectations = expectations;
	mock_ecrobot_interface.ecrobot_send_bt_packet_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_send_bt_packet_file = file;
	mock_ecrobot_interface.ecrobot_send_bt_packet_line = line;
}

void ecrobot_send_bt_packet_set_callback_aux(ecrobot_send_bt_packet_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_send_bt_packet_funcptr = callback;
	mock_ecrobot_interface.ecrobot_send_bt_packet_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_send_bt_packet_file = file;
	mock_ecrobot_interface.ecrobot_send_bt_packet_line = line;
}

int ecrobot_send_bt_packet_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_send_bt_packet_actual_num_calls;
}

U32 ecrobot_send_bt(const void* buf, U32 off, U32 len)
{
	U32 ret;
	if (mock_ecrobot_interface.ecrobot_send_bt_expectations && mock_ecrobot_interface.ecrobot_send_bt_expected_num_calls >= 0) {
		const ecrobot_send_bt_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_send_bt_expected_num_calls, >, mock_ecrobot_interface.ecrobot_send_bt_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_send_bt().", mock_ecrobot_interface.ecrobot_send_bt_file, mock_ecrobot_interface.ecrobot_send_bt_line));
		e = mock_ecrobot_interface.ecrobot_send_bt_expectations + mock_ecrobot_interface.ecrobot_send_bt_actual_num_calls;
		if (!e->ignored.buf) {
			PCU_ASSERT_PTR_EQUAL_MESSAGE(e->expected.buf, buf, PCU_format("%s" LINE_FORMAT ": Check the parameter 'buf' of ecrobot_send_bt() called for the %d%s time.", mock_ecrobot_interface.ecrobot_send_bt_file, mock_ecrobot_interface.ecrobot_send_bt_line, mock_ecrobot_interface.ecrobot_send_bt_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_send_bt_actual_num_calls)));
		}
		if (!e->ignored.off) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.off, &off, sizeof(off), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'off' of ecrobot_send_bt() called for the %d%s time.", mock_ecrobot_interface.ecrobot_send_bt_file, mock_ecrobot_interface.ecrobot_send_bt_line, mock_ecrobot_interface.ecrobot_send_bt_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_send_bt_actual_num_calls)));
		}
		if (!e->ignored.len) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.len, &len, sizeof(len), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'len' of ecrobot_send_bt() called for the %d%s time.", mock_ecrobot_interface.ecrobot_send_bt_file, mock_ecrobot_interface.ecrobot_send_bt_line, mock_ecrobot_interface.ecrobot_send_bt_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_send_bt_actual_num_calls)));
		}
		ret = e->retval;
	} else if (mock_ecrobot_interface.ecrobot_send_bt_funcptr) {
		if (mock_ecrobot_interface.ecrobot_send_bt_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_send_bt_expected_num_calls, >, mock_ecrobot_interface.ecrobot_send_bt_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_send_bt().", mock_ecrobot_interface.ecrobot_send_bt_file, mock_ecrobot_interface.ecrobot_send_bt_line));
		}
		ret = mock_ecrobot_interface.ecrobot_send_bt_funcptr(buf, off, len);
	} else {
		PCU_FAIL("Call ecrobot_send_bt_expect() or ecrobot_send_bt_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_send_bt_actual_num_calls++;
	return ret;
}

void ecrobot_send_bt_expect_aux(const ecrobot_send_bt_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_send_bt_expectations = expectations;
	mock_ecrobot_interface.ecrobot_send_bt_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_send_bt_file = file;
	mock_ecrobot_interface.ecrobot_send_bt_line = line;
}

void ecrobot_send_bt_set_callback_aux(ecrobot_send_bt_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_send_bt_funcptr = callback;
	mock_ecrobot_interface.ecrobot_send_bt_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_send_bt_file = file;
	mock_ecrobot_interface.ecrobot_send_bt_line = line;
}

int ecrobot_send_bt_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_send_bt_actual_num_calls;
}

U32 ecrobot_read_bt_packet(U8 *buf, U32 bufLen)
{
	U32 ret;
	if (mock_ecrobot_interface.ecrobot_read_bt_packet_expectations && mock_ecrobot_interface.ecrobot_read_bt_packet_expected_num_calls >= 0) {
		const ecrobot_read_bt_packet_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_read_bt_packet_expected_num_calls, >, mock_ecrobot_interface.ecrobot_read_bt_packet_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_read_bt_packet().", mock_ecrobot_interface.ecrobot_read_bt_packet_file, mock_ecrobot_interface.ecrobot_read_bt_packet_line));
		e = mock_ecrobot_interface.ecrobot_read_bt_packet_expectations + mock_ecrobot_interface.ecrobot_read_bt_packet_actual_num_calls;
		if (!e->ignored.buf) {
			PCU_ASSERT_PTR_EQUAL_MESSAGE(e->expected.buf, buf, PCU_format("%s" LINE_FORMAT ": Check the parameter 'buf' of ecrobot_read_bt_packet() called for the %d%s time.", mock_ecrobot_interface.ecrobot_read_bt_packet_file, mock_ecrobot_interface.ecrobot_read_bt_packet_line, mock_ecrobot_interface.ecrobot_read_bt_packet_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_read_bt_packet_actual_num_calls)));
		}
		if (!e->ignored.bufLen) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.bufLen, &bufLen, sizeof(bufLen), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'bufLen' of ecrobot_read_bt_packet() called for the %d%s time.", mock_ecrobot_interface.ecrobot_read_bt_packet_file, mock_ecrobot_interface.ecrobot_read_bt_packet_line, mock_ecrobot_interface.ecrobot_read_bt_packet_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_read_bt_packet_actual_num_calls)));
		}
		ret = e->retval;
	} else if (mock_ecrobot_interface.ecrobot_read_bt_packet_funcptr) {
		if (mock_ecrobot_interface.ecrobot_read_bt_packet_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_read_bt_packet_expected_num_calls, >, mock_ecrobot_interface.ecrobot_read_bt_packet_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_read_bt_packet().", mock_ecrobot_interface.ecrobot_read_bt_packet_file, mock_ecrobot_interface.ecrobot_read_bt_packet_line));
		}
		ret = mock_ecrobot_interface.ecrobot_read_bt_packet_funcptr(buf, bufLen);
	} else {
		PCU_FAIL("Call ecrobot_read_bt_packet_expect() or ecrobot_read_bt_packet_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_read_bt_packet_actual_num_calls++;
	return ret;
}

void ecrobot_read_bt_packet_expect_aux(const ecrobot_read_bt_packet_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_read_bt_packet_expectations = expectations;
	mock_ecrobot_interface.ecrobot_read_bt_packet_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_read_bt_packet_file = file;
	mock_ecrobot_interface.ecrobot_read_bt_packet_line = line;
}

void ecrobot_read_bt_packet_set_callback_aux(ecrobot_read_bt_packet_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_read_bt_packet_funcptr = callback;
	mock_ecrobot_interface.ecrobot_read_bt_packet_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_read_bt_packet_file = file;
	mock_ecrobot_interface.ecrobot_read_bt_packet_line = line;
}

int ecrobot_read_bt_packet_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_read_bt_packet_actual_num_calls;
}

U32 ecrobot_read_bt(void *buf, U32 off, U32 len)
{
	U32 ret;
	if (mock_ecrobot_interface.ecrobot_read_bt_expectations && mock_ecrobot_interface.ecrobot_read_bt_expected_num_calls >= 0) {
		const ecrobot_read_bt_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_read_bt_expected_num_calls, >, mock_ecrobot_interface.ecrobot_read_bt_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_read_bt().", mock_ecrobot_interface.ecrobot_read_bt_file, mock_ecrobot_interface.ecrobot_read_bt_line));
		e = mock_ecrobot_interface.ecrobot_read_bt_expectations + mock_ecrobot_interface.ecrobot_read_bt_actual_num_calls;
		if (!e->ignored.buf) {
			PCU_ASSERT_PTR_EQUAL_MESSAGE(e->expected.buf, buf, PCU_format("%s" LINE_FORMAT ": Check the parameter 'buf' of ecrobot_read_bt() called for the %d%s time.", mock_ecrobot_interface.ecrobot_read_bt_file, mock_ecrobot_interface.ecrobot_read_bt_line, mock_ecrobot_interface.ecrobot_read_bt_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_read_bt_actual_num_calls)));
		}
		if (!e->ignored.off) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.off, &off, sizeof(off), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'off' of ecrobot_read_bt() called for the %d%s time.", mock_ecrobot_interface.ecrobot_read_bt_file, mock_ecrobot_interface.ecrobot_read_bt_line, mock_ecrobot_interface.ecrobot_read_bt_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_read_bt_actual_num_calls)));
		}
		if (!e->ignored.len) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.len, &len, sizeof(len), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'len' of ecrobot_read_bt() called for the %d%s time.", mock_ecrobot_interface.ecrobot_read_bt_file, mock_ecrobot_interface.ecrobot_read_bt_line, mock_ecrobot_interface.ecrobot_read_bt_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_read_bt_actual_num_calls)));
		}
		ret = e->retval;
	} else if (mock_ecrobot_interface.ecrobot_read_bt_funcptr) {
		if (mock_ecrobot_interface.ecrobot_read_bt_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_read_bt_expected_num_calls, >, mock_ecrobot_interface.ecrobot_read_bt_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_read_bt().", mock_ecrobot_interface.ecrobot_read_bt_file, mock_ecrobot_interface.ecrobot_read_bt_line));
		}
		ret = mock_ecrobot_interface.ecrobot_read_bt_funcptr(buf, off, len);
	} else {
		PCU_FAIL("Call ecrobot_read_bt_expect() or ecrobot_read_bt_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_read_bt_actual_num_calls++;
	return ret;
}

void ecrobot_read_bt_expect_aux(const ecrobot_read_bt_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_read_bt_expectations = expectations;
	mock_ecrobot_interface.ecrobot_read_bt_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_read_bt_file = file;
	mock_ecrobot_interface.ecrobot_read_bt_line = line;
}

void ecrobot_read_bt_set_callback_aux(ecrobot_read_bt_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_read_bt_funcptr = callback;
	mock_ecrobot_interface.ecrobot_read_bt_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_read_bt_file = file;
	mock_ecrobot_interface.ecrobot_read_bt_line = line;
}

int ecrobot_read_bt_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_read_bt_actual_num_calls;
}

U8 ecrobot_set_bt_factory_settings(void)
{
	U8 ret;
	if (mock_ecrobot_interface.ecrobot_set_bt_factory_settings_expectations && mock_ecrobot_interface.ecrobot_set_bt_factory_settings_expected_num_calls >= 0) {
		const ecrobot_set_bt_factory_settings_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_set_bt_factory_settings_expected_num_calls, >, mock_ecrobot_interface.ecrobot_set_bt_factory_settings_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_set_bt_factory_settings().", mock_ecrobot_interface.ecrobot_set_bt_factory_settings_file, mock_ecrobot_interface.ecrobot_set_bt_factory_settings_line));
		e = mock_ecrobot_interface.ecrobot_set_bt_factory_settings_expectations + mock_ecrobot_interface.ecrobot_set_bt_factory_settings_actual_num_calls;
		ret = e->retval;
	} else if (mock_ecrobot_interface.ecrobot_set_bt_factory_settings_funcptr) {
		if (mock_ecrobot_interface.ecrobot_set_bt_factory_settings_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_set_bt_factory_settings_expected_num_calls, >, mock_ecrobot_interface.ecrobot_set_bt_factory_settings_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_set_bt_factory_settings().", mock_ecrobot_interface.ecrobot_set_bt_factory_settings_file, mock_ecrobot_interface.ecrobot_set_bt_factory_settings_line));
		}
		ret = mock_ecrobot_interface.ecrobot_set_bt_factory_settings_funcptr();
	} else {
		PCU_FAIL("Call ecrobot_set_bt_factory_settings_expect() or ecrobot_set_bt_factory_settings_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_set_bt_factory_settings_actual_num_calls++;
	return ret;
}

void ecrobot_set_bt_factory_settings_expect_aux(const ecrobot_set_bt_factory_settings_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_set_bt_factory_settings_expectations = expectations;
	mock_ecrobot_interface.ecrobot_set_bt_factory_settings_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_set_bt_factory_settings_file = file;
	mock_ecrobot_interface.ecrobot_set_bt_factory_settings_line = line;
}

void ecrobot_set_bt_factory_settings_set_callback_aux(ecrobot_set_bt_factory_settings_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_set_bt_factory_settings_funcptr = callback;
	mock_ecrobot_interface.ecrobot_set_bt_factory_settings_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_set_bt_factory_settings_file = file;
	mock_ecrobot_interface.ecrobot_set_bt_factory_settings_line = line;
}

int ecrobot_set_bt_factory_settings_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_set_bt_factory_settings_actual_num_calls;
}

void ecrobot_term_bt_connection(void)
{
	if (mock_ecrobot_interface.ecrobot_term_bt_connection_expectations && mock_ecrobot_interface.ecrobot_term_bt_connection_expected_num_calls >= 0) {
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_term_bt_connection_expected_num_calls, >, mock_ecrobot_interface.ecrobot_term_bt_connection_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_term_bt_connection().", mock_ecrobot_interface.ecrobot_term_bt_connection_file, mock_ecrobot_interface.ecrobot_term_bt_connection_line));
	} else if (mock_ecrobot_interface.ecrobot_term_bt_connection_funcptr) {
		if (mock_ecrobot_interface.ecrobot_term_bt_connection_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_term_bt_connection_expected_num_calls, >, mock_ecrobot_interface.ecrobot_term_bt_connection_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_term_bt_connection().", mock_ecrobot_interface.ecrobot_term_bt_connection_file, mock_ecrobot_interface.ecrobot_term_bt_connection_line));
		}
		mock_ecrobot_interface.ecrobot_term_bt_connection_funcptr();
	} else {
		PCU_FAIL("Call ecrobot_term_bt_connection_expect() or ecrobot_term_bt_connection_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_term_bt_connection_actual_num_calls++;
}

void ecrobot_term_bt_connection_expect_aux(const ecrobot_term_bt_connection_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_term_bt_connection_expectations = expectations;
	mock_ecrobot_interface.ecrobot_term_bt_connection_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_term_bt_connection_file = file;
	mock_ecrobot_interface.ecrobot_term_bt_connection_line = line;
}

void ecrobot_term_bt_connection_set_callback_aux(ecrobot_term_bt_connection_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_term_bt_connection_funcptr = callback;
	mock_ecrobot_interface.ecrobot_term_bt_connection_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_term_bt_connection_file = file;
	mock_ecrobot_interface.ecrobot_term_bt_connection_line = line;
}

int ecrobot_term_bt_connection_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_term_bt_connection_actual_num_calls;
}

void ecrobot_bt_data_logger(S8 data1, S8 data2)
{
	if (mock_ecrobot_interface.ecrobot_bt_data_logger_expectations && mock_ecrobot_interface.ecrobot_bt_data_logger_expected_num_calls >= 0) {
		const ecrobot_bt_data_logger_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_bt_data_logger_expected_num_calls, >, mock_ecrobot_interface.ecrobot_bt_data_logger_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_bt_data_logger().", mock_ecrobot_interface.ecrobot_bt_data_logger_file, mock_ecrobot_interface.ecrobot_bt_data_logger_line));
		e = mock_ecrobot_interface.ecrobot_bt_data_logger_expectations + mock_ecrobot_interface.ecrobot_bt_data_logger_actual_num_calls;
		if (!e->ignored.data1) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.data1, &data1, sizeof(data1), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'data1' of ecrobot_bt_data_logger() called for the %d%s time.", mock_ecrobot_interface.ecrobot_bt_data_logger_file, mock_ecrobot_interface.ecrobot_bt_data_logger_line, mock_ecrobot_interface.ecrobot_bt_data_logger_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_bt_data_logger_actual_num_calls)));
		}
		if (!e->ignored.data2) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.data2, &data2, sizeof(data2), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'data2' of ecrobot_bt_data_logger() called for the %d%s time.", mock_ecrobot_interface.ecrobot_bt_data_logger_file, mock_ecrobot_interface.ecrobot_bt_data_logger_line, mock_ecrobot_interface.ecrobot_bt_data_logger_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_bt_data_logger_actual_num_calls)));
		}
	} else if (mock_ecrobot_interface.ecrobot_bt_data_logger_funcptr) {
		if (mock_ecrobot_interface.ecrobot_bt_data_logger_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_bt_data_logger_expected_num_calls, >, mock_ecrobot_interface.ecrobot_bt_data_logger_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_bt_data_logger().", mock_ecrobot_interface.ecrobot_bt_data_logger_file, mock_ecrobot_interface.ecrobot_bt_data_logger_line));
		}
		mock_ecrobot_interface.ecrobot_bt_data_logger_funcptr(data1, data2);
	} else {
		PCU_FAIL("Call ecrobot_bt_data_logger_expect() or ecrobot_bt_data_logger_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_bt_data_logger_actual_num_calls++;
}

void ecrobot_bt_data_logger_expect_aux(const ecrobot_bt_data_logger_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_bt_data_logger_expectations = expectations;
	mock_ecrobot_interface.ecrobot_bt_data_logger_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_bt_data_logger_file = file;
	mock_ecrobot_interface.ecrobot_bt_data_logger_line = line;
}

void ecrobot_bt_data_logger_set_callback_aux(ecrobot_bt_data_logger_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_bt_data_logger_funcptr = callback;
	mock_ecrobot_interface.ecrobot_bt_data_logger_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_bt_data_logger_file = file;
	mock_ecrobot_interface.ecrobot_bt_data_logger_line = line;
}

int ecrobot_bt_data_logger_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_bt_data_logger_actual_num_calls;
}

SINT ecrobot_bmp2lcd(const CHAR *file, U8 *lcd, S32 width, S32 height)
{
	SINT ret;
	if (mock_ecrobot_interface.ecrobot_bmp2lcd_expectations && mock_ecrobot_interface.ecrobot_bmp2lcd_expected_num_calls >= 0) {
		const ecrobot_bmp2lcd_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_bmp2lcd_expected_num_calls, >, mock_ecrobot_interface.ecrobot_bmp2lcd_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_bmp2lcd().", mock_ecrobot_interface.ecrobot_bmp2lcd_file, mock_ecrobot_interface.ecrobot_bmp2lcd_line));
		e = mock_ecrobot_interface.ecrobot_bmp2lcd_expectations + mock_ecrobot_interface.ecrobot_bmp2lcd_actual_num_calls;
		if (!e->ignored.file) {
			PCU_ASSERT_PTR_EQUAL_MESSAGE(e->expected.file, file, PCU_format("%s" LINE_FORMAT ": Check the parameter 'file' of ecrobot_bmp2lcd() called for the %d%s time.", mock_ecrobot_interface.ecrobot_bmp2lcd_file, mock_ecrobot_interface.ecrobot_bmp2lcd_line, mock_ecrobot_interface.ecrobot_bmp2lcd_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_bmp2lcd_actual_num_calls)));
		}
		if (!e->ignored.lcd) {
			PCU_ASSERT_PTR_EQUAL_MESSAGE(e->expected.lcd, lcd, PCU_format("%s" LINE_FORMAT ": Check the parameter 'lcd' of ecrobot_bmp2lcd() called for the %d%s time.", mock_ecrobot_interface.ecrobot_bmp2lcd_file, mock_ecrobot_interface.ecrobot_bmp2lcd_line, mock_ecrobot_interface.ecrobot_bmp2lcd_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_bmp2lcd_actual_num_calls)));
		}
		if (!e->ignored.width) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.width, &width, sizeof(width), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'width' of ecrobot_bmp2lcd() called for the %d%s time.", mock_ecrobot_interface.ecrobot_bmp2lcd_file, mock_ecrobot_interface.ecrobot_bmp2lcd_line, mock_ecrobot_interface.ecrobot_bmp2lcd_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_bmp2lcd_actual_num_calls)));
		}
		if (!e->ignored.height) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.height, &height, sizeof(height), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'height' of ecrobot_bmp2lcd() called for the %d%s time.", mock_ecrobot_interface.ecrobot_bmp2lcd_file, mock_ecrobot_interface.ecrobot_bmp2lcd_line, mock_ecrobot_interface.ecrobot_bmp2lcd_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_bmp2lcd_actual_num_calls)));
		}
		ret = e->retval;
	} else if (mock_ecrobot_interface.ecrobot_bmp2lcd_funcptr) {
		if (mock_ecrobot_interface.ecrobot_bmp2lcd_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_bmp2lcd_expected_num_calls, >, mock_ecrobot_interface.ecrobot_bmp2lcd_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_bmp2lcd().", mock_ecrobot_interface.ecrobot_bmp2lcd_file, mock_ecrobot_interface.ecrobot_bmp2lcd_line));
		}
		ret = mock_ecrobot_interface.ecrobot_bmp2lcd_funcptr(file, lcd, width, height);
	} else {
		PCU_FAIL("Call ecrobot_bmp2lcd_expect() or ecrobot_bmp2lcd_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_bmp2lcd_actual_num_calls++;
	return ret;
}

void ecrobot_bmp2lcd_expect_aux(const ecrobot_bmp2lcd_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_bmp2lcd_expectations = expectations;
	mock_ecrobot_interface.ecrobot_bmp2lcd_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_bmp2lcd_file = file;
	mock_ecrobot_interface.ecrobot_bmp2lcd_line = line;
}

void ecrobot_bmp2lcd_set_callback_aux(ecrobot_bmp2lcd_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_bmp2lcd_funcptr = callback;
	mock_ecrobot_interface.ecrobot_bmp2lcd_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_bmp2lcd_file = file;
	mock_ecrobot_interface.ecrobot_bmp2lcd_line = line;
}

int ecrobot_bmp2lcd_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_bmp2lcd_actual_num_calls;
}

void display_bitmap_copy(const U8 *data, U32 width, U32 depth, U32 x, U32 y)
{
	if (mock_ecrobot_interface.display_bitmap_copy_expectations && mock_ecrobot_interface.display_bitmap_copy_expected_num_calls >= 0) {
		const display_bitmap_copy_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.display_bitmap_copy_expected_num_calls, >, mock_ecrobot_interface.display_bitmap_copy_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_bitmap_copy().", mock_ecrobot_interface.display_bitmap_copy_file, mock_ecrobot_interface.display_bitmap_copy_line));
		e = mock_ecrobot_interface.display_bitmap_copy_expectations + mock_ecrobot_interface.display_bitmap_copy_actual_num_calls;
		if (!e->ignored.data) {
			PCU_ASSERT_PTR_EQUAL_MESSAGE(e->expected.data, data, PCU_format("%s" LINE_FORMAT ": Check the parameter 'data' of display_bitmap_copy() called for the %d%s time.", mock_ecrobot_interface.display_bitmap_copy_file, mock_ecrobot_interface.display_bitmap_copy_line, mock_ecrobot_interface.display_bitmap_copy_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.display_bitmap_copy_actual_num_calls)));
		}
		if (!e->ignored.width) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.width, &width, sizeof(width), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'width' of display_bitmap_copy() called for the %d%s time.", mock_ecrobot_interface.display_bitmap_copy_file, mock_ecrobot_interface.display_bitmap_copy_line, mock_ecrobot_interface.display_bitmap_copy_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.display_bitmap_copy_actual_num_calls)));
		}
		if (!e->ignored.depth) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.depth, &depth, sizeof(depth), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'depth' of display_bitmap_copy() called for the %d%s time.", mock_ecrobot_interface.display_bitmap_copy_file, mock_ecrobot_interface.display_bitmap_copy_line, mock_ecrobot_interface.display_bitmap_copy_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.display_bitmap_copy_actual_num_calls)));
		}
		if (!e->ignored.x) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.x, &x, sizeof(x), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'x' of display_bitmap_copy() called for the %d%s time.", mock_ecrobot_interface.display_bitmap_copy_file, mock_ecrobot_interface.display_bitmap_copy_line, mock_ecrobot_interface.display_bitmap_copy_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.display_bitmap_copy_actual_num_calls)));
		}
		if (!e->ignored.y) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.y, &y, sizeof(y), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'y' of display_bitmap_copy() called for the %d%s time.", mock_ecrobot_interface.display_bitmap_copy_file, mock_ecrobot_interface.display_bitmap_copy_line, mock_ecrobot_interface.display_bitmap_copy_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.display_bitmap_copy_actual_num_calls)));
		}
	} else if (mock_ecrobot_interface.display_bitmap_copy_funcptr) {
		if (mock_ecrobot_interface.display_bitmap_copy_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.display_bitmap_copy_expected_num_calls, >, mock_ecrobot_interface.display_bitmap_copy_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_bitmap_copy().", mock_ecrobot_interface.display_bitmap_copy_file, mock_ecrobot_interface.display_bitmap_copy_line));
		}
		mock_ecrobot_interface.display_bitmap_copy_funcptr(data, width, depth, x, y);
	} else {
		PCU_FAIL("Call display_bitmap_copy_expect() or display_bitmap_copy_set_callback().");
	}
	mock_ecrobot_interface.display_bitmap_copy_actual_num_calls++;
}

void display_bitmap_copy_expect_aux(const display_bitmap_copy_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.display_bitmap_copy_expectations = expectations;
	mock_ecrobot_interface.display_bitmap_copy_expected_num_calls = num;
	mock_ecrobot_interface.display_bitmap_copy_file = file;
	mock_ecrobot_interface.display_bitmap_copy_line = line;
}

void display_bitmap_copy_set_callback_aux(display_bitmap_copy_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.display_bitmap_copy_funcptr = callback;
	mock_ecrobot_interface.display_bitmap_copy_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.display_bitmap_copy_file = file;
	mock_ecrobot_interface.display_bitmap_copy_line = line;
}

int display_bitmap_copy_num_calls(void)
{
	return mock_ecrobot_interface.display_bitmap_copy_actual_num_calls;
}

void display_update(void)
{
	if (mock_ecrobot_interface.display_update_expectations && mock_ecrobot_interface.display_update_expected_num_calls >= 0) {
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.display_update_expected_num_calls, >, mock_ecrobot_interface.display_update_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_update().", mock_ecrobot_interface.display_update_file, mock_ecrobot_interface.display_update_line));
	} else if (mock_ecrobot_interface.display_update_funcptr) {
		if (mock_ecrobot_interface.display_update_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.display_update_expected_num_calls, >, mock_ecrobot_interface.display_update_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_update().", mock_ecrobot_interface.display_update_file, mock_ecrobot_interface.display_update_line));
		}
		mock_ecrobot_interface.display_update_funcptr();
	} else {
		PCU_FAIL("Call display_update_expect() or display_update_set_callback().");
	}
	mock_ecrobot_interface.display_update_actual_num_calls++;
}

void display_update_expect_aux(const display_update_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.display_update_expectations = expectations;
	mock_ecrobot_interface.display_update_expected_num_calls = num;
	mock_ecrobot_interface.display_update_file = file;
	mock_ecrobot_interface.display_update_line = line;
}

void display_update_set_callback_aux(display_update_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.display_update_funcptr = callback;
	mock_ecrobot_interface.display_update_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.display_update_file = file;
	mock_ecrobot_interface.display_update_line = line;
}

int display_update_num_calls(void)
{
	return mock_ecrobot_interface.display_update_actual_num_calls;
}

void display_clear(U32 updateToo)
{
	if (mock_ecrobot_interface.display_clear_expectations && mock_ecrobot_interface.display_clear_expected_num_calls >= 0) {
		const display_clear_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.display_clear_expected_num_calls, >, mock_ecrobot_interface.display_clear_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_clear().", mock_ecrobot_interface.display_clear_file, mock_ecrobot_interface.display_clear_line));
		e = mock_ecrobot_interface.display_clear_expectations + mock_ecrobot_interface.display_clear_actual_num_calls;
		if (!e->ignored.updateToo) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.updateToo, &updateToo, sizeof(updateToo), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'updateToo' of display_clear() called for the %d%s time.", mock_ecrobot_interface.display_clear_file, mock_ecrobot_interface.display_clear_line, mock_ecrobot_interface.display_clear_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.display_clear_actual_num_calls)));
		}
	} else if (mock_ecrobot_interface.display_clear_funcptr) {
		if (mock_ecrobot_interface.display_clear_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.display_clear_expected_num_calls, >, mock_ecrobot_interface.display_clear_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_clear().", mock_ecrobot_interface.display_clear_file, mock_ecrobot_interface.display_clear_line));
		}
		mock_ecrobot_interface.display_clear_funcptr(updateToo);
	} else {
		PCU_FAIL("Call display_clear_expect() or display_clear_set_callback().");
	}
	mock_ecrobot_interface.display_clear_actual_num_calls++;
}

void display_clear_expect_aux(const display_clear_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.display_clear_expectations = expectations;
	mock_ecrobot_interface.display_clear_expected_num_calls = num;
	mock_ecrobot_interface.display_clear_file = file;
	mock_ecrobot_interface.display_clear_line = line;
}

void display_clear_set_callback_aux(display_clear_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.display_clear_funcptr = callback;
	mock_ecrobot_interface.display_clear_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.display_clear_file = file;
	mock_ecrobot_interface.display_clear_line = line;
}

int display_clear_num_calls(void)
{
	return mock_ecrobot_interface.display_clear_actual_num_calls;
}

void display_goto_xy(int x, int y)
{
	if (mock_ecrobot_interface.display_goto_xy_expectations && mock_ecrobot_interface.display_goto_xy_expected_num_calls >= 0) {
		const display_goto_xy_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.display_goto_xy_expected_num_calls, >, mock_ecrobot_interface.display_goto_xy_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_goto_xy().", mock_ecrobot_interface.display_goto_xy_file, mock_ecrobot_interface.display_goto_xy_line));
		e = mock_ecrobot_interface.display_goto_xy_expectations + mock_ecrobot_interface.display_goto_xy_actual_num_calls;
		if (!e->ignored.x) {
			PCU_ASSERT_EQUAL_MESSAGE(e->expected.x, x, PCU_format("%s" LINE_FORMAT ": Check the parameter 'x' of display_goto_xy() called for the %d%s time.", mock_ecrobot_interface.display_goto_xy_file, mock_ecrobot_interface.display_goto_xy_line, mock_ecrobot_interface.display_goto_xy_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.display_goto_xy_actual_num_calls)));
		}
		if (!e->ignored.y) {
			PCU_ASSERT_EQUAL_MESSAGE(e->expected.y, y, PCU_format("%s" LINE_FORMAT ": Check the parameter 'y' of display_goto_xy() called for the %d%s time.", mock_ecrobot_interface.display_goto_xy_file, mock_ecrobot_interface.display_goto_xy_line, mock_ecrobot_interface.display_goto_xy_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.display_goto_xy_actual_num_calls)));
		}
	} else if (mock_ecrobot_interface.display_goto_xy_funcptr) {
		if (mock_ecrobot_interface.display_goto_xy_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.display_goto_xy_expected_num_calls, >, mock_ecrobot_interface.display_goto_xy_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_goto_xy().", mock_ecrobot_interface.display_goto_xy_file, mock_ecrobot_interface.display_goto_xy_line));
		}
		mock_ecrobot_interface.display_goto_xy_funcptr(x, y);
	} else {
		PCU_FAIL("Call display_goto_xy_expect() or display_goto_xy_set_callback().");
	}
	mock_ecrobot_interface.display_goto_xy_actual_num_calls++;
}

void display_goto_xy_expect_aux(const display_goto_xy_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.display_goto_xy_expectations = expectations;
	mock_ecrobot_interface.display_goto_xy_expected_num_calls = num;
	mock_ecrobot_interface.display_goto_xy_file = file;
	mock_ecrobot_interface.display_goto_xy_line = line;
}

void display_goto_xy_set_callback_aux(display_goto_xy_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.display_goto_xy_funcptr = callback;
	mock_ecrobot_interface.display_goto_xy_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.display_goto_xy_file = file;
	mock_ecrobot_interface.display_goto_xy_line = line;
}

int display_goto_xy_num_calls(void)
{
	return mock_ecrobot_interface.display_goto_xy_actual_num_calls;
}

void display_string(const char *str)
{
	if (mock_ecrobot_interface.display_string_expectations && mock_ecrobot_interface.display_string_expected_num_calls >= 0) {
		const display_string_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.display_string_expected_num_calls, >, mock_ecrobot_interface.display_string_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_string().", mock_ecrobot_interface.display_string_file, mock_ecrobot_interface.display_string_line));
		e = mock_ecrobot_interface.display_string_expectations + mock_ecrobot_interface.display_string_actual_num_calls;
		if (!e->ignored.str) {
			PCU_ASSERT_STRING_EQUAL_MESSAGE(e->expected.str, str, PCU_format("%s" LINE_FORMAT ": Check the parameter 'str' of display_string() called for the %d%s time.", mock_ecrobot_interface.display_string_file, mock_ecrobot_interface.display_string_line, mock_ecrobot_interface.display_string_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.display_string_actual_num_calls)));
		}
	} else if (mock_ecrobot_interface.display_string_funcptr) {
		if (mock_ecrobot_interface.display_string_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.display_string_expected_num_calls, >, mock_ecrobot_interface.display_string_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_string().", mock_ecrobot_interface.display_string_file, mock_ecrobot_interface.display_string_line));
		}
		mock_ecrobot_interface.display_string_funcptr(str);
	} else {
		PCU_FAIL("Call display_string_expect() or display_string_set_callback().");
	}
	mock_ecrobot_interface.display_string_actual_num_calls++;
}

void display_string_expect_aux(const display_string_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.display_string_expectations = expectations;
	mock_ecrobot_interface.display_string_expected_num_calls = num;
	mock_ecrobot_interface.display_string_file = file;
	mock_ecrobot_interface.display_string_line = line;
}

void display_string_set_callback_aux(display_string_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.display_string_funcptr = callback;
	mock_ecrobot_interface.display_string_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.display_string_file = file;
	mock_ecrobot_interface.display_string_line = line;
}

int display_string_num_calls(void)
{
	return mock_ecrobot_interface.display_string_actual_num_calls;
}

void display_hex(U32 val, U32 places)
{
	if (mock_ecrobot_interface.display_hex_expectations && mock_ecrobot_interface.display_hex_expected_num_calls >= 0) {
		const display_hex_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.display_hex_expected_num_calls, >, mock_ecrobot_interface.display_hex_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_hex().", mock_ecrobot_interface.display_hex_file, mock_ecrobot_interface.display_hex_line));
		e = mock_ecrobot_interface.display_hex_expectations + mock_ecrobot_interface.display_hex_actual_num_calls;
		if (!e->ignored.val) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.val, &val, sizeof(val), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'val' of display_hex() called for the %d%s time.", mock_ecrobot_interface.display_hex_file, mock_ecrobot_interface.display_hex_line, mock_ecrobot_interface.display_hex_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.display_hex_actual_num_calls)));
		}
		if (!e->ignored.places) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.places, &places, sizeof(places), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'places' of display_hex() called for the %d%s time.", mock_ecrobot_interface.display_hex_file, mock_ecrobot_interface.display_hex_line, mock_ecrobot_interface.display_hex_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.display_hex_actual_num_calls)));
		}
	} else if (mock_ecrobot_interface.display_hex_funcptr) {
		if (mock_ecrobot_interface.display_hex_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.display_hex_expected_num_calls, >, mock_ecrobot_interface.display_hex_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_hex().", mock_ecrobot_interface.display_hex_file, mock_ecrobot_interface.display_hex_line));
		}
		mock_ecrobot_interface.display_hex_funcptr(val, places);
	} else {
		PCU_FAIL("Call display_hex_expect() or display_hex_set_callback().");
	}
	mock_ecrobot_interface.display_hex_actual_num_calls++;
}

void display_hex_expect_aux(const display_hex_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.display_hex_expectations = expectations;
	mock_ecrobot_interface.display_hex_expected_num_calls = num;
	mock_ecrobot_interface.display_hex_file = file;
	mock_ecrobot_interface.display_hex_line = line;
}

void display_hex_set_callback_aux(display_hex_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.display_hex_funcptr = callback;
	mock_ecrobot_interface.display_hex_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.display_hex_file = file;
	mock_ecrobot_interface.display_hex_line = line;
}

int display_hex_num_calls(void)
{
	return mock_ecrobot_interface.display_hex_actual_num_calls;
}

void display_unsigned(U32 val, U32 places)
{
	if (mock_ecrobot_interface.display_unsigned_expectations && mock_ecrobot_interface.display_unsigned_expected_num_calls >= 0) {
		const display_unsigned_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.display_unsigned_expected_num_calls, >, mock_ecrobot_interface.display_unsigned_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_unsigned().", mock_ecrobot_interface.display_unsigned_file, mock_ecrobot_interface.display_unsigned_line));
		e = mock_ecrobot_interface.display_unsigned_expectations + mock_ecrobot_interface.display_unsigned_actual_num_calls;
		if (!e->ignored.val) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.val, &val, sizeof(val), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'val' of display_unsigned() called for the %d%s time.", mock_ecrobot_interface.display_unsigned_file, mock_ecrobot_interface.display_unsigned_line, mock_ecrobot_interface.display_unsigned_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.display_unsigned_actual_num_calls)));
		}
		if (!e->ignored.places) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.places, &places, sizeof(places), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'places' of display_unsigned() called for the %d%s time.", mock_ecrobot_interface.display_unsigned_file, mock_ecrobot_interface.display_unsigned_line, mock_ecrobot_interface.display_unsigned_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.display_unsigned_actual_num_calls)));
		}
	} else if (mock_ecrobot_interface.display_unsigned_funcptr) {
		if (mock_ecrobot_interface.display_unsigned_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.display_unsigned_expected_num_calls, >, mock_ecrobot_interface.display_unsigned_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_unsigned().", mock_ecrobot_interface.display_unsigned_file, mock_ecrobot_interface.display_unsigned_line));
		}
		mock_ecrobot_interface.display_unsigned_funcptr(val, places);
	} else {
		PCU_FAIL("Call display_unsigned_expect() or display_unsigned_set_callback().");
	}
	mock_ecrobot_interface.display_unsigned_actual_num_calls++;
}

void display_unsigned_expect_aux(const display_unsigned_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.display_unsigned_expectations = expectations;
	mock_ecrobot_interface.display_unsigned_expected_num_calls = num;
	mock_ecrobot_interface.display_unsigned_file = file;
	mock_ecrobot_interface.display_unsigned_line = line;
}

void display_unsigned_set_callback_aux(display_unsigned_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.display_unsigned_funcptr = callback;
	mock_ecrobot_interface.display_unsigned_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.display_unsigned_file = file;
	mock_ecrobot_interface.display_unsigned_line = line;
}

int display_unsigned_num_calls(void)
{
	return mock_ecrobot_interface.display_unsigned_actual_num_calls;
}

void display_int(int val, U32 places)
{
	if (mock_ecrobot_interface.display_int_expectations && mock_ecrobot_interface.display_int_expected_num_calls >= 0) {
		const display_int_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.display_int_expected_num_calls, >, mock_ecrobot_interface.display_int_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_int().", mock_ecrobot_interface.display_int_file, mock_ecrobot_interface.display_int_line));
		e = mock_ecrobot_interface.display_int_expectations + mock_ecrobot_interface.display_int_actual_num_calls;
		if (!e->ignored.val) {
			PCU_ASSERT_EQUAL_MESSAGE(e->expected.val, val, PCU_format("%s" LINE_FORMAT ": Check the parameter 'val' of display_int() called for the %d%s time.", mock_ecrobot_interface.display_int_file, mock_ecrobot_interface.display_int_line, mock_ecrobot_interface.display_int_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.display_int_actual_num_calls)));
		}
		if (!e->ignored.places) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.places, &places, sizeof(places), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'places' of display_int() called for the %d%s time.", mock_ecrobot_interface.display_int_file, mock_ecrobot_interface.display_int_line, mock_ecrobot_interface.display_int_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.display_int_actual_num_calls)));
		}
	} else if (mock_ecrobot_interface.display_int_funcptr) {
		if (mock_ecrobot_interface.display_int_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.display_int_expected_num_calls, >, mock_ecrobot_interface.display_int_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of display_int().", mock_ecrobot_interface.display_int_file, mock_ecrobot_interface.display_int_line));
		}
		mock_ecrobot_interface.display_int_funcptr(val, places);
	} else {
		PCU_FAIL("Call display_int_expect() or display_int_set_callback().");
	}
	mock_ecrobot_interface.display_int_actual_num_calls++;
}

void display_int_expect_aux(const display_int_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.display_int_expectations = expectations;
	mock_ecrobot_interface.display_int_expected_num_calls = num;
	mock_ecrobot_interface.display_int_file = file;
	mock_ecrobot_interface.display_int_line = line;
}

void display_int_set_callback_aux(display_int_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.display_int_funcptr = callback;
	mock_ecrobot_interface.display_int_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.display_int_file = file;
	mock_ecrobot_interface.display_int_line = line;
}

int display_int_num_calls(void)
{
	return mock_ecrobot_interface.display_int_actual_num_calls;
}

void ecrobot_status_monitor(const CHAR *target_name)
{
	if (mock_ecrobot_interface.ecrobot_status_monitor_expectations && mock_ecrobot_interface.ecrobot_status_monitor_expected_num_calls >= 0) {
		const ecrobot_status_monitor_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_status_monitor_expected_num_calls, >, mock_ecrobot_interface.ecrobot_status_monitor_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_status_monitor().", mock_ecrobot_interface.ecrobot_status_monitor_file, mock_ecrobot_interface.ecrobot_status_monitor_line));
		e = mock_ecrobot_interface.ecrobot_status_monitor_expectations + mock_ecrobot_interface.ecrobot_status_monitor_actual_num_calls;
		if (!e->ignored.target_name) {
			PCU_ASSERT_PTR_EQUAL_MESSAGE(e->expected.target_name, target_name, PCU_format("%s" LINE_FORMAT ": Check the parameter 'target_name' of ecrobot_status_monitor() called for the %d%s time.", mock_ecrobot_interface.ecrobot_status_monitor_file, mock_ecrobot_interface.ecrobot_status_monitor_line, mock_ecrobot_interface.ecrobot_status_monitor_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_status_monitor_actual_num_calls)));
		}
	} else if (mock_ecrobot_interface.ecrobot_status_monitor_funcptr) {
		if (mock_ecrobot_interface.ecrobot_status_monitor_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_status_monitor_expected_num_calls, >, mock_ecrobot_interface.ecrobot_status_monitor_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_status_monitor().", mock_ecrobot_interface.ecrobot_status_monitor_file, mock_ecrobot_interface.ecrobot_status_monitor_line));
		}
		mock_ecrobot_interface.ecrobot_status_monitor_funcptr(target_name);
	} else {
		PCU_FAIL("Call ecrobot_status_monitor_expect() or ecrobot_status_monitor_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_status_monitor_actual_num_calls++;
}

void ecrobot_status_monitor_expect_aux(const ecrobot_status_monitor_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_status_monitor_expectations = expectations;
	mock_ecrobot_interface.ecrobot_status_monitor_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_status_monitor_file = file;
	mock_ecrobot_interface.ecrobot_status_monitor_line = line;
}

void ecrobot_status_monitor_set_callback_aux(ecrobot_status_monitor_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_status_monitor_funcptr = callback;
	mock_ecrobot_interface.ecrobot_status_monitor_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_status_monitor_file = file;
	mock_ecrobot_interface.ecrobot_status_monitor_line = line;
}

int ecrobot_status_monitor_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_status_monitor_actual_num_calls;
}

SINT ecrobot_sound_tone(U32 freq, U32 ms, U32 vol)
{
	SINT ret;
	if (mock_ecrobot_interface.ecrobot_sound_tone_expectations && mock_ecrobot_interface.ecrobot_sound_tone_expected_num_calls >= 0) {
		const ecrobot_sound_tone_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_sound_tone_expected_num_calls, >, mock_ecrobot_interface.ecrobot_sound_tone_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_sound_tone().", mock_ecrobot_interface.ecrobot_sound_tone_file, mock_ecrobot_interface.ecrobot_sound_tone_line));
		e = mock_ecrobot_interface.ecrobot_sound_tone_expectations + mock_ecrobot_interface.ecrobot_sound_tone_actual_num_calls;
		if (!e->ignored.freq) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.freq, &freq, sizeof(freq), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'freq' of ecrobot_sound_tone() called for the %d%s time.", mock_ecrobot_interface.ecrobot_sound_tone_file, mock_ecrobot_interface.ecrobot_sound_tone_line, mock_ecrobot_interface.ecrobot_sound_tone_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_sound_tone_actual_num_calls)));
		}
		if (!e->ignored.ms) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.ms, &ms, sizeof(ms), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'ms' of ecrobot_sound_tone() called for the %d%s time.", mock_ecrobot_interface.ecrobot_sound_tone_file, mock_ecrobot_interface.ecrobot_sound_tone_line, mock_ecrobot_interface.ecrobot_sound_tone_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_sound_tone_actual_num_calls)));
		}
		if (!e->ignored.vol) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.vol, &vol, sizeof(vol), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'vol' of ecrobot_sound_tone() called for the %d%s time.", mock_ecrobot_interface.ecrobot_sound_tone_file, mock_ecrobot_interface.ecrobot_sound_tone_line, mock_ecrobot_interface.ecrobot_sound_tone_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_sound_tone_actual_num_calls)));
		}
		ret = e->retval;
	} else if (mock_ecrobot_interface.ecrobot_sound_tone_funcptr) {
		if (mock_ecrobot_interface.ecrobot_sound_tone_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_sound_tone_expected_num_calls, >, mock_ecrobot_interface.ecrobot_sound_tone_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_sound_tone().", mock_ecrobot_interface.ecrobot_sound_tone_file, mock_ecrobot_interface.ecrobot_sound_tone_line));
		}
		ret = mock_ecrobot_interface.ecrobot_sound_tone_funcptr(freq, ms, vol);
	} else {
		PCU_FAIL("Call ecrobot_sound_tone_expect() or ecrobot_sound_tone_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_sound_tone_actual_num_calls++;
	return ret;
}

void ecrobot_sound_tone_expect_aux(const ecrobot_sound_tone_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_sound_tone_expectations = expectations;
	mock_ecrobot_interface.ecrobot_sound_tone_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_sound_tone_file = file;
	mock_ecrobot_interface.ecrobot_sound_tone_line = line;
}

void ecrobot_sound_tone_set_callback_aux(ecrobot_sound_tone_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_sound_tone_funcptr = callback;
	mock_ecrobot_interface.ecrobot_sound_tone_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_sound_tone_file = file;
	mock_ecrobot_interface.ecrobot_sound_tone_line = line;
}

int ecrobot_sound_tone_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_sound_tone_actual_num_calls;
}

SINT ecrobot_sound_wav(const CHAR *file, U32 length, S32 freq, U32 vol)
{
	SINT ret;
	if (mock_ecrobot_interface.ecrobot_sound_wav_expectations && mock_ecrobot_interface.ecrobot_sound_wav_expected_num_calls >= 0) {
		const ecrobot_sound_wav_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_sound_wav_expected_num_calls, >, mock_ecrobot_interface.ecrobot_sound_wav_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_sound_wav().", mock_ecrobot_interface.ecrobot_sound_wav_file, mock_ecrobot_interface.ecrobot_sound_wav_line));
		e = mock_ecrobot_interface.ecrobot_sound_wav_expectations + mock_ecrobot_interface.ecrobot_sound_wav_actual_num_calls;
		if (!e->ignored.file) {
			PCU_ASSERT_PTR_EQUAL_MESSAGE(e->expected.file, file, PCU_format("%s" LINE_FORMAT ": Check the parameter 'file' of ecrobot_sound_wav() called for the %d%s time.", mock_ecrobot_interface.ecrobot_sound_wav_file, mock_ecrobot_interface.ecrobot_sound_wav_line, mock_ecrobot_interface.ecrobot_sound_wav_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_sound_wav_actual_num_calls)));
		}
		if (!e->ignored.length) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.length, &length, sizeof(length), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'length' of ecrobot_sound_wav() called for the %d%s time.", mock_ecrobot_interface.ecrobot_sound_wav_file, mock_ecrobot_interface.ecrobot_sound_wav_line, mock_ecrobot_interface.ecrobot_sound_wav_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_sound_wav_actual_num_calls)));
		}
		if (!e->ignored.freq) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.freq, &freq, sizeof(freq), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'freq' of ecrobot_sound_wav() called for the %d%s time.", mock_ecrobot_interface.ecrobot_sound_wav_file, mock_ecrobot_interface.ecrobot_sound_wav_line, mock_ecrobot_interface.ecrobot_sound_wav_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_sound_wav_actual_num_calls)));
		}
		if (!e->ignored.vol) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.vol, &vol, sizeof(vol), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'vol' of ecrobot_sound_wav() called for the %d%s time.", mock_ecrobot_interface.ecrobot_sound_wav_file, mock_ecrobot_interface.ecrobot_sound_wav_line, mock_ecrobot_interface.ecrobot_sound_wav_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_sound_wav_actual_num_calls)));
		}
		ret = e->retval;
	} else if (mock_ecrobot_interface.ecrobot_sound_wav_funcptr) {
		if (mock_ecrobot_interface.ecrobot_sound_wav_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_sound_wav_expected_num_calls, >, mock_ecrobot_interface.ecrobot_sound_wav_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_sound_wav().", mock_ecrobot_interface.ecrobot_sound_wav_file, mock_ecrobot_interface.ecrobot_sound_wav_line));
		}
		ret = mock_ecrobot_interface.ecrobot_sound_wav_funcptr(file, length, freq, vol);
	} else {
		PCU_FAIL("Call ecrobot_sound_wav_expect() or ecrobot_sound_wav_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_sound_wav_actual_num_calls++;
	return ret;
}

void ecrobot_sound_wav_expect_aux(const ecrobot_sound_wav_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_sound_wav_expectations = expectations;
	mock_ecrobot_interface.ecrobot_sound_wav_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_sound_wav_file = file;
	mock_ecrobot_interface.ecrobot_sound_wav_line = line;
}

void ecrobot_sound_wav_set_callback_aux(ecrobot_sound_wav_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_sound_wav_funcptr = callback;
	mock_ecrobot_interface.ecrobot_sound_wav_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_sound_wav_file = file;
	mock_ecrobot_interface.ecrobot_sound_wav_line = line;
}

int ecrobot_sound_wav_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_sound_wav_actual_num_calls;
}

U8 ecrobot_is_ENTER_button_pressed(void)
{
	U8 ret;
	if (mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_expectations && mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_expected_num_calls >= 0) {
		const ecrobot_is_ENTER_button_pressed_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_expected_num_calls, >, mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_is_ENTER_button_pressed().", mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_file, mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_line));
		e = mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_expectations + mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_actual_num_calls;
		ret = e->retval;
	} else if (mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_funcptr) {
		if (mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_expected_num_calls, >, mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_is_ENTER_button_pressed().", mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_file, mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_line));
		}
		ret = mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_funcptr();
	} else {
		PCU_FAIL("Call ecrobot_is_ENTER_button_pressed_expect() or ecrobot_is_ENTER_button_pressed_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_actual_num_calls++;
	return ret;
}

void ecrobot_is_ENTER_button_pressed_expect_aux(const ecrobot_is_ENTER_button_pressed_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_expectations = expectations;
	mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_file = file;
	mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_line = line;
}

void ecrobot_is_ENTER_button_pressed_set_callback_aux(ecrobot_is_ENTER_button_pressed_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_funcptr = callback;
	mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_file = file;
	mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_line = line;
}

int ecrobot_is_ENTER_button_pressed_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_is_ENTER_button_pressed_actual_num_calls;
}

U8 ecrobot_is_RUN_button_pressed(void)
{
	U8 ret;
	if (mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_expectations && mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_expected_num_calls >= 0) {
		const ecrobot_is_RUN_button_pressed_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_expected_num_calls, >, mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_is_RUN_button_pressed().", mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_file, mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_line));
		e = mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_expectations + mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_actual_num_calls;
		ret = e->retval;
	} else if (mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_funcptr) {
		if (mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_expected_num_calls, >, mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_is_RUN_button_pressed().", mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_file, mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_line));
		}
		ret = mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_funcptr();
	} else {
		PCU_FAIL("Call ecrobot_is_RUN_button_pressed_expect() or ecrobot_is_RUN_button_pressed_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_actual_num_calls++;
	return ret;
}

void ecrobot_is_RUN_button_pressed_expect_aux(const ecrobot_is_RUN_button_pressed_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_expectations = expectations;
	mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_file = file;
	mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_line = line;
}

void ecrobot_is_RUN_button_pressed_set_callback_aux(ecrobot_is_RUN_button_pressed_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_funcptr = callback;
	mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_file = file;
	mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_line = line;
}

int ecrobot_is_RUN_button_pressed_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_is_RUN_button_pressed_actual_num_calls;
}

U16 ecrobot_get_battery_voltage(void)
{
	U16 ret;
	if (mock_ecrobot_interface.ecrobot_get_battery_voltage_expectations && mock_ecrobot_interface.ecrobot_get_battery_voltage_expected_num_calls >= 0) {
		const ecrobot_get_battery_voltage_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_get_battery_voltage_expected_num_calls, >, mock_ecrobot_interface.ecrobot_get_battery_voltage_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_battery_voltage().", mock_ecrobot_interface.ecrobot_get_battery_voltage_file, mock_ecrobot_interface.ecrobot_get_battery_voltage_line));
		e = mock_ecrobot_interface.ecrobot_get_battery_voltage_expectations + mock_ecrobot_interface.ecrobot_get_battery_voltage_actual_num_calls;
		ret = e->retval;
	} else if (mock_ecrobot_interface.ecrobot_get_battery_voltage_funcptr) {
		if (mock_ecrobot_interface.ecrobot_get_battery_voltage_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_get_battery_voltage_expected_num_calls, >, mock_ecrobot_interface.ecrobot_get_battery_voltage_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_battery_voltage().", mock_ecrobot_interface.ecrobot_get_battery_voltage_file, mock_ecrobot_interface.ecrobot_get_battery_voltage_line));
		}
		ret = mock_ecrobot_interface.ecrobot_get_battery_voltage_funcptr();
	} else {
		PCU_FAIL("Call ecrobot_get_battery_voltage_expect() or ecrobot_get_battery_voltage_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_get_battery_voltage_actual_num_calls++;
	return ret;
}

void ecrobot_get_battery_voltage_expect_aux(const ecrobot_get_battery_voltage_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_get_battery_voltage_expectations = expectations;
	mock_ecrobot_interface.ecrobot_get_battery_voltage_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_get_battery_voltage_file = file;
	mock_ecrobot_interface.ecrobot_get_battery_voltage_line = line;
}

void ecrobot_get_battery_voltage_set_callback_aux(ecrobot_get_battery_voltage_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_get_battery_voltage_funcptr = callback;
	mock_ecrobot_interface.ecrobot_get_battery_voltage_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_get_battery_voltage_file = file;
	mock_ecrobot_interface.ecrobot_get_battery_voltage_line = line;
}

int ecrobot_get_battery_voltage_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_get_battery_voltage_actual_num_calls;
}

U32 systick_get_ms(void)
{
	U32 ret;
	if (mock_ecrobot_interface.systick_get_ms_expectations && mock_ecrobot_interface.systick_get_ms_expected_num_calls >= 0) {
		const systick_get_ms_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.systick_get_ms_expected_num_calls, >, mock_ecrobot_interface.systick_get_ms_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of systick_get_ms().", mock_ecrobot_interface.systick_get_ms_file, mock_ecrobot_interface.systick_get_ms_line));
		e = mock_ecrobot_interface.systick_get_ms_expectations + mock_ecrobot_interface.systick_get_ms_actual_num_calls;
		ret = e->retval;
	} else if (mock_ecrobot_interface.systick_get_ms_funcptr) {
		if (mock_ecrobot_interface.systick_get_ms_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.systick_get_ms_expected_num_calls, >, mock_ecrobot_interface.systick_get_ms_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of systick_get_ms().", mock_ecrobot_interface.systick_get_ms_file, mock_ecrobot_interface.systick_get_ms_line));
		}
		ret = mock_ecrobot_interface.systick_get_ms_funcptr();
	} else {
		PCU_FAIL("Call systick_get_ms_expect() or systick_get_ms_set_callback().");
	}
	mock_ecrobot_interface.systick_get_ms_actual_num_calls++;
	return ret;
}

void systick_get_ms_expect_aux(const systick_get_ms_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.systick_get_ms_expectations = expectations;
	mock_ecrobot_interface.systick_get_ms_expected_num_calls = num;
	mock_ecrobot_interface.systick_get_ms_file = file;
	mock_ecrobot_interface.systick_get_ms_line = line;
}

void systick_get_ms_set_callback_aux(systick_get_ms_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.systick_get_ms_funcptr = callback;
	mock_ecrobot_interface.systick_get_ms_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.systick_get_ms_file = file;
	mock_ecrobot_interface.systick_get_ms_line = line;
}

int systick_get_ms_num_calls(void)
{
	return mock_ecrobot_interface.systick_get_ms_actual_num_calls;
}

void systick_wait_ms(U32 ms)
{
	if (mock_ecrobot_interface.systick_wait_ms_expectations && mock_ecrobot_interface.systick_wait_ms_expected_num_calls >= 0) {
		const systick_wait_ms_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.systick_wait_ms_expected_num_calls, >, mock_ecrobot_interface.systick_wait_ms_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of systick_wait_ms().", mock_ecrobot_interface.systick_wait_ms_file, mock_ecrobot_interface.systick_wait_ms_line));
		e = mock_ecrobot_interface.systick_wait_ms_expectations + mock_ecrobot_interface.systick_wait_ms_actual_num_calls;
		if (!e->ignored.ms) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.ms, &ms, sizeof(ms), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'ms' of systick_wait_ms() called for the %d%s time.", mock_ecrobot_interface.systick_wait_ms_file, mock_ecrobot_interface.systick_wait_ms_line, mock_ecrobot_interface.systick_wait_ms_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.systick_wait_ms_actual_num_calls)));
		}
	} else if (mock_ecrobot_interface.systick_wait_ms_funcptr) {
		if (mock_ecrobot_interface.systick_wait_ms_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.systick_wait_ms_expected_num_calls, >, mock_ecrobot_interface.systick_wait_ms_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of systick_wait_ms().", mock_ecrobot_interface.systick_wait_ms_file, mock_ecrobot_interface.systick_wait_ms_line));
		}
		mock_ecrobot_interface.systick_wait_ms_funcptr(ms);
	} else {
		PCU_FAIL("Call systick_wait_ms_expect() or systick_wait_ms_set_callback().");
	}
	mock_ecrobot_interface.systick_wait_ms_actual_num_calls++;
}

void systick_wait_ms_expect_aux(const systick_wait_ms_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.systick_wait_ms_expectations = expectations;
	mock_ecrobot_interface.systick_wait_ms_expected_num_calls = num;
	mock_ecrobot_interface.systick_wait_ms_file = file;
	mock_ecrobot_interface.systick_wait_ms_line = line;
}

void systick_wait_ms_set_callback_aux(systick_wait_ms_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.systick_wait_ms_funcptr = callback;
	mock_ecrobot_interface.systick_wait_ms_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.systick_wait_ms_file = file;
	mock_ecrobot_interface.systick_wait_ms_line = line;
}

int systick_wait_ms_num_calls(void)
{
	return mock_ecrobot_interface.systick_wait_ms_actual_num_calls;
}

U16 ecrobot_get_gyro_sensor(U8 port_id)
{
	U16 ret;
	if (mock_ecrobot_interface.ecrobot_get_gyro_sensor_expectations && mock_ecrobot_interface.ecrobot_get_gyro_sensor_expected_num_calls >= 0) {
		const ecrobot_get_gyro_sensor_Expectation *e;
		PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_get_gyro_sensor_expected_num_calls, >, mock_ecrobot_interface.ecrobot_get_gyro_sensor_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_gyro_sensor().", mock_ecrobot_interface.ecrobot_get_gyro_sensor_file, mock_ecrobot_interface.ecrobot_get_gyro_sensor_line));
		e = mock_ecrobot_interface.ecrobot_get_gyro_sensor_expectations + mock_ecrobot_interface.ecrobot_get_gyro_sensor_actual_num_calls;
		if (!e->ignored.port_id) {
			PCU_ASSERT_MEMORY_EQUAL_MESSAGE(&e->expected.port_id, &port_id, sizeof(port_id), 1, PCU_format("%s" LINE_FORMAT ": Check the parameter 'port_id' of ecrobot_get_gyro_sensor() called for the %d%s time.", mock_ecrobot_interface.ecrobot_get_gyro_sensor_file, mock_ecrobot_interface.ecrobot_get_gyro_sensor_line, mock_ecrobot_interface.ecrobot_get_gyro_sensor_actual_num_calls, mock_ecrobot_interface_ordinal(mock_ecrobot_interface.ecrobot_get_gyro_sensor_actual_num_calls)));
		}
		ret = e->retval;
	} else if (mock_ecrobot_interface.ecrobot_get_gyro_sensor_funcptr) {
		if (mock_ecrobot_interface.ecrobot_get_gyro_sensor_expected_num_calls >= 0) {
			PCU_ASSERT_OPERATOR_MESSAGE(mock_ecrobot_interface.ecrobot_get_gyro_sensor_expected_num_calls, >, mock_ecrobot_interface.ecrobot_get_gyro_sensor_actual_num_calls, PCU_format("%s" LINE_FORMAT ": Check the number of calls of ecrobot_get_gyro_sensor().", mock_ecrobot_interface.ecrobot_get_gyro_sensor_file, mock_ecrobot_interface.ecrobot_get_gyro_sensor_line));
		}
		ret = mock_ecrobot_interface.ecrobot_get_gyro_sensor_funcptr(port_id);
	} else {
		PCU_FAIL("Call ecrobot_get_gyro_sensor_expect() or ecrobot_get_gyro_sensor_set_callback().");
	}
	mock_ecrobot_interface.ecrobot_get_gyro_sensor_actual_num_calls++;
	return ret;
}

void ecrobot_get_gyro_sensor_expect_aux(const ecrobot_get_gyro_sensor_Expectation *expectations, int num, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_get_gyro_sensor_expectations = expectations;
	mock_ecrobot_interface.ecrobot_get_gyro_sensor_expected_num_calls = num;
	mock_ecrobot_interface.ecrobot_get_gyro_sensor_file = file;
	mock_ecrobot_interface.ecrobot_get_gyro_sensor_line = line;
}

void ecrobot_get_gyro_sensor_set_callback_aux(ecrobot_get_gyro_sensor_Callback callback, int expected_num_calls, const char *file, unsigned int line)
{
	mock_ecrobot_interface.ecrobot_get_gyro_sensor_funcptr = callback;
	mock_ecrobot_interface.ecrobot_get_gyro_sensor_expected_num_calls = expected_num_calls;
	mock_ecrobot_interface.ecrobot_get_gyro_sensor_file = file;
	mock_ecrobot_interface.ecrobot_get_gyro_sensor_line = line;
}

int ecrobot_get_gyro_sensor_num_calls(void)
{
	return mock_ecrobot_interface.ecrobot_get_gyro_sensor_actual_num_calls;
}


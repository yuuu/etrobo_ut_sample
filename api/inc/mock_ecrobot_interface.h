#ifndef MOCK_ECROBOT_INTERFACE_H_INCLUDED
#define MOCK_ECROBOT_INTERFACE_H_INCLUDED

#include "ecrobot_interface.h"

void mock_ecrobot_interface_init(void);
#define mock_ecrobot_interface_verify()	mock_ecrobot_interface_verify_aux(__FILE__, __LINE__)
void mock_ecrobot_interface_verify_aux(const char *file, unsigned int line);


typedef struct {
	int retval;
	struct {
		U32 n;
	} expected;
	struct {
		unsigned int n:1;
	} ignored;
} nxt_motor_get_count_Expectation;
typedef int (*nxt_motor_get_count_Callback)(U32 n);
#define nxt_motor_get_count_expect(expectations, num)	nxt_motor_get_count_expect_aux(expectations, num, __FILE__, __LINE__)
void nxt_motor_get_count_expect_aux(const nxt_motor_get_count_Expectation *expectations, int num, const char *file, unsigned int line);
#define nxt_motor_get_count_set_callback(callback, expected_num_calls)	nxt_motor_get_count_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void nxt_motor_get_count_set_callback_aux(nxt_motor_get_count_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int nxt_motor_get_count_num_calls(void);

typedef struct {
	int dummy;
	struct {
		U32 n;
		int count;
	} expected;
	struct {
		unsigned int n:1;
		unsigned int count:1;
	} ignored;
} nxt_motor_set_count_Expectation;
typedef void (*nxt_motor_set_count_Callback)(U32 n, int count);
#define nxt_motor_set_count_expect(expectations, num)	nxt_motor_set_count_expect_aux(expectations, num, __FILE__, __LINE__)
void nxt_motor_set_count_expect_aux(const nxt_motor_set_count_Expectation *expectations, int num, const char *file, unsigned int line);
#define nxt_motor_set_count_set_callback(callback, expected_num_calls)	nxt_motor_set_count_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void nxt_motor_set_count_set_callback_aux(nxt_motor_set_count_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int nxt_motor_set_count_num_calls(void);

typedef struct {
	int dummy;
	struct {
		U32 n;
		int speed_percent;
		int brake;
	} expected;
	struct {
		unsigned int n:1;
		unsigned int speed_percent:1;
		unsigned int brake:1;
	} ignored;
} nxt_motor_set_speed_Expectation;
typedef void (*nxt_motor_set_speed_Callback)(U32 n, int speed_percent, int brake);
#define nxt_motor_set_speed_expect(expectations, num)	nxt_motor_set_speed_expect_aux(expectations, num, __FILE__, __LINE__)
void nxt_motor_set_speed_expect_aux(const nxt_motor_set_speed_Expectation *expectations, int num, const char *file, unsigned int line);
#define nxt_motor_set_speed_set_callback(callback, expected_num_calls)	nxt_motor_set_speed_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void nxt_motor_set_speed_set_callback_aux(nxt_motor_set_speed_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int nxt_motor_set_speed_num_calls(void);

typedef struct {
	int dummy;
	struct {
		U8 port_id;
	} expected;
	struct {
		unsigned int port_id:1;
	} ignored;
} ecrobot_set_light_sensor_active_Expectation;
typedef void (*ecrobot_set_light_sensor_active_Callback)(U8 port_id);
#define ecrobot_set_light_sensor_active_expect(expectations, num)	ecrobot_set_light_sensor_active_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_set_light_sensor_active_expect_aux(const ecrobot_set_light_sensor_active_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_set_light_sensor_active_set_callback(callback, expected_num_calls)	ecrobot_set_light_sensor_active_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_set_light_sensor_active_set_callback_aux(ecrobot_set_light_sensor_active_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_set_light_sensor_active_num_calls(void);

typedef struct {
	int dummy;
	struct {
		U8 port_id;
	} expected;
	struct {
		unsigned int port_id:1;
	} ignored;
} ecrobot_set_light_sensor_inactive_Expectation;
typedef void (*ecrobot_set_light_sensor_inactive_Callback)(U8 port_id);
#define ecrobot_set_light_sensor_inactive_expect(expectations, num)	ecrobot_set_light_sensor_inactive_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_set_light_sensor_inactive_expect_aux(const ecrobot_set_light_sensor_inactive_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_set_light_sensor_inactive_set_callback(callback, expected_num_calls)	ecrobot_set_light_sensor_inactive_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_set_light_sensor_inactive_set_callback_aux(ecrobot_set_light_sensor_inactive_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_set_light_sensor_inactive_num_calls(void);

typedef struct {
	U16 retval;
	struct {
		U8 port_id;
	} expected;
	struct {
		unsigned int port_id:1;
	} ignored;
} ecrobot_get_light_sensor_Expectation;
typedef U16 (*ecrobot_get_light_sensor_Callback)(U8 port_id);
#define ecrobot_get_light_sensor_expect(expectations, num)	ecrobot_get_light_sensor_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_get_light_sensor_expect_aux(const ecrobot_get_light_sensor_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_get_light_sensor_set_callback(callback, expected_num_calls)	ecrobot_get_light_sensor_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_get_light_sensor_set_callback_aux(ecrobot_get_light_sensor_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_get_light_sensor_num_calls(void);

typedef struct {
	U8 retval;
	struct {
		U8 port_id;
	} expected;
	struct {
		unsigned int port_id:1;
	} ignored;
} ecrobot_get_touch_sensor_Expectation;
typedef U8 (*ecrobot_get_touch_sensor_Callback)(U8 port_id);
#define ecrobot_get_touch_sensor_expect(expectations, num)	ecrobot_get_touch_sensor_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_get_touch_sensor_expect_aux(const ecrobot_get_touch_sensor_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_get_touch_sensor_set_callback(callback, expected_num_calls)	ecrobot_get_touch_sensor_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_get_touch_sensor_set_callback_aux(ecrobot_get_touch_sensor_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_get_touch_sensor_num_calls(void);

typedef struct {
	int dummy;
	struct {
		U8 port_id;
	} expected;
	struct {
		unsigned int port_id:1;
	} ignored;
} ecrobot_init_sonar_sensor_Expectation;
typedef void (*ecrobot_init_sonar_sensor_Callback)(U8 port_id);
#define ecrobot_init_sonar_sensor_expect(expectations, num)	ecrobot_init_sonar_sensor_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_init_sonar_sensor_expect_aux(const ecrobot_init_sonar_sensor_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_init_sonar_sensor_set_callback(callback, expected_num_calls)	ecrobot_init_sonar_sensor_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_init_sonar_sensor_set_callback_aux(ecrobot_init_sonar_sensor_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_init_sonar_sensor_num_calls(void);

typedef struct {
	S32 retval;
	struct {
		U8 port_id;
	} expected;
	struct {
		unsigned int port_id:1;
	} ignored;
} ecrobot_get_sonar_sensor_Expectation;
typedef S32 (*ecrobot_get_sonar_sensor_Callback)(U8 port_id);
#define ecrobot_get_sonar_sensor_expect(expectations, num)	ecrobot_get_sonar_sensor_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_get_sonar_sensor_expect_aux(const ecrobot_get_sonar_sensor_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_get_sonar_sensor_set_callback(callback, expected_num_calls)	ecrobot_get_sonar_sensor_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_get_sonar_sensor_set_callback_aux(ecrobot_get_sonar_sensor_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_get_sonar_sensor_num_calls(void);

typedef struct {
	int dummy;
	struct {
		U8 port_id;
	} expected;
	struct {
		unsigned int port_id:1;
	} ignored;
} ecrobot_term_sonar_sensor_Expectation;
typedef void (*ecrobot_term_sonar_sensor_Callback)(U8 port_id);
#define ecrobot_term_sonar_sensor_expect(expectations, num)	ecrobot_term_sonar_sensor_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_term_sonar_sensor_expect_aux(const ecrobot_term_sonar_sensor_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_term_sonar_sensor_set_callback(callback, expected_num_calls)	ecrobot_term_sonar_sensor_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_term_sonar_sensor_set_callback_aux(ecrobot_term_sonar_sensor_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_term_sonar_sensor_num_calls(void);

typedef struct {
	int dummy;
	struct {
		const U8 *bd_addr;
		const CHAR *pin;
	} expected;
	struct {
		unsigned int bd_addr:1;
		unsigned int pin:1;
	} ignored;
} ecrobot_init_bt_master_Expectation;
typedef void (*ecrobot_init_bt_master_Callback)(const U8 *bd_addr, const CHAR *pin);
#define ecrobot_init_bt_master_expect(expectations, num)	ecrobot_init_bt_master_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_init_bt_master_expect_aux(const ecrobot_init_bt_master_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_init_bt_master_set_callback(callback, expected_num_calls)	ecrobot_init_bt_master_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_init_bt_master_set_callback_aux(ecrobot_init_bt_master_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_init_bt_master_num_calls(void);

typedef struct {
	int dummy;
	struct {
		const CHAR *pin;
	} expected;
	struct {
		unsigned int pin:1;
	} ignored;
} ecrobot_init_bt_slave_Expectation;
typedef void (*ecrobot_init_bt_slave_Callback)(const CHAR *pin);
#define ecrobot_init_bt_slave_expect(expectations, num)	ecrobot_init_bt_slave_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_init_bt_slave_expect_aux(const ecrobot_init_bt_slave_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_init_bt_slave_set_callback(callback, expected_num_calls)	ecrobot_init_bt_slave_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_init_bt_slave_set_callback_aux(ecrobot_init_bt_slave_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_init_bt_slave_num_calls(void);

typedef struct {
	U8 retval;
	struct {
		CHAR* bd_name;
	} expected;
	struct {
		unsigned int bd_name:1;
	} ignored;
} ecrobot_get_bt_device_name_Expectation;
typedef U8 (*ecrobot_get_bt_device_name_Callback)(CHAR* bd_name);
#define ecrobot_get_bt_device_name_expect(expectations, num)	ecrobot_get_bt_device_name_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_get_bt_device_name_expect_aux(const ecrobot_get_bt_device_name_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_get_bt_device_name_set_callback(callback, expected_num_calls)	ecrobot_get_bt_device_name_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_get_bt_device_name_set_callback_aux(ecrobot_get_bt_device_name_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_get_bt_device_name_num_calls(void);

typedef struct {
	U8 retval;
	struct {
		const CHAR* bd_name;
	} expected;
	struct {
		unsigned int bd_name:1;
	} ignored;
} ecrobot_set_bt_device_name_Expectation;
typedef U8 (*ecrobot_set_bt_device_name_Callback)(const CHAR* bd_name);
#define ecrobot_set_bt_device_name_expect(expectations, num)	ecrobot_set_bt_device_name_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_set_bt_device_name_expect_aux(const ecrobot_set_bt_device_name_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_set_bt_device_name_set_callback(callback, expected_num_calls)	ecrobot_set_bt_device_name_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_set_bt_device_name_set_callback_aux(ecrobot_set_bt_device_name_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_set_bt_device_name_num_calls(void);

typedef struct {
	SINT retval;
} ecrobot_get_bt_status_Expectation;
typedef SINT (*ecrobot_get_bt_status_Callback)(void);
#define ecrobot_get_bt_status_expect(expectations, num)	ecrobot_get_bt_status_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_get_bt_status_expect_aux(const ecrobot_get_bt_status_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_get_bt_status_set_callback(callback, expected_num_calls)	ecrobot_get_bt_status_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_get_bt_status_set_callback_aux(ecrobot_get_bt_status_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_get_bt_status_num_calls(void);

typedef struct {
	S16 retval;
} ecrobot_get_bt_signal_strength_Expectation;
typedef S16 (*ecrobot_get_bt_signal_strength_Callback)(void);
#define ecrobot_get_bt_signal_strength_expect(expectations, num)	ecrobot_get_bt_signal_strength_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_get_bt_signal_strength_expect_aux(const ecrobot_get_bt_signal_strength_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_get_bt_signal_strength_set_callback(callback, expected_num_calls)	ecrobot_get_bt_signal_strength_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_get_bt_signal_strength_set_callback_aux(ecrobot_get_bt_signal_strength_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_get_bt_signal_strength_num_calls(void);

typedef struct {
	U32 retval;
	struct {
		U8 *buf;
		U32 bufLen;
	} expected;
	struct {
		unsigned int buf:1;
		unsigned int bufLen:1;
	} ignored;
} ecrobot_send_bt_packet_Expectation;
typedef U32 (*ecrobot_send_bt_packet_Callback)(U8 *buf, U32 bufLen);
#define ecrobot_send_bt_packet_expect(expectations, num)	ecrobot_send_bt_packet_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_send_bt_packet_expect_aux(const ecrobot_send_bt_packet_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_send_bt_packet_set_callback(callback, expected_num_calls)	ecrobot_send_bt_packet_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_send_bt_packet_set_callback_aux(ecrobot_send_bt_packet_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_send_bt_packet_num_calls(void);

typedef struct {
	U32 retval;
	struct {
		const void* buf;
		U32 off;
		U32 len;
	} expected;
	struct {
		unsigned int buf:1;
		unsigned int off:1;
		unsigned int len:1;
	} ignored;
} ecrobot_send_bt_Expectation;
typedef U32 (*ecrobot_send_bt_Callback)(const void* buf, U32 off, U32 len);
#define ecrobot_send_bt_expect(expectations, num)	ecrobot_send_bt_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_send_bt_expect_aux(const ecrobot_send_bt_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_send_bt_set_callback(callback, expected_num_calls)	ecrobot_send_bt_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_send_bt_set_callback_aux(ecrobot_send_bt_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_send_bt_num_calls(void);

typedef struct {
	U32 retval;
	struct {
		U8 *buf;
		U32 bufLen;
	} expected;
	struct {
		unsigned int buf:1;
		unsigned int bufLen:1;
	} ignored;
} ecrobot_read_bt_packet_Expectation;
typedef U32 (*ecrobot_read_bt_packet_Callback)(U8 *buf, U32 bufLen);
#define ecrobot_read_bt_packet_expect(expectations, num)	ecrobot_read_bt_packet_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_read_bt_packet_expect_aux(const ecrobot_read_bt_packet_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_read_bt_packet_set_callback(callback, expected_num_calls)	ecrobot_read_bt_packet_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_read_bt_packet_set_callback_aux(ecrobot_read_bt_packet_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_read_bt_packet_num_calls(void);

typedef struct {
	U32 retval;
	struct {
		void *buf;
		U32 off;
		U32 len;
	} expected;
	struct {
		unsigned int buf:1;
		unsigned int off:1;
		unsigned int len:1;
	} ignored;
} ecrobot_read_bt_Expectation;
typedef U32 (*ecrobot_read_bt_Callback)(void *buf, U32 off, U32 len);
#define ecrobot_read_bt_expect(expectations, num)	ecrobot_read_bt_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_read_bt_expect_aux(const ecrobot_read_bt_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_read_bt_set_callback(callback, expected_num_calls)	ecrobot_read_bt_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_read_bt_set_callback_aux(ecrobot_read_bt_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_read_bt_num_calls(void);

typedef struct {
	U8 retval;
} ecrobot_set_bt_factory_settings_Expectation;
typedef U8 (*ecrobot_set_bt_factory_settings_Callback)(void);
#define ecrobot_set_bt_factory_settings_expect(expectations, num)	ecrobot_set_bt_factory_settings_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_set_bt_factory_settings_expect_aux(const ecrobot_set_bt_factory_settings_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_set_bt_factory_settings_set_callback(callback, expected_num_calls)	ecrobot_set_bt_factory_settings_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_set_bt_factory_settings_set_callback_aux(ecrobot_set_bt_factory_settings_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_set_bt_factory_settings_num_calls(void);

typedef struct {
	int dummy;
} ecrobot_term_bt_connection_Expectation;
typedef void (*ecrobot_term_bt_connection_Callback)(void);
#define ecrobot_term_bt_connection_expect(expectations, num)	ecrobot_term_bt_connection_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_term_bt_connection_expect_aux(const ecrobot_term_bt_connection_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_term_bt_connection_set_callback(callback, expected_num_calls)	ecrobot_term_bt_connection_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_term_bt_connection_set_callback_aux(ecrobot_term_bt_connection_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_term_bt_connection_num_calls(void);

typedef struct {
	int dummy;
	struct {
		S8 data1;
		S8 data2;
	} expected;
	struct {
		unsigned int data1:1;
		unsigned int data2:1;
	} ignored;
} ecrobot_bt_data_logger_Expectation;
typedef void (*ecrobot_bt_data_logger_Callback)(S8 data1, S8 data2);
#define ecrobot_bt_data_logger_expect(expectations, num)	ecrobot_bt_data_logger_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_bt_data_logger_expect_aux(const ecrobot_bt_data_logger_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_bt_data_logger_set_callback(callback, expected_num_calls)	ecrobot_bt_data_logger_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_bt_data_logger_set_callback_aux(ecrobot_bt_data_logger_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_bt_data_logger_num_calls(void);

typedef struct {
	SINT retval;
	struct {
		const CHAR *file;
		U8 *lcd;
		S32 width;
		S32 height;
	} expected;
	struct {
		unsigned int file:1;
		unsigned int lcd:1;
		unsigned int width:1;
		unsigned int height:1;
	} ignored;
} ecrobot_bmp2lcd_Expectation;
typedef SINT (*ecrobot_bmp2lcd_Callback)(const CHAR *file, U8 *lcd, S32 width, S32 height);
#define ecrobot_bmp2lcd_expect(expectations, num)	ecrobot_bmp2lcd_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_bmp2lcd_expect_aux(const ecrobot_bmp2lcd_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_bmp2lcd_set_callback(callback, expected_num_calls)	ecrobot_bmp2lcd_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_bmp2lcd_set_callback_aux(ecrobot_bmp2lcd_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_bmp2lcd_num_calls(void);

typedef struct {
	int dummy;
	struct {
		const U8 *data;
		U32 width;
		U32 depth;
		U32 x;
		U32 y;
	} expected;
	struct {
		unsigned int data:1;
		unsigned int width:1;
		unsigned int depth:1;
		unsigned int x:1;
		unsigned int y:1;
	} ignored;
} display_bitmap_copy_Expectation;
typedef void (*display_bitmap_copy_Callback)(const U8 *data, U32 width, U32 depth, U32 x, U32 y);
#define display_bitmap_copy_expect(expectations, num)	display_bitmap_copy_expect_aux(expectations, num, __FILE__, __LINE__)
void display_bitmap_copy_expect_aux(const display_bitmap_copy_Expectation *expectations, int num, const char *file, unsigned int line);
#define display_bitmap_copy_set_callback(callback, expected_num_calls)	display_bitmap_copy_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void display_bitmap_copy_set_callback_aux(display_bitmap_copy_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int display_bitmap_copy_num_calls(void);

typedef struct {
	int dummy;
} display_update_Expectation;
typedef void (*display_update_Callback)(void);
#define display_update_expect(expectations, num)	display_update_expect_aux(expectations, num, __FILE__, __LINE__)
void display_update_expect_aux(const display_update_Expectation *expectations, int num, const char *file, unsigned int line);
#define display_update_set_callback(callback, expected_num_calls)	display_update_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void display_update_set_callback_aux(display_update_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int display_update_num_calls(void);

typedef struct {
	int dummy;
	struct {
		U32 updateToo;
	} expected;
	struct {
		unsigned int updateToo:1;
	} ignored;
} display_clear_Expectation;
typedef void (*display_clear_Callback)(U32 updateToo);
#define display_clear_expect(expectations, num)	display_clear_expect_aux(expectations, num, __FILE__, __LINE__)
void display_clear_expect_aux(const display_clear_Expectation *expectations, int num, const char *file, unsigned int line);
#define display_clear_set_callback(callback, expected_num_calls)	display_clear_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void display_clear_set_callback_aux(display_clear_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int display_clear_num_calls(void);

typedef struct {
	int dummy;
	struct {
		int x;
		int y;
	} expected;
	struct {
		unsigned int x:1;
		unsigned int y:1;
	} ignored;
} display_goto_xy_Expectation;
typedef void (*display_goto_xy_Callback)(int x, int y);
#define display_goto_xy_expect(expectations, num)	display_goto_xy_expect_aux(expectations, num, __FILE__, __LINE__)
void display_goto_xy_expect_aux(const display_goto_xy_Expectation *expectations, int num, const char *file, unsigned int line);
#define display_goto_xy_set_callback(callback, expected_num_calls)	display_goto_xy_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void display_goto_xy_set_callback_aux(display_goto_xy_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int display_goto_xy_num_calls(void);

typedef struct {
	int dummy;
	struct {
		const char *str;
	} expected;
	struct {
		unsigned int str:1;
	} ignored;
} display_string_Expectation;
typedef void (*display_string_Callback)(const char *str);
#define display_string_expect(expectations, num)	display_string_expect_aux(expectations, num, __FILE__, __LINE__)
void display_string_expect_aux(const display_string_Expectation *expectations, int num, const char *file, unsigned int line);
#define display_string_set_callback(callback, expected_num_calls)	display_string_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void display_string_set_callback_aux(display_string_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int display_string_num_calls(void);

typedef struct {
	int dummy;
	struct {
		U32 val;
		U32 places;
	} expected;
	struct {
		unsigned int val:1;
		unsigned int places:1;
	} ignored;
} display_hex_Expectation;
typedef void (*display_hex_Callback)(U32 val, U32 places);
#define display_hex_expect(expectations, num)	display_hex_expect_aux(expectations, num, __FILE__, __LINE__)
void display_hex_expect_aux(const display_hex_Expectation *expectations, int num, const char *file, unsigned int line);
#define display_hex_set_callback(callback, expected_num_calls)	display_hex_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void display_hex_set_callback_aux(display_hex_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int display_hex_num_calls(void);

typedef struct {
	int dummy;
	struct {
		U32 val;
		U32 places;
	} expected;
	struct {
		unsigned int val:1;
		unsigned int places:1;
	} ignored;
} display_unsigned_Expectation;
typedef void (*display_unsigned_Callback)(U32 val, U32 places);
#define display_unsigned_expect(expectations, num)	display_unsigned_expect_aux(expectations, num, __FILE__, __LINE__)
void display_unsigned_expect_aux(const display_unsigned_Expectation *expectations, int num, const char *file, unsigned int line);
#define display_unsigned_set_callback(callback, expected_num_calls)	display_unsigned_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void display_unsigned_set_callback_aux(display_unsigned_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int display_unsigned_num_calls(void);

typedef struct {
	int dummy;
	struct {
		int val;
		U32 places;
	} expected;
	struct {
		unsigned int val:1;
		unsigned int places:1;
	} ignored;
} display_int_Expectation;
typedef void (*display_int_Callback)(int val, U32 places);
#define display_int_expect(expectations, num)	display_int_expect_aux(expectations, num, __FILE__, __LINE__)
void display_int_expect_aux(const display_int_Expectation *expectations, int num, const char *file, unsigned int line);
#define display_int_set_callback(callback, expected_num_calls)	display_int_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void display_int_set_callback_aux(display_int_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int display_int_num_calls(void);

typedef struct {
	int dummy;
	struct {
		const CHAR *target_name;
	} expected;
	struct {
		unsigned int target_name:1;
	} ignored;
} ecrobot_status_monitor_Expectation;
typedef void (*ecrobot_status_monitor_Callback)(const CHAR *target_name);
#define ecrobot_status_monitor_expect(expectations, num)	ecrobot_status_monitor_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_status_monitor_expect_aux(const ecrobot_status_monitor_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_status_monitor_set_callback(callback, expected_num_calls)	ecrobot_status_monitor_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_status_monitor_set_callback_aux(ecrobot_status_monitor_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_status_monitor_num_calls(void);

typedef struct {
	SINT retval;
	struct {
		U32 freq;
		U32 ms;
		U32 vol;
	} expected;
	struct {
		unsigned int freq:1;
		unsigned int ms:1;
		unsigned int vol:1;
	} ignored;
} ecrobot_sound_tone_Expectation;
typedef SINT (*ecrobot_sound_tone_Callback)(U32 freq, U32 ms, U32 vol);
#define ecrobot_sound_tone_expect(expectations, num)	ecrobot_sound_tone_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_sound_tone_expect_aux(const ecrobot_sound_tone_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_sound_tone_set_callback(callback, expected_num_calls)	ecrobot_sound_tone_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_sound_tone_set_callback_aux(ecrobot_sound_tone_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_sound_tone_num_calls(void);

typedef struct {
	SINT retval;
	struct {
		const CHAR *file;
		U32 length;
		S32 freq;
		U32 vol;
	} expected;
	struct {
		unsigned int file:1;
		unsigned int length:1;
		unsigned int freq:1;
		unsigned int vol:1;
	} ignored;
} ecrobot_sound_wav_Expectation;
typedef SINT (*ecrobot_sound_wav_Callback)(const CHAR *file, U32 length, S32 freq, U32 vol);
#define ecrobot_sound_wav_expect(expectations, num)	ecrobot_sound_wav_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_sound_wav_expect_aux(const ecrobot_sound_wav_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_sound_wav_set_callback(callback, expected_num_calls)	ecrobot_sound_wav_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_sound_wav_set_callback_aux(ecrobot_sound_wav_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_sound_wav_num_calls(void);

typedef struct {
	U8 retval;
} ecrobot_is_ENTER_button_pressed_Expectation;
typedef U8 (*ecrobot_is_ENTER_button_pressed_Callback)(void);
#define ecrobot_is_ENTER_button_pressed_expect(expectations, num)	ecrobot_is_ENTER_button_pressed_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_is_ENTER_button_pressed_expect_aux(const ecrobot_is_ENTER_button_pressed_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_is_ENTER_button_pressed_set_callback(callback, expected_num_calls)	ecrobot_is_ENTER_button_pressed_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_is_ENTER_button_pressed_set_callback_aux(ecrobot_is_ENTER_button_pressed_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_is_ENTER_button_pressed_num_calls(void);

typedef struct {
	U8 retval;
} ecrobot_is_RUN_button_pressed_Expectation;
typedef U8 (*ecrobot_is_RUN_button_pressed_Callback)(void);
#define ecrobot_is_RUN_button_pressed_expect(expectations, num)	ecrobot_is_RUN_button_pressed_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_is_RUN_button_pressed_expect_aux(const ecrobot_is_RUN_button_pressed_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_is_RUN_button_pressed_set_callback(callback, expected_num_calls)	ecrobot_is_RUN_button_pressed_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_is_RUN_button_pressed_set_callback_aux(ecrobot_is_RUN_button_pressed_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_is_RUN_button_pressed_num_calls(void);

typedef struct {
	U16 retval;
} ecrobot_get_battery_voltage_Expectation;
typedef U16 (*ecrobot_get_battery_voltage_Callback)(void);
#define ecrobot_get_battery_voltage_expect(expectations, num)	ecrobot_get_battery_voltage_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_get_battery_voltage_expect_aux(const ecrobot_get_battery_voltage_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_get_battery_voltage_set_callback(callback, expected_num_calls)	ecrobot_get_battery_voltage_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_get_battery_voltage_set_callback_aux(ecrobot_get_battery_voltage_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_get_battery_voltage_num_calls(void);

typedef struct {
	U32 retval;
} systick_get_ms_Expectation;
typedef U32 (*systick_get_ms_Callback)(void);
#define systick_get_ms_expect(expectations, num)	systick_get_ms_expect_aux(expectations, num, __FILE__, __LINE__)
void systick_get_ms_expect_aux(const systick_get_ms_Expectation *expectations, int num, const char *file, unsigned int line);
#define systick_get_ms_set_callback(callback, expected_num_calls)	systick_get_ms_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void systick_get_ms_set_callback_aux(systick_get_ms_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int systick_get_ms_num_calls(void);

typedef struct {
	int dummy;
	struct {
		U32 ms;
	} expected;
	struct {
		unsigned int ms:1;
	} ignored;
} systick_wait_ms_Expectation;
typedef void (*systick_wait_ms_Callback)(U32 ms);
#define systick_wait_ms_expect(expectations, num)	systick_wait_ms_expect_aux(expectations, num, __FILE__, __LINE__)
void systick_wait_ms_expect_aux(const systick_wait_ms_Expectation *expectations, int num, const char *file, unsigned int line);
#define systick_wait_ms_set_callback(callback, expected_num_calls)	systick_wait_ms_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void systick_wait_ms_set_callback_aux(systick_wait_ms_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int systick_wait_ms_num_calls(void);

typedef struct {
	U16 retval;
	struct {
		U8 port_id;
	} expected;
	struct {
		unsigned int port_id:1;
	} ignored;
} ecrobot_get_gyro_sensor_Expectation;
typedef U16 (*ecrobot_get_gyro_sensor_Callback)(U8 port_id);
#define ecrobot_get_gyro_sensor_expect(expectations, num)	ecrobot_get_gyro_sensor_expect_aux(expectations, num, __FILE__, __LINE__)
void ecrobot_get_gyro_sensor_expect_aux(const ecrobot_get_gyro_sensor_Expectation *expectations, int num, const char *file, unsigned int line);
#define ecrobot_get_gyro_sensor_set_callback(callback, expected_num_calls)	ecrobot_get_gyro_sensor_set_callback_aux(callback, expected_num_calls, __FILE__, __LINE__)
void ecrobot_get_gyro_sensor_set_callback_aux(ecrobot_get_gyro_sensor_Callback callback, int expected_num_calls, const char *file, unsigned int line);
int ecrobot_get_gyro_sensor_num_calls(void);

#endif /* MOCK_ECROBOT_INTERFACE_H_INCLUDED */

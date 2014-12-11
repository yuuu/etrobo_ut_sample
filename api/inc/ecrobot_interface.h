/*
 * etrobo_api.h
 *
 *  Created on: 2014/12/08
 *      Author: yuhei
 */

#ifndef ETROBO_API_H_
#define ETROBO_API_H_

/*======*/
/* enum */
/*======*/
typedef enum {
	NXT_PORT_A,
	NXT_PORT_B,
	NXT_PORT_C
}MOTOR_PORT_T;

typedef enum {
	NXT_PORT_S1,
	NXT_PORT_S2,
	NXT_PORT_S3,
	NXT_PORT_S4
}SENSOR_PORT_T;

typedef enum {
	EXECUTED_FROM_FLASH,
	EXECUTED_FROM_SRAM,
	DEVICE_NO_INIT,
	DEVICE_INITIALIZED,
	BT_NO_INIT,
	BT_INITIALIZED,
	BT_CONNECTED,
	BT_STREAM,
}SYSTEM_T;

/*=========*/
/* typedef */
/*=========*/
typedef unsigned long U32;
typedef unsigned short U16;
typedef unsigned char U8;
typedef signed long S32;
typedef signed short S16;
typedef signed char S8;
typedef char CHAR;
typedef int SINT;

/*===========*/
/* motor API */
/*===========*/
int nxt_motor_get_count(U32 n);
void nxt_motor_set_count(U32 n, int count);
void nxt_motor_set_speed(U32 n, int speed_percent, int brake);

/*==================*/
/* light sensor API */
/*==================*/
void ecrobot_set_light_sensor_active(U8 port_id);
void ecrobot_set_light_sensor_inactive(U8 port_id);
U16 ecrobot_get_light_sensor(U8 port_id);

/*==================*/
/* touch sensor API */
/*==================*/
U8 ecrobot_get_touch_sensor(U8 port_id);

/*==================*/
/* sonar sensor API */
/*==================*/
void ecrobot_init_sonar_sensor(U8 port_id);
S32 ecrobot_get_sonar_sensor(U8 port_id);
void ecrobot_term_sonar_sensor(U8 port_id);

/*===============*/
/* Bluetooth API */
/*===============*/
void ecrobot_init_bt_master(const U8 *bd_addr, const CHAR *pin);
void ecrobot_init_bt_slave(const CHAR *pin);
U8 ecrobot_get_bt_device_name(CHAR* bd_name);
U8 ecrobot_set_bt_device_name(const CHAR* bd_name);
SINT ecrobot_get_bt_status(void);
S16 ecrobot_get_bt_signal_strength(void);
U32 ecrobot_send_bt_packet(U8 *buf, U32 bufLen);
U32 ecrobot_send_bt(const void* buf, U32 off, U32 len);
U32 ecrobot_read_bt_packet(U8 *buf, U32 bufLen);
U32 ecrobot_read_bt(void *buf, U32 off, U32 len);
U8 ecrobot_set_bt_factory_settings(void);
void ecrobot_term_bt_connection(void);
void ecrobot_bt_data_logger(S8 data1, S8 data2);

/*=========*/
/* LCD API */
/*=========*/
SINT ecrobot_bmp2lcd(const CHAR *file, U8 *lcd, S32 width, S32 height);
void display_bitmap_copy(const U8 *data, U32 width, U32 depth, U32 x, U32 y);
void display_update(void);
void display_clear(U32 updateToo);
void display_goto_xy(int x, int y);
void display_string(const char *str);
void display_hex(U32 val, U32 places);
void display_unsigned(U32 val, U32 places);
void display_int(int val, U32 places);
void ecrobot_status_monitor(const CHAR *target_name);

/*===========*/
/* SOUND API */
/*===========*/
SINT ecrobot_sound_tone(U32 freq, U32 ms, U32 vol);
SINT ecrobot_sound_wav(const CHAR *file, U32 length, S32 freq, U32 vol);

/*=========*/
/* NXT API */
/*=========*/
U8 ecrobot_is_ENTER_button_pressed(void);
U8 ecrobot_is_RUN_button_pressed(void);
U16 ecrobot_get_battery_voltage(void);
U32 systick_get_ms(void);
void systick_wait_ms(U32 ms);

/*==========*/
/* GYRO API */
/*==========*/
U16 ecrobot_get_gyro_sensor(U8 port_id);

#endif /* ETROBO_API_H_ */

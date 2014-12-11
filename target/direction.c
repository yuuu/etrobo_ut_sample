/*
 * direction.c
 *
 *  Created on: 2014/12/08
 *      Author: yuhei
 */
#include "mock_ecrobot_interface.h"
#include "direction.h"

static long direction = 0;

void direction_update()
{
	long r = 0;
	long l = 0;
	r = nxt_motor_get_count(NXT_PORT_A);
	l = nxt_motor_get_count(NXT_PORT_C);

	direction = (NXT_WHEEL_DIAMETER / (2 * NXT_TREAD)) * (r - l);
}

long direction_get()
{
	return direction;
}

/*
 * direction.h
 *
 *  Created on: 2014/12/08
 *      Author: yuhei
 */

#ifndef DIRECTION_H_
#define DIRECTION_H_

#define NXT_WHEEL_DIAMETER	8.1		/*タイヤ直径*/
#define NXT_TREAD			16.74	/*タイヤの中心間距離*/

void direction_update();
long direction_get();

#endif /* DIRECTION_H_ */

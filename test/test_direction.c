#include "PCUnit/PCUnit.h"
#include "mock_ecrobot_interface.h"
#include "direction.h"
#include <string.h>

static int initialize(void)
{
	return 0;
}

static int cleanup(void)
{
	return 0;
}

static int setup(void)
{
	mock_ecrobot_interface_init();
	return 0;
}

static int teardown(void)
{
	mock_ecrobot_interface_verify();
	return 0;
}

/*
 * 左右のモータエンコーダ値が0の時
 * 方位が0となること
 */
static void test_update_0(void)
{
	int call_count = 2;
	nxt_motor_get_count_Expectation ex[call_count];
	long direction = -1;

  memset(ex, 0, sizeof(nxt_motor_get_count_Expectation) * call_count);

	/*============================*/
	/* mockで検証する内容を設定する */
	/*============================*/
	/* nxt_motor_get_countの検証内容 */
	/* 1回目の呼び出し */
	ex[0].expected.n = NXT_PORT_A;		/* 引数nがNXT_PORT_A(右モータ)であること */
	ex[0].retval = 0;					/* 戻り値として0を返却すること */
	/* 2回目の呼び出し */
	ex[1].expected.n = NXT_PORT_C;		/* 引数nがNXT_PORT_C(左モータ)であること */
	ex[1].retval = 0;					/* 戻り値として0を返却すること */
	/* 検証内容を設定する */
	nxt_motor_get_count_expect(ex, call_count);

	/*========================*/
	/* 試験対象の関数を呼び出す */
	/*========================*/
	direction_update();					/* 方位を更新する */
	direction = direction_get();		/* 方位を取得する */

	/*===============*/
	/* 結果を検証する */
	/*===============*/
	PCU_ASSERT_EQUAL(direction, 0);		/* 取得した方位が0であること */
}

/*
 * 右モータエンコーダ値が372, 左モータエンコーダ値が0の時
 * 方位が90となること
 */
static void test_update_plus90(void)
{
	int call_count = 2;
	nxt_motor_get_count_Expectation ex[call_count];
	long direction = -1;

  memset(ex, 0, sizeof(nxt_motor_get_count_Expectation) * call_count);

	/*============================*/
	/* mockで検証する内容を設定する */
	/*============================*/
	/* nxt_motor_get_countの検証内容 */
	/* 1回目の呼び出し */
	ex[0].expected.n = NXT_PORT_A;		/* 引数nがNXT_PORT_A(右モータ)であること */
	ex[0].retval = 372;					/* 戻り値として372を返却すること */
	/* 2回目の呼び出し */
	ex[1].expected.n = NXT_PORT_C;		/* 引数nがNXT_PORT_C(左モータ)であること */
	ex[1].retval = 0;					/* 戻り値として0を返却すること */
	/* 検証内容を設定する */
	nxt_motor_get_count_expect(ex, call_count);

	/*========================*/
	/* 試験対象の関数を呼び出す */
	/*========================*/
	direction_update();					/* 方位を更新する */
	direction = direction_get();		/* 方位を取得する */

	/*===============*/
	/* 結果を検証する */
	/*===============*/
	PCU_ASSERT_EQUAL(direction, 90);		/* 取得した方位が0であること */
}

/*
 * 右モータエンコーダ値が372, 左モータエンコーダ値が744の時
 * 方位が-90となること
 */
static void test_update_minus90(void)
{
	int call_count = 2;
	nxt_motor_get_count_Expectation ex[call_count];
	long direction = -1;

  memset(ex, 0, sizeof(nxt_motor_get_count_Expectation) * call_count);

	/*============================*/
	/* mockで検証する内容を設定する */
	/*============================*/
	/* nxt_motor_get_countの検証内容 */
	/* 1回目の呼び出し */
	ex[0].expected.n = NXT_PORT_A;		/* 引数nがNXT_PORT_A(右モータ)であること */
	ex[0].retval = 372;					/* 戻り値として0を返却すること */
	/* 2回目の呼び出し */
	ex[1].expected.n = NXT_PORT_C;		/* 引数nがNXT_PORT_C(左モータ)であること */
	ex[1].retval = 744;					/* 戻り値として0を返却すること */
	/* 検証内容を設定する */
	nxt_motor_get_count_expect(ex, call_count);

	/*========================*/
	/* 試験対象の関数を呼び出す */
	/*========================*/
	direction_update();					/* 方位を更新する */
	direction = direction_get();		/* 方位を取得する */

	/*===============*/
	/* 結果を検証する */
	/*===============*/
	PCU_ASSERT_EQUAL(direction, -90);		/* 取得した方位が0であること */
}

PCU_Suite *test_direction_suite(void)
{
	static PCU_Test tests[] = {
		PCU_TEST(test_update_0),
		PCU_TEST(test_update_plus90),
		PCU_TEST(test_update_minus90),
	};
	static PCU_Suite suite = {
		"test_direction", tests, sizeof tests / sizeof tests[0],
		setup,
		teardown,
		initialize,
		cleanup,
	};
	return &suite;
}


#include "runtime.h"
#include "controls.h"
#include "../stubs/NSRunLoop_arginfo.h"

void appkit_register_NSRunLoop(void)
{
	APPKIT_MAP(NSRunLoop, appkit_ce_NSObject);
}

ANY_METHOD(NSRunLoop, mainRunLoop, PARSE_NONE, appkit_box_objc(return_value, [NSRunLoop mainRunLoop]);)
ANY_METHOD(NSRunLoop, currentRunLoop, PARSE_NONE, appkit_box_objc(return_value, [NSRunLoop currentRunLoop]);)

ZEND_METHOD(NSRunLoop, addTimerForMode)
{
	zend_object *timer;
	zend_string *mode;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(timer, appkit_ce_NSTimer)
		Z_PARAM_STR(mode)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		[SELF(NSRunLoop) addTimer:(NSTimer *) APPKIT_ID(timer) forMode:appkit_nsstring(mode)];
	APPKIT_END
}

ANY_METHOD(NSRunLoop, getCFRunLoop, PARSE_NONE, appkit_box_cf(return_value, [SELF(NSRunLoop) getCFRunLoop]);)

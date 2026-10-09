#include "runtime.h"
#include "controls.h"
#import <QuartzCore/QuartzCore.h>
#include "../stubs/CADisplayLink_arginfo.h"

void appkit_register_CADisplayLink(void)
{
	appkit_ce_CAFrameRateRange = register_class_CAFrameRateRange();
	APPKIT_MAP(CADisplayLink, appkit_ce_NSObject);
}

ZEND_METHOD(CAFrameRateRange, __construct)
{
	double minimum = 0.0, maximum = 0.0, preferred = 0.0;

	ZEND_PARSE_PARAMETERS_START(0, 3)
		Z_PARAM_OPTIONAL
		Z_PARAM_DOUBLE(minimum)
		Z_PARAM_DOUBLE(maximum)
		Z_PARAM_DOUBLE(preferred)
	ZEND_PARSE_PARAMETERS_END();

	ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(ZEND_THIS), 0), minimum);
	ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(ZEND_THIS), 1), maximum);
	ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(ZEND_THIS), 2), preferred);
}

/* Every CADisplayLink call is macOS 14+: the class only exists there. */
#define LINK_METHOD(name, parse, body) \
ZEND_METHOD(CADisplayLink, name) \
{ \
	parse \
	APPKIT_REQUIRE_MAIN_THREAD(); \
	APPKIT_BEGIN \
		if (@available(macOS 14.0, *)) { \
			CADisplayLink *link = SELF(CADisplayLink); \
			body \
		} else { \
			zend_throw_exception(appkit_ce_AppKitException, "CADisplayLink needs macOS 14", 0); \
			RETURN_THROWS(); \
		} \
	APPKIT_END \
}

LINK_METHOD(timestamp, PARSE_NONE, RETURN_DOUBLE([link timestamp]);)
LINK_METHOD(targetTimestamp, PARSE_NONE, RETURN_DOUBLE([link targetTimestamp]);)
LINK_METHOD(duration, PARSE_NONE, RETURN_DOUBLE([link duration]);)
LINK_METHOD(isPaused, PARSE_NONE, RETURN_BOOL([link isPaused]);)
LINK_METHOD(setPaused, PARSE_BOOL, [link setPaused:v];)
LINK_METHOD(invalidate, PARSE_NONE, [link invalidate];)

LINK_METHOD(preferredFrameRateRange, PARSE_NONE,
	CAFrameRateRange range = [link preferredFrameRateRange];
	object_init_ex(return_value, appkit_ce_CAFrameRateRange);
	ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(return_value), 0), range.minimum);
	ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(return_value), 1), range.maximum);
	ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(return_value), 2), range.preferred);
)

LINK_METHOD(setPreferredFrameRateRange, PARSE_OBJ(appkit_ce_CAFrameRateRange),
	zval *props = OBJ_PROP_NUM(v, 0);
	[link setPreferredFrameRateRange:CAFrameRateRangeMake((float) zval_get_double(&props[0]), (float) zval_get_double(&props[1]), (float) zval_get_double(&props[2]))];
)

#define PARSE_RUN_LOOP zend_object *loop; zend_string *mode; ZEND_PARSE_PARAMETERS_START(2, 2) Z_PARAM_OBJ_OF_CLASS(loop, appkit_ce_NSRunLoop) Z_PARAM_STR(mode) ZEND_PARSE_PARAMETERS_END();

LINK_METHOD(addToRunLoopForMode, PARSE_RUN_LOOP,
	CFStringRef run_mode = appkit_run_loop_mode(mode);
	[link addToRunLoop:(NSRunLoop *) APPKIT_ID(loop) forMode:(NSRunLoopMode) run_mode];
	CFRelease(run_mode);
)

LINK_METHOD(removeFromRunLoopForMode, PARSE_RUN_LOOP,
	CFStringRef run_mode = appkit_run_loop_mode(mode);
	[link removeFromRunLoop:(NSRunLoop *) APPKIT_ID(loop) forMode:(NSRunLoopMode) run_mode];
	CFRelease(run_mode);
)

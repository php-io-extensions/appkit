#include "runtime.h"
#include "controls.h"
#include "../stubs/NSEvent_arginfo.h"

#import <AppKit/AppKit.h>

void appkit_register_NSEvent(void)
{
	appkit_ce_NSEventType = register_class_NSEventType();
	appkit_ce_NSEventMask = register_class_NSEventMask();
	appkit_ce_NSEventModifierFlags = register_class_NSEventModifierFlags();
	appkit_ce_NSEvent = register_class_NSEvent(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_NSEvent);
	appkit_map_objc_class("NSEvent", appkit_ce_NSEvent);
}

#define THIS_EVENT ((NSEvent *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(NSEvent, otherEventWithTypeLocationModifierFlagsTimestampWindowNumberContextSubtypeData1Data2)
{
	zend_object *type;
	zend_object *location;
	zend_object *flags_case = NULL;
	zend_long flags_long = 0;
	double timestamp;
	zend_long window_number;
	zend_object *unused_pass_nil = NULL;
	zend_long subtype;
	zend_long data1;
	zend_long data2;

	ZEND_PARSE_PARAMETERS_START(9, 9)
		Z_PARAM_OBJ_OF_CLASS(type, appkit_ce_NSEventType)
		Z_PARAM_OBJ_OF_CLASS(location, appkit_ce_NSPoint)
		Z_PARAM_OBJ_OF_CLASS_OR_LONG(flags_case, appkit_ce_NSEventModifierFlags, flags_long)
		Z_PARAM_DOUBLE(timestamp)
		Z_PARAM_LONG(window_number)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(unused_pass_nil, appkit_ce_NSObject)
		Z_PARAM_LONG(subtype)
		Z_PARAM_LONG(data1)
		Z_PARAM_LONG(data2)
	ZEND_PARSE_PARAMETERS_END();

	if (subtype < SHRT_MIN || subtype > SHRT_MAX) {
		zend_argument_value_error(7, "must be between %d and %d", SHRT_MIN, SHRT_MAX);
		RETURN_THROWS();
	}

	zval *x = OBJ_PROP_NUM(location, 0);
	zval *y = OBJ_PROP_NUM(location, 1);

	if (Z_TYPE_P(x) != IS_DOUBLE || Z_TYPE_P(y) != IS_DOUBLE) {
		zend_argument_value_error(2, "must have both $x and $y initialized");
		RETURN_THROWS();
	}

	NSPoint point = NSMakePoint(Z_DVAL_P(x), Z_DVAL_P(y));

	APPKIT_BEGIN
		NSEvent *event = [NSEvent otherEventWithType:(NSEventType) appkit_enum_value(type, 0)
			location:point
			modifierFlags:(NSEventModifierFlags) appkit_enum_value(flags_case, flags_long)
			timestamp:timestamp
			windowNumber:(NSInteger) window_number
			context:(unused_pass_nil != NULL ? APPKIT_ID(unused_pass_nil) : nil)
			subtype:(short) subtype
			data1:(NSInteger) data1
			data2:(NSInteger) data2];

		appkit_box_objc(return_value, event);
	APPKIT_END
}

ZEND_METHOD(NSEvent, mouseEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberClickCountPressure)
{
	zend_object *type;
	zend_object *location;
	zend_object *flags_case = NULL;
	zend_long flags_long = 0;
	double timestamp;
	zend_long window_number;
	zend_object *unused_pass_nil = NULL;
	zend_long event_number;
	zend_long click_count;
	double pressure;
	NSPoint point;

	ZEND_PARSE_PARAMETERS_START(9, 9)
		Z_PARAM_OBJ_OF_CLASS(type, appkit_ce_NSEventType)
		Z_PARAM_OBJ_OF_CLASS(location, appkit_ce_NSPoint)
		Z_PARAM_OBJ_OF_CLASS_OR_LONG(flags_case, appkit_ce_NSEventModifierFlags, flags_long)
		Z_PARAM_DOUBLE(timestamp)
		Z_PARAM_LONG(window_number)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(unused_pass_nil, appkit_ce_NSObject)
		Z_PARAM_LONG(event_number)
		Z_PARAM_LONG(click_count)
		Z_PARAM_DOUBLE(pressure)
	ZEND_PARSE_PARAMETERS_END();
	if (!appkit_point_from(location, 2, &point)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		NSEvent *event = [NSEvent mouseEventWithType:(NSEventType) appkit_enum_value(type, 0)
			location:point
			modifierFlags:(NSEventModifierFlags) appkit_enum_value(flags_case, flags_long)
			timestamp:timestamp
			windowNumber:(NSInteger) window_number
			context:(unused_pass_nil != NULL ? APPKIT_ID(unused_pass_nil) : nil)
			eventNumber:(NSInteger) event_number
			clickCount:(NSInteger) click_count
			pressure:(float) pressure];

		appkit_box_objc(return_value, event);
	APPKIT_END
}

ZEND_METHOD(NSEvent, buttonNumber)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_LONG((zend_long) [THIS_EVENT buttonNumber]);
	APPKIT_END
}

ZEND_METHOD(NSEvent, type)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		appkit_return_enum(return_value, appkit_ce_NSEventType, (zend_long) [THIS_EVENT type], true);
	APPKIT_END
}

ZEND_METHOD(NSEvent, subtype)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_LONG((zend_long) [THIS_EVENT subtype]);
	APPKIT_END
}

ZEND_METHOD(NSEvent, modifierFlags)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_LONG((zend_long) [THIS_EVENT modifierFlags]);
	APPKIT_END
}

ZEND_METHOD(NSEvent, timestamp)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_DOUBLE([THIS_EVENT timestamp]);
	APPKIT_END
}

ZEND_METHOD(NSEvent, windowNumber)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_LONG((zend_long) [THIS_EVENT windowNumber]);
	APPKIT_END
}

ZEND_METHOD(NSEvent, locationInWindow)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		NSPoint point = [THIS_EVENT locationInWindow];

		object_init_ex(return_value, appkit_ce_NSPoint);
		ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(return_value), 0), point.x);
		ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(return_value), 1), point.y);
	APPKIT_END
}

ZEND_METHOD(NSEvent, data1)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_LONG((zend_long) [THIS_EVENT data1]);
	APPKIT_END
}

ZEND_METHOD(NSEvent, data2)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_LONG((zend_long) [THIS_EVENT data2]);
	APPKIT_END
}

ZEND_METHOD(NSEvent, keyEventWithTypeLocationModifierFlagsTimestampWindowNumberContextCharactersCharactersIgnoringModifiersIsARepeatKeyCode)
{
	zend_object *type;
	zend_object *location;
	zend_object *flags_case = NULL;
	zend_long flags_long = 0;
	double timestamp;
	zend_long window_number;
	zend_object *unused_pass_nil = NULL;
	zend_string *keys;
	zend_string *ukeys;
	bool repeat;
	zend_long key_code;
	NSPoint point;

	ZEND_PARSE_PARAMETERS_START(10, 10)
		Z_PARAM_OBJ_OF_CLASS(type, appkit_ce_NSEventType)
		Z_PARAM_OBJ_OF_CLASS(location, appkit_ce_NSPoint)
		Z_PARAM_OBJ_OF_CLASS_OR_LONG(flags_case, appkit_ce_NSEventModifierFlags, flags_long)
		Z_PARAM_DOUBLE(timestamp)
		Z_PARAM_LONG(window_number)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(unused_pass_nil, appkit_ce_NSObject)
		Z_PARAM_STR(keys)
		Z_PARAM_STR(ukeys)
		Z_PARAM_BOOL(repeat)
		Z_PARAM_LONG(key_code)
	ZEND_PARSE_PARAMETERS_END();

	if (key_code < 0 || key_code > USHRT_MAX) {
		zend_argument_value_error(10, "must be between 0 and %d", USHRT_MAX);
		RETURN_THROWS();
	}
	if (!appkit_point_from(location, 2, &point)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		appkit_box_objc(return_value, [NSEvent keyEventWithType:(NSEventType) appkit_enum_value(type, 0)
			location:point
			modifierFlags:(NSEventModifierFlags) appkit_enum_value(flags_case, flags_long)
			timestamp:timestamp
			windowNumber:(NSInteger) window_number
			context:(unused_pass_nil != NULL ? APPKIT_ID(unused_pass_nil) : nil)
			characters:appkit_nsstring(keys)
			charactersIgnoringModifiers:appkit_nsstring(ukeys)
			isARepeat:repeat
			keyCode:(unsigned short) key_code]);
	APPKIT_END
}

METHOD(NSEvent, eventWithCGEvent, PARSE_OBJ(appkit_ce_CGEvent), appkit_box_objc(return_value, [NSEvent eventWithCGEvent:(CGEventRef) APPKIT_CF(v)]);)
METHOD(NSEvent, mouseLocation, PARSE_NONE, appkit_return_point(return_value, [NSEvent mouseLocation]);)
METHOD(NSEvent, pressedMouseButtons, PARSE_NONE, RETURN_LONG((zend_long) [NSEvent pressedMouseButtons]);)
LONG_GET(NSEvent, NSEvent, keyCode, keyCode)
STR_GET_OR_NULL(NSEvent, NSEvent, characters, characters)
STR_GET_OR_NULL(NSEvent, NSEvent, charactersIgnoringModifiers, charactersIgnoringModifiers)
BOOL_GET(NSEvent, NSEvent, isARepeat, isARepeat)
LONG_GET(NSEvent, NSEvent, clickCount, clickCount)
DOUBLE_GET(NSEvent, NSEvent, deltaX, deltaX)
DOUBLE_GET(NSEvent, NSEvent, deltaY, deltaY)
DOUBLE_GET(NSEvent, NSEvent, scrollingDeltaX, scrollingDeltaX)
DOUBLE_GET(NSEvent, NSEvent, scrollingDeltaY, scrollingDeltaY)
BOOL_GET(NSEvent, NSEvent, hasPreciseScrollingDeltas, hasPreciseScrollingDeltas)
BOOL_GET(NSEvent, NSEvent, isDirectionInvertedFromDevice, isDirectionInvertedFromDevice)
OBJ_GET(NSEvent, NSEvent, window, window)

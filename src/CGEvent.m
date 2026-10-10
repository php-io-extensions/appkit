#include "runtime.h"
#include "../stubs/CGEvent_arginfo.h"

#import <CoreGraphics/CoreGraphics.h>

void appkit_register_CGEvent(int module_number)
{
	register_CGEvent_symbols(module_number);

	appkit_ce_CGEventType = register_class_CGEventType();
	appkit_ce_CGMouseButton = register_class_CGMouseButton();
	appkit_ce_CGScrollEventUnit = register_class_CGScrollEventUnit();
	appkit_ce_CGEvent = register_class_CGEvent(appkit_ce_CFType);
	appkit_object_setup(appkit_ce_CGEvent);
	appkit_ce_CGEventSourceStateID = register_class_CGEventSourceStateID();
	appkit_ce_CGEventSource = register_class_CGEventSource(appkit_ce_CFType);
	appkit_object_setup(appkit_ce_CGEventSource);
}

#define THIS_CG_EVENT ((CGEventRef) APPKIT_CF(Z_OBJ_P(ZEND_THIS)))

/* No CGEventSource is bound: a source argument must be null. */
static bool appkit_event_source_is_null(zend_object *source)
{
	if (source != NULL) {
		zend_argument_value_error(1, "must be null: no CGEventSource is bound");
		return false;
	}

	return true;
}

/* Box a +1 event a Create function answered, then drop that reference: the wrapper holds its own. */
static void appkit_return_created_event(zval *return_value, CGEventRef created)
{
	appkit_box_cf(return_value, created);
	if (created != NULL) {
		CFRelease(created);
	}
}

ZEND_METHOD(CGEvent, createMouseEvent)
{
	zend_object *source = NULL;
	zend_object *type;
	zend_object *position;
	zend_object *button;
	NSPoint point;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(source, appkit_ce_CFType)
		Z_PARAM_OBJ_OF_CLASS(type, appkit_ce_CGEventType)
		Z_PARAM_OBJ_OF_CLASS(position, appkit_ce_NSPoint)
		Z_PARAM_OBJ_OF_CLASS(button, appkit_ce_CGMouseButton)
	ZEND_PARSE_PARAMETERS_END();

	if (!appkit_event_source_is_null(source) || !appkit_point_from(position, 3, &point)) {
		RETURN_THROWS();
	}

	appkit_return_created_event(return_value, CGEventCreateMouseEvent(NULL,
		(CGEventType) appkit_enum_value(type, 0), NSPointToCGPoint(point), (CGMouseButton) appkit_enum_value(button, 0)));
}

ZEND_METHOD(CGEvent, createScrollWheelEvent2)
{
	zend_object *source = NULL;
	zend_object *units;
	zend_long count, wheel1, wheel2, wheel3;

	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(source, appkit_ce_CFType)
		Z_PARAM_OBJ_OF_CLASS(units, appkit_ce_CGScrollEventUnit)
		Z_PARAM_LONG(count)
		Z_PARAM_LONG(wheel1)
		Z_PARAM_LONG(wheel2)
		Z_PARAM_LONG(wheel3)
	ZEND_PARSE_PARAMETERS_END();

	if (!appkit_event_source_is_null(source)) {
		RETURN_THROWS();
	}
	if (count < 1 || count > 3) {
		zend_argument_value_error(3, "must be between 1 and 3");
		RETURN_THROWS();
	}

	appkit_return_created_event(return_value, CGEventCreateScrollWheelEvent2(NULL,
		(CGScrollEventUnit) appkit_enum_value(units, 0), (uint32_t) count, (int32_t) wheel1, (int32_t) wheel2, (int32_t) wheel3));
}

ZEND_METHOD(CGEvent, getIntegerValueField)
{
	zend_long field;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();

	RETURN_LONG((zend_long) CGEventGetIntegerValueField(THIS_CG_EVENT, (CGEventField) field));
}

ZEND_METHOD(CGEvent, setIntegerValueField)
{
	zend_long field, value;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(field)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();

	CGEventSetIntegerValueField(THIS_CG_EVENT, (CGEventField) field, (int64_t) value);
}

ZEND_METHOD(CGEvent, getLocation)
{
	ZEND_PARSE_PARAMETERS_NONE();

	appkit_return_point(return_value, NSPointFromCGPoint(CGEventGetLocation(THIS_CG_EVENT)));
}

ZEND_METHOD(CGEvent, setLocation)
{
	zend_object *location;
	NSPoint point;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(location, appkit_ce_NSPoint)
	ZEND_PARSE_PARAMETERS_END();

	if (!appkit_point_from(location, 1, &point)) {
		RETURN_THROWS();
	}

	CGEventSetLocation(THIS_CG_EVENT, NSPointToCGPoint(point));
}

ZEND_METHOD(CGEventSource, keyState)
{
	zend_object *state;
	zend_long key;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(state, appkit_ce_CGEventSourceStateID)
		Z_PARAM_LONG(key)
	ZEND_PARSE_PARAMETERS_END();

	if (key < 0 || key > USHRT_MAX) {
		zend_argument_value_error(2, "must be between 0 and %d", USHRT_MAX);
		RETURN_THROWS();
	}

	RETURN_BOOL(CGEventSourceKeyState((CGEventSourceStateID) appkit_enum_value(state, 0), (CGKeyCode) key));
}

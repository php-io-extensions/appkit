#include "runtime.h"
#include "../stubs/NSDate_arginfo.h"
#include "../stubs/NSPoint_arginfo.h"

void appkit_register_NSDate(void)
{
	appkit_ce_NSDate = register_class_NSDate(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_NSDate);
	appkit_map_objc_class("NSDate", appkit_ce_NSDate);
}

void appkit_register_NSPoint(void)
{
	appkit_ce_NSPoint = register_class_NSPoint();
}

#define THIS_DATE ((NSDate *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(NSDate, date)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [NSDate date]);
	APPKIT_END
}

ZEND_METHOD(NSDate, dateWithTimeIntervalSinceNow)
{
	double secs;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_DOUBLE(secs)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [NSDate dateWithTimeIntervalSinceNow:secs]);
	APPKIT_END
}

ZEND_METHOD(NSDate, dateWithTimeIntervalSince1970)
{
	double secs;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_DOUBLE(secs)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [NSDate dateWithTimeIntervalSince1970:secs]);
	APPKIT_END
}

ZEND_METHOD(NSDate, distantPast)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [NSDate distantPast]);
	APPKIT_END
}

ZEND_METHOD(NSDate, distantFuture)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [NSDate distantFuture]);
	APPKIT_END
}

ZEND_METHOD(NSDate, timeIntervalSinceNow)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_DOUBLE([THIS_DATE timeIntervalSinceNow]);
	APPKIT_END
}

ZEND_METHOD(NSDate, timeIntervalSince1970)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_DOUBLE([THIS_DATE timeIntervalSince1970]);
	APPKIT_END
}

ZEND_METHOD(NSPoint, __construct)
{
	double x = 0.0;
	double y = 0.0;

	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_DOUBLE(x)
		Z_PARAM_DOUBLE(y)
	ZEND_PARSE_PARAMETERS_END();

	ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(ZEND_THIS), 0), x);
	ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(ZEND_THIS), 1), y);
}

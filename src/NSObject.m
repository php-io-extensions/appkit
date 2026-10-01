#include "runtime.h"
#include "../stubs/NSObject_arginfo.h"
#include "../stubs/NSResponder_arginfo.h"

#include <objc/runtime.h>

void appkit_register_NSObject(void)
{
	appkit_ce_NSObject = register_class_NSObject();
	appkit_object_setup(appkit_ce_NSObject);
	appkit_map_objc_class("NSObject", appkit_ce_NSObject);
}

void appkit_register_NSResponder(void)
{
	appkit_ce_NSResponder = register_class_NSResponder(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_NSResponder);
	appkit_map_objc_class("NSResponder", appkit_ce_NSResponder);
}

ZEND_METHOD(NSObject, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

ZEND_METHOD(NSObject, className)
{
	ZEND_PARSE_PARAMETERS_NONE();

	/* -class, not object_getClass(): key-value observing swaps in a subclass the program never sees. */
	RETURN_STRING(class_getName([APPKIT_ID(Z_OBJ_P(ZEND_THIS)) class]));
}

ZEND_METHOD(NSObject, isKindOfClass)
{
	zend_string *class_name;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(class_name)
	ZEND_PARSE_PARAMETERS_END();

	Class cls = objc_getClass(ZSTR_VAL(class_name));

	if (cls == Nil) {
		RETURN_FALSE;
	}

	APPKIT_BEGIN
		RETURN_BOOL([APPKIT_ID(Z_OBJ_P(ZEND_THIS)) isKindOfClass:cls]);
	APPKIT_END
}

ZEND_METHOD(NSObject, respondsToSelector)
{
	zend_string *selector;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(selector)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		RETURN_BOOL([APPKIT_ID(Z_OBJ_P(ZEND_THIS)) respondsToSelector:sel_registerName(ZSTR_VAL(selector))]);
	APPKIT_END
}

ZEND_METHOD(NSObject, isEqual)
{
	zend_object *other = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(other, appkit_ce_NSObject)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		RETURN_BOOL([APPKIT_ID(Z_OBJ_P(ZEND_THIS)) isEqual:(other != NULL ? APPKIT_ID(other) : nil)]);
	APPKIT_END
}

ZEND_METHOD(NSObject, hash)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_LONG((zend_long) [APPKIT_ID(Z_OBJ_P(ZEND_THIS)) hash]);
	APPKIT_END
}

ZEND_METHOD(NSObject, description)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_STR(appkit_zend_string((CFStringRef) [APPKIT_ID(Z_OBJ_P(ZEND_THIS)) description]));
	APPKIT_END
}

ZEND_METHOD(NSObject, pointer)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_LONG((zend_long) (uintptr_t) APPKIT_ID(Z_OBJ_P(ZEND_THIS)));
}

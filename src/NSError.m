#include "runtime.h"
#include "../stubs/NSError_arginfo.h"

void appkit_register_NSError(void)
{
	appkit_ce_NSError = register_class_NSError(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_NSError);
	appkit_map_objc_class("NSError", appkit_ce_NSError);
}

#define THIS_ERROR ((NSError *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(NSError, domain)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_STR(appkit_zend_string((CFStringRef) [THIS_ERROR domain]));
	APPKIT_END
}

ZEND_METHOD(NSError, code)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_LONG((zend_long) [THIS_ERROR code]);
	APPKIT_END
}

ZEND_METHOD(NSError, localizedDescription)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_STR(appkit_zend_string((CFStringRef) [THIS_ERROR localizedDescription]));
	APPKIT_END
}

ZEND_METHOD(NSError, userInfo)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		NSDictionary<NSErrorUserInfoKey, id> *info = [THIS_ERROR userInfo];

		array_init(return_value);
		for (NSString *key in info) {
			zval value;
			appkit_zval_from_id(&value, info[key]);
			add_assoc_zval_ex(return_value, [key UTF8String], strlen([key UTF8String]), &value);
		}
	APPKIT_END
}

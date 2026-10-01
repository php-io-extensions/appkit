#include "runtime.h"
#include "../stubs/CFType_arginfo.h"

void appkit_register_CFType(void)
{
	appkit_ce_CFType = register_class_CFType();
	appkit_object_setup(appkit_ce_CFType);
}

#define THIS_CF APPKIT_CF(Z_OBJ_P(ZEND_THIS))

ZEND_METHOD(CFType, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

ZEND_METHOD(CFType, getTypeID)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_LONG((zend_long) CFGetTypeID(THIS_CF));
}

ZEND_METHOD(CFType, hash)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_LONG((zend_long) CFHash(THIS_CF));
}

ZEND_METHOD(CFType, description)
{
	ZEND_PARSE_PARAMETERS_NONE();

	CFStringRef description = CFCopyDescription(THIS_CF);

	RETVAL_STR(appkit_zend_string(description));
	CFRelease(description);
}

ZEND_METHOD(CFType, pointer)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_LONG((zend_long) (uintptr_t) THIS_CF);
}

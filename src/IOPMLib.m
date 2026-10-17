#include "runtime.h"
#include <IOKit/pwr_mgt/IOPMLib.h>
#include "../stubs/IOPMLib_arginfo.h"

void appkit_register_IOPMLib(int module_number)
{
	register_IOPMLib_symbols(module_number);
	appkit_ce_IOPMAssertion = register_class_IOPMAssertion();
}

ZEND_METHOD(IOPMAssertion, __construct)
{
}

ZEND_METHOD(IOPMAssertion, createWithName)
{
	zend_string *type, *name;
	zend_long level;
	zval *assertion_ref = NULL;
	IOPMAssertionID assertion = kIOPMNullAssertionID;

	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_STR(type)
		Z_PARAM_LONG(level)
		Z_PARAM_STR(name)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(assertion_ref)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		IOReturn result = IOPMAssertionCreateWithName((CFStringRef) appkit_nsstring(type), (IOPMAssertionLevel) level, (CFStringRef) appkit_nsstring(name), &assertion);
		if (assertion_ref != NULL) {
			ZEND_TRY_ASSIGN_REF_LONG(assertion_ref, (zend_long) assertion);
		}
		RETVAL_LONG((zend_long) result);
	APPKIT_END
}

ZEND_METHOD(IOPMAssertion, release)
{
	zend_long assertion;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(assertion)
	ZEND_PARSE_PARAMETERS_END();

	if (assertion < 0 || assertion > UINT32_MAX) {
		zend_argument_value_error(1, "must be an IOPMAssertionID");
		RETURN_THROWS();
	}

	RETURN_LONG((zend_long) IOPMAssertionRelease((IOPMAssertionID) assertion));
}

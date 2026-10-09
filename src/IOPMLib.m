#include "runtime.h"
#include <IOKit/pwr_mgt/IOPMLib.h>
#include "../stubs/IOPMLib_arginfo.h"

_Static_assert(kIOPMAssertionLevelOff == 0 && kIOPMAssertionLevelOn == 255, "IOPMAssertionLevel values moved");

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
	IOPMAssertionID assertion = kIOPMNullAssertionID;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(type)
		Z_PARAM_LONG(level)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();

	if (level != kIOPMAssertionLevelOff && level != kIOPMAssertionLevelOn) {
		zend_argument_value_error(2, "must be kIOPMAssertionLevelOff or kIOPMAssertionLevelOn");
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		IOReturn result = IOPMAssertionCreateWithName((CFStringRef) appkit_nsstring(type), (IOPMAssertionLevel) level, (CFStringRef) appkit_nsstring(name), &assertion);
		if (result != kIOReturnSuccess) {
			zend_throw_exception_ex(appkit_ce_AppKitException, (zend_long) result, "IOPMAssertionCreateWithName failed with IOReturn 0x%x", (unsigned int) result);
			RETURN_THROWS();
		}
		RETURN_LONG((zend_long) assertion);
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

	IOReturn result = IOPMAssertionRelease((IOPMAssertionID) assertion);
	if (result != kIOReturnSuccess) {
		zend_throw_exception_ex(appkit_ce_AppKitException, (zend_long) result, "IOPMAssertionRelease failed with IOReturn 0x%x", (unsigned int) result);
		RETURN_THROWS();
	}
}

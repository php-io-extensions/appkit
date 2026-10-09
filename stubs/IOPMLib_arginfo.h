/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 255f57461c6fb66706947d70d393083c5332a9de */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_IOPMAssertion___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_IOPMAssertion_createWithName, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, level, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_IOPMAssertion_release, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, assertion, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(IOPMAssertion, __construct);
ZEND_METHOD(IOPMAssertion, createWithName);
ZEND_METHOD(IOPMAssertion, release);

static const zend_function_entry class_IOPMAssertion_methods[] = {
	ZEND_ME(IOPMAssertion, __construct, arginfo_class_IOPMAssertion___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(IOPMAssertion, createWithName, arginfo_class_IOPMAssertion_createWithName, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(IOPMAssertion, release, arginfo_class_IOPMAssertion_release, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static void register_IOPMLib_symbols(int module_number)
{
	REGISTER_STRING_CONSTANT("kIOPMAssertionTypePreventUserIdleSystemSleep", "PreventUserIdleSystemSleep", CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("kIOPMAssertionTypePreventUserIdleDisplaySleep", "PreventUserIdleDisplaySleep", CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("kIOPMAssertionTypePreventSystemSleep", "PreventSystemSleep", CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kIOPMAssertionLevelOff", 0, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kIOPMAssertionLevelOn", 255, CONST_PERSISTENT);
}

static zend_class_entry *register_class_IOPMAssertion(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "IOPMAssertion", class_IOPMAssertion_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

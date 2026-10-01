/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 33548abaf459924ea61fe2f7372def733b57d741 */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_CFRunLoop_getMain, 0, 0, CFRunLoop, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_CFRunLoop_getCurrent arginfo_class_CFRunLoop_getMain

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CFRunLoop_run, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_CFRunLoop_runInMode, 0, 3, CFRunLoopRunResult, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, returnAfterSourceHandled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_CFRunLoop_stop arginfo_class_CFRunLoop_run

#define arginfo_class_CFRunLoop_wakeUp arginfo_class_CFRunLoop_run

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CFRunLoop_isWaiting, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CFRunLoop_copyCurrentMode, 0, 0, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CFRunLoop_addSource, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, source, CFRunLoopSource, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_CFRunLoop_removeSource arginfo_class_CFRunLoop_addSource

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CFRunLoop_containsSource, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, source, CFRunLoopSource, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CFRunLoopSource_getOrder, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_CFRunLoopSource_invalidate arginfo_class_CFRunLoop_run

#define arginfo_class_CFRunLoopSource_isValid arginfo_class_CFRunLoop_isWaiting

#define arginfo_class_CFRunLoopSource_signal arginfo_class_CFRunLoop_run

ZEND_METHOD(CFRunLoop, getMain);
ZEND_METHOD(CFRunLoop, getCurrent);
ZEND_METHOD(CFRunLoop, run);
ZEND_METHOD(CFRunLoop, runInMode);
ZEND_METHOD(CFRunLoop, stop);
ZEND_METHOD(CFRunLoop, wakeUp);
ZEND_METHOD(CFRunLoop, isWaiting);
ZEND_METHOD(CFRunLoop, copyCurrentMode);
ZEND_METHOD(CFRunLoop, addSource);
ZEND_METHOD(CFRunLoop, removeSource);
ZEND_METHOD(CFRunLoop, containsSource);
ZEND_METHOD(CFRunLoopSource, getOrder);
ZEND_METHOD(CFRunLoopSource, invalidate);
ZEND_METHOD(CFRunLoopSource, isValid);
ZEND_METHOD(CFRunLoopSource, signal);

static const zend_function_entry class_CFRunLoop_methods[] = {
	ZEND_ME(CFRunLoop, getMain, arginfo_class_CFRunLoop_getMain, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(CFRunLoop, getCurrent, arginfo_class_CFRunLoop_getCurrent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(CFRunLoop, run, arginfo_class_CFRunLoop_run, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(CFRunLoop, runInMode, arginfo_class_CFRunLoop_runInMode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(CFRunLoop, stop, arginfo_class_CFRunLoop_stop, ZEND_ACC_PUBLIC)
	ZEND_ME(CFRunLoop, wakeUp, arginfo_class_CFRunLoop_wakeUp, ZEND_ACC_PUBLIC)
	ZEND_ME(CFRunLoop, isWaiting, arginfo_class_CFRunLoop_isWaiting, ZEND_ACC_PUBLIC)
	ZEND_ME(CFRunLoop, copyCurrentMode, arginfo_class_CFRunLoop_copyCurrentMode, ZEND_ACC_PUBLIC)
	ZEND_ME(CFRunLoop, addSource, arginfo_class_CFRunLoop_addSource, ZEND_ACC_PUBLIC)
	ZEND_ME(CFRunLoop, removeSource, arginfo_class_CFRunLoop_removeSource, ZEND_ACC_PUBLIC)
	ZEND_ME(CFRunLoop, containsSource, arginfo_class_CFRunLoop_containsSource, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_CFRunLoopSource_methods[] = {
	ZEND_ME(CFRunLoopSource, getOrder, arginfo_class_CFRunLoopSource_getOrder, ZEND_ACC_PUBLIC)
	ZEND_ME(CFRunLoopSource, invalidate, arginfo_class_CFRunLoopSource_invalidate, ZEND_ACC_PUBLIC)
	ZEND_ME(CFRunLoopSource, isValid, arginfo_class_CFRunLoopSource_isValid, ZEND_ACC_PUBLIC)
	ZEND_ME(CFRunLoopSource, signal, arginfo_class_CFRunLoopSource_signal, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_CFRunLoopRunResult(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("CFRunLoopRunResult", IS_LONG, NULL);

	zval enum_case_FINISHED_value;
	ZVAL_LONG(&enum_case_FINISHED_value, 1);
	zend_enum_add_case_cstr(class_entry, "FINISHED", &enum_case_FINISHED_value);

	zval enum_case_STOPPED_value;
	ZVAL_LONG(&enum_case_STOPPED_value, 2);
	zend_enum_add_case_cstr(class_entry, "STOPPED", &enum_case_STOPPED_value);

	zval enum_case_TIMED_OUT_value;
	ZVAL_LONG(&enum_case_TIMED_OUT_value, 3);
	zend_enum_add_case_cstr(class_entry, "TIMED_OUT", &enum_case_TIMED_OUT_value);

	zval enum_case_HANDLED_SOURCE_value;
	ZVAL_LONG(&enum_case_HANDLED_SOURCE_value, 4);
	zend_enum_add_case_cstr(class_entry, "HANDLED_SOURCE", &enum_case_HANDLED_SOURCE_value);

	return class_entry;
}

static zend_class_entry *register_class_CFRunLoop(zend_class_entry *class_entry_CFType)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "CFRunLoop", class_CFRunLoop_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_CFType, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_CFRunLoopSource(zend_class_entry *class_entry_CFType)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "CFRunLoopSource", class_CFRunLoopSource_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_CFType, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

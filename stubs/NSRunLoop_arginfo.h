/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 336dd21df6bf57e2a34249c6d1eedf67fb39d257 */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSRunLoop_mainRunLoop, 0, 0, NSRunLoop, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSRunLoop_currentRunLoop arginfo_class_NSRunLoop_mainRunLoop

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSRunLoop_getCFRunLoop, 0, 0, CFRunLoop, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSRunLoop_addTimerForMode, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, timer, NSTimer, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSRunLoop, mainRunLoop);
ZEND_METHOD(NSRunLoop, currentRunLoop);
ZEND_METHOD(NSRunLoop, getCFRunLoop);
ZEND_METHOD(NSRunLoop, addTimerForMode);

static const zend_function_entry class_NSRunLoop_methods[] = {
	ZEND_ME(NSRunLoop, mainRunLoop, arginfo_class_NSRunLoop_mainRunLoop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSRunLoop, currentRunLoop, arginfo_class_NSRunLoop_currentRunLoop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSRunLoop, getCFRunLoop, arginfo_class_NSRunLoop_getCFRunLoop, ZEND_ACC_PUBLIC)
	ZEND_ME(NSRunLoop, addTimerForMode, arginfo_class_NSRunLoop_addTimerForMode, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSRunLoop(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSRunLoop", class_NSRunLoop_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

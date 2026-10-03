/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: d8d5cfef15d822267d409176bfe5d9027845b5f1 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSNotification_name, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSNotification_object, 0, 0, NSObject, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSNotificationCenter_defaultCenter, 0, 0, NSNotificationCenter, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSNotificationCenter_addObserverForNameObjectQueueUsingBlock, 0, 4, NSObject, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, object, NSObject, 1)
	ZEND_ARG_OBJ_INFO(0, queue, NSOperationQueue, 1)
	ZEND_ARG_TYPE_INFO(0, block, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSNotificationCenter_removeObserver, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, observer, NSObject, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSNotificationCenter_postNotificationNameObject, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, object, NSObject, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSOperationQueue_mainQueue, 0, 0, NSOperationQueue, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSOperationQueue_init, 0, 0, IS_STATIC, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSOperationQueue_waitUntilAllOperationsAreFinished, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSNotification, name);
ZEND_METHOD(NSNotification, object);
ZEND_METHOD(NSNotificationCenter, defaultCenter);
ZEND_METHOD(NSNotificationCenter, addObserverForNameObjectQueueUsingBlock);
ZEND_METHOD(NSNotificationCenter, removeObserver);
ZEND_METHOD(NSNotificationCenter, postNotificationNameObject);
ZEND_METHOD(NSOperationQueue, mainQueue);
ZEND_METHOD(NSOperationQueue, init);
ZEND_METHOD(NSOperationQueue, waitUntilAllOperationsAreFinished);

static const zend_function_entry class_NSNotification_methods[] = {
	ZEND_ME(NSNotification, name, arginfo_class_NSNotification_name, ZEND_ACC_PUBLIC)
	ZEND_ME(NSNotification, object, arginfo_class_NSNotification_object, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSNotificationCenter_methods[] = {
	ZEND_ME(NSNotificationCenter, defaultCenter, arginfo_class_NSNotificationCenter_defaultCenter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSNotificationCenter, addObserverForNameObjectQueueUsingBlock, arginfo_class_NSNotificationCenter_addObserverForNameObjectQueueUsingBlock, ZEND_ACC_PUBLIC)
	ZEND_ME(NSNotificationCenter, removeObserver, arginfo_class_NSNotificationCenter_removeObserver, ZEND_ACC_PUBLIC)
	ZEND_ME(NSNotificationCenter, postNotificationNameObject, arginfo_class_NSNotificationCenter_postNotificationNameObject, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSOperationQueue_methods[] = {
	ZEND_ME(NSOperationQueue, mainQueue, arginfo_class_NSOperationQueue_mainQueue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSOperationQueue, init, arginfo_class_NSOperationQueue_init, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSOperationQueue, waitUntilAllOperationsAreFinished, arginfo_class_NSOperationQueue_waitUntilAllOperationsAreFinished, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_NSNotificationCenter_symbols(int module_number)
{
	REGISTER_STRING_CONSTANT("NSViewFrameDidChangeNotification", appkit_cfstring_constant((CFStringRef) NSViewFrameDidChangeNotification), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("NSWindowDidResizeNotification", appkit_cfstring_constant((CFStringRef) NSWindowDidResizeNotification), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("NSControlTextDidChangeNotification", appkit_cfstring_constant((CFStringRef) NSControlTextDidChangeNotification), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("NSTextDidChangeNotification", appkit_cfstring_constant((CFStringRef) NSTextDidChangeNotification), CONST_PERSISTENT);
}

static zend_class_entry *register_class_NSNotification(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSNotification", class_NSNotification_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSNotificationCenter(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSNotificationCenter", class_NSNotificationCenter_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSOperationQueue(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSOperationQueue", class_NSOperationQueue_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

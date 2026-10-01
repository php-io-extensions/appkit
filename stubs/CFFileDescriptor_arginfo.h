/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 7681bf05f2d7b9011ef5bf1dbff5d219eaa583a3 */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_CFFileDescriptor_create, 0, 3, CFFileDescriptor, 1)
	ZEND_ARG_TYPE_INFO(0, fd, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, closeOnInvalidate, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, callout, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CFFileDescriptor_getNativeDescriptor, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CFFileDescriptor_enableCallBacks, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, callBackTypes, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_CFFileDescriptor_disableCallBacks arginfo_class_CFFileDescriptor_enableCallBacks

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CFFileDescriptor_invalidate, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CFFileDescriptor_isValid, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_CFFileDescriptor_createRunLoopSource, 0, 1, CFRunLoopSource, 1)
	ZEND_ARG_TYPE_INFO(0, order, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(CFFileDescriptor, create);
ZEND_METHOD(CFFileDescriptor, getNativeDescriptor);
ZEND_METHOD(CFFileDescriptor, enableCallBacks);
ZEND_METHOD(CFFileDescriptor, disableCallBacks);
ZEND_METHOD(CFFileDescriptor, invalidate);
ZEND_METHOD(CFFileDescriptor, isValid);
ZEND_METHOD(CFFileDescriptor, createRunLoopSource);

static const zend_function_entry class_CFFileDescriptor_methods[] = {
	ZEND_ME(CFFileDescriptor, create, arginfo_class_CFFileDescriptor_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(CFFileDescriptor, getNativeDescriptor, arginfo_class_CFFileDescriptor_getNativeDescriptor, ZEND_ACC_PUBLIC)
	ZEND_ME(CFFileDescriptor, enableCallBacks, arginfo_class_CFFileDescriptor_enableCallBacks, ZEND_ACC_PUBLIC)
	ZEND_ME(CFFileDescriptor, disableCallBacks, arginfo_class_CFFileDescriptor_disableCallBacks, ZEND_ACC_PUBLIC)
	ZEND_ME(CFFileDescriptor, invalidate, arginfo_class_CFFileDescriptor_invalidate, ZEND_ACC_PUBLIC)
	ZEND_ME(CFFileDescriptor, isValid, arginfo_class_CFFileDescriptor_isValid, ZEND_ACC_PUBLIC)
	ZEND_ME(CFFileDescriptor, createRunLoopSource, arginfo_class_CFFileDescriptor_createRunLoopSource, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_CFFileDescriptor(zend_class_entry *class_entry_CFType)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "CFFileDescriptor", class_CFFileDescriptor_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_CFType, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

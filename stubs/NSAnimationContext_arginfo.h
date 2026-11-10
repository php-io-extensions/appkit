/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 4eb406283fe9e1a0245e0ad898bcdba1519fcfbf */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSAnimationContext_beginGrouping, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSAnimationContext_endGrouping arginfo_class_NSAnimationContext_beginGrouping

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSAnimationContext_currentContext, 0, 0, NSAnimationContext, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSAnimationContext_duration, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSAnimationContext_setDuration, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, duration, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSAnimationContext_allowsImplicitAnimation, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSAnimationContext_setAllowsImplicitAnimation, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, allowsImplicitAnimation, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSAnimationContext, beginGrouping);
ZEND_METHOD(NSAnimationContext, endGrouping);
ZEND_METHOD(NSAnimationContext, currentContext);
ZEND_METHOD(NSAnimationContext, duration);
ZEND_METHOD(NSAnimationContext, setDuration);
ZEND_METHOD(NSAnimationContext, allowsImplicitAnimation);
ZEND_METHOD(NSAnimationContext, setAllowsImplicitAnimation);

static const zend_function_entry class_NSAnimationContext_methods[] = {
	ZEND_ME(NSAnimationContext, beginGrouping, arginfo_class_NSAnimationContext_beginGrouping, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSAnimationContext, endGrouping, arginfo_class_NSAnimationContext_endGrouping, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSAnimationContext, currentContext, arginfo_class_NSAnimationContext_currentContext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSAnimationContext, duration, arginfo_class_NSAnimationContext_duration, ZEND_ACC_PUBLIC)
	ZEND_ME(NSAnimationContext, setDuration, arginfo_class_NSAnimationContext_setDuration, ZEND_ACC_PUBLIC)
	ZEND_ME(NSAnimationContext, allowsImplicitAnimation, arginfo_class_NSAnimationContext_allowsImplicitAnimation, ZEND_ACC_PUBLIC)
	ZEND_ME(NSAnimationContext, setAllowsImplicitAnimation, arginfo_class_NSAnimationContext_setAllowsImplicitAnimation, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSAnimationContext(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSAnimationContext", class_NSAnimationContext_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

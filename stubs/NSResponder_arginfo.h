/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 0951d87a241ff681de433cc941e7b43a99ade89d */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSResponder_nextResponder, 0, 0, NSResponder, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSResponder_setNextResponder, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, nextResponder, NSResponder, 1)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSResponder, nextResponder);
ZEND_METHOD(NSResponder, setNextResponder);

static const zend_function_entry class_NSResponder_methods[] = {
	ZEND_ME(NSResponder, nextResponder, arginfo_class_NSResponder_nextResponder, ZEND_ACC_PUBLIC)
	ZEND_ME(NSResponder, setNextResponder, arginfo_class_NSResponder_setNextResponder, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSResponder(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSResponder", class_NSResponder_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

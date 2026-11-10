/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 28c247fbd62fa68819dd8905392686301031c70e */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSArray_count, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_class_NSArray_objectAtIndex, 0, 1, NSObject, MAY_BE_STRING)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSMutableArray_array, 0, 0, IS_STATIC, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSMutableArray_addObject, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, anObject, NSObject, MAY_BE_STRING, NULL)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSArray, count);
ZEND_METHOD(NSArray, objectAtIndex);
ZEND_METHOD(NSMutableArray, array);
ZEND_METHOD(NSMutableArray, addObject);

static const zend_function_entry class_NSArray_methods[] = {
	ZEND_ME(NSArray, count, arginfo_class_NSArray_count, ZEND_ACC_PUBLIC)
	ZEND_ME(NSArray, objectAtIndex, arginfo_class_NSArray_objectAtIndex, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSMutableArray_methods[] = {
	ZEND_ME(NSMutableArray, array, arginfo_class_NSMutableArray_array, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSMutableArray, addObject, arginfo_class_NSMutableArray_addObject, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSArray(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSArray", class_NSArray_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSMutableArray(zend_class_entry *class_entry_NSArray)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSMutableArray", class_NSMutableArray_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSArray, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 695be7df9dea6441dcf5ffd1302918239be3ac6e */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_CALayer_layer, 0, 0, CALayer, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CALayer_contentsScale, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CALayer_setContentsScale, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, contentsScale, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CALayer_sublayers, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CALayer_addSublayer, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, layer, CALayer, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(CALayer, layer);
ZEND_METHOD(CALayer, contentsScale);
ZEND_METHOD(CALayer, setContentsScale);
ZEND_METHOD(CALayer, sublayers);
ZEND_METHOD(CALayer, addSublayer);

static const zend_function_entry class_CALayer_methods[] = {
	ZEND_ME(CALayer, layer, arginfo_class_CALayer_layer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(CALayer, contentsScale, arginfo_class_CALayer_contentsScale, ZEND_ACC_PUBLIC)
	ZEND_ME(CALayer, setContentsScale, arginfo_class_CALayer_setContentsScale, ZEND_ACC_PUBLIC)
	ZEND_ME(CALayer, sublayers, arginfo_class_CALayer_sublayers, ZEND_ACC_PUBLIC)
	ZEND_ME(CALayer, addSublayer, arginfo_class_CALayer_addSublayer, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_CALayer(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "CALayer", class_CALayer_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

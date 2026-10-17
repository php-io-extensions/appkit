/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: e602a1b5d5639b08451e73a476298fbdfc4c4068 */

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

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_CALayer_backgroundColor, 0, 0, CGColor, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CALayer_setBackgroundColor, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, backgroundColor, CGColor, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_class_CALayer_contents, 0, 0, NSObject|CFType, MAY_BE_NULL)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CALayer_setContents, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, contents, NSObject|CFType, MAY_BE_NULL, NULL)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CALayer_contentsGravity, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CALayer_setContentsGravity, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, contentsGravity, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CALayer_masksToBounds, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CALayer_setMasksToBounds, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, masksToBounds, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(CALayer, layer);
ZEND_METHOD(CALayer, contentsScale);
ZEND_METHOD(CALayer, setContentsScale);
ZEND_METHOD(CALayer, sublayers);
ZEND_METHOD(CALayer, addSublayer);
ZEND_METHOD(CALayer, backgroundColor);
ZEND_METHOD(CALayer, setBackgroundColor);
ZEND_METHOD(CALayer, contents);
ZEND_METHOD(CALayer, setContents);
ZEND_METHOD(CALayer, contentsGravity);
ZEND_METHOD(CALayer, setContentsGravity);
ZEND_METHOD(CALayer, masksToBounds);
ZEND_METHOD(CALayer, setMasksToBounds);

static const zend_function_entry class_CALayer_methods[] = {
	ZEND_ME(CALayer, layer, arginfo_class_CALayer_layer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(CALayer, contentsScale, arginfo_class_CALayer_contentsScale, ZEND_ACC_PUBLIC)
	ZEND_ME(CALayer, setContentsScale, arginfo_class_CALayer_setContentsScale, ZEND_ACC_PUBLIC)
	ZEND_ME(CALayer, sublayers, arginfo_class_CALayer_sublayers, ZEND_ACC_PUBLIC)
	ZEND_ME(CALayer, addSublayer, arginfo_class_CALayer_addSublayer, ZEND_ACC_PUBLIC)
	ZEND_ME(CALayer, backgroundColor, arginfo_class_CALayer_backgroundColor, ZEND_ACC_PUBLIC)
	ZEND_ME(CALayer, setBackgroundColor, arginfo_class_CALayer_setBackgroundColor, ZEND_ACC_PUBLIC)
	ZEND_ME(CALayer, contents, arginfo_class_CALayer_contents, ZEND_ACC_PUBLIC)
	ZEND_ME(CALayer, setContents, arginfo_class_CALayer_setContents, ZEND_ACC_PUBLIC)
	ZEND_ME(CALayer, contentsGravity, arginfo_class_CALayer_contentsGravity, ZEND_ACC_PUBLIC)
	ZEND_ME(CALayer, setContentsGravity, arginfo_class_CALayer_setContentsGravity, ZEND_ACC_PUBLIC)
	ZEND_ME(CALayer, masksToBounds, arginfo_class_CALayer_masksToBounds, ZEND_ACC_PUBLIC)
	ZEND_ME(CALayer, setMasksToBounds, arginfo_class_CALayer_setMasksToBounds, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_CALayer_symbols(int module_number)
{
	REGISTER_STRING_CONSTANT("kCAGravityCenter", appkit_cfstring_constant((CFStringRef) kCAGravityCenter), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("kCAGravityTop", appkit_cfstring_constant((CFStringRef) kCAGravityTop), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("kCAGravityBottom", appkit_cfstring_constant((CFStringRef) kCAGravityBottom), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("kCAGravityLeft", appkit_cfstring_constant((CFStringRef) kCAGravityLeft), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("kCAGravityRight", appkit_cfstring_constant((CFStringRef) kCAGravityRight), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("kCAGravityTopLeft", appkit_cfstring_constant((CFStringRef) kCAGravityTopLeft), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("kCAGravityTopRight", appkit_cfstring_constant((CFStringRef) kCAGravityTopRight), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("kCAGravityBottomLeft", appkit_cfstring_constant((CFStringRef) kCAGravityBottomLeft), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("kCAGravityBottomRight", appkit_cfstring_constant((CFStringRef) kCAGravityBottomRight), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("kCAGravityResize", appkit_cfstring_constant((CFStringRef) kCAGravityResize), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("kCAGravityResizeAspect", appkit_cfstring_constant((CFStringRef) kCAGravityResizeAspect), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("kCAGravityResizeAspectFill", appkit_cfstring_constant((CFStringRef) kCAGravityResizeAspectFill), CONST_PERSISTENT);
}

static zend_class_entry *register_class_CALayer(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "CALayer", class_CALayer_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

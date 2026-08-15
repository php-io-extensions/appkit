
extern zend_class_entry *appkit_ns_nstextblock_nstextblock_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTextBlock_NSTextBlock);

PHP_METHOD(AppKit_NS_NSTextBlock_NSTextBlock, create);
PHP_METHOD(AppKit_NS_NSTextBlock_NSTextBlock, wrap);
PHP_METHOD(AppKit_NS_NSTextBlock_NSTextBlock, destroy);
PHP_METHOD(AppKit_NS_NSTextBlock_NSTextBlock, setContentWidth);
PHP_METHOD(AppKit_NS_NSTextBlock_NSTextBlock, getContentWidth);
PHP_METHOD(AppKit_NS_NSTextBlock_NSTextBlock, setVerticalAlignment);
PHP_METHOD(AppKit_NS_NSTextBlock_NSTextBlock, getVerticalAlignment);
PHP_METHOD(AppKit_NS_NSTextBlock_NSTextBlock, setBackgroundColor);
PHP_METHOD(AppKit_NS_NSTextBlock_NSTextBlock, setValue);
PHP_METHOD(AppKit_NS_NSTextBlock_NSTextBlock, getValue);
PHP_METHOD(AppKit_NS_NSTextBlock_NSTextBlock, setLayerWidth);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextblock_nstextblock_create, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextblock_nstextblock_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTextBlockPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextblock_nstextblock_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextblock_nstextblock_setcontentwidth, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, valueType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextblock_nstextblock_getcontentwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextblock_nstextblock_setverticalalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextblock_nstextblock_getverticalalignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextblock_nstextblock_setbackgroundcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, colorHandle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextblock_nstextblock_setvalue, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, val, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, valueType, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dimension, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextblock_nstextblock_getvalue, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dimension, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextblock_nstextblock_setlayerwidth, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, val, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, valueType, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layer, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, edge, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstextblock_nstextblock_method_entry) {
	PHP_ME(AppKit_NS_NSTextBlock_NSTextBlock, create, arginfo_appkit_ns_nstextblock_nstextblock_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextBlock_NSTextBlock, wrap, arginfo_appkit_ns_nstextblock_nstextblock_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextBlock_NSTextBlock, destroy, arginfo_appkit_ns_nstextblock_nstextblock_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextBlock_NSTextBlock, setContentWidth, arginfo_appkit_ns_nstextblock_nstextblock_setcontentwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextBlock_NSTextBlock, getContentWidth, arginfo_appkit_ns_nstextblock_nstextblock_getcontentwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextBlock_NSTextBlock, setVerticalAlignment, arginfo_appkit_ns_nstextblock_nstextblock_setverticalalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextBlock_NSTextBlock, getVerticalAlignment, arginfo_appkit_ns_nstextblock_nstextblock_getverticalalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextBlock_NSTextBlock, setBackgroundColor, arginfo_appkit_ns_nstextblock_nstextblock_setbackgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextBlock_NSTextBlock, setValue, arginfo_appkit_ns_nstextblock_nstextblock_setvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextBlock_NSTextBlock, getValue, arginfo_appkit_ns_nstextblock_nstextblock_getvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextBlock_NSTextBlock, setLayerWidth, arginfo_appkit_ns_nstextblock_nstextblock_setlayerwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

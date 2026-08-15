
extern zend_class_entry *appkit_ns_nstablecellview_nstablecellview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTableCellView_NSTableCellView);

PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, create);
PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, wrap);
PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, destroy);
PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, setText);
PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, getText);
PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, setImage);
PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, textField);
PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, imageView);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecellview_nstablecellview_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecellview_nstablecellview_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTableCellViewPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecellview_nstablecellview_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecellview_nstablecellview_settext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecellview_nstablecellview_gettext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecellview_nstablecellview_setimage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecellview_nstablecellview_textfield, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecellview_nstablecellview_imageview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstablecellview_nstablecellview_method_entry) {
	PHP_ME(AppKit_NS_NSTableCellView_NSTableCellView, create, arginfo_appkit_ns_nstablecellview_nstablecellview_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableCellView_NSTableCellView, wrap, arginfo_appkit_ns_nstablecellview_nstablecellview_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableCellView_NSTableCellView, destroy, arginfo_appkit_ns_nstablecellview_nstablecellview_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableCellView_NSTableCellView, setText, arginfo_appkit_ns_nstablecellview_nstablecellview_settext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableCellView_NSTableCellView, getText, arginfo_appkit_ns_nstablecellview_nstablecellview_gettext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableCellView_NSTableCellView, setImage, arginfo_appkit_ns_nstablecellview_nstablecellview_setimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableCellView_NSTableCellView, textField, arginfo_appkit_ns_nstablecellview_nstablecellview_textfield, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableCellView_NSTableCellView, imageView, arginfo_appkit_ns_nstablecellview_nstablecellview_imageview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

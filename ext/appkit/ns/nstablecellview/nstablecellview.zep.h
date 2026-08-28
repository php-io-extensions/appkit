
extern zend_class_entry *appkit_ns_nstablecellview_nstablecellview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTableCellView_NSTableCellView);

PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, initWithFrame);
PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, objectValue);
PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, setObjectValue);
PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, textField);
PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, setTextField);
PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, imageView);
PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, setImageView);
PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, backgroundStyle);
PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, setBackgroundStyle);
PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, rowSizeStyle);
PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, setRowSizeStyle);
PHP_METHOD(AppKit_NS_NSTableCellView_NSTableCellView, draggingImageComponents);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecellview_nstablecellview_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecellview_nstablecellview_objectvalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecellview_nstablecellview_setobjectvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, objectValue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecellview_nstablecellview_textfield, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecellview_nstablecellview_settextfield, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, textField, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecellview_nstablecellview_imageview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecellview_nstablecellview_setimageview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, imageView, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecellview_nstablecellview_backgroundstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecellview_nstablecellview_setbackgroundstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backgroundStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecellview_nstablecellview_rowsizestyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecellview_nstablecellview_setrowsizestyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rowSizeStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablecellview_nstablecellview_draggingimagecomponents, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstablecellview_nstablecellview_method_entry) {
	PHP_ME(AppKit_NS_NSTableCellView_NSTableCellView, initWithFrame, arginfo_appkit_ns_nstablecellview_nstablecellview_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableCellView_NSTableCellView, objectValue, arginfo_appkit_ns_nstablecellview_nstablecellview_objectvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableCellView_NSTableCellView, setObjectValue, arginfo_appkit_ns_nstablecellview_nstablecellview_setobjectvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableCellView_NSTableCellView, textField, arginfo_appkit_ns_nstablecellview_nstablecellview_textfield, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableCellView_NSTableCellView, setTextField, arginfo_appkit_ns_nstablecellview_nstablecellview_settextfield, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableCellView_NSTableCellView, imageView, arginfo_appkit_ns_nstablecellview_nstablecellview_imageview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableCellView_NSTableCellView, setImageView, arginfo_appkit_ns_nstablecellview_nstablecellview_setimageview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableCellView_NSTableCellView, backgroundStyle, arginfo_appkit_ns_nstablecellview_nstablecellview_backgroundstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableCellView_NSTableCellView, setBackgroundStyle, arginfo_appkit_ns_nstablecellview_nstablecellview_setbackgroundstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableCellView_NSTableCellView, rowSizeStyle, arginfo_appkit_ns_nstablecellview_nstablecellview_rowsizestyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableCellView_NSTableCellView, setRowSizeStyle, arginfo_appkit_ns_nstablecellview_nstablecellview_setrowsizestyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableCellView_NSTableCellView, draggingImageComponents, arginfo_appkit_ns_nstablecellview_nstablecellview_draggingimagecomponents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

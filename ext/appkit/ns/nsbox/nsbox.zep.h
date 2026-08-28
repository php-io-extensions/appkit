
extern zend_class_entry *appkit_ns_nsbox_nsbox_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSBox_NSBox);

PHP_METHOD(AppKit_NS_NSBox_NSBox, initWithFrame);
PHP_METHOD(AppKit_NS_NSBox_NSBox, boxType);
PHP_METHOD(AppKit_NS_NSBox_NSBox, setBoxType);
PHP_METHOD(AppKit_NS_NSBox_NSBox, titlePosition);
PHP_METHOD(AppKit_NS_NSBox_NSBox, setTitlePosition);
PHP_METHOD(AppKit_NS_NSBox_NSBox, title);
PHP_METHOD(AppKit_NS_NSBox_NSBox, setTitle);
PHP_METHOD(AppKit_NS_NSBox_NSBox, titleFont);
PHP_METHOD(AppKit_NS_NSBox_NSBox, setTitleFont);
PHP_METHOD(AppKit_NS_NSBox_NSBox, borderRect);
PHP_METHOD(AppKit_NS_NSBox_NSBox, titleRect);
PHP_METHOD(AppKit_NS_NSBox_NSBox, titleCell);
PHP_METHOD(AppKit_NS_NSBox_NSBox, contentViewMargins);
PHP_METHOD(AppKit_NS_NSBox_NSBox, setContentViewMargins);
PHP_METHOD(AppKit_NS_NSBox_NSBox, sizeToFit);
PHP_METHOD(AppKit_NS_NSBox_NSBox, setFrameFromContentFrame);
PHP_METHOD(AppKit_NS_NSBox_NSBox, contentView);
PHP_METHOD(AppKit_NS_NSBox_NSBox, setContentView);
PHP_METHOD(AppKit_NS_NSBox_NSBox, isTransparent);
PHP_METHOD(AppKit_NS_NSBox_NSBox, setTransparent);
PHP_METHOD(AppKit_NS_NSBox_NSBox, borderWidth);
PHP_METHOD(AppKit_NS_NSBox_NSBox, setBorderWidth);
PHP_METHOD(AppKit_NS_NSBox_NSBox, cornerRadius);
PHP_METHOD(AppKit_NS_NSBox_NSBox, setCornerRadius);
PHP_METHOD(AppKit_NS_NSBox_NSBox, borderColor);
PHP_METHOD(AppKit_NS_NSBox_NSBox, setBorderColor);
PHP_METHOD(AppKit_NS_NSBox_NSBox, fillColor);
PHP_METHOD(AppKit_NS_NSBox_NSBox, setFillColor);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_boxtype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_setboxtype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, boxType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_titleposition, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_settitleposition, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, titlePosition, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_title, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_titlefont, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_settitlefont, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, titleFont, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_borderrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_titlerect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_titlecell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_contentviewmargins, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_setcontentviewmargins, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_sizetofit, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_setframefromcontentframe, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_contentview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_setcontentview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, contentView, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_istransparent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_settransparent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, transparent, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_borderwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_setborderwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, borderWidth, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_cornerradius, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_setcornerradius, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cornerRadius, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_bordercolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_setbordercolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, borderColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_fillcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbox_nsbox_setfillcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fillColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsbox_nsbox_method_entry) {
	PHP_ME(AppKit_NS_NSBox_NSBox, initWithFrame, arginfo_appkit_ns_nsbox_nsbox_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, boxType, arginfo_appkit_ns_nsbox_nsbox_boxtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, setBoxType, arginfo_appkit_ns_nsbox_nsbox_setboxtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, titlePosition, arginfo_appkit_ns_nsbox_nsbox_titleposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, setTitlePosition, arginfo_appkit_ns_nsbox_nsbox_settitleposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, title, arginfo_appkit_ns_nsbox_nsbox_title, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, setTitle, arginfo_appkit_ns_nsbox_nsbox_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, titleFont, arginfo_appkit_ns_nsbox_nsbox_titlefont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, setTitleFont, arginfo_appkit_ns_nsbox_nsbox_settitlefont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, borderRect, arginfo_appkit_ns_nsbox_nsbox_borderrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, titleRect, arginfo_appkit_ns_nsbox_nsbox_titlerect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, titleCell, arginfo_appkit_ns_nsbox_nsbox_titlecell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, contentViewMargins, arginfo_appkit_ns_nsbox_nsbox_contentviewmargins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, setContentViewMargins, arginfo_appkit_ns_nsbox_nsbox_setcontentviewmargins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, sizeToFit, arginfo_appkit_ns_nsbox_nsbox_sizetofit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, setFrameFromContentFrame, arginfo_appkit_ns_nsbox_nsbox_setframefromcontentframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, contentView, arginfo_appkit_ns_nsbox_nsbox_contentview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, setContentView, arginfo_appkit_ns_nsbox_nsbox_setcontentview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, isTransparent, arginfo_appkit_ns_nsbox_nsbox_istransparent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, setTransparent, arginfo_appkit_ns_nsbox_nsbox_settransparent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, borderWidth, arginfo_appkit_ns_nsbox_nsbox_borderwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, setBorderWidth, arginfo_appkit_ns_nsbox_nsbox_setborderwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, cornerRadius, arginfo_appkit_ns_nsbox_nsbox_cornerradius, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, setCornerRadius, arginfo_appkit_ns_nsbox_nsbox_setcornerradius, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, borderColor, arginfo_appkit_ns_nsbox_nsbox_bordercolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, setBorderColor, arginfo_appkit_ns_nsbox_nsbox_setbordercolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, fillColor, arginfo_appkit_ns_nsbox_nsbox_fillcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBox_NSBox, setFillColor, arginfo_appkit_ns_nsbox_nsbox_setfillcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

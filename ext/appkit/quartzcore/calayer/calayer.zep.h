
extern zend_class_entry *appkit_quartzcore_calayer_calayer_ce;

ZEPHIR_INIT_CLASS(AppKit_QuartzCore_CALayer_CALayer);

PHP_METHOD(AppKit_QuartzCore_CALayer_CALayer, init);
PHP_METHOD(AppKit_QuartzCore_CALayer_CALayer, backgroundColor);
PHP_METHOD(AppKit_QuartzCore_CALayer_CALayer, setBackgroundColor);
PHP_METHOD(AppKit_QuartzCore_CALayer_CALayer, contentsGravity);
PHP_METHOD(AppKit_QuartzCore_CALayer_CALayer, setContentsGravity);
PHP_METHOD(AppKit_QuartzCore_CALayer_CALayer, cornerRadius);
PHP_METHOD(AppKit_QuartzCore_CALayer_CALayer, setCornerRadius);
PHP_METHOD(AppKit_QuartzCore_CALayer_CALayer, masksToBounds);
PHP_METHOD(AppKit_QuartzCore_CALayer_CALayer, setMasksToBounds);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_quartzcore_calayer_calayer_init, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_quartzcore_calayer_calayer_backgroundcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_quartzcore_calayer_calayer_setbackgroundcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backgroundColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_quartzcore_calayer_calayer_contentsgravity, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_quartzcore_calayer_calayer_setcontentsgravity, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, contentsGravity, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_quartzcore_calayer_calayer_cornerradius, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_quartzcore_calayer_calayer_setcornerradius, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cornerRadius, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_quartzcore_calayer_calayer_maskstobounds, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_quartzcore_calayer_calayer_setmaskstobounds, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, masksToBounds, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_quartzcore_calayer_calayer_method_entry) {
	PHP_ME(AppKit_QuartzCore_CALayer_CALayer, init, arginfo_appkit_quartzcore_calayer_calayer_init, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_QuartzCore_CALayer_CALayer, backgroundColor, arginfo_appkit_quartzcore_calayer_calayer_backgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_QuartzCore_CALayer_CALayer, setBackgroundColor, arginfo_appkit_quartzcore_calayer_calayer_setbackgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_QuartzCore_CALayer_CALayer, contentsGravity, arginfo_appkit_quartzcore_calayer_calayer_contentsgravity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_QuartzCore_CALayer_CALayer, setContentsGravity, arginfo_appkit_quartzcore_calayer_calayer_setcontentsgravity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_QuartzCore_CALayer_CALayer, cornerRadius, arginfo_appkit_quartzcore_calayer_calayer_cornerradius, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_QuartzCore_CALayer_CALayer, setCornerRadius, arginfo_appkit_quartzcore_calayer_calayer_setcornerradius, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_QuartzCore_CALayer_CALayer, masksToBounds, arginfo_appkit_quartzcore_calayer_calayer_maskstobounds, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_QuartzCore_CALayer_CALayer, setMasksToBounds, arginfo_appkit_quartzcore_calayer_calayer_setmaskstobounds, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};


extern zend_class_entry *appkit_ns_nsscrubberitemview_nsscrubberitemview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSScrubberItemView_NSScrubberItemView);

PHP_METHOD(AppKit_NS_NSScrubberItemView_NSScrubberItemView, create);
PHP_METHOD(AppKit_NS_NSScrubberItemView_NSScrubberItemView, wrap);
PHP_METHOD(AppKit_NS_NSScrubberItemView_NSScrubberItemView, destroy);
PHP_METHOD(AppKit_NS_NSScrubberItemView_NSScrubberItemView, nsScrubberItemView);
PHP_METHOD(AppKit_NS_NSScrubberItemView_NSScrubberItemView, setSelected);
PHP_METHOD(AppKit_NS_NSScrubberItemView_NSScrubberItemView, isSelected);
PHP_METHOD(AppKit_NS_NSScrubberItemView_NSScrubberItemView, setHighlighted);
PHP_METHOD(AppKit_NS_NSScrubberItemView_NSScrubberItemView, isHighlighted);
PHP_METHOD(AppKit_NS_NSScrubberItemView_NSScrubberItemView, applyLayoutAttributes);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubberitemview_nsscrubberitemview_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubberitemview_nsscrubberitemview_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsScrubberItemViewPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubberitemview_nsscrubberitemview_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubberitemview_nsscrubberitemview_nsscrubberitemview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubberitemview_nsscrubberitemview_setselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubberitemview_nsscrubberitemview_isselected, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubberitemview_nsscrubberitemview_sethighlighted, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubberitemview_nsscrubberitemview_ishighlighted, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubberitemview_nsscrubberitemview_applylayoutattributes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layoutAttributesPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsscrubberitemview_nsscrubberitemview_method_entry) {
	PHP_ME(AppKit_NS_NSScrubberItemView_NSScrubberItemView, create, arginfo_appkit_ns_nsscrubberitemview_nsscrubberitemview_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubberItemView_NSScrubberItemView, wrap, arginfo_appkit_ns_nsscrubberitemview_nsscrubberitemview_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubberItemView_NSScrubberItemView, destroy, arginfo_appkit_ns_nsscrubberitemview_nsscrubberitemview_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubberItemView_NSScrubberItemView, nsScrubberItemView, arginfo_appkit_ns_nsscrubberitemview_nsscrubberitemview_nsscrubberitemview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubberItemView_NSScrubberItemView, setSelected, arginfo_appkit_ns_nsscrubberitemview_nsscrubberitemview_setselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubberItemView_NSScrubberItemView, isSelected, arginfo_appkit_ns_nsscrubberitemview_nsscrubberitemview_isselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubberItemView_NSScrubberItemView, setHighlighted, arginfo_appkit_ns_nsscrubberitemview_nsscrubberitemview_sethighlighted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubberItemView_NSScrubberItemView, isHighlighted, arginfo_appkit_ns_nsscrubberitemview_nsscrubberitemview_ishighlighted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubberItemView_NSScrubberItemView, applyLayoutAttributes, arginfo_appkit_ns_nsscrubberitemview_nsscrubberitemview_applylayoutattributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

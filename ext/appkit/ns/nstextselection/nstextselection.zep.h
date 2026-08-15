
extern zend_class_entry *appkit_ns_nstextselection_nstextselection_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTextSelection_NSTextSelection);

PHP_METHOD(AppKit_NS_NSTextSelection_NSTextSelection, createWithLocation);
PHP_METHOD(AppKit_NS_NSTextSelection_NSTextSelection, wrap);
PHP_METHOD(AppKit_NS_NSTextSelection_NSTextSelection, destroy);
PHP_METHOD(AppKit_NS_NSTextSelection_NSTextSelection, granularity);
PHP_METHOD(AppKit_NS_NSTextSelection_NSTextSelection, affinity);
PHP_METHOD(AppKit_NS_NSTextSelection_NSTextSelection, isTransient);
PHP_METHOD(AppKit_NS_NSTextSelection_NSTextSelection, textRangesCount);
PHP_METHOD(AppKit_NS_NSTextSelection_NSTextSelection, getAnchorPositionOffset);
PHP_METHOD(AppKit_NS_NSTextSelection_NSTextSelection, setAnchorPositionOffset);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextselection_nstextselection_createwithlocation, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTextLocationPtr, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, affinity, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextselection_nstextselection_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTextSelectionPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextselection_nstextselection_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, selection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextselection_nstextselection_granularity, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextselection_nstextselection_affinity, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextselection_nstextselection_istransient, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextselection_nstextselection_textrangescount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextselection_nstextselection_getanchorpositionoffset, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextselection_nstextselection_setanchorpositionoffset, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, selection, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstextselection_nstextselection_method_entry) {
	PHP_ME(AppKit_NS_NSTextSelection_NSTextSelection, createWithLocation, arginfo_appkit_ns_nstextselection_nstextselection_createwithlocation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextSelection_NSTextSelection, wrap, arginfo_appkit_ns_nstextselection_nstextselection_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextSelection_NSTextSelection, destroy, arginfo_appkit_ns_nstextselection_nstextselection_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextSelection_NSTextSelection, granularity, arginfo_appkit_ns_nstextselection_nstextselection_granularity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextSelection_NSTextSelection, affinity, arginfo_appkit_ns_nstextselection_nstextselection_affinity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextSelection_NSTextSelection, isTransient, arginfo_appkit_ns_nstextselection_nstextselection_istransient, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextSelection_NSTextSelection, textRangesCount, arginfo_appkit_ns_nstextselection_nstextselection_textrangescount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextSelection_NSTextSelection, getAnchorPositionOffset, arginfo_appkit_ns_nstextselection_nstextselection_getanchorpositionoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextSelection_NSTextSelection, setAnchorPositionOffset, arginfo_appkit_ns_nstextselection_nstextselection_setanchorpositionoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

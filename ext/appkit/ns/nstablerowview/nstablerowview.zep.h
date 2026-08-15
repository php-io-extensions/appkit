
extern zend_class_entry *appkit_ns_nstablerowview_nstablerowview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTableRowView_NSTableRowView);

PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, create);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, wrap);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, destroy);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, setEmphasized);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, isEmphasized);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, setSelected);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, isSelected);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, setGroupRowStyle);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, isGroupRowStyle);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, setFloating);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, isFloating);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, interiorBackgroundStyle);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTableRowViewPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_setemphasized, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_isemphasized, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_setselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_isselected, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_setgrouprowstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_isgrouprowstyle, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_setfloating, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_isfloating, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_interiorbackgroundstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstablerowview_nstablerowview_method_entry) {
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, create, arginfo_appkit_ns_nstablerowview_nstablerowview_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, wrap, arginfo_appkit_ns_nstablerowview_nstablerowview_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, destroy, arginfo_appkit_ns_nstablerowview_nstablerowview_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, setEmphasized, arginfo_appkit_ns_nstablerowview_nstablerowview_setemphasized, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, isEmphasized, arginfo_appkit_ns_nstablerowview_nstablerowview_isemphasized, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, setSelected, arginfo_appkit_ns_nstablerowview_nstablerowview_setselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, isSelected, arginfo_appkit_ns_nstablerowview_nstablerowview_isselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, setGroupRowStyle, arginfo_appkit_ns_nstablerowview_nstablerowview_setgrouprowstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, isGroupRowStyle, arginfo_appkit_ns_nstablerowview_nstablerowview_isgrouprowstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, setFloating, arginfo_appkit_ns_nstablerowview_nstablerowview_setfloating, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, isFloating, arginfo_appkit_ns_nstablerowview_nstablerowview_isfloating, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, interiorBackgroundStyle, arginfo_appkit_ns_nstablerowview_nstablerowview_interiorbackgroundstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

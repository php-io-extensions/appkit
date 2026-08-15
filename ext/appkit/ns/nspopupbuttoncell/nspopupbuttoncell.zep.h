
extern zend_class_entry *appkit_ns_nspopupbuttoncell_nspopupbuttoncell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell);

PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, createText);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, wrap);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, destroy);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, nsPopUpButtonCell);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, setTitle);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, getTitle);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, setMenu);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, getMenu);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, setPullsDown);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, pullsDown);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, setAutoenablesItems);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, autoenablesItems);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, setUsesItemFromMenu);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, usesItemFromMenu);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, setAltersStateOfSelectedItem);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, altersStateOfSelectedItem);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, addItemWithTitle);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, removeAllItems);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, numberOfItems);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, selectItemAtIndex);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, indexOfSelectedItem);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, titleOfSelectedItem);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, setArrowPosition);
PHP_METHOD(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, getArrowPosition);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_createtext, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pullsDown, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsPopUpButtonCellPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_nspopupbuttoncell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_gettitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_setmenu, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_getmenu, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_setpullsdown, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_pullsdown, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_setautoenablesitems, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_autoenablesitems, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_setusesitemfrommenu, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_usesitemfrommenu, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_setaltersstateofselecteditem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_altersstateofselecteditem, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_additemwithtitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_removeallitems, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_numberofitems, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_selectitematindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_indexofselecteditem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_titleofselecteditem, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_setarrowposition, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_getarrowposition, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nspopupbuttoncell_nspopupbuttoncell_method_entry) {
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, createText, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_createtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, wrap, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, destroy, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, nsPopUpButtonCell, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_nspopupbuttoncell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, setTitle, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, getTitle, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_gettitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, setMenu, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_setmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, getMenu, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_getmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, setPullsDown, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_setpullsdown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, pullsDown, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_pullsdown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, setAutoenablesItems, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_setautoenablesitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, autoenablesItems, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_autoenablesitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, setUsesItemFromMenu, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_setusesitemfrommenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, usesItemFromMenu, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_usesitemfrommenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, setAltersStateOfSelectedItem, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_setaltersstateofselecteditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, altersStateOfSelectedItem, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_altersstateofselecteditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, addItemWithTitle, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_additemwithtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, removeAllItems, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_removeallitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, numberOfItems, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_numberofitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, selectItemAtIndex, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_selectitematindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, indexOfSelectedItem, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_indexofselecteditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, titleOfSelectedItem, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_titleofselecteditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, setArrowPosition, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_setarrowposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButtonCell_NSPopUpButtonCell, getArrowPosition, arginfo_appkit_ns_nspopupbuttoncell_nspopupbuttoncell_getarrowposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

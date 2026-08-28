
extern zend_class_entry *appkit_ns_nspopupbutton_nspopupbutton_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSPopUpButton_NSPopUpButton);

PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, popUpButtonWithMenuTargetAction);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, pullDownButtonWithTitleMenu);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, pullDownButtonWithImageMenu);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, pullDownButtonWithTitleImageMenu);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, initWithFramePullsDown);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, menu);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, setMenu);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, pullsDown);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, setPullsDown);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, autoenablesItems);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, setAutoenablesItems);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, preferredEdge);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, setPreferredEdge);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, usesItemFromMenu);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, setUsesItemFromMenu);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, altersStateOfSelectedItem);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, setAltersStateOfSelectedItem);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, addItemWithTitle);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, addItemsWithTitles);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, insertItemWithTitleAtIndex);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, removeItemWithTitle);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, removeItemAtIndex);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, removeAllItems);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, itemArray);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, numberOfItems);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, indexOfItem);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, indexOfItemWithTitle);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, indexOfItemWithTag);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, indexOfItemWithRepresentedObject);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, indexOfItemWithTargetAndAction);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, itemAtIndex);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, itemWithTitle);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, lastItem);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, selectItem);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, selectItemAtIndex);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, selectItemWithTitle);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, selectItemWithTag);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, setTitle);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, selectedItem);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, indexOfSelectedItem);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, selectedTag);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, synchronizeTitleAndSelectedItem);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, itemTitleAtIndex);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, itemTitles);
PHP_METHOD(AppKit_NS_NSPopUpButton_NSPopUpButton, titleOfSelectedItem);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_popupbuttonwithmenutargetaction, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_INFO(0, action)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_pulldownbuttonwithtitlemenu, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_pulldownbuttonwithimagemenu, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_pulldownbuttonwithtitleimagemenu, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_initwithframepullsdown, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_menu, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_setmenu, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_pullsdown, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_setpullsdown, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pullsDown, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_autoenablesitems, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_setautoenablesitems, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, autoenablesItems, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_preferrededge, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_setpreferrededge, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, preferredEdge, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_usesitemfrommenu, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_setusesitemfrommenu, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, usesItemFromMenu, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_altersstateofselecteditem, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_setaltersstateofselecteditem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, altersStateOfSelectedItem, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_additemwithtitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_additemswithtitles, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, itemTitles, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_insertitemwithtitleatindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_removeitemwithtitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_removeitematindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_removeallitems, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_itemarray, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_numberofitems, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_indexofitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_indexofitemwithtitle, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_indexofitemwithtag, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_indexofitemwithrepresentedobject, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, obj, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_indexofitemwithtargetandaction, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_INFO(0, action)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_itematindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_itemwithtitle, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_lastitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_selectitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_selectitematindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_selectitemwithtitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_selectitemwithtag, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_selecteditem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_indexofselecteditem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_selectedtag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_synchronizetitleandselecteditem, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_itemtitleatindex, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_itemtitles, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nspopupbutton_nspopupbutton_titleofselecteditem, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nspopupbutton_nspopupbutton_method_entry) {
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, popUpButtonWithMenuTargetAction, arginfo_appkit_ns_nspopupbutton_nspopupbutton_popupbuttonwithmenutargetaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, pullDownButtonWithTitleMenu, arginfo_appkit_ns_nspopupbutton_nspopupbutton_pulldownbuttonwithtitlemenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, pullDownButtonWithImageMenu, arginfo_appkit_ns_nspopupbutton_nspopupbutton_pulldownbuttonwithimagemenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, pullDownButtonWithTitleImageMenu, arginfo_appkit_ns_nspopupbutton_nspopupbutton_pulldownbuttonwithtitleimagemenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, initWithFramePullsDown, arginfo_appkit_ns_nspopupbutton_nspopupbutton_initwithframepullsdown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, menu, arginfo_appkit_ns_nspopupbutton_nspopupbutton_menu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, setMenu, arginfo_appkit_ns_nspopupbutton_nspopupbutton_setmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, pullsDown, arginfo_appkit_ns_nspopupbutton_nspopupbutton_pullsdown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, setPullsDown, arginfo_appkit_ns_nspopupbutton_nspopupbutton_setpullsdown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, autoenablesItems, arginfo_appkit_ns_nspopupbutton_nspopupbutton_autoenablesitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, setAutoenablesItems, arginfo_appkit_ns_nspopupbutton_nspopupbutton_setautoenablesitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, preferredEdge, arginfo_appkit_ns_nspopupbutton_nspopupbutton_preferrededge, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, setPreferredEdge, arginfo_appkit_ns_nspopupbutton_nspopupbutton_setpreferrededge, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, usesItemFromMenu, arginfo_appkit_ns_nspopupbutton_nspopupbutton_usesitemfrommenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, setUsesItemFromMenu, arginfo_appkit_ns_nspopupbutton_nspopupbutton_setusesitemfrommenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, altersStateOfSelectedItem, arginfo_appkit_ns_nspopupbutton_nspopupbutton_altersstateofselecteditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, setAltersStateOfSelectedItem, arginfo_appkit_ns_nspopupbutton_nspopupbutton_setaltersstateofselecteditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, addItemWithTitle, arginfo_appkit_ns_nspopupbutton_nspopupbutton_additemwithtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, addItemsWithTitles, arginfo_appkit_ns_nspopupbutton_nspopupbutton_additemswithtitles, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, insertItemWithTitleAtIndex, arginfo_appkit_ns_nspopupbutton_nspopupbutton_insertitemwithtitleatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, removeItemWithTitle, arginfo_appkit_ns_nspopupbutton_nspopupbutton_removeitemwithtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, removeItemAtIndex, arginfo_appkit_ns_nspopupbutton_nspopupbutton_removeitematindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, removeAllItems, arginfo_appkit_ns_nspopupbutton_nspopupbutton_removeallitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, itemArray, arginfo_appkit_ns_nspopupbutton_nspopupbutton_itemarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, numberOfItems, arginfo_appkit_ns_nspopupbutton_nspopupbutton_numberofitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, indexOfItem, arginfo_appkit_ns_nspopupbutton_nspopupbutton_indexofitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, indexOfItemWithTitle, arginfo_appkit_ns_nspopupbutton_nspopupbutton_indexofitemwithtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, indexOfItemWithTag, arginfo_appkit_ns_nspopupbutton_nspopupbutton_indexofitemwithtag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, indexOfItemWithRepresentedObject, arginfo_appkit_ns_nspopupbutton_nspopupbutton_indexofitemwithrepresentedobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, indexOfItemWithTargetAndAction, arginfo_appkit_ns_nspopupbutton_nspopupbutton_indexofitemwithtargetandaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, itemAtIndex, arginfo_appkit_ns_nspopupbutton_nspopupbutton_itematindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, itemWithTitle, arginfo_appkit_ns_nspopupbutton_nspopupbutton_itemwithtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, lastItem, arginfo_appkit_ns_nspopupbutton_nspopupbutton_lastitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, selectItem, arginfo_appkit_ns_nspopupbutton_nspopupbutton_selectitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, selectItemAtIndex, arginfo_appkit_ns_nspopupbutton_nspopupbutton_selectitematindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, selectItemWithTitle, arginfo_appkit_ns_nspopupbutton_nspopupbutton_selectitemwithtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, selectItemWithTag, arginfo_appkit_ns_nspopupbutton_nspopupbutton_selectitemwithtag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, setTitle, arginfo_appkit_ns_nspopupbutton_nspopupbutton_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, selectedItem, arginfo_appkit_ns_nspopupbutton_nspopupbutton_selecteditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, indexOfSelectedItem, arginfo_appkit_ns_nspopupbutton_nspopupbutton_indexofselecteditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, selectedTag, arginfo_appkit_ns_nspopupbutton_nspopupbutton_selectedtag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, synchronizeTitleAndSelectedItem, arginfo_appkit_ns_nspopupbutton_nspopupbutton_synchronizetitleandselecteditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, itemTitleAtIndex, arginfo_appkit_ns_nspopupbutton_nspopupbutton_itemtitleatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, itemTitles, arginfo_appkit_ns_nspopupbutton_nspopupbutton_itemtitles, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopUpButton_NSPopUpButton, titleOfSelectedItem, arginfo_appkit_ns_nspopupbutton_nspopupbutton_titleofselecteditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

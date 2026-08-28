
extern zend_class_entry *appkit_ns_nsmenu_nsmenu_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSMenu_NSMenu);

PHP_METHOD(AppKit_NS_NSMenu_NSMenu, initWithTitle);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, title);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setTitle);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, popUpContextMenuWithEventForView);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, popUpContextMenuWithEventForViewWithFont);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, popUpMenuPositioningItemAtLocationInView);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setMenuBarVisible);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, menuBarVisible);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, supermenu);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setSupermenu);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, insertItemAtIndex);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, addItem);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, insertItemWithTitleActionKeyEquivalentAtIndex);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, addItemWithTitleActionKeyEquivalent);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, removeItemAtIndex);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, removeItem);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setSubmenuForItem);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, removeAllItems);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, itemArray);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setItemArray);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, numberOfItems);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, itemAtIndex);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, indexOfItem);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, indexOfItemWithTitle);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, indexOfItemWithTag);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, indexOfItemWithRepresentedObject);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, indexOfItemWithSubmenu);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, indexOfItemWithTargetAndAction);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, itemWithTitle);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, itemWithTag);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, autoenablesItems);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setAutoenablesItems);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, update);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, performKeyEquivalent);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, itemChanged);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, performActionForItemAtIndex);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, delegate);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setDelegate);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, menuBarHeight);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, cancelTracking);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, cancelTrackingWithoutAnimation);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, highlightedItem);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, minimumWidth);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setMinimumWidth);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, size);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, font);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setFont);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, allowsContextMenuPlugIns);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setAllowsContextMenuPlugIns);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, automaticallyInsertsWritingToolsItems);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setAutomaticallyInsertsWritingToolsItems);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, showsStateColumn);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setShowsStateColumn);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, userInterfaceLayoutDirection);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setUserInterfaceLayoutDirection);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, presentationStyle);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setPresentationStyle);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, selectionMode);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setSelectionMode);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, selectedItems);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, setSelectedItems);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, submenuAction);
PHP_METHOD(AppKit_NS_NSMenu_NSMenu, propertiesToUpdate);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_initwithtitle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_title, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_popupcontextmenuwitheventforview, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_popupcontextmenuwitheventforviewwithfont, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_popupmenupositioningitematlocationinview, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_setmenubarvisible, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_menubarvisible, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_supermenu, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_setsupermenu, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, supermenu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_insertitematindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newItem, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_additem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newItem, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_insertitemwithtitleactionkeyequivalentatindex, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_INFO(0, action)
	ZEND_ARG_TYPE_INFO(0, keyEquivalent, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_additemwithtitleactionkeyequivalent, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_INFO(0, action)
	ZEND_ARG_TYPE_INFO(0, keyEquivalent, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_removeitematindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_removeitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_setsubmenuforitem, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_removeallitems, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_itemarray, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_setitemarray, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, itemArray, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_numberofitems, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_itematindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_indexofitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_indexofitemwithtitle, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_indexofitemwithtag, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_indexofitemwithrepresentedobject, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, representedObject, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_indexofitemwithsubmenu, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, submenu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_indexofitemwithtargetandaction, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_INFO(0, action)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_itemwithtitle, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_itemwithtag, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_autoenablesitems, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_setautoenablesitems, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_update, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_performkeyequivalent, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_itemchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_performactionforitematindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_menubarheight, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_canceltracking, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_canceltrackingwithoutanimation, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_highlighteditem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_minimumwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_setminimumwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_size, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_font, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_setfont, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_allowscontextmenuplugins, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_setallowscontextmenuplugins, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_automaticallyinsertswritingtoolsitems, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_setautomaticallyinsertswritingtoolsitems, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_showsstatecolumn, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_setshowsstatecolumn, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_userinterfacelayoutdirection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_setuserinterfacelayoutdirection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_presentationstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_setpresentationstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_selectionmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_setselectionmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_selecteditems, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_setselecteditems, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, selectedItems, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_submenuaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsmenu_nsmenu_propertiestoupdate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsmenu_nsmenu_method_entry) {
	PHP_ME(AppKit_NS_NSMenu_NSMenu, initWithTitle, arginfo_appkit_ns_nsmenu_nsmenu_initwithtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, title, arginfo_appkit_ns_nsmenu_nsmenu_title, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, setTitle, arginfo_appkit_ns_nsmenu_nsmenu_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, popUpContextMenuWithEventForView, arginfo_appkit_ns_nsmenu_nsmenu_popupcontextmenuwitheventforview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, popUpContextMenuWithEventForViewWithFont, arginfo_appkit_ns_nsmenu_nsmenu_popupcontextmenuwitheventforviewwithfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, popUpMenuPositioningItemAtLocationInView, arginfo_appkit_ns_nsmenu_nsmenu_popupmenupositioningitematlocationinview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, setMenuBarVisible, arginfo_appkit_ns_nsmenu_nsmenu_setmenubarvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, menuBarVisible, arginfo_appkit_ns_nsmenu_nsmenu_menubarvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, supermenu, arginfo_appkit_ns_nsmenu_nsmenu_supermenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, setSupermenu, arginfo_appkit_ns_nsmenu_nsmenu_setsupermenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, insertItemAtIndex, arginfo_appkit_ns_nsmenu_nsmenu_insertitematindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, addItem, arginfo_appkit_ns_nsmenu_nsmenu_additem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, insertItemWithTitleActionKeyEquivalentAtIndex, arginfo_appkit_ns_nsmenu_nsmenu_insertitemwithtitleactionkeyequivalentatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, addItemWithTitleActionKeyEquivalent, arginfo_appkit_ns_nsmenu_nsmenu_additemwithtitleactionkeyequivalent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, removeItemAtIndex, arginfo_appkit_ns_nsmenu_nsmenu_removeitematindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, removeItem, arginfo_appkit_ns_nsmenu_nsmenu_removeitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, setSubmenuForItem, arginfo_appkit_ns_nsmenu_nsmenu_setsubmenuforitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, removeAllItems, arginfo_appkit_ns_nsmenu_nsmenu_removeallitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, itemArray, arginfo_appkit_ns_nsmenu_nsmenu_itemarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, setItemArray, arginfo_appkit_ns_nsmenu_nsmenu_setitemarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, numberOfItems, arginfo_appkit_ns_nsmenu_nsmenu_numberofitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, itemAtIndex, arginfo_appkit_ns_nsmenu_nsmenu_itematindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, indexOfItem, arginfo_appkit_ns_nsmenu_nsmenu_indexofitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, indexOfItemWithTitle, arginfo_appkit_ns_nsmenu_nsmenu_indexofitemwithtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, indexOfItemWithTag, arginfo_appkit_ns_nsmenu_nsmenu_indexofitemwithtag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, indexOfItemWithRepresentedObject, arginfo_appkit_ns_nsmenu_nsmenu_indexofitemwithrepresentedobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, indexOfItemWithSubmenu, arginfo_appkit_ns_nsmenu_nsmenu_indexofitemwithsubmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, indexOfItemWithTargetAndAction, arginfo_appkit_ns_nsmenu_nsmenu_indexofitemwithtargetandaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, itemWithTitle, arginfo_appkit_ns_nsmenu_nsmenu_itemwithtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, itemWithTag, arginfo_appkit_ns_nsmenu_nsmenu_itemwithtag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, autoenablesItems, arginfo_appkit_ns_nsmenu_nsmenu_autoenablesitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, setAutoenablesItems, arginfo_appkit_ns_nsmenu_nsmenu_setautoenablesitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, update, arginfo_appkit_ns_nsmenu_nsmenu_update, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, performKeyEquivalent, arginfo_appkit_ns_nsmenu_nsmenu_performkeyequivalent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, itemChanged, arginfo_appkit_ns_nsmenu_nsmenu_itemchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, performActionForItemAtIndex, arginfo_appkit_ns_nsmenu_nsmenu_performactionforitematindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, delegate, arginfo_appkit_ns_nsmenu_nsmenu_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, setDelegate, arginfo_appkit_ns_nsmenu_nsmenu_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, menuBarHeight, arginfo_appkit_ns_nsmenu_nsmenu_menubarheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, cancelTracking, arginfo_appkit_ns_nsmenu_nsmenu_canceltracking, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, cancelTrackingWithoutAnimation, arginfo_appkit_ns_nsmenu_nsmenu_canceltrackingwithoutanimation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, highlightedItem, arginfo_appkit_ns_nsmenu_nsmenu_highlighteditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, minimumWidth, arginfo_appkit_ns_nsmenu_nsmenu_minimumwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, setMinimumWidth, arginfo_appkit_ns_nsmenu_nsmenu_setminimumwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, size, arginfo_appkit_ns_nsmenu_nsmenu_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, font, arginfo_appkit_ns_nsmenu_nsmenu_font, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, setFont, arginfo_appkit_ns_nsmenu_nsmenu_setfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, allowsContextMenuPlugIns, arginfo_appkit_ns_nsmenu_nsmenu_allowscontextmenuplugins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, setAllowsContextMenuPlugIns, arginfo_appkit_ns_nsmenu_nsmenu_setallowscontextmenuplugins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, automaticallyInsertsWritingToolsItems, arginfo_appkit_ns_nsmenu_nsmenu_automaticallyinsertswritingtoolsitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, setAutomaticallyInsertsWritingToolsItems, arginfo_appkit_ns_nsmenu_nsmenu_setautomaticallyinsertswritingtoolsitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, showsStateColumn, arginfo_appkit_ns_nsmenu_nsmenu_showsstatecolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, setShowsStateColumn, arginfo_appkit_ns_nsmenu_nsmenu_setshowsstatecolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, userInterfaceLayoutDirection, arginfo_appkit_ns_nsmenu_nsmenu_userinterfacelayoutdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, setUserInterfaceLayoutDirection, arginfo_appkit_ns_nsmenu_nsmenu_setuserinterfacelayoutdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, presentationStyle, arginfo_appkit_ns_nsmenu_nsmenu_presentationstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, setPresentationStyle, arginfo_appkit_ns_nsmenu_nsmenu_setpresentationstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, selectionMode, arginfo_appkit_ns_nsmenu_nsmenu_selectionmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, setSelectionMode, arginfo_appkit_ns_nsmenu_nsmenu_setselectionmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, selectedItems, arginfo_appkit_ns_nsmenu_nsmenu_selecteditems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, setSelectedItems, arginfo_appkit_ns_nsmenu_nsmenu_setselecteditems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, submenuAction, arginfo_appkit_ns_nsmenu_nsmenu_submenuaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSMenu_NSMenu, propertiesToUpdate, arginfo_appkit_ns_nsmenu_nsmenu_propertiestoupdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

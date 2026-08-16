
extern zend_class_entry *appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup);

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, create);
PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, groupWithTitles);
PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, wrap);
PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, destroy);
PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, nsToolbarItemGroup);
PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, setSubitems);
PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, subitemsCount);
PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, subitemAt);
PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, setControlRepresentation);
PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, getControlRepresentation);
PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, setSelectionMode);
PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, getSelectionMode);
PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, setSelectedIndex);
PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, getSelectedIndex);
PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, setSelectedAtIndex);
PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, isSelectedAtIndex);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_create, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_groupwithtitles, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
	ZEND_ARG_ARRAY_INFO(0, titles, 0)
	ZEND_ARG_TYPE_INFO(0, selectionMode, IS_LONG, 0)
	ZEND_ARG_INFO(0, labels)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsToolbarItemGroupPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_nstoolbaritemgroup, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_setsubitems, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, subitems, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_subitemscount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_subitemat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_setcontrolrepresentation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, representation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_getcontrolrepresentation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_setselectionmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_getselectionmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_setselectedindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_getselectedindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_setselectedatindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_isselectedatindex, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_method_entry) {
	PHP_ME(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, create, arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, groupWithTitles, arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_groupwithtitles, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, wrap, arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, destroy, arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, nsToolbarItemGroup, arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_nstoolbaritemgroup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, setSubitems, arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_setsubitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, subitemsCount, arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_subitemscount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, subitemAt, arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_subitemat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, setControlRepresentation, arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_setcontrolrepresentation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, getControlRepresentation, arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_getcontrolrepresentation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, setSelectionMode, arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_setselectionmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, getSelectionMode, arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_getselectionmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, setSelectedIndex, arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_setselectedindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, getSelectedIndex, arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_getselectedindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, setSelectedAtIndex, arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_setselectedatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, isSelectedAtIndex, arginfo_appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_isselectedatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

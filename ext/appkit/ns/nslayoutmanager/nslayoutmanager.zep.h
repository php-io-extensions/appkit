
extern zend_class_entry *appkit_ns_nslayoutmanager_nslayoutmanager_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSLayoutManager_NSLayoutManager);

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, create);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, wrap);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, destroy);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, nsLayoutManager);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, replaceTextStorage);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, addTextContainer);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, removeTextContainerAtIndex);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, textContainersCount);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, textContainerChangedGeometry);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setShowsInvisibleCharacters);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, showsInvisibleCharacters);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setShowsControlCharacters);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, showsControlCharacters);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setUsesDefaultHyphenation);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, usesDefaultHyphenation);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setDefaultFont);
PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, defaultFont);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_create, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsLayoutManagerPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_nslayoutmanager, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_replacetextstorage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, storage, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_addtextcontainer, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_removetextcontaineratindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_textcontainerscount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_textcontainerchangedgeometry, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setshowsinvisiblecharacters, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_showsinvisiblecharacters, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setshowscontrolcharacters, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_showscontrolcharacters, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setusesdefaulthyphenation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_usesdefaulthyphenation, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setdefaultfont, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_defaultfont, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nslayoutmanager_nslayoutmanager_method_entry) {
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, create, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, wrap, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, destroy, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, nsLayoutManager, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_nslayoutmanager, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, replaceTextStorage, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_replacetextstorage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, addTextContainer, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_addtextcontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, removeTextContainerAtIndex, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_removetextcontaineratindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, textContainersCount, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_textcontainerscount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, textContainerChangedGeometry, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_textcontainerchangedgeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setShowsInvisibleCharacters, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setshowsinvisiblecharacters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, showsInvisibleCharacters, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_showsinvisiblecharacters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setShowsControlCharacters, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setshowscontrolcharacters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, showsControlCharacters, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_showscontrolcharacters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setUsesDefaultHyphenation, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setusesdefaulthyphenation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, usesDefaultHyphenation, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_usesdefaulthyphenation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, setDefaultFont, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_setdefaultfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutManager_NSLayoutManager, defaultFont, arginfo_appkit_ns_nslayoutmanager_nslayoutmanager_defaultfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};


extern zend_class_entry *appkit_ns_nsdocktile_nsdocktile_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSDockTile_NSDockTile);

PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, applicationDockTile);
PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, wrap);
PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, destroy);
PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, nsDockTile);
PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, getSize);
PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, setContentView);
PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, contentView);
PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, display);
PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, setShowsApplicationBadge);
PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, showsApplicationBadge);
PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, setBadgeLabel);
PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, badgeLabel);
PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, owner);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocktile_nsdocktile_applicationdocktile, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocktile_nsdocktile_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsDockTilePtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocktile_nsdocktile_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, tile, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocktile_nsdocktile_nsdocktile, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tile, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocktile_nsdocktile_getsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, tile, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocktile_nsdocktile_setcontentview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, tile, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocktile_nsdocktile_contentview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tile, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocktile_nsdocktile_display, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, tile, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocktile_nsdocktile_setshowsapplicationbadge, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, tile, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocktile_nsdocktile_showsapplicationbadge, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, tile, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocktile_nsdocktile_setbadgelabel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, tile, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocktile_nsdocktile_badgelabel, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, tile, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocktile_nsdocktile_owner, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tile, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsdocktile_nsdocktile_method_entry) {
	PHP_ME(AppKit_NS_NSDockTile_NSDockTile, applicationDockTile, arginfo_appkit_ns_nsdocktile_nsdocktile_applicationdocktile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDockTile_NSDockTile, wrap, arginfo_appkit_ns_nsdocktile_nsdocktile_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDockTile_NSDockTile, destroy, arginfo_appkit_ns_nsdocktile_nsdocktile_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDockTile_NSDockTile, nsDockTile, arginfo_appkit_ns_nsdocktile_nsdocktile_nsdocktile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDockTile_NSDockTile, getSize, arginfo_appkit_ns_nsdocktile_nsdocktile_getsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDockTile_NSDockTile, setContentView, arginfo_appkit_ns_nsdocktile_nsdocktile_setcontentview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDockTile_NSDockTile, contentView, arginfo_appkit_ns_nsdocktile_nsdocktile_contentview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDockTile_NSDockTile, display, arginfo_appkit_ns_nsdocktile_nsdocktile_display, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDockTile_NSDockTile, setShowsApplicationBadge, arginfo_appkit_ns_nsdocktile_nsdocktile_setshowsapplicationbadge, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDockTile_NSDockTile, showsApplicationBadge, arginfo_appkit_ns_nsdocktile_nsdocktile_showsapplicationbadge, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDockTile_NSDockTile, setBadgeLabel, arginfo_appkit_ns_nsdocktile_nsdocktile_setbadgelabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDockTile_NSDockTile, badgeLabel, arginfo_appkit_ns_nsdocktile_nsdocktile_badgelabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDockTile_NSDockTile, owner, arginfo_appkit_ns_nsdocktile_nsdocktile_owner, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

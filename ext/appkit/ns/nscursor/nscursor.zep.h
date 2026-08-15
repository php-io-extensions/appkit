
extern zend_class_entry *appkit_ns_nscursor_nscursor_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSCursor_NSCursor);

PHP_METHOD(AppKit_NS_NSCursor_NSCursor, wrap);
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, destroy);
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, hide);
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, unhide);
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, setHiddenUntilMouseMoves);
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, popStack);
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, push);
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, set);
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, pop);
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, hotSpot);
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, currentCursor);
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, arrowCursor);
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, crosshairCursor);
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, pointingHandCursor);
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, iBeamCursor);
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, closedHandCursor);
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, openHandCursor);
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, operationNotAllowedCursor);
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, dragLinkCursor);
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, dragCopyCursor);
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, contextualMenuCursor);
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, nsCursor);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscursor_nscursor_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsCursorPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscursor_nscursor_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cursor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscursor_nscursor_hide, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscursor_nscursor_unhide, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscursor_nscursor_sethiddenuntilmousemoves, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscursor_nscursor_popstack, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscursor_nscursor_push, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cursor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscursor_nscursor_set, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cursor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscursor_nscursor_pop, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cursor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscursor_nscursor_hotspot, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, cursor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscursor_nscursor_currentcursor, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscursor_nscursor_arrowcursor, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscursor_nscursor_crosshaircursor, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscursor_nscursor_pointinghandcursor, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscursor_nscursor_ibeamcursor, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscursor_nscursor_closedhandcursor, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscursor_nscursor_openhandcursor, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscursor_nscursor_operationnotallowedcursor, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscursor_nscursor_draglinkcursor, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscursor_nscursor_dragcopycursor, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscursor_nscursor_contextualmenucursor, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscursor_nscursor_nscursor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cursor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nscursor_nscursor_method_entry) {
	PHP_ME(AppKit_NS_NSCursor_NSCursor, wrap, arginfo_appkit_ns_nscursor_nscursor_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCursor_NSCursor, destroy, arginfo_appkit_ns_nscursor_nscursor_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCursor_NSCursor, hide, arginfo_appkit_ns_nscursor_nscursor_hide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCursor_NSCursor, unhide, arginfo_appkit_ns_nscursor_nscursor_unhide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCursor_NSCursor, setHiddenUntilMouseMoves, arginfo_appkit_ns_nscursor_nscursor_sethiddenuntilmousemoves, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCursor_NSCursor, popStack, arginfo_appkit_ns_nscursor_nscursor_popstack, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCursor_NSCursor, push, arginfo_appkit_ns_nscursor_nscursor_push, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCursor_NSCursor, set, arginfo_appkit_ns_nscursor_nscursor_set, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCursor_NSCursor, pop, arginfo_appkit_ns_nscursor_nscursor_pop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCursor_NSCursor, hotSpot, arginfo_appkit_ns_nscursor_nscursor_hotspot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCursor_NSCursor, currentCursor, arginfo_appkit_ns_nscursor_nscursor_currentcursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCursor_NSCursor, arrowCursor, arginfo_appkit_ns_nscursor_nscursor_arrowcursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCursor_NSCursor, crosshairCursor, arginfo_appkit_ns_nscursor_nscursor_crosshaircursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCursor_NSCursor, pointingHandCursor, arginfo_appkit_ns_nscursor_nscursor_pointinghandcursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCursor_NSCursor, iBeamCursor, arginfo_appkit_ns_nscursor_nscursor_ibeamcursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCursor_NSCursor, closedHandCursor, arginfo_appkit_ns_nscursor_nscursor_closedhandcursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCursor_NSCursor, openHandCursor, arginfo_appkit_ns_nscursor_nscursor_openhandcursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCursor_NSCursor, operationNotAllowedCursor, arginfo_appkit_ns_nscursor_nscursor_operationnotallowedcursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCursor_NSCursor, dragLinkCursor, arginfo_appkit_ns_nscursor_nscursor_draglinkcursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCursor_NSCursor, dragCopyCursor, arginfo_appkit_ns_nscursor_nscursor_dragcopycursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCursor_NSCursor, contextualMenuCursor, arginfo_appkit_ns_nscursor_nscursor_contextualmenucursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCursor_NSCursor, nsCursor, arginfo_appkit_ns_nscursor_nscursor_nscursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

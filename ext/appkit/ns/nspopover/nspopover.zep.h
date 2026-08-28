
extern zend_class_entry *appkit_ns_nspopover_nspopover_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSPopover_NSPopover);

PHP_METHOD(AppKit_NS_NSPopover_NSPopover, init);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, delegate);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, setDelegate);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, appearance);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, setAppearance);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, effectiveAppearance);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, behavior);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, setBehavior);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, animates);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, setAnimates);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, contentViewController);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, setContentViewController);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, contentSize);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, setContentSize);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, isShown);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, isDetached);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, positioningRect);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, setPositioningRect);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, hasFullSizeContent);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, setHasFullSizeContent);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, showRelativeToRectOfViewPreferredEdge);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, showRelativeToToolbarItem);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, performClose);
PHP_METHOD(AppKit_NS_NSPopover_NSPopover, close);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_init, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_appearance, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_setappearance, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, appearance, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_effectiveappearance, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_behavior, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_setbehavior, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, behavior, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_animates, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_setanimates, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, animates, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_contentviewcontroller, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_setcontentviewcontroller, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, contentViewController, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_contentsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_setcontentsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_isshown, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_isdetached, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_positioningrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_setpositioningrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_hasfullsizecontent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_sethasfullsizecontent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hasFullSizeContent, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_showrelativetorectofviewpreferrededge, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, positioningView, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, preferredEdge, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_showrelativetotoolbaritem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toolbarItem, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_performclose, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspopover_nspopover_close, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nspopover_nspopover_method_entry) {
	PHP_ME(AppKit_NS_NSPopover_NSPopover, init, arginfo_appkit_ns_nspopover_nspopover_init, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, delegate, arginfo_appkit_ns_nspopover_nspopover_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, setDelegate, arginfo_appkit_ns_nspopover_nspopover_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, appearance, arginfo_appkit_ns_nspopover_nspopover_appearance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, setAppearance, arginfo_appkit_ns_nspopover_nspopover_setappearance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, effectiveAppearance, arginfo_appkit_ns_nspopover_nspopover_effectiveappearance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, behavior, arginfo_appkit_ns_nspopover_nspopover_behavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, setBehavior, arginfo_appkit_ns_nspopover_nspopover_setbehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, animates, arginfo_appkit_ns_nspopover_nspopover_animates, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, setAnimates, arginfo_appkit_ns_nspopover_nspopover_setanimates, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, contentViewController, arginfo_appkit_ns_nspopover_nspopover_contentviewcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, setContentViewController, arginfo_appkit_ns_nspopover_nspopover_setcontentviewcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, contentSize, arginfo_appkit_ns_nspopover_nspopover_contentsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, setContentSize, arginfo_appkit_ns_nspopover_nspopover_setcontentsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, isShown, arginfo_appkit_ns_nspopover_nspopover_isshown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, isDetached, arginfo_appkit_ns_nspopover_nspopover_isdetached, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, positioningRect, arginfo_appkit_ns_nspopover_nspopover_positioningrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, setPositioningRect, arginfo_appkit_ns_nspopover_nspopover_setpositioningrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, hasFullSizeContent, arginfo_appkit_ns_nspopover_nspopover_hasfullsizecontent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, setHasFullSizeContent, arginfo_appkit_ns_nspopover_nspopover_sethasfullsizecontent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, showRelativeToRectOfViewPreferredEdge, arginfo_appkit_ns_nspopover_nspopover_showrelativetorectofviewpreferrededge, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, showRelativeToToolbarItem, arginfo_appkit_ns_nspopover_nspopover_showrelativetotoolbaritem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, performClose, arginfo_appkit_ns_nspopover_nspopover_performclose, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPopover_NSPopover, close, arginfo_appkit_ns_nspopover_nspopover_close, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

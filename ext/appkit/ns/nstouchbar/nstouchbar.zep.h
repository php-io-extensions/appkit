
extern zend_class_entry *appkit_ns_nstouchbar_nstouchbar_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTouchBar_NSTouchBar);

PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, create);
PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, wrap);
PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, destroy);
PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, nsTouchBar);
PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, setCustomizationIdentifier);
PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, getCustomizationIdentifier);
PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, setDefaultItemIdentifiers);
PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, getDefaultItemIdentifiers);
PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, setTemplateItems);
PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, getItemIdentifiers);
PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, itemForIdentifier);
PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, isVisible);
PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, assignToResponder);
PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, touchBarFromResponder);
PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, setAutomaticCustomizeTouchBarMenuItemEnabled);
PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, isAutomaticCustomizeTouchBarMenuItemEnabled);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbar_nstouchbar_create, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbar_nstouchbar_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTouchBarPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbar_nstouchbar_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbar_nstouchbar_nstouchbar, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbar_nstouchbar_setcustomizationidentifier, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbar_nstouchbar_getcustomizationidentifier, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbar_nstouchbar_setdefaultitemidentifiers, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, identifiers, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbar_nstouchbar_getdefaultitemidentifiers, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbar_nstouchbar_settemplateitems, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, items, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbar_nstouchbar_getitemidentifiers, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbar_nstouchbar_itemforidentifier, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbar_nstouchbar_isvisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbar_nstouchbar_assigntoresponder, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, responder, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbar_nstouchbar_touchbarfromresponder, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, responder, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbar_nstouchbar_setautomaticcustomizetouchbarmenuitemenabled, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbar_nstouchbar_isautomaticcustomizetouchbarmenuitemenabled, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstouchbar_nstouchbar_method_entry) {
	PHP_ME(AppKit_NS_NSTouchBar_NSTouchBar, create, arginfo_appkit_ns_nstouchbar_nstouchbar_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBar_NSTouchBar, wrap, arginfo_appkit_ns_nstouchbar_nstouchbar_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBar_NSTouchBar, destroy, arginfo_appkit_ns_nstouchbar_nstouchbar_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBar_NSTouchBar, nsTouchBar, arginfo_appkit_ns_nstouchbar_nstouchbar_nstouchbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBar_NSTouchBar, setCustomizationIdentifier, arginfo_appkit_ns_nstouchbar_nstouchbar_setcustomizationidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBar_NSTouchBar, getCustomizationIdentifier, arginfo_appkit_ns_nstouchbar_nstouchbar_getcustomizationidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBar_NSTouchBar, setDefaultItemIdentifiers, arginfo_appkit_ns_nstouchbar_nstouchbar_setdefaultitemidentifiers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBar_NSTouchBar, getDefaultItemIdentifiers, arginfo_appkit_ns_nstouchbar_nstouchbar_getdefaultitemidentifiers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBar_NSTouchBar, setTemplateItems, arginfo_appkit_ns_nstouchbar_nstouchbar_settemplateitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBar_NSTouchBar, getItemIdentifiers, arginfo_appkit_ns_nstouchbar_nstouchbar_getitemidentifiers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBar_NSTouchBar, itemForIdentifier, arginfo_appkit_ns_nstouchbar_nstouchbar_itemforidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBar_NSTouchBar, isVisible, arginfo_appkit_ns_nstouchbar_nstouchbar_isvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBar_NSTouchBar, assignToResponder, arginfo_appkit_ns_nstouchbar_nstouchbar_assigntoresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBar_NSTouchBar, touchBarFromResponder, arginfo_appkit_ns_nstouchbar_nstouchbar_touchbarfromresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBar_NSTouchBar, setAutomaticCustomizeTouchBarMenuItemEnabled, arginfo_appkit_ns_nstouchbar_nstouchbar_setautomaticcustomizetouchbarmenuitemenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBar_NSTouchBar, isAutomaticCustomizeTouchBarMenuItemEnabled, arginfo_appkit_ns_nstouchbar_nstouchbar_isautomaticcustomizetouchbarmenuitemenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

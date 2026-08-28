
extern zend_class_entry *appkit_ns_nstabviewitem_nstabviewitem_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTabViewItem_NSTabViewItem);

PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, tabViewItemWithViewController);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, initWithIdentifier);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, identifier);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setIdentifier);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, color);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setColor);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, label);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setLabel);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, image);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setImage);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, view);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setView);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, viewController);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setViewController);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, tabState);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, tabView);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, initialFirstResponder);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setInitialFirstResponder);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, toolTip);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, setToolTip);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, drawLabelInRect);
PHP_METHOD(AppKit_NS_NSTabViewItem_NSTabViewItem, sizeOfLabel);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_tabviewitemwithviewcontroller, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewController, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_initwithidentifier, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_identifier, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_setidentifier, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_color, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_setcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_label, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_setlabel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_image, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_setimage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_view, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_setview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_viewcontroller, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_setviewcontroller, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewController, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_tabstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_tabview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_initialfirstresponder, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_setinitialfirstresponder, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, initialFirstResponder, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_tooltip, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_settooltip, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, toolTip)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_drawlabelinrect, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, shouldTruncateLabel, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabviewitem_nstabviewitem_sizeoflabel, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, computeMin, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstabviewitem_nstabviewitem_method_entry) {
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, tabViewItemWithViewController, arginfo_appkit_ns_nstabviewitem_nstabviewitem_tabviewitemwithviewcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, initWithIdentifier, arginfo_appkit_ns_nstabviewitem_nstabviewitem_initwithidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, identifier, arginfo_appkit_ns_nstabviewitem_nstabviewitem_identifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, setIdentifier, arginfo_appkit_ns_nstabviewitem_nstabviewitem_setidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, color, arginfo_appkit_ns_nstabviewitem_nstabviewitem_color, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, setColor, arginfo_appkit_ns_nstabviewitem_nstabviewitem_setcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, label, arginfo_appkit_ns_nstabviewitem_nstabviewitem_label, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, setLabel, arginfo_appkit_ns_nstabviewitem_nstabviewitem_setlabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, image, arginfo_appkit_ns_nstabviewitem_nstabviewitem_image, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, setImage, arginfo_appkit_ns_nstabviewitem_nstabviewitem_setimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, view, arginfo_appkit_ns_nstabviewitem_nstabviewitem_view, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, setView, arginfo_appkit_ns_nstabviewitem_nstabviewitem_setview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, viewController, arginfo_appkit_ns_nstabviewitem_nstabviewitem_viewcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, setViewController, arginfo_appkit_ns_nstabviewitem_nstabviewitem_setviewcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, tabState, arginfo_appkit_ns_nstabviewitem_nstabviewitem_tabstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, tabView, arginfo_appkit_ns_nstabviewitem_nstabviewitem_tabview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, initialFirstResponder, arginfo_appkit_ns_nstabviewitem_nstabviewitem_initialfirstresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, setInitialFirstResponder, arginfo_appkit_ns_nstabviewitem_nstabviewitem_setinitialfirstresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, toolTip, arginfo_appkit_ns_nstabviewitem_nstabviewitem_tooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, setToolTip, arginfo_appkit_ns_nstabviewitem_nstabviewitem_settooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, drawLabelInRect, arginfo_appkit_ns_nstabviewitem_nstabviewitem_drawlabelinrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabViewItem_NSTabViewItem, sizeOfLabel, arginfo_appkit_ns_nstabviewitem_nstabviewitem_sizeoflabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

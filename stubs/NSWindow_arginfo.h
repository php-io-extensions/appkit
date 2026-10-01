/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 8aa44a6a67e68a47e568d4f9e57406b6995d1949 */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSWindow_initWithContentRectStyleMaskBackingDefer, 0, 4, NSWindow, 0)
	ZEND_ARG_OBJ_INFO(0, contentRect, NSRect, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, style, NSWindowStyleMask, MAY_BE_LONG, NULL)
	ZEND_ARG_OBJ_INFO(0, backingStoreType, NSBackingStoreType, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_title, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_setTitle, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_makeKeyAndOrderFront, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, sender, NSObject, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NSWindow_orderOut arginfo_class_NSWindow_makeKeyAndOrderFront

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_close, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSWindow_performClose arginfo_class_NSWindow_makeKeyAndOrderFront

#define arginfo_class_NSWindow_miniaturize arginfo_class_NSWindow_makeKeyAndOrderFront

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_isVisible, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSWindow_isKeyWindow arginfo_class_NSWindow_isVisible

#define arginfo_class_NSWindow_isMainWindow arginfo_class_NSWindow_isVisible

#define arginfo_class_NSWindow_makeKeyWindow arginfo_class_NSWindow_close

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSWindow_delegate, 0, 0, NSObject, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_setDelegate, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, delegate, NSObject, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NSWindow_isReleasedWhenClosed arginfo_class_NSWindow_isVisible

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_setReleasedWhenClosed, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, releasedWhenClosed, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSWindow_center arginfo_class_NSWindow_close

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSWindow_contentView, 0, 0, NSView, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_windowNumber, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSWindow_frame, 0, 0, NSRect, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_setContentSize, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, size, NSSize, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSWindow_styleMask arginfo_class_NSWindow_windowNumber

ZEND_METHOD(NSWindow, initWithContentRectStyleMaskBackingDefer);
ZEND_METHOD(NSWindow, title);
ZEND_METHOD(NSWindow, setTitle);
ZEND_METHOD(NSWindow, makeKeyAndOrderFront);
ZEND_METHOD(NSWindow, orderOut);
ZEND_METHOD(NSWindow, close);
ZEND_METHOD(NSWindow, performClose);
ZEND_METHOD(NSWindow, miniaturize);
ZEND_METHOD(NSWindow, isVisible);
ZEND_METHOD(NSWindow, isKeyWindow);
ZEND_METHOD(NSWindow, isMainWindow);
ZEND_METHOD(NSWindow, makeKeyWindow);
ZEND_METHOD(NSWindow, delegate);
ZEND_METHOD(NSWindow, setDelegate);
ZEND_METHOD(NSWindow, isReleasedWhenClosed);
ZEND_METHOD(NSWindow, setReleasedWhenClosed);
ZEND_METHOD(NSWindow, center);
ZEND_METHOD(NSWindow, contentView);
ZEND_METHOD(NSWindow, windowNumber);
ZEND_METHOD(NSWindow, frame);
ZEND_METHOD(NSWindow, setContentSize);
ZEND_METHOD(NSWindow, styleMask);

static const zend_function_entry class_NSWindow_methods[] = {
	ZEND_ME(NSWindow, initWithContentRectStyleMaskBackingDefer, arginfo_class_NSWindow_initWithContentRectStyleMaskBackingDefer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSWindow, title, arginfo_class_NSWindow_title, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setTitle, arginfo_class_NSWindow_setTitle, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, makeKeyAndOrderFront, arginfo_class_NSWindow_makeKeyAndOrderFront, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, orderOut, arginfo_class_NSWindow_orderOut, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, close, arginfo_class_NSWindow_close, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, performClose, arginfo_class_NSWindow_performClose, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, miniaturize, arginfo_class_NSWindow_miniaturize, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, isVisible, arginfo_class_NSWindow_isVisible, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, isKeyWindow, arginfo_class_NSWindow_isKeyWindow, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, isMainWindow, arginfo_class_NSWindow_isMainWindow, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, makeKeyWindow, arginfo_class_NSWindow_makeKeyWindow, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, delegate, arginfo_class_NSWindow_delegate, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setDelegate, arginfo_class_NSWindow_setDelegate, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, isReleasedWhenClosed, arginfo_class_NSWindow_isReleasedWhenClosed, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setReleasedWhenClosed, arginfo_class_NSWindow_setReleasedWhenClosed, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, center, arginfo_class_NSWindow_center, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, contentView, arginfo_class_NSWindow_contentView, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, windowNumber, arginfo_class_NSWindow_windowNumber, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, frame, arginfo_class_NSWindow_frame, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setContentSize, arginfo_class_NSWindow_setContentSize, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, styleMask, arginfo_class_NSWindow_styleMask, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSWindowStyleMask(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("NSWindowStyleMask", IS_LONG, NULL);

	zval enum_case_BORDERLESS_value;
	ZVAL_LONG(&enum_case_BORDERLESS_value, 0);
	zend_enum_add_case_cstr(class_entry, "BORDERLESS", &enum_case_BORDERLESS_value);

	zval enum_case_TITLED_value;
	ZVAL_LONG(&enum_case_TITLED_value, 1);
	zend_enum_add_case_cstr(class_entry, "TITLED", &enum_case_TITLED_value);

	zval enum_case_CLOSABLE_value;
	ZVAL_LONG(&enum_case_CLOSABLE_value, 2);
	zend_enum_add_case_cstr(class_entry, "CLOSABLE", &enum_case_CLOSABLE_value);

	zval enum_case_MINIATURIZABLE_value;
	ZVAL_LONG(&enum_case_MINIATURIZABLE_value, 4);
	zend_enum_add_case_cstr(class_entry, "MINIATURIZABLE", &enum_case_MINIATURIZABLE_value);

	zval enum_case_RESIZABLE_value;
	ZVAL_LONG(&enum_case_RESIZABLE_value, 8);
	zend_enum_add_case_cstr(class_entry, "RESIZABLE", &enum_case_RESIZABLE_value);

	zval enum_case_UTILITY_WINDOW_value;
	ZVAL_LONG(&enum_case_UTILITY_WINDOW_value, 16);
	zend_enum_add_case_cstr(class_entry, "UTILITY_WINDOW", &enum_case_UTILITY_WINDOW_value);

	zval enum_case_DOC_MODAL_WINDOW_value;
	ZVAL_LONG(&enum_case_DOC_MODAL_WINDOW_value, 64);
	zend_enum_add_case_cstr(class_entry, "DOC_MODAL_WINDOW", &enum_case_DOC_MODAL_WINDOW_value);

	zval enum_case_NONACTIVATING_PANEL_value;
	ZVAL_LONG(&enum_case_NONACTIVATING_PANEL_value, 128);
	zend_enum_add_case_cstr(class_entry, "NONACTIVATING_PANEL", &enum_case_NONACTIVATING_PANEL_value);

	zval enum_case_TEXTURED_BACKGROUND_value;
	ZVAL_LONG(&enum_case_TEXTURED_BACKGROUND_value, 256);
	zend_enum_add_case_cstr(class_entry, "TEXTURED_BACKGROUND", &enum_case_TEXTURED_BACKGROUND_value);

	zval enum_case_UNIFIED_TITLE_AND_TOOLBAR_value;
	ZVAL_LONG(&enum_case_UNIFIED_TITLE_AND_TOOLBAR_value, 4096);
	zend_enum_add_case_cstr(class_entry, "UNIFIED_TITLE_AND_TOOLBAR", &enum_case_UNIFIED_TITLE_AND_TOOLBAR_value);

	zval enum_case_HUD_WINDOW_value;
	ZVAL_LONG(&enum_case_HUD_WINDOW_value, 8192);
	zend_enum_add_case_cstr(class_entry, "HUD_WINDOW", &enum_case_HUD_WINDOW_value);

	zval enum_case_FULL_SCREEN_value;
	ZVAL_LONG(&enum_case_FULL_SCREEN_value, 16384);
	zend_enum_add_case_cstr(class_entry, "FULL_SCREEN", &enum_case_FULL_SCREEN_value);

	zval enum_case_FULL_SIZE_CONTENT_VIEW_value;
	ZVAL_LONG(&enum_case_FULL_SIZE_CONTENT_VIEW_value, 32768);
	zend_enum_add_case_cstr(class_entry, "FULL_SIZE_CONTENT_VIEW", &enum_case_FULL_SIZE_CONTENT_VIEW_value);

	return class_entry;
}

static zend_class_entry *register_class_NSBackingStoreType(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("NSBackingStoreType", IS_LONG, NULL);

	zval enum_case_RETAINED_value;
	ZVAL_LONG(&enum_case_RETAINED_value, 0);
	zend_enum_add_case_cstr(class_entry, "RETAINED", &enum_case_RETAINED_value);

	zval enum_case_NONRETAINED_value;
	ZVAL_LONG(&enum_case_NONRETAINED_value, 1);
	zend_enum_add_case_cstr(class_entry, "NONRETAINED", &enum_case_NONRETAINED_value);

	zval enum_case_BUFFERED_value;
	ZVAL_LONG(&enum_case_BUFFERED_value, 2);
	zend_enum_add_case_cstr(class_entry, "BUFFERED", &enum_case_BUFFERED_value);

	return class_entry;
}

static zend_class_entry *register_class_NSWindow(zend_class_entry *class_entry_NSResponder)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSWindow", class_NSWindow_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSResponder, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

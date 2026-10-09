/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 1c9c2ff9f25a1d827176cc583e1b1f24c322fbfb */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSWindow_initWithContentRectStyleMaskBackingDefer, 0, 4, NSWindow, 0)
	ZEND_ARG_OBJ_INFO(0, contentRect, NSRect, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, style, NSWindowStyleMask, MAY_BE_LONG, NULL)
	ZEND_ARG_OBJ_INFO(0, backingStoreType, NSBackingStoreType, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_title, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_backingScaleFactor, 0, 0, IS_DOUBLE, 0)
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

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSWindow_colorSpace, 0, 0, NSColorSpace, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_setColorSpace, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, space, NSColorSpace, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_setContentView, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, view, NSView, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_windowNumber, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSWindow_frame, 0, 0, NSRect, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_setContentSize, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, size, NSSize, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSWindow_styleMask arginfo_class_NSWindow_windowNumber

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_setStyleMask, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, styleMask, NSWindowStyleMask, MAY_BE_LONG, NULL)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSWindow_contentMinSize, 0, 0, NSSize, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSWindow_setContentMinSize arginfo_class_NSWindow_setContentSize

#define arginfo_class_NSWindow_contentMaxSize arginfo_class_NSWindow_contentMinSize

#define arginfo_class_NSWindow_setContentMaxSize arginfo_class_NSWindow_setContentSize

#define arginfo_class_NSWindow_contentAspectRatio arginfo_class_NSWindow_contentMinSize

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_setContentAspectRatio, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, ratio, NSSize, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_setFrameOrigin, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, point, NSPoint, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_setFrameDisplay, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, frame, NSRect, 0)
	ZEND_ARG_TYPE_INFO(0, display, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSWindow_contentRectForFrameRect, 0, 1, NSRect, 0)
	ZEND_ARG_OBJ_INFO(0, frame, NSRect, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSWindow_frameRectForContentRect, 0, 1, NSRect, 0)
	ZEND_ARG_OBJ_INFO(0, content, NSRect, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSWindow_convertRectToBacking, 0, 1, NSRect, 0)
	ZEND_ARG_OBJ_INFO(0, rect, NSRect, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSWindow_orderFront arginfo_class_NSWindow_makeKeyAndOrderFront

#define arginfo_class_NSWindow_zoom arginfo_class_NSWindow_makeKeyAndOrderFront

#define arginfo_class_NSWindow_isZoomed arginfo_class_NSWindow_isVisible

#define arginfo_class_NSWindow_deminiaturize arginfo_class_NSWindow_makeKeyAndOrderFront

#define arginfo_class_NSWindow_isMiniaturized arginfo_class_NSWindow_isVisible

#define arginfo_class_NSWindow_toggleFullScreen arginfo_class_NSWindow_makeKeyAndOrderFront

#define arginfo_class_NSWindow_collectionBehavior arginfo_class_NSWindow_windowNumber

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_setCollectionBehavior, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, behavior, NSWindowCollectionBehavior, MAY_BE_LONG, NULL)
ZEND_END_ARG_INFO()

#define arginfo_class_NSWindow_level arginfo_class_NSWindow_windowNumber

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_setLevel, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, level, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSWindow_screen, 0, 0, NSScreen, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NSWindow_isOpaque arginfo_class_NSWindow_isVisible

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_setOpaque, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, opaque, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSWindow_backgroundColor, 0, 0, NSColor, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_setBackgroundColor, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, color, NSColor, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NSWindow_hasShadow arginfo_class_NSWindow_isVisible

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_setHasShadow, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, hasShadow, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSWindow_titlebarAppearsTransparent arginfo_class_NSWindow_isVisible

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_setTitlebarAppearsTransparent, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, transparent, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSWindow_titleVisibility, 0, 0, NSWindowTitleVisibility, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_setTitleVisibility, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, visibility, NSWindowTitleVisibility, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSWindow_ignoresMouseEvents arginfo_class_NSWindow_isVisible

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_setIgnoresMouseEvents, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, ignores, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSWindow_isMovableByWindowBackground arginfo_class_NSWindow_isVisible

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_setMovableByWindowBackground, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, movable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSWindow_occlusionState arginfo_class_NSWindow_windowNumber

#define arginfo_class_NSWindow_alphaValue arginfo_class_NSWindow_backingScaleFactor

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSWindow_setAlphaValue, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, alphaValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSWindow, initWithContentRectStyleMaskBackingDefer);
ZEND_METHOD(NSWindow, title);
ZEND_METHOD(NSWindow, backingScaleFactor);
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
ZEND_METHOD(NSWindow, colorSpace);
ZEND_METHOD(NSWindow, setColorSpace);
ZEND_METHOD(NSWindow, setContentView);
ZEND_METHOD(NSWindow, windowNumber);
ZEND_METHOD(NSWindow, frame);
ZEND_METHOD(NSWindow, setContentSize);
ZEND_METHOD(NSWindow, styleMask);
ZEND_METHOD(NSWindow, setStyleMask);
ZEND_METHOD(NSWindow, contentMinSize);
ZEND_METHOD(NSWindow, setContentMinSize);
ZEND_METHOD(NSWindow, contentMaxSize);
ZEND_METHOD(NSWindow, setContentMaxSize);
ZEND_METHOD(NSWindow, contentAspectRatio);
ZEND_METHOD(NSWindow, setContentAspectRatio);
ZEND_METHOD(NSWindow, setFrameOrigin);
ZEND_METHOD(NSWindow, setFrameDisplay);
ZEND_METHOD(NSWindow, contentRectForFrameRect);
ZEND_METHOD(NSWindow, frameRectForContentRect);
ZEND_METHOD(NSWindow, convertRectToBacking);
ZEND_METHOD(NSWindow, orderFront);
ZEND_METHOD(NSWindow, zoom);
ZEND_METHOD(NSWindow, isZoomed);
ZEND_METHOD(NSWindow, deminiaturize);
ZEND_METHOD(NSWindow, isMiniaturized);
ZEND_METHOD(NSWindow, toggleFullScreen);
ZEND_METHOD(NSWindow, collectionBehavior);
ZEND_METHOD(NSWindow, setCollectionBehavior);
ZEND_METHOD(NSWindow, level);
ZEND_METHOD(NSWindow, setLevel);
ZEND_METHOD(NSWindow, screen);
ZEND_METHOD(NSWindow, isOpaque);
ZEND_METHOD(NSWindow, setOpaque);
ZEND_METHOD(NSWindow, backgroundColor);
ZEND_METHOD(NSWindow, setBackgroundColor);
ZEND_METHOD(NSWindow, hasShadow);
ZEND_METHOD(NSWindow, setHasShadow);
ZEND_METHOD(NSWindow, titlebarAppearsTransparent);
ZEND_METHOD(NSWindow, setTitlebarAppearsTransparent);
ZEND_METHOD(NSWindow, titleVisibility);
ZEND_METHOD(NSWindow, setTitleVisibility);
ZEND_METHOD(NSWindow, ignoresMouseEvents);
ZEND_METHOD(NSWindow, setIgnoresMouseEvents);
ZEND_METHOD(NSWindow, isMovableByWindowBackground);
ZEND_METHOD(NSWindow, setMovableByWindowBackground);
ZEND_METHOD(NSWindow, occlusionState);
ZEND_METHOD(NSWindow, alphaValue);
ZEND_METHOD(NSWindow, setAlphaValue);

static const zend_function_entry class_NSWindow_methods[] = {
	ZEND_ME(NSWindow, initWithContentRectStyleMaskBackingDefer, arginfo_class_NSWindow_initWithContentRectStyleMaskBackingDefer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSWindow, title, arginfo_class_NSWindow_title, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, backingScaleFactor, arginfo_class_NSWindow_backingScaleFactor, ZEND_ACC_PUBLIC)
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
	ZEND_ME(NSWindow, colorSpace, arginfo_class_NSWindow_colorSpace, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setColorSpace, arginfo_class_NSWindow_setColorSpace, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setContentView, arginfo_class_NSWindow_setContentView, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, windowNumber, arginfo_class_NSWindow_windowNumber, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, frame, arginfo_class_NSWindow_frame, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setContentSize, arginfo_class_NSWindow_setContentSize, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, styleMask, arginfo_class_NSWindow_styleMask, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setStyleMask, arginfo_class_NSWindow_setStyleMask, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, contentMinSize, arginfo_class_NSWindow_contentMinSize, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setContentMinSize, arginfo_class_NSWindow_setContentMinSize, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, contentMaxSize, arginfo_class_NSWindow_contentMaxSize, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setContentMaxSize, arginfo_class_NSWindow_setContentMaxSize, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, contentAspectRatio, arginfo_class_NSWindow_contentAspectRatio, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setContentAspectRatio, arginfo_class_NSWindow_setContentAspectRatio, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setFrameOrigin, arginfo_class_NSWindow_setFrameOrigin, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setFrameDisplay, arginfo_class_NSWindow_setFrameDisplay, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, contentRectForFrameRect, arginfo_class_NSWindow_contentRectForFrameRect, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, frameRectForContentRect, arginfo_class_NSWindow_frameRectForContentRect, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, convertRectToBacking, arginfo_class_NSWindow_convertRectToBacking, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, orderFront, arginfo_class_NSWindow_orderFront, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, zoom, arginfo_class_NSWindow_zoom, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, isZoomed, arginfo_class_NSWindow_isZoomed, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, deminiaturize, arginfo_class_NSWindow_deminiaturize, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, isMiniaturized, arginfo_class_NSWindow_isMiniaturized, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, toggleFullScreen, arginfo_class_NSWindow_toggleFullScreen, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, collectionBehavior, arginfo_class_NSWindow_collectionBehavior, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setCollectionBehavior, arginfo_class_NSWindow_setCollectionBehavior, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, level, arginfo_class_NSWindow_level, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setLevel, arginfo_class_NSWindow_setLevel, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, screen, arginfo_class_NSWindow_screen, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, isOpaque, arginfo_class_NSWindow_isOpaque, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setOpaque, arginfo_class_NSWindow_setOpaque, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, backgroundColor, arginfo_class_NSWindow_backgroundColor, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setBackgroundColor, arginfo_class_NSWindow_setBackgroundColor, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, hasShadow, arginfo_class_NSWindow_hasShadow, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setHasShadow, arginfo_class_NSWindow_setHasShadow, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, titlebarAppearsTransparent, arginfo_class_NSWindow_titlebarAppearsTransparent, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setTitlebarAppearsTransparent, arginfo_class_NSWindow_setTitlebarAppearsTransparent, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, titleVisibility, arginfo_class_NSWindow_titleVisibility, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setTitleVisibility, arginfo_class_NSWindow_setTitleVisibility, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, ignoresMouseEvents, arginfo_class_NSWindow_ignoresMouseEvents, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setIgnoresMouseEvents, arginfo_class_NSWindow_setIgnoresMouseEvents, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, isMovableByWindowBackground, arginfo_class_NSWindow_isMovableByWindowBackground, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setMovableByWindowBackground, arginfo_class_NSWindow_setMovableByWindowBackground, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, occlusionState, arginfo_class_NSWindow_occlusionState, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, alphaValue, arginfo_class_NSWindow_alphaValue, ZEND_ACC_PUBLIC)
	ZEND_ME(NSWindow, setAlphaValue, arginfo_class_NSWindow_setAlphaValue, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_NSWindow_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("NSNormalWindowLevel", NSNormalWindowLevel, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NSFloatingWindowLevel", NSFloatingWindowLevel, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NSSubmenuWindowLevel", NSSubmenuWindowLevel, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NSTornOffMenuWindowLevel", NSTornOffMenuWindowLevel, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NSMainMenuWindowLevel", NSMainMenuWindowLevel, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NSStatusWindowLevel", NSStatusWindowLevel, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NSModalPanelWindowLevel", NSModalPanelWindowLevel, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NSPopUpMenuWindowLevel", NSPopUpMenuWindowLevel, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NSScreenSaverWindowLevel", NSScreenSaverWindowLevel, CONST_PERSISTENT);
}

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

static zend_class_entry *register_class_NSWindowCollectionBehavior(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("NSWindowCollectionBehavior", IS_LONG, NULL);

	zval enum_case_DEFAULT_value;
	ZVAL_LONG(&enum_case_DEFAULT_value, 0);
	zend_enum_add_case_cstr(class_entry, "DEFAULT", &enum_case_DEFAULT_value);

	zval enum_case_CAN_JOIN_ALL_SPACES_value;
	ZVAL_LONG(&enum_case_CAN_JOIN_ALL_SPACES_value, 1);
	zend_enum_add_case_cstr(class_entry, "CAN_JOIN_ALL_SPACES", &enum_case_CAN_JOIN_ALL_SPACES_value);

	zval enum_case_MOVE_TO_ACTIVE_SPACE_value;
	ZVAL_LONG(&enum_case_MOVE_TO_ACTIVE_SPACE_value, 2);
	zend_enum_add_case_cstr(class_entry, "MOVE_TO_ACTIVE_SPACE", &enum_case_MOVE_TO_ACTIVE_SPACE_value);

	zval enum_case_MANAGED_value;
	ZVAL_LONG(&enum_case_MANAGED_value, 4);
	zend_enum_add_case_cstr(class_entry, "MANAGED", &enum_case_MANAGED_value);

	zval enum_case_TRANSIENT_value;
	ZVAL_LONG(&enum_case_TRANSIENT_value, 8);
	zend_enum_add_case_cstr(class_entry, "TRANSIENT", &enum_case_TRANSIENT_value);

	zval enum_case_STATIONARY_value;
	ZVAL_LONG(&enum_case_STATIONARY_value, 16);
	zend_enum_add_case_cstr(class_entry, "STATIONARY", &enum_case_STATIONARY_value);

	zval enum_case_PARTICIPATES_IN_CYCLE_value;
	ZVAL_LONG(&enum_case_PARTICIPATES_IN_CYCLE_value, 32);
	zend_enum_add_case_cstr(class_entry, "PARTICIPATES_IN_CYCLE", &enum_case_PARTICIPATES_IN_CYCLE_value);

	zval enum_case_IGNORES_CYCLE_value;
	ZVAL_LONG(&enum_case_IGNORES_CYCLE_value, 64);
	zend_enum_add_case_cstr(class_entry, "IGNORES_CYCLE", &enum_case_IGNORES_CYCLE_value);

	zval enum_case_FULL_SCREEN_PRIMARY_value;
	ZVAL_LONG(&enum_case_FULL_SCREEN_PRIMARY_value, 128);
	zend_enum_add_case_cstr(class_entry, "FULL_SCREEN_PRIMARY", &enum_case_FULL_SCREEN_PRIMARY_value);

	zval enum_case_FULL_SCREEN_AUXILIARY_value;
	ZVAL_LONG(&enum_case_FULL_SCREEN_AUXILIARY_value, 256);
	zend_enum_add_case_cstr(class_entry, "FULL_SCREEN_AUXILIARY", &enum_case_FULL_SCREEN_AUXILIARY_value);

	zval enum_case_FULL_SCREEN_NONE_value;
	ZVAL_LONG(&enum_case_FULL_SCREEN_NONE_value, 512);
	zend_enum_add_case_cstr(class_entry, "FULL_SCREEN_NONE", &enum_case_FULL_SCREEN_NONE_value);

	zval enum_case_FULL_SCREEN_ALLOWS_TILING_value;
	ZVAL_LONG(&enum_case_FULL_SCREEN_ALLOWS_TILING_value, 2048);
	zend_enum_add_case_cstr(class_entry, "FULL_SCREEN_ALLOWS_TILING", &enum_case_FULL_SCREEN_ALLOWS_TILING_value);

	zval enum_case_FULL_SCREEN_DISALLOWS_TILING_value;
	ZVAL_LONG(&enum_case_FULL_SCREEN_DISALLOWS_TILING_value, 4096);
	zend_enum_add_case_cstr(class_entry, "FULL_SCREEN_DISALLOWS_TILING", &enum_case_FULL_SCREEN_DISALLOWS_TILING_value);

	zval enum_case_PRIMARY_value;
	ZVAL_LONG(&enum_case_PRIMARY_value, 65536);
	zend_enum_add_case_cstr(class_entry, "PRIMARY", &enum_case_PRIMARY_value);

	zval enum_case_AUXILIARY_value;
	ZVAL_LONG(&enum_case_AUXILIARY_value, 131072);
	zend_enum_add_case_cstr(class_entry, "AUXILIARY", &enum_case_AUXILIARY_value);

	zval enum_case_CAN_JOIN_ALL_APPLICATIONS_value;
	ZVAL_LONG(&enum_case_CAN_JOIN_ALL_APPLICATIONS_value, 262144);
	zend_enum_add_case_cstr(class_entry, "CAN_JOIN_ALL_APPLICATIONS", &enum_case_CAN_JOIN_ALL_APPLICATIONS_value);

	return class_entry;
}

static zend_class_entry *register_class_NSWindowTitleVisibility(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("NSWindowTitleVisibility", IS_LONG, NULL);

	zval enum_case_VISIBLE_value;
	ZVAL_LONG(&enum_case_VISIBLE_value, 0);
	zend_enum_add_case_cstr(class_entry, "VISIBLE", &enum_case_VISIBLE_value);

	zval enum_case_HIDDEN_value;
	ZVAL_LONG(&enum_case_HIDDEN_value, 1);
	zend_enum_add_case_cstr(class_entry, "HIDDEN", &enum_case_HIDDEN_value);

	return class_entry;
}

static zend_class_entry *register_class_NSWindowOcclusionState(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("NSWindowOcclusionState", IS_LONG, NULL);

	zval enum_case_VISIBLE_value;
	ZVAL_LONG(&enum_case_VISIBLE_value, 2);
	zend_enum_add_case_cstr(class_entry, "VISIBLE", &enum_case_VISIBLE_value);

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

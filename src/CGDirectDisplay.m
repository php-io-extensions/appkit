#include "runtime.h"
#include "../stubs/CGDirectDisplay_arginfo.h"

void appkit_register_CGDirectDisplay(int module_number)
{
	register_CGDirectDisplay_symbols(module_number);
	appkit_ce_CGDisplayMode = register_class_CGDisplayMode(appkit_ce_CFType);
	appkit_object_setup(appkit_ce_CGDisplayMode);
	appkit_ce_CGDisplay = register_class_CGDisplay();
}

#define THIS_MODE ((CGDisplayModeRef) APPKIT_CF(Z_OBJ_P(ZEND_THIS)))

/* A CGError as AppKitException, its code the CGError. */
static bool appkit_cg_ok(CGError error, const char *function)
{
	if (error == kCGErrorSuccess) {
		return true;
	}
	zend_throw_exception_ex(appkit_ce_AppKitException, (zend_long) error, "%s failed with CGError %d", function, (int) error);
	return false;
}

/* A CGDirectDisplayID parameter: a uint32. */
static bool appkit_display_from(zend_long value, uint32_t arg_num, CGDirectDisplayID *out)
{
	if (value < 0 || value > UINT32_MAX) {
		zend_argument_value_error(arg_num, "must be a CGDirectDisplayID");
		return false;
	}
	*out = (CGDirectDisplayID) value;
	return true;
}

ZEND_METHOD(CGDisplayMode, getWidth)
{
	ZEND_PARSE_PARAMETERS_NONE();
	RETURN_LONG((zend_long) CGDisplayModeGetWidth(THIS_MODE));
}

ZEND_METHOD(CGDisplayMode, getHeight)
{
	ZEND_PARSE_PARAMETERS_NONE();
	RETURN_LONG((zend_long) CGDisplayModeGetHeight(THIS_MODE));
}

ZEND_METHOD(CGDisplayMode, getPixelWidth)
{
	ZEND_PARSE_PARAMETERS_NONE();
	RETURN_LONG((zend_long) CGDisplayModeGetPixelWidth(THIS_MODE));
}

ZEND_METHOD(CGDisplayMode, getPixelHeight)
{
	ZEND_PARSE_PARAMETERS_NONE();
	RETURN_LONG((zend_long) CGDisplayModeGetPixelHeight(THIS_MODE));
}

ZEND_METHOD(CGDisplayMode, getRefreshRate)
{
	ZEND_PARSE_PARAMETERS_NONE();
	RETURN_DOUBLE(CGDisplayModeGetRefreshRate(THIS_MODE));
}

ZEND_METHOD(CGDisplayMode, isUsableForDesktopGUI)
{
	ZEND_PARSE_PARAMETERS_NONE();
	RETURN_BOOL(CGDisplayModeIsUsableForDesktopGUI(THIS_MODE));
}

ZEND_METHOD(CGDisplay, __construct)
{
}

ZEND_METHOD(CGDisplay, mainDisplayID)
{
	ZEND_PARSE_PARAMETERS_NONE();
	RETURN_LONG((zend_long) CGMainDisplayID());
}

ZEND_METHOD(CGDisplay, getActiveDisplayList)
{
	uint32_t count = 0;

	ZEND_PARSE_PARAMETERS_NONE();

	if (!appkit_cg_ok(CGGetActiveDisplayList(0, NULL, &count), "CGGetActiveDisplayList")) {
		RETURN_THROWS();
	}

	CGDirectDisplayID *displays = ecalloc(count > 0 ? count : 1, sizeof(CGDirectDisplayID));
	if (!appkit_cg_ok(CGGetActiveDisplayList(count, displays, &count), "CGGetActiveDisplayList")) {
		efree(displays);
		RETURN_THROWS();
	}

	array_init_size(return_value, count);
	for (uint32_t i = 0; i < count; i++) {
		add_next_index_long(return_value, (zend_long) displays[i]);
	}
	efree(displays);
}

ZEND_METHOD(CGDisplay, bounds)
{
	zend_long display_long;
	CGDirectDisplayID display;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(display_long)
	ZEND_PARSE_PARAMETERS_END();
	if (!appkit_display_from(display_long, 1, &display)) {
		RETURN_THROWS();
	}

	appkit_return_rect(return_value, NSRectFromCGRect(CGDisplayBounds(display)));
}

ZEND_METHOD(CGDisplay, copyDisplayMode)
{
	zend_long display_long;
	CGDirectDisplayID display;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(display_long)
	ZEND_PARSE_PARAMETERS_END();
	if (!appkit_display_from(display_long, 1, &display)) {
		RETURN_THROWS();
	}

	CGDisplayModeRef mode = CGDisplayCopyDisplayMode(display);
	appkit_box_cf(return_value, mode);
	if (mode != NULL) {
		CGDisplayModeRelease(mode);
	}
}

ZEND_METHOD(CGDisplay, copyAllDisplayModes)
{
	zend_long display_long;
	HashTable *options = NULL;
	CGDirectDisplayID display;
	CFArrayRef modes;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(display_long)
		Z_PARAM_OPTIONAL
		Z_PARAM_ARRAY_HT_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	if (!appkit_display_from(display_long, 1, &display)) {
		RETURN_THROWS();
	}

	@autoreleasepool {
		NSDictionary *dictionary = options != NULL ? appkit_nsdictionary(options, 2) : nil;
		if (options != NULL && dictionary == nil) {
			RETURN_THROWS();
		}
		modes = CGDisplayCopyAllDisplayModes(display, (CFDictionaryRef) dictionary);
	}
	array_init(return_value);
	if (modes == NULL) {
		return;
	}
	for (CFIndex i = 0; i < CFArrayGetCount(modes); i++) {
		zval boxed;
		appkit_box_cf(&boxed, CFArrayGetValueAtIndex(modes, i));
		add_next_index_zval(return_value, &boxed);
	}
	CFRelease(modes);
}

ZEND_METHOD(CGDisplay, setDisplayMode)
{
	zend_long display_long;
	zend_object *mode;
	CGDirectDisplayID display;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(display_long)
		Z_PARAM_OBJ_OF_CLASS(mode, appkit_ce_CGDisplayMode)
	ZEND_PARSE_PARAMETERS_END();
	if (!appkit_display_from(display_long, 1, &display)) {
		RETURN_THROWS();
	}

	if (!appkit_cg_ok(CGDisplaySetDisplayMode(display, (CGDisplayModeRef) APPKIT_CF(mode), NULL), "CGDisplaySetDisplayMode")) {
		RETURN_THROWS();
	}
}

ZEND_METHOD(CGDisplay, capture)
{
	zend_long display_long;
	CGDirectDisplayID display;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(display_long)
	ZEND_PARSE_PARAMETERS_END();
	if (!appkit_display_from(display_long, 1, &display)) {
		RETURN_THROWS();
	}

	if (!appkit_cg_ok(CGDisplayCapture(display), "CGDisplayCapture")) {
		RETURN_THROWS();
	}
}

ZEND_METHOD(CGDisplay, release)
{
	zend_long display_long;
	CGDirectDisplayID display;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(display_long)
	ZEND_PARSE_PARAMETERS_END();
	if (!appkit_display_from(display_long, 1, &display)) {
		RETURN_THROWS();
	}

	if (!appkit_cg_ok(CGDisplayRelease(display), "CGDisplayRelease")) {
		RETURN_THROWS();
	}
}

ZEND_METHOD(CGDisplay, shieldingWindowLevel)
{
	ZEND_PARSE_PARAMETERS_NONE();
	RETURN_LONG((zend_long) CGShieldingWindowLevel());
}

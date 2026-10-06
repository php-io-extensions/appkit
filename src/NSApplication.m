#include "runtime.h"
#include "../stubs/NSApplication_arginfo.h"

#import <AppKit/AppKit.h>

void appkit_register_NSApplication(void)
{
	appkit_ce_NSApplicationActivationPolicy = register_class_NSApplicationActivationPolicy();
	appkit_ce_NSApplication = register_class_NSApplication(appkit_ce_NSResponder);
	appkit_object_setup(appkit_ce_NSApplication);
	appkit_map_objc_class("NSApplication", appkit_ce_NSApplication);
}

#define THIS_APP ((NSApplication *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(NSApplication, sharedApplication)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [NSApplication sharedApplication]);
	APPKIT_END
}

ZEND_METHOD(NSApplication, finishLaunching)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_APP finishLaunching];
	APPKIT_END
}

ZEND_METHOD(NSApplication, run)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_APP run];
	APPKIT_END
}

ZEND_METHOD(NSApplication, stop)
{
	zend_object *sender = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(sender, appkit_ce_NSObject)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_APP stop:(sender != NULL ? APPKIT_ID(sender) : nil)];
	APPKIT_END
}

ZEND_METHOD(NSApplication, isRunning)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_BOOL([THIS_APP isRunning]);
	APPKIT_END
}

ZEND_METHOD(NSApplication, isActive)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_BOOL([THIS_APP isActive]);
	APPKIT_END
}

ZEND_METHOD(NSApplication, activationPolicy)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_return_enum(return_value, appkit_ce_NSApplicationActivationPolicy, (zend_long) [THIS_APP activationPolicy], false);
	APPKIT_END
}

ZEND_METHOD(NSApplication, setActivationPolicy)
{
	zend_object *policy;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(policy, appkit_ce_NSApplicationActivationPolicy)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_BOOL([THIS_APP setActivationPolicy:(NSApplicationActivationPolicy) appkit_enum_value(policy, 0)]);
	APPKIT_END
}

ZEND_METHOD(NSApplication, activate)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		if (@available(macOS 14.0, *)) {
			[THIS_APP activate];
		} else {
			zend_throw_exception(appkit_ce_AppKitException, "NSApplication::activate() requires macOS 14.0 or later", 0);
			RETURN_THROWS();
		}
	APPKIT_END
}

ZEND_METHOD(NSApplication, activateIgnoringOtherApps)
{
	bool ignore_other_apps;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(ignore_other_apps)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
		[THIS_APP activateIgnoringOtherApps:ignore_other_apps];
#pragma clang diagnostic pop
	APPKIT_END
}

ZEND_METHOD(NSApplication, deactivate)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_APP deactivate];
	APPKIT_END
}

ZEND_METHOD(NSApplication, nextEventMatchingMaskUntilDateInModeDequeue)
{
	zend_object *mask_case = NULL;
	zend_long mask_long = 0;
	zend_object *expiration = NULL;
	zend_string *mode;
	bool dequeue;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_OBJ_OF_CLASS_OR_LONG(mask_case, appkit_ce_NSEventMask, mask_long)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(expiration, appkit_ce_NSDate)
		Z_PARAM_STR(mode)
		Z_PARAM_BOOL(dequeue)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		NSString *run_loop_mode = [(NSString *) appkit_run_loop_mode(mode) autorelease];
		NSEvent *event = [THIS_APP nextEventMatchingMask:(NSEventMask) appkit_enum_value(mask_case, mask_long)
			untilDate:(expiration != NULL ? (NSDate *) APPKIT_ID(expiration) : nil)
			inMode:run_loop_mode
			dequeue:dequeue];

		appkit_box_objc(return_value, event);
	APPKIT_END
}

ZEND_METHOD(NSApplication, discardEventsMatchingMaskBeforeEvent)
{
	zend_object *mask_case = NULL;
	zend_long mask_long = 0;
	zend_object *last_event = NULL;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS_OR_LONG(mask_case, appkit_ce_NSEventMask, mask_long)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(last_event, appkit_ce_NSEvent)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_APP discardEventsMatchingMask:(NSEventMask) appkit_enum_value(mask_case, mask_long)
			beforeEvent:(last_event != NULL ? (NSEvent *) APPKIT_ID(last_event) : nil)];
	APPKIT_END
}

ZEND_METHOD(NSApplication, sendEvent)
{
	zend_object *event;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(event, appkit_ce_NSEvent)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_APP sendEvent:(NSEvent *) APPKIT_ID(event)];
	APPKIT_END
}

/* AppKit allows posting from any thread: no main-thread requirement here. */
ZEND_METHOD(NSApplication, postEventAtStart)
{
	zend_object *event;
	bool at_start;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(event, appkit_ce_NSEvent)
		Z_PARAM_BOOL(at_start)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		[THIS_APP postEvent:(NSEvent *) APPKIT_ID(event) atStart:at_start];
	APPKIT_END
}

ZEND_METHOD(NSApplication, currentEvent)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_APP currentEvent]);
	APPKIT_END
}

ZEND_METHOD(NSApplication, updateWindows)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_APP updateWindows];
	APPKIT_END
}

ZEND_METHOD(NSApplication, delegate)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, (id) [THIS_APP delegate]);
	APPKIT_END
}

ZEND_METHOD(NSApplication, setDelegate)
{
	zend_object *delegate = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(delegate, appkit_ce_NSObject)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_APP setDelegate:(id<NSApplicationDelegate>) (delegate != NULL ? APPKIT_ID(delegate) : nil)];
	APPKIT_END
}

ZEND_METHOD(NSApplication, mainMenu)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_APP mainMenu]);
	APPKIT_END
}

ZEND_METHOD(NSApplication, setMainMenu)
{
	zend_object *menu = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(menu, appkit_ce_NSMenu)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_APP setMainMenu:(menu != NULL ? (NSMenu *) APPKIT_ID(menu) : nil)];
	APPKIT_END
}

ZEND_METHOD(NSApplication, keyWindow)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_APP keyWindow]);
	APPKIT_END
}

ZEND_METHOD(NSApplication, mainWindow)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_APP mainWindow]);
	APPKIT_END
}

ZEND_METHOD(NSApplication, windows)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		NSArray<NSWindow *> *windows = [THIS_APP windows];

		array_init_size(return_value, (uint32_t) [windows count]);
		for (NSWindow *window in windows) {
			zval boxed;
			appkit_box_objc(&boxed, window);
			add_next_index_zval(return_value, &boxed);
		}
	APPKIT_END
}

ZEND_METHOD(NSApplication, orderFrontStandardAboutPanel)
{
	zend_object *sender = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(sender, appkit_ce_NSObject)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_APP orderFrontStandardAboutPanel:(sender != NULL ? APPKIT_ID(sender) : nil)];
	APPKIT_END
}

ZEND_METHOD(NSApplication, orderFrontStandardAboutPanelWithOptions)
{
	HashTable *options;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY_HT(options)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		NSDictionary *dictionary = appkit_nsdictionary(options, 1);

		if (dictionary == nil) {
			RETURN_THROWS();
		}
		[THIS_APP orderFrontStandardAboutPanelWithOptions:dictionary];
	APPKIT_END
}

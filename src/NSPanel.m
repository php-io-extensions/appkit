/*
 * Alerts and the open and save panels, each shown as a sheet on a window.
 */

#include "runtime.h"
#include "controls.h"
#include "zend_closures.h"
#include "../stubs/NSPanel_arginfo.h"

_Static_assert(NSAlertFirstButtonReturn == 1000 && NSModalResponseOK == 1 && NSModalResponseCancel == 0, "NSModalResponse values moved");

void appkit_register_NSPanel(int module_number)
{
	register_NSPanel_symbols(module_number);

	APPKIT_MAP(NSPanel, appkit_ce_NSWindow);
	APPKIT_MAP(NSAlert, appkit_ce_NSObject);
	APPKIT_MAP(NSSavePanel, appkit_ce_NSPanel);
	APPKIT_MAP(NSOpenPanel, appkit_ce_NSSavePanel);
}

/* Forwards the sheet's ^(NSModalResponse) completion to a PHP callable while the request lives. */
static void (^appkit_modal_response_block(zval *callable))(NSModalResponse)
{
	PHPAppKitBlockCallout *holder = [[[PHPAppKitBlockCallout alloc] init] autorelease];
	holder->callout = appkit_callout_new(callable, NULL);
	appkit_callout_retain(holder->callout);

	return [[^(NSModalResponse code) {
		if (appkit_callout_can_enter(holder->callout)) {
			zval arg;
			ZVAL_LONG(&arg, (zend_long) code);
			appkit_callout_invoke(holder->callout, 1, &arg);
		}
	} copy] autorelease];
}

/* NSAlert */
ZEND_METHOD(NSAlert, init)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-nsalert-init */

	APPKIT_BEGIN
		NSAlert *alert = [[CALLED alloc] init];
		appkit_box_objc(return_value, alert);
		[alert release];
	APPKIT_END
}

STR_GET(NSAlert, NSAlert, messageText, messageText) /* binding:main-thread-nsalert-message-text */
STR_SET(NSAlert, NSAlert, setMessageText, setMessageText) /* binding:main-thread-nsalert-set-message-text */
STR_GET(NSAlert, NSAlert, informativeText, informativeText) /* binding:main-thread-nsalert-informative-text */
STR_SET(NSAlert, NSAlert, setInformativeText, setInformativeText) /* binding:main-thread-nsalert-set-informative-text */
METHOD(NSAlert, addButtonWithTitle, PARSE_STR, appkit_box_objc(return_value, [SELF(NSAlert) addButtonWithTitle:appkit_nsstring(v)]);) /* binding:main-thread-nsalert-add-button-with-title */
OBJ_GET(NSAlert, NSAlert, window, window) /* binding:main-thread-nsalert-window */

ZEND_METHOD(NSAlert, buttons)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-nsalert-buttons */

	APPKIT_BEGIN
		array_init(return_value);
		for (NSButton *button in [SELF(NSAlert) buttons]) {
			zval boxed;
			appkit_box_objc(&boxed, button);
			add_next_index_zval(return_value, &boxed);
		}
	APPKIT_END
}

ZEND_METHOD(NSAlert, beginSheetModalForWindowCompletionHandler)
{
	zend_object *window;
	zend_object *handler = NULL;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(window, appkit_ce_NSWindow)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(handler, zend_ce_closure)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-nsalert-begin-sheet */

	APPKIT_BEGIN
		if (handler == NULL) {
			[SELF(NSAlert) beginSheetModalForWindow:(NSWindow *) APPKIT_ID(window) completionHandler:nil];
		} else {
			zval callable;
			ZVAL_OBJ(&callable, handler);
			[SELF(NSAlert) beginSheetModalForWindow:(NSWindow *) APPKIT_ID(window) completionHandler:appkit_modal_response_block(&callable)];
		}
	APPKIT_END
}

/* NSSavePanel */
METHOD(NSSavePanel, savePanel, PARSE_NONE, appkit_box_objc(return_value, [NSSavePanel savePanel]);) /* binding:main-thread-nssavepanel-save-panel */
OBJ_GET(NSSavePanel, NSSavePanel, URL, URL) /* binding:main-thread-nssavepanel-url */
OBJ_GET(NSSavePanel, NSSavePanel, directoryURL, directoryURL) /* binding:main-thread-nssavepanel-directory-url */
OBJ_SET_OR_NULL(NSSavePanel, NSSavePanel, setDirectoryURL, setDirectoryURL, appkit_ce_NSURL, NSURL *) /* binding:main-thread-nssavepanel-set-directory-url */
STR_GET(NSSavePanel, NSSavePanel, nameFieldStringValue, nameFieldStringValue) /* binding:main-thread-nssavepanel-name-field-string-value */
STR_SET(NSSavePanel, NSSavePanel, setNameFieldStringValue, setNameFieldStringValue) /* binding:main-thread-nssavepanel-set-name-field-string-value */
METHOD(NSSavePanel, message, PARSE_NONE, NSString *s = [SELF(NSSavePanel) message]; RETURN_STR(appkit_zend_string((CFStringRef) (s != nil ? s : @"")));) /* binding:main-thread-nssavepanel-message */
STR_SET_OR_NULL(NSSavePanel, NSSavePanel, setMessage, setMessage) /* binding:main-thread-nssavepanel-set-message */

ZEND_METHOD(NSSavePanel, beginSheetModalForWindowCompletionHandler)
{
	zend_object *window;
	zend_fcall_info fci;
	zend_fcall_info_cache fcc;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(window, appkit_ce_NSWindow)
		Z_PARAM_FUNC(fci, fcc)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-nssavepanel-begin-sheet */

	APPKIT_BEGIN
		[SELF(NSSavePanel) beginSheetModalForWindow:(NSWindow *) APPKIT_ID(window) completionHandler:appkit_modal_response_block(&fci.function_name)];
	APPKIT_END
}

/* NSOpenPanel */
METHOD(NSOpenPanel, openPanel, PARSE_NONE, appkit_box_objc(return_value, [NSOpenPanel openPanel]);) /* binding:main-thread-nsopenpanel-open-panel */
BOOL_GET(NSOpenPanel, NSOpenPanel, canChooseFiles, canChooseFiles) /* binding:main-thread-nsopenpanel-can-choose-files */
BOOL_SET(NSOpenPanel, NSOpenPanel, setCanChooseFiles, setCanChooseFiles) /* binding:main-thread-nsopenpanel-set-can-choose-files */
BOOL_GET(NSOpenPanel, NSOpenPanel, canChooseDirectories, canChooseDirectories) /* binding:main-thread-nsopenpanel-can-choose-directories */
BOOL_SET(NSOpenPanel, NSOpenPanel, setCanChooseDirectories, setCanChooseDirectories) /* binding:main-thread-nsopenpanel-set-can-choose-directories */
BOOL_GET(NSOpenPanel, NSOpenPanel, allowsMultipleSelection, allowsMultipleSelection) /* binding:main-thread-nsopenpanel-allows-multiple-selection */
BOOL_SET(NSOpenPanel, NSOpenPanel, setAllowsMultipleSelection, setAllowsMultipleSelection) /* binding:main-thread-nsopenpanel-set-allows-multiple-selection */

ZEND_METHOD(NSOpenPanel, URLs)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-nsopenpanel-urls */

	APPKIT_BEGIN
		array_init(return_value);
		for (NSURL *url in [SELF(NSOpenPanel) URLs]) {
			zval boxed;
			appkit_box_objc(&boxed, url);
			add_next_index_zval(return_value, &boxed);
		}
	APPKIT_END
}

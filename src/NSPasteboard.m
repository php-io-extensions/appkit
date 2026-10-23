/*
 * The general pasteboard. Not a UI class: any thread may call it.
 */

#include "runtime.h"
#include "controls.h"
#include "../stubs/NSPasteboard_arginfo.h"

void appkit_register_NSPasteboard(int module_number)
{
	register_NSPasteboard_symbols(module_number);

	APPKIT_MAP(NSPasteboard, appkit_ce_NSObject);
}

ANY_METHOD(NSPasteboard, generalPasteboard, PARSE_NONE, appkit_box_objc(return_value, [NSPasteboard generalPasteboard]);)
ANY_LONG_GET(NSPasteboard, NSPasteboard, clearContents, clearContents)

ZEND_METHOD(NSPasteboard, setStringForType)
{
	zend_string *string, *type;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(string)
		Z_PARAM_STR(type)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		RETURN_BOOL([SELF(NSPasteboard) setString:appkit_nsstring(string) forType:appkit_nsstring(type)]);
	APPKIT_END
}

ANY_METHOD(NSPasteboard, stringForType, PARSE_STR,
	NSString *s = [SELF(NSPasteboard) stringForType:appkit_nsstring(v)];
	if (s == nil) { RETURN_NULL(); }
	RETURN_STR(appkit_zend_string((CFStringRef) s));
)

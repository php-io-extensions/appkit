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

ANY_LONG_GET(NSPasteboard, NSPasteboard, changeCount, changeCount)

ZEND_METHOD(NSPasteboard, availableTypeFromArray)
{
	HashTable *ht;
	zval *entry;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY_HT(ht)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		NSMutableArray *types = [NSMutableArray arrayWithCapacity:zend_hash_num_elements(ht)];
		ZEND_HASH_FOREACH_VAL(ht, entry) {
			ZVAL_DEREF(entry);
			if (Z_TYPE_P(entry) == IS_STRING) {
				[types addObject:appkit_nsstring(Z_STR_P(entry))];
			}
		} ZEND_HASH_FOREACH_END();
		NSString *type = [SELF(NSPasteboard) availableTypeFromArray:types];
		if (type == nil) { RETURN_NULL(); }
		RETURN_STR(appkit_zend_string((CFStringRef) type));
	APPKIT_END
}

ANY_METHOD(NSPasteboard, stringForType, PARSE_STR,
	NSString *s = [SELF(NSPasteboard) stringForType:appkit_nsstring(v)];
	if (s == nil) { RETURN_NULL(); }
	RETURN_STR(appkit_zend_string((CFStringRef) s));
)

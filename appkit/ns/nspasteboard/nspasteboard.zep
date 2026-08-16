namespace AppKit\NS\NSPasteboard;

%{
#include "ns-pasteboard.h"
#include <stdint.h>
}%

/** NSPasteboard — system pasteboard read/write. */
class NSPasteboard
{
    public static function general() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_pasteboard_general();
        }%
        return handle;
    }

    public static function withName(string name) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_pasteboard_with_name(Z_STRVAL(name));
        }%
        return handle;
    }

    public static function withUniqueName() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_pasteboard_with_unique_name();
        }%
        return handle;
    }

    public static function wrap(int nsPasteboardPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_pasteboard_wrap((void *)(uintptr_t) nsPasteboardPtr);
        }%
        return handle;
    }

    public static function destroy(int pasteboard) -> void
    {
        %{
            ns_pasteboard_destroy((uintptr_t) pasteboard);
        }%
    }

    public static function nsPasteboard(int pasteboard) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_pasteboard_nspasteboard((uintptr_t) pasteboard);
        }%
        return ptr;
    }

    public static function getName(int pasteboard) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_pasteboard_name((uintptr_t) pasteboard, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function changeCount(int pasteboard) -> int
    {
        int value;
        %{
            value = (zend_long) ns_pasteboard_change_count((uintptr_t) pasteboard);
        }%
        return value;
    }

    public static function clearContents(int pasteboard) -> int
    {
        int value;
        %{
            value = (zend_long) ns_pasteboard_clear_contents((uintptr_t) pasteboard);
        }%
        return value;
    }

    public static function writeStrings(int pasteboard, array strings, string type) -> bool
    {
        bool result;
        %{
            zval *entry;
            const char *cstrings[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(strings), entry) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(entry);
                cstrings[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
            result = ns_pasteboard_write_strings((uintptr_t) pasteboard, cstrings, count, Z_STRVAL(type)) == 1;
        }%
        return result;
    }

    public static function stringForType(int pasteboard, string type) -> string
    {
        %{
            char buf[65536];
            buf[0] = '\0';
            if (ns_pasteboard_string_for_type((uintptr_t) pasteboard, Z_STRVAL(type), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setString(int pasteboard, string value, string type) -> bool
    {
        bool result;
        %{
            result = ns_pasteboard_set_string((uintptr_t) pasteboard, Z_STRVAL(value), Z_STRVAL(type)) == 1;
        }%
        return result;
    }

    public static function types(int pasteboard) -> array
    {
        array out = [];
        %{
            int count = ns_pasteboard_types_count((uintptr_t) pasteboard);
            int i;
            for (i = 0; i < count; i++) {
                char buf[4096];
                buf[0] = '\0';
                if (ns_pasteboard_type_at((uintptr_t) pasteboard, i, buf, (int) sizeof(buf))) {
                    add_next_index_string(&out, buf);
                }
            }
        }%
        return out;
    }

    public static function canReadTypes(int pasteboard, array types) -> bool
    {
        bool result;
        %{
            zval *entry;
            const char *cstrings[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(types), entry) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(entry);
                cstrings[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
            result = ns_pasteboard_can_read_types((uintptr_t) pasteboard, cstrings, count) == 1;
        }%
        return result;
    }

    public static function itemsCount(int pasteboard) -> int
    {
        int value;
        %{
            value = (zend_long) ns_pasteboard_items_count((uintptr_t) pasteboard);
        }%
        return value;
    }

    public static function itemAt(int pasteboard, int index) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_pasteboard_item_at((uintptr_t) pasteboard, index);
        }%
        return handle;
    }

    public static function accessBehavior(int pasteboard) -> int
    {
        int value;
        %{
            value = (zend_long) ns_pasteboard_access_behavior((uintptr_t) pasteboard);
        }%
        return value;
    }
}

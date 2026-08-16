namespace AppKit\NS\NSPasteboardItem;

%{
#include "ns-pasteboarditem.h"
#include <stdint.h>
}%

/** NSPasteboardItem — single pasteboard item with UTI-typed payloads. */
class NSPasteboardItem
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_pasteboarditem_create();
        }%
        return handle;
    }

    public static function wrap(int nsPasteboardItemPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_pasteboarditem_wrap((void *)(uintptr_t) nsPasteboardItemPtr);
        }%
        return handle;
    }

    public static function destroy(int item) -> void
    {
        %{
            ns_pasteboarditem_destroy((uintptr_t) item);
        }%
    }

    public static function nsPasteboardItem(int item) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_pasteboarditem_nspasteboarditem((uintptr_t) item);
        }%
        return ptr;
    }

    public static function types(int item) -> array
    {
        array out = [];
        %{
            int count = ns_pasteboarditem_types_count((uintptr_t) item);
            int i;
            for (i = 0; i < count; i++) {
                char buf[4096];
                buf[0] = '\0';
                if (ns_pasteboarditem_type_at((uintptr_t) item, i, buf, (int) sizeof(buf))) {
                    add_next_index_string(&out, buf);
                }
            }
        }%
        return out;
    }

    public static function availableTypeFromArray(int item, array types) -> string
    {
        %{
            zval *entry;
            const char *cstrings[256];
            int count = 0;
            char buf[4096];
            buf[0] = '\0';
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(types), entry) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(entry);
                cstrings[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
            if (ns_pasteboarditem_available_type_from_array((uintptr_t) item, cstrings, count, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setString(int item, string value, string type) -> bool
    {
        bool result;
        %{
            result = ns_pasteboarditem_set_string((uintptr_t) item, Z_STRVAL(value), Z_STRVAL(type)) == 1;
        }%
        return result;
    }

    public static function stringForType(int item, string type) -> string
    {
        %{
            char buf[65536];
            buf[0] = '\0';
            if (ns_pasteboarditem_string_for_type((uintptr_t) item, Z_STRVAL(type), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}

namespace AppKit\NS\NSTextContentStorage;

%{
#include "ns-textcontentstorage.h"
#include <stdint.h>
}%


/**
 * NSTextContentStorage — attributed-string backed content.
 */
class NSTextContentStorage

{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textcontentstorage_create();
        }%
        return handle;
    }

    public static function wrap(int nsTextContentStoragePtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textcontentstorage_wrap((void *)(uintptr_t) nsTextContentStoragePtr);
        }%
        return handle;
    }

    public static function destroy(int storage) -> void
    {
        %{
            ns_textcontentstorage_destroy((uintptr_t) storage);
        }%
    }

    public static function getAttributedString(int storage) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_textcontentstorage_get_attributed_string((uintptr_t) storage, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setAttributedString(int storage, string value) -> void
    {
        %{
            ns_textcontentstorage_set_attributed_string((uintptr_t) storage, Z_STRVAL(value));
        }%
    }

    public static function textElementForAttributedString(int storage, string value) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textcontentstorage_text_element_for_attributed_string((uintptr_t) storage, Z_STRVAL(value));
        }%
        return handle;
    }

    public static function attributedStringForTextElement(int storage, int element) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_textcontentstorage_attributed_string_for_text_element((uintptr_t) storage, (uintptr_t) element, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}

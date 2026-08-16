namespace AppKit\NS\NSAccessibilityCustomRotorItemResult;

%{
#include "ns-accessibilitycustomrotor.h"
#include <stdint.h>
}%

class NSAccessibilityCustomRotorItemResult
{
    public static function createWithTargetElement(int element) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_accessibilitycustomrotoritem_create_with_element((uintptr_t) element);
        }%
        return handle;
    }

    public static function createWithToken(string token, string label) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_accessibilitycustomrotoritem_create_with_token(Z_STRVAL(token), Z_STRVAL(label));
        }%
        return handle;
    }

    public static function wrap(int ptr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_accessibilitycustomrotoritem_wrap((void *)(uintptr_t) ptr);
        }%
        return handle;
    }

    public static function destroy(int item) -> void
    {
        %{
            ns_accessibilitycustomrotoritem_destroy((uintptr_t) item);
        }%
    }

    public static function nsAccessibilityCustomRotorItem(int item) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_accessibilitycustomrotoritem_nsaccessibilitycustomrotoritem((uintptr_t) item);
        }%
        return ptr;
    }

    public static function customLabel(int item) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_accessibilitycustomrotoritem_custom_label((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setCustomLabel(int item, string label) -> void
    {
        %{
            ns_accessibilitycustomrotoritem_set_custom_label((uintptr_t) item, Z_STRVAL(label));
        }%
    }

    public static function setTargetRange(int item, int location, int length) -> void
    {
        %{
            ns_accessibilitycustomrotoritem_set_target_range((uintptr_t) item, (unsigned long) location, (unsigned long) length);
        }%
    }

    public static function targetRange(int item) -> array
    {
        %{
            unsigned long location = 0, length = 0;
            zval range;
            array_init(&range);
            if (ns_accessibilitycustomrotoritem_target_range((uintptr_t) item, &location, &length)) {
                add_next_index_long(&range, (zend_long) location);
                add_next_index_long(&range, (zend_long) length);
            }
            RETURN_ZVAL(&range, 0, 0);
        }%
        return [];
    }
}

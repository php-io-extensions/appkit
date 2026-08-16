namespace AppKit\NS\NSAccessibilityCustomRotor;

%{
#include "ns-accessibilitycustomrotor.h"
#include <stdint.h>
}%

class NSAccessibilityCustomRotor
{
    public static function create(string label) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_accessibilitycustomrotor_create(Z_STRVAL(label));
        }%
        return handle;
    }

    public static function createWithType(int rotorType) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_accessibilitycustomrotor_create_with_type((int) rotorType);
        }%
        return handle;
    }

    public static function wrap(int nsAccessibilityCustomRotorPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_accessibilitycustomrotor_wrap((void *)(uintptr_t) nsAccessibilityCustomRotorPtr);
        }%
        return handle;
    }

    public static function destroy(int rotor) -> void
    {
        %{
            ns_accessibilitycustomrotor_destroy((uintptr_t) rotor);
        }%
    }

    public static function nsAccessibilityCustomRotor(int rotor) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_accessibilitycustomrotor_nsaccessibilitycustomrotor((uintptr_t) rotor);
        }%
        return ptr;
    }

    public static function type(int rotor) -> int
    {
        int value;
        %{
            value = ns_accessibilitycustomrotor_type((uintptr_t) rotor);
        }%
        return value;
    }

    public static function setType(int rotor, int rotorType) -> void
    {
        %{
            ns_accessibilitycustomrotor_set_type((uintptr_t) rotor, (int) rotorType);
        }%
    }

    public static function label(int rotor) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_accessibilitycustomrotor_label((uintptr_t) rotor, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setLabel(int rotor, string label) -> void
    {
        %{
            ns_accessibilitycustomrotor_set_label((uintptr_t) rotor, Z_STRVAL(label));
        }%
    }

    public static function setNextItem(int rotor, int item) -> void
    {
        %{
            ns_accessibilitycustomrotor_set_next_item((uintptr_t) rotor, (uintptr_t) item);
        }%
    }

    public static function pollSearch(int rotor) -> array
    {
        %{
            int direction = 0;
            char filter[4096];
            filter[0] = '\0';
            zval result;
            array_init(&result);
            if (ns_accessibilitycustomrotor_poll_search((uintptr_t) rotor, &direction, filter, (int) sizeof(filter))) {
                add_assoc_long(&result, "direction", direction);
                add_assoc_string(&result, "filter", filter);
            }
            RETURN_ZVAL(&result, 0, 0);
        }%
        return [];
    }
}

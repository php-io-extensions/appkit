namespace AppKit\NS\NSAppearance;

%{
#include "ns-appearance.h"
#include <stdint.h>
}%

/**
 * NSAppearance — Aqua / Dark Aqua and custom drawing appearances.
 */
class NSAppearance
{
    public static function wrap(int nsAppearancePtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_appearance_wrap((void *)(uintptr_t) nsAppearancePtr);
        }%
        return handle;
    }

    public static function destroy(int appearance) -> void
    {
        %{
            ns_appearance_destroy((uintptr_t) appearance);
        }%
    }

    public static function named(string name) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_appearance_named(Z_STRVAL(name));
        }%
        return handle;
    }

    public static function create(string name) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_appearance_create(Z_STRVAL(name));
        }%
        return handle;
    }

    public static function currentDrawing() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_appearance_current_drawing();
        }%
        return handle;
    }

    public static function name(int appearance) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_appearance_name((uintptr_t) appearance, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function allowsVibrancy(int appearance) -> bool
    {
        bool result;
        %{
            result = ns_appearance_allows_vibrancy((uintptr_t) appearance) == 1;
        }%
        return result;
    }

    public static function bestMatch(int appearance, array names) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            zval *item;
            const char *cnames[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(names), item) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(item);
                cnames[count++] = Z_STRVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            if (ns_appearance_best_match((uintptr_t) appearance, cnames, count, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function nsAppearance(int appearance) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_appearance_nsappearance((uintptr_t) appearance);
        }%
        return ptr;
    }
}

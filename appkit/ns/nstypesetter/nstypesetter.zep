namespace AppKit\NS\NSTypesetter;

%{
#include "ns-typesetter.h"
#include <stdint.h>
}%


/**
 * NSTypesetter — shared system typesetter.
 */
class NSTypesetter

{
    public static function sharedSystemTypesetter() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_typesetter_shared_system_typesetter();
        }%
        return handle;
    }

    public static function sharedSystemTypesetterForBehavior(int behavior) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_typesetter_shared_system_typesetter_for_behavior((int) behavior);
        }%
        return handle;
    }

    public static function defaultTypesetterBehavior() -> int
    {
        int value;
        %{
            value = (zend_long) ns_typesetter_default_typesetter_behavior();
        }%
        return value;
    }

    public static function wrap(int nsTypesetterPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_typesetter_wrap((void *)(uintptr_t) nsTypesetterPtr);
        }%
        return handle;
    }

    public static function destroy(int typesetter) -> void
    {
        %{
            ns_typesetter_destroy((uintptr_t) typesetter);
        }%
    }

    public static function usesFontLeading(int typesetter) -> bool
    {
        bool result;
        %{
            result = ns_typesetter_uses_font_leading((uintptr_t) typesetter) == 1;
        }%
        return result;
    }

    public static function setUsesFontLeading(int typesetter, bool flag) -> void
    {
        %{
            ns_typesetter_set_uses_font_leading((uintptr_t) typesetter, flag ? 1 : 0);
        }%
    }

    public static function getTypesetterBehavior(int typesetter) -> int
    {
        int value;
        %{
            value = (zend_long) ns_typesetter_typesetter_behavior((uintptr_t) typesetter);
        }%
        return value;
    }

    public static function setTypesetterBehavior(int typesetter, int behavior) -> void
    {
        %{
            ns_typesetter_set_typesetter_behavior((uintptr_t) typesetter, (int) behavior);
        }%
    }

    public static function getHyphenationFactor(int typesetter) -> float
    {
        float value;
        %{
            value = ns_typesetter_hyphenation_factor((uintptr_t) typesetter);
        }%
        return value;
    }

    public static function setHyphenationFactor(int typesetter, float factor) -> void
    {
        %{
            ns_typesetter_set_hyphenation_factor((uintptr_t) typesetter, (float) factor);
        }%
    }

    public static function getLineFragmentPadding(int typesetter) -> float
    {
        double value;
        %{
            value = ns_typesetter_line_fragment_padding((uintptr_t) typesetter);
        }%
        return (float) value;
    }

    public static function setLineFragmentPadding(int typesetter, float padding) -> void
    {
        %{
            ns_typesetter_set_line_fragment_padding((uintptr_t) typesetter, (double) padding);
        }%
    }

    public static function bidiProcessingEnabled(int typesetter) -> bool
    {
        bool result;
        %{
            result = ns_typesetter_bidi_processing_enabled((uintptr_t) typesetter) == 1;
        }%
        return result;
    }

    public static function setBidiProcessingEnabled(int typesetter, bool flag) -> void
    {
        %{
            ns_typesetter_set_bidi_processing_enabled((uintptr_t) typesetter, flag ? 1 : 0);
        }%
    }
}

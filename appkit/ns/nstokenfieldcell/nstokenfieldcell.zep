namespace AppKit\NS\NSTokenFieldCell;

%{
#include "ns-tokenfieldcell.h"
#include <stdint.h>
}%


/**
 * NSTokenFieldCell — cell used by NSTokenField.
 */
class NSTokenFieldCell
{
    public static function createText(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tokenfieldcell_create_text(Z_STRVAL(value));
        }%
        return handle;
    }

    public static function wrap(int nsTokenFieldCellPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tokenfieldcell_wrap((void *)(uintptr_t) nsTokenFieldCellPtr);
        }%
        return handle;
    }

    public static function destroy(int cell) -> void
    {
        %{
            ns_tokenfieldcell_destroy((uintptr_t) cell);
        }%
    }

    public static function nsTokenFieldCell(int cell) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_tokenfieldcell_nstokenfieldcell((uintptr_t) cell);
        }%
        return ptr;
    }

    public static function setStringValue(int cell, string value) -> void
    {
        %{
            ns_tokenfieldcell_set_string((uintptr_t) cell, Z_STRVAL(value));
        }%
    }

    public static function getStringValue(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_tokenfieldcell_get_string((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setTokenStyle(int cell, int style) -> void
    {
        %{
            ns_tokenfieldcell_set_token_style((uintptr_t) cell, (int) style);
        }%
    }

    public static function getTokenStyle(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_tokenfieldcell_get_token_style((uintptr_t) cell);
        }%
        return value;
    }

    public static function setCompletionDelay(int cell, float delay) -> void
    {
        %{
            ns_tokenfieldcell_set_completion_delay((uintptr_t) cell, (double) delay);
        }%
    }

    public static function getCompletionDelay(int cell) -> float
    {
        double value;
        %{
            value = ns_tokenfieldcell_get_completion_delay((uintptr_t) cell);
        }%
        return (float) value;
    }

    public static function defaultCompletionDelay() -> float
    {
        double value;
        %{
            value = ns_tokenfieldcell_default_completion_delay();
        }%
        return (float) value;
    }
}

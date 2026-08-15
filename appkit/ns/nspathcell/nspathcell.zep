namespace AppKit\NS\NSPathCell;

%{
#include "ns-pathcell.h"
#include <stdint.h>
}%


/**
 * NSPathCell — cell used by NSPathControl.
 */
class NSPathCell
{
    public static function createText(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_pathcell_create_text(Z_STRVAL(value));
        }%
        return handle;
    }

    public static function wrap(int nsPathCellPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_pathcell_wrap((void *)(uintptr_t) nsPathCellPtr);
        }%
        return handle;
    }

    public static function destroy(int cell) -> void
    {
        %{
            ns_pathcell_destroy((uintptr_t) cell);
        }%
    }

    public static function nsPathCell(int cell) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_pathcell_nspathcell((uintptr_t) cell);
        }%
        return ptr;
    }

    public static function setTitle(int cell, string title) -> void
    {
        %{
            ns_pathcell_set_title((uintptr_t) cell, Z_STRVAL(title));
        }%
    }

    public static function getTitle(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_pathcell_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setState(int cell, int state) -> void
    {
        %{
            ns_pathcell_set_state((uintptr_t) cell, (int) state);
        }%
    }

    public static function getState(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_pathcell_get_state((uintptr_t) cell);
        }%
        return value;
    }

    public static function setEnabled(int cell, bool enabled) -> void
    {
        %{
            ns_pathcell_set_enabled((uintptr_t) cell, enabled ? 1 : 0);
        }%
    }

    public static function isEnabled(int cell) -> bool
    {
        bool result;
        %{
            result = ns_pathcell_is_enabled((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function setTag(int cell, int tag) -> void
    {
        %{
            ns_pathcell_set_tag((uintptr_t) cell, (int) tag);
        }%
    }

    public static function getTag(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_pathcell_get_tag((uintptr_t) cell);
        }%
        return value;
    }

    public static function setPathStyle(int cell, int style) -> void
    {
        %{
            ns_pathcell_set_path_style((uintptr_t) cell, (int) style);
        }%
    }

    public static function getPathStyle(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_pathcell_get_path_style((uintptr_t) cell);
        }%
        return value;
    }

    public static function setUrlPath(int cell, string path) -> void
    {
        %{
            ns_pathcell_set_url_path((uintptr_t) cell, Z_STRVAL(path));
        }%
    }

    public static function getUrlPath(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_pathcell_get_url_path((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setPlaceholderString(int cell, string placeholder) -> void
    {
        %{
            ns_pathcell_set_placeholder_string((uintptr_t) cell, Z_STRVAL(placeholder));
        }%
    }

    public static function getPlaceholderString(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_pathcell_get_placeholder_string((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setBackgroundColor(int cell, int color) -> void
    {
        %{
            ns_pathcell_set_background_color((uintptr_t) cell, (uintptr_t) color);
        }%
    }

    public static function setAllowedTypes(int cell, array types) -> void
    {
        %{
            zval *item;
            const char *cnames[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(types), item) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(item);
                cnames[count++] = Z_STRVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            ns_pathcell_set_allowed_types((uintptr_t) cell, cnames, count);
        }%
    }

    public static function pathComponentCount(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_pathcell_path_component_count((uintptr_t) cell);
        }%
        return value;
    }
}

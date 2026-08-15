namespace AppKit\NS\NSPathComponentCell;

%{
#include "ns-pathcomponentcell.h"
#include <stdint.h>
}%


/**
 * NSPathComponentCell — one component of an NSPathCell.
 */
class NSPathComponentCell
{
    public static function createText(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_pathcomponentcell_create_text(Z_STRVAL(value));
        }%
        return handle;
    }

    public static function wrap(int nsPathComponentCellPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_pathcomponentcell_wrap((void *)(uintptr_t) nsPathComponentCellPtr);
        }%
        return handle;
    }

    public static function destroy(int cell) -> void
    {
        %{
            ns_pathcomponentcell_destroy((uintptr_t) cell);
        }%
    }

    public static function nsPathComponentCell(int cell) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_pathcomponentcell_nspathcomponentcell((uintptr_t) cell);
        }%
        return ptr;
    }

    public static function setTitle(int cell, string title) -> void
    {
        %{
            ns_pathcomponentcell_set_title((uintptr_t) cell, Z_STRVAL(title));
        }%
    }

    public static function getTitle(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_pathcomponentcell_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setStringValue(int cell, string value) -> void
    {
        %{
            ns_pathcomponentcell_set_string_value((uintptr_t) cell, Z_STRVAL(value));
        }%
    }

    public static function getStringValue(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_pathcomponentcell_get_string_value((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setImage(int cell, int image) -> void
    {
        %{
            ns_pathcomponentcell_set_image((uintptr_t) cell, (uintptr_t) image);
        }%
    }

    public static function getImage(int cell) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_pathcomponentcell_get_image((uintptr_t) cell);
        }%
        return handle;
    }

    public static function setUrlPath(int cell, string path) -> void
    {
        %{
            ns_pathcomponentcell_set_url_path((uintptr_t) cell, Z_STRVAL(path));
        }%
    }

    public static function getUrlPath(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_pathcomponentcell_get_url_path((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}

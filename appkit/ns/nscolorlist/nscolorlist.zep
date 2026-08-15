namespace AppKit\NS\NSColorList;

%{
#include "ns-colorlist.h"
#include <stdint.h>
}%

/**
 * NSColorList — named swatch lists for the color panel.
 */
class NSColorList
{
    public static function wrap(int nsColorListPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_colorlist_wrap((void *)(uintptr_t) nsColorListPtr);
        }%
        return handle;
    }

    public static function destroy(int list) -> void
    {
        %{
            ns_colorlist_destroy((uintptr_t) list);
        }%
    }

    public static function availableCount() -> int
    {
        int count;
        %{
            count = (zend_long) ns_colorlist_available_count();
        }%
        return count;
    }

    public static function availableAt(int index) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_colorlist_available_at((int) index);
        }%
        return handle;
    }

    public static function named(string name) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_colorlist_named(Z_STRVAL(name));
        }%
        return handle;
    }

    public static function create(string name = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_colorlist_create(Z_STRVAL(name));
        }%
        return handle;
    }

    public static function createFromFile(string name, string path) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_colorlist_create_from_file(Z_STRVAL(name), Z_STRVAL(path));
        }%
        return handle;
    }

    public static function name(int list) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_colorlist_name((uintptr_t) list, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function isEditable(int list) -> bool
    {
        bool result;
        %{
            result = ns_colorlist_is_editable((uintptr_t) list) == 1;
        }%
        return result;
    }

    public static function setColor(int list, int color, string key) -> void
    {
        %{
            ns_colorlist_set_color((uintptr_t) list, (uintptr_t) color, Z_STRVAL(key));
        }%
    }

    public static function insertColor(int list, int color, string key, int index) -> void
    {
        %{
            ns_colorlist_insert_color((uintptr_t) list, (uintptr_t) color, Z_STRVAL(key), (int) index);
        }%
    }

    public static function removeColorWithKey(int list, string key) -> void
    {
        %{
            ns_colorlist_remove_color_with_key((uintptr_t) list, Z_STRVAL(key));
        }%
    }

    public static function colorWithKey(int list, string key) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_colorlist_color_with_key((uintptr_t) list, Z_STRVAL(key));
        }%
        return handle;
    }

    public static function allKeysCount(int list) -> int
    {
        int count;
        %{
            count = (zend_long) ns_colorlist_all_keys_count((uintptr_t) list);
        }%
        return count;
    }

    public static function allKeyAt(int list, int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_colorlist_all_key_at((uintptr_t) list, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function writeToUrl(int list, string url = "") -> bool
    {
        bool result;
        %{
            result = ns_colorlist_write_to_url((uintptr_t) list, Z_STRVAL(url)) == 1;
        }%
        return result;
    }

    public static function removeFile(int list) -> void
    {
        %{
            ns_colorlist_remove_file((uintptr_t) list);
        }%
    }

    public static function nsColorList(int list) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_colorlist_nscolorlist((uintptr_t) list);
        }%
        return ptr;
    }
}

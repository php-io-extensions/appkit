namespace AppKit\NS\NSPathControl;

%{
#include "ns-pathcontrol.h"
#include <stdint.h>
}%

/**
 * NSPathControl path browser view.
 */
class NSPathControl
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_pathcontrol_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function destroy(int control) -> void
    {
        %{
            ns_pathcontrol_destroy((uintptr_t) control);
        }%
    }

    public static function setUrlPath(int control, string path) -> void
    {
        %{
            ns_pathcontrol_set_url_path((uintptr_t) control, Z_STRVAL(path));
        }%
    }

    public static function getUrlPath(int control) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_pathcontrol_get_url_path((uintptr_t) control, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setPathStyle(int control, int style) -> void
    {
        %{
            ns_pathcontrol_set_path_style((uintptr_t) control, (int) style);
        }%
    }

    public static function getPathStyle(int control) -> int
    {
        int value;
        %{
            value = (zend_long) ns_pathcontrol_get_path_style((uintptr_t) control);
        }%
        return value;
    }

    public static function setEditable(int control, bool flag) -> void
    {
        %{
            ns_pathcontrol_set_editable((uintptr_t) control, flag ? 1 : 0);
        }%
    }

    public static function isEditable(int control) -> bool
    {
        bool result;
        %{
            result = ns_pathcontrol_is_editable((uintptr_t) control) == 1;
        }%
        return result;
    }

    public static function setPlaceholderString(int control, string placeholder) -> void
    {
        %{
            ns_pathcontrol_set_placeholder_string((uintptr_t) control, Z_STRVAL(placeholder));
        }%
    }

    public static function getPlaceholderString(int control) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_pathcontrol_get_placeholder_string((uintptr_t) control, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setBackgroundColor(int control, int color) -> void
    {
        %{
            ns_pathcontrol_set_background_color((uintptr_t) control, (uintptr_t) color);
        }%
    }

    public static function setAllowedTypes(int control, array types) -> void
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
            ns_pathcontrol_set_allowed_types((uintptr_t) control, cnames, count);
        }%
    }

    public static function pollChange(int control) -> bool
    {
        bool result;
        %{
            result = ns_pathcontrol_poll_change((uintptr_t) control) == 1;
        }%
        return result;
    }
}

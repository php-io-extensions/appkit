namespace AppKit\NS\NSTextView;

%{
#include "ns-textview.h"
#include <stdint.h>
}%

class NSTextView
{
    public static function create(int x, int y, int width, int height, string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textview_create((double) x, (double) y, (double) width, (double) height, Z_STRVAL(value));
        }%
        return handle;
    }

    public static function destroy(int view) -> void
    {
        %{
            ns_textview_destroy((uintptr_t) view);
        }%
    }

    public static function setString(int view, string value) -> void
    {
        %{
            ns_textview_set_string((uintptr_t) view, Z_STRVAL(value));
        }%
    }

    public static function getString(int view) -> string
    {
        %{
            char buf[16384];
            buf[0] = '\0';
            if (ns_textview_get_string((uintptr_t) view, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function pollChange(int view) -> bool
    {
        bool result;
        %{
            result = ns_textview_poll_change((uintptr_t) view) == 1;
        }%
        return result;
    }
}

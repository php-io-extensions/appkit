namespace AppKit\NS\NSColorPicker;

%{
#include "ns-colorpicker.h"
#include <stdint.h>
}%

/**
 * NSColorPicker — base class for custom color panel pickers.
 */
class NSColorPicker
{
    public static function wrap(int nsColorPickerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_colorpicker_wrap((void *)(uintptr_t) nsColorPickerPtr);
        }%
        return handle;
    }

    public static function destroy(int picker) -> void
    {
        %{
            ns_colorpicker_destroy((uintptr_t) picker);
        }%
    }

    public static function create(int mask, int panel = 0) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_colorpicker_create((unsigned) mask, (uintptr_t) panel);
        }%
        return handle;
    }

    public static function colorPanel(int picker) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_colorpicker_color_panel((uintptr_t) picker);
        }%
        return handle;
    }

    public static function buttonToolTip(int picker) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_colorpicker_button_tool_tip((uintptr_t) picker, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    /**
     * @return array [width, height] or empty array
     */
    public static function minContentSize(int picker) -> array
    {
        array out = [];
        %{
            double w = 0.0, h = 0.0;
            if (ns_colorpicker_min_content_size((uintptr_t) picker, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }

    public static function setMode(int picker, int mode) -> void
    {
        %{
            ns_colorpicker_set_mode((uintptr_t) picker, (int) mode);
        }%
    }

    public static function attachColorList(int picker, int list) -> void
    {
        %{
            ns_colorpicker_attach_color_list((uintptr_t) picker, (uintptr_t) list);
        }%
    }

    public static function detachColorList(int picker, int list) -> void
    {
        %{
            ns_colorpicker_detach_color_list((uintptr_t) picker, (uintptr_t) list);
        }%
    }

    public static function nsColorPicker(int picker) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_colorpicker_nscolorpicker((uintptr_t) picker);
        }%
        return ptr;
    }
}

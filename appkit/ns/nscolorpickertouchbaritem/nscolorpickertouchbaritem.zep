namespace AppKit\NS\NSColorPickerTouchBarItem;

%{
#include "ns-colorpickertouchbaritem.h"
#include <stdint.h>
}%

/** NSColorPickerTouchBarItem */
class NSColorPickerTouchBarItem
{

    public static function colorPicker(string identifier) -> int { int h; %{ h = (zend_long) ns_colorpickertouchbaritem_color_picker(Z_STRVAL(identifier)); }% return h; }
    public static function textColorPicker(string identifier) -> int { int h; %{ h = (zend_long) ns_colorpickertouchbaritem_text_color_picker(Z_STRVAL(identifier)); }% return h; }
    public static function strokeColorPicker(string identifier) -> int { int h; %{ h = (zend_long) ns_colorpickertouchbaritem_stroke_color_picker(Z_STRVAL(identifier)); }% return h; }
    public static function colorPickerWithButtonImage(string identifier, int image) -> int { int h; %{ h = (zend_long) ns_colorpickertouchbaritem_color_picker_with_button_image(Z_STRVAL(identifier), (uintptr_t) image); }% return h; }
    public static function wrap(int ptr) -> int
    {
        int handle;
        %{ handle = (zend_long) ns_colorpickertouchbaritem_wrap((void *)(uintptr_t) ptr); }%
        return handle;
    }
    public static function destroy(int item) -> void
    {
        %{ ns_colorpickertouchbaritem_destroy((uintptr_t) item); }%
    }
    public static function nsColorPickerTouchBarItem(int item) -> int
    {
        int ptr;
        %{ ptr = (zend_long)(uintptr_t) ns_colorpickertouchbaritem_nscolorpickertouchbaritem((uintptr_t) item); }%
        return ptr;
    }

    public static function setColor(int item, int color) -> void { %{ ns_colorpickertouchbaritem_set_color((uintptr_t) item, (uintptr_t) color); }% }
    public static function getColor(int item) -> int { int h; %{ h = (zend_long) ns_colorpickertouchbaritem_get_color((uintptr_t) item); }% return h; }
    public static function pollAction(int item) -> bool { bool r; %{ r = ns_colorpickertouchbaritem_poll_action((uintptr_t) item) == 1; }% return r; }
}

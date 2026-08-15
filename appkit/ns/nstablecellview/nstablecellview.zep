namespace AppKit\NS\NSTableCellView;

%{
#include "ns-tablecellview.h"
#include <stdint.h>
}%


/**
 * NSTableCellView content cell for NSTableView.
 */
class NSTableCellView
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tablecellview_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }
    public static function wrap(int nsTableCellViewPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tablecellview_wrap((void *)(uintptr_t) nsTableCellViewPtr);
        }%
        return handle;
    }
    public static function destroy(int cell) -> void
    {
        %{
            ns_tablecellview_destroy((uintptr_t) cell);
        }%
    }
    public static function setText(int cell, string text) -> void
    {
        %{
            ns_tablecellview_set_text((uintptr_t) cell, Z_STRVAL(text));
        }%
    }
    public static function getText(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_tablecellview_get_text((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function setImage(int cell, int image) -> void
    {
        %{
            ns_tablecellview_set_image((uintptr_t) cell, (uintptr_t) image);
        }%
    }
    public static function textField(int cell) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tablecellview_text_field((uintptr_t) cell);
        }%
        return handle;
    }
    public static function imageView(int cell) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tablecellview_image_view((uintptr_t) cell);
        }%
        return handle;
    }
}

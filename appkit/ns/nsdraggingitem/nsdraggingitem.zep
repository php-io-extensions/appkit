namespace AppKit\NS\NSDraggingItem;

%{
#include "ns-draggingitem.h"
#include <stdint.h>
}%

/** NSDraggingItem — drag session item with pasteboard writer and image. */
class NSDraggingItem
{
    public static function createWithString(string value) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_draggingitem_create_with_string(Z_STRVAL(value));
        }%
        return handle;
    }

    public static function wrap(int nsDraggingItemPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_draggingitem_wrap((void *)(uintptr_t) nsDraggingItemPtr);
        }%
        return handle;
    }

    public static function destroy(int item) -> void
    {
        %{
            ns_draggingitem_destroy((uintptr_t) item);
        }%
    }

    public static function nsDraggingItem(int item) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_draggingitem_nsdraggingitem((uintptr_t) item);
        }%
        return ptr;
    }

    public static function getItem(int item) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_draggingitem_item((uintptr_t) item);
        }%
        return ptr;
    }

    public static function getDraggingFrame(int item) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_draggingitem_get_dragging_frame((uintptr_t) item, &x, &y, &w, &h);
            add_assoc_double(&out, "x", x);
            add_assoc_double(&out, "y", y);
            add_assoc_double(&out, "width", w);
            add_assoc_double(&out, "height", h);
        }%
        return out;
    }

    public static function setDraggingFrame(int item, double x, double y, double width, double height) -> void
    {
        %{
            ns_draggingitem_set_dragging_frame((uintptr_t) item, x, y, width, height);
        }%
    }

    public static function setDraggingFrameContents(int item, double x, double y, double width, double height, int contentsPtr) -> void
    {
        %{
            ns_draggingitem_set_dragging_frame_contents(
                (uintptr_t) item, x, y, width, height, (void *)(uintptr_t) contentsPtr
            );
        }%
    }

    public static function imageComponentsCount(int item) -> int
    {
        int value;
        %{
            value = (zend_long) ns_draggingitem_image_components_count((uintptr_t) item);
        }%
        return value;
    }
}

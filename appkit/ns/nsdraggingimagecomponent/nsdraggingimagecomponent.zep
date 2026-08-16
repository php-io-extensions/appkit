namespace AppKit\NS\NSDraggingImageComponent;

%{
#include "ns-draggingimagecomponent.h"
#include <stdint.h>
}%

/** NSDraggingImageComponent — composited drag image layer. */
class NSDraggingImageComponent
{
    public static function withKey(string key) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_draggingimagecomponent_with_key(Z_STRVAL(key));
        }%
        return handle;
    }

    public static function wrap(int nsDraggingImageComponentPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_draggingimagecomponent_wrap((void *)(uintptr_t) nsDraggingImageComponentPtr);
        }%
        return handle;
    }

    public static function destroy(int component) -> void
    {
        %{
            ns_draggingimagecomponent_destroy((uintptr_t) component);
        }%
    }

    public static function nsDraggingImageComponent(int component) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_draggingimagecomponent_nsdraggingimagecomponent((uintptr_t) component);
        }%
        return ptr;
    }

    public static function getKey(int component) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_draggingimagecomponent_key((uintptr_t) component, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setKey(int component, string key) -> void
    {
        %{
            ns_draggingimagecomponent_set_key((uintptr_t) component, Z_STRVAL(key));
        }%
    }

    public static function setContents(int component, int contentsPtr) -> void
    {
        %{
            ns_draggingimagecomponent_set_contents((uintptr_t) component, (void *)(uintptr_t) contentsPtr);
        }%
    }

    public static function getContents(int component) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_draggingimagecomponent_contents((uintptr_t) component);
        }%
        return ptr;
    }

    public static function frameRect(int component) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_draggingimagecomponent_get_frame((uintptr_t) component, &x, &y, &w, &h);
            add_assoc_double(&out, "x", x);
            add_assoc_double(&out, "y", y);
            add_assoc_double(&out, "width", w);
            add_assoc_double(&out, "height", h);
        }%
        return out;
    }

    public static function setFrameRect(int component, double x, double y, double width, double height) -> void
    {
        %{
            ns_draggingimagecomponent_set_frame((uintptr_t) component, x, y, width, height);
        }%
    }
}

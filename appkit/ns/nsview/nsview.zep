namespace AppKit\NS\NSView;

%{
#include "ns-view.h"
#include <stdint.h>
}%

/**
 * Plain NSView. No Metal / CAMetalLayer present APIs — those live in php-io-extensions/metal.
 */
class NSView
{
    /**
     * @return int Opaque view handle, or 0 on failure
     */
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_view_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    /**
     * Wrap a borrowed NSView* (e.g. from another extension or contentView).
     * @return int Opaque view handle, or 0
     */
    public static function wrap(int nsViewPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_view_wrap((void *)(uintptr_t) nsViewPtr);
        }%
        return handle;
    }

    public static function destroy(int view) -> void
    {
        %{
            ns_view_destroy((uintptr_t) view);
        }%
    }

    public static function addSubview(int parent, int child) -> void
    {
        %{
            ns_view_add_subview((uintptr_t) parent, (uintptr_t) child);
        }%
    }

    public static function setFrame(int view, int x, int y, int width, int height) -> void
    {
        %{
            ns_view_set_frame((uintptr_t) view, (double) x, (double) y, (double) width, (double) height);
        }%
    }

    public static function getWidth(int view) -> int
    {
        int value;
        %{
            value = (zend_long) ns_view_get_width((uintptr_t) view);
        }%
        return value;
    }

    public static function getHeight(int view) -> int
    {
        int value;
        %{
            value = (zend_long) ns_view_get_height((uintptr_t) view);
        }%
        return value;
    }

    /**
     * @return int Borrowed NSView pointer, or 0
     */
    public static function nsView(int view) -> int
    {
        int handle;
        %{
            handle = (zend_long)(uintptr_t) ns_view_nsview((uintptr_t) view);
        }%
        return handle;
    }
}

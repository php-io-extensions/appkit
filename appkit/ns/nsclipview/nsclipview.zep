namespace AppKit\NS\NSClipView;

%{
#include "ns-clipview.h"
#include <stdint.h>
}%

/** NSClipView — scrollable document clip region. */
class NSClipView
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_clipview_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function wrap(int nsClipViewPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_clipview_wrap((void *)(uintptr_t) nsClipViewPtr);
        }%
        return handle;
    }

    public static function destroy(int clip) -> void
    {
        %{
            ns_clipview_destroy((uintptr_t) clip);
        }%
    }

    public static function nsClipView(int clip) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_clipview_nsclipview((uintptr_t) clip);
        }%
        return ptr;
    }

    public static function setDocumentView(int clip, int child) -> void
    {
        %{
            ns_clipview_set_document_view((uintptr_t) clip, (uintptr_t) child);
        }%
    }

    public static function documentView(int clip) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_clipview_document_view((uintptr_t) clip);
        }%
        return handle;
    }

    public static function setDrawsBackground(int clip, bool flag) -> void
    {
        %{
            ns_clipview_set_draws_background((uintptr_t) clip, flag ? 1 : 0);
        }%
    }

    public static function drawsBackground(int clip) -> bool
    {
        bool result;
        %{
            result = ns_clipview_draws_background((uintptr_t) clip) == 1;
        }%
        return result;
    }

    public static function scrollToPoint(int clip, double x, double y) -> void
    {
        %{
            ns_clipview_scroll_to_point((uintptr_t) clip, x, y);
        }%
    }

    public static function setContentInsets(int clip, double top, double left, double bottom, double right) -> void
    {
        %{
            ns_clipview_set_content_insets((uintptr_t) clip, top, left, bottom, right);
        }%
    }

    public static function setAutomaticallyAdjustsContentInsets(int clip, bool flag) -> void
    {
        %{
            ns_clipview_set_automatically_adjusts_content_insets((uintptr_t) clip, flag ? 1 : 0);
        }%
    }

    public static function automaticallyAdjustsContentInsets(int clip) -> bool
    {
        bool result;
        %{
            result = ns_clipview_automatically_adjusts_content_insets((uintptr_t) clip) == 1;
        }%
        return result;
    }

    public static function documentVisibleRect(int clip) -> array
    {
        %{
            double x = 0, y = 0, w = 0, h = 0;
            ns_clipview_get_document_visible_rect((uintptr_t) clip, &x, &y, &w, &h);
            array_init(return_value);
            add_assoc_double(return_value, "x", x);
            add_assoc_double(return_value, "y", y);
            add_assoc_double(return_value, "width", w);
            add_assoc_double(return_value, "height", h);
            return;
        }%
        return [];
    }
}

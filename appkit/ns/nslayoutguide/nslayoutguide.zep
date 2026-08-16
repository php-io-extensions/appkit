namespace AppKit\NS\NSLayoutGuide;

%{
#include "ns-layoutguide.h"
#include <stdint.h>
}%

/**
 * NSLayoutGuide — layout rectangle not backed by a view.
 */
class NSLayoutGuide
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutguide_create();
        }%
        return handle;
    }

    public static function wrap(int nsLayoutGuidePtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutguide_wrap((void *)(uintptr_t) nsLayoutGuidePtr);
        }%
        return handle;
    }

    public static function destroy(int guide) -> void
    {
        %{
            ns_layoutguide_destroy((uintptr_t) guide);
        }%
    }

    public static function nsLayoutGuide(int guide) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_layoutguide_nslayoutguide((uintptr_t) guide);
        }%
        return ptr;
    }

    public static function getFrame(int guide) -> array
    {
        array frame;
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_layoutguide_frame((uintptr_t) guide, &x, &y, &w, &h);
            array_init(&frame);
            add_index_double(&frame, 0, x);
            add_index_double(&frame, 1, y);
            add_index_double(&frame, 2, w);
            add_index_double(&frame, 3, h);
        }%
        return frame;
    }

    public static function setIdentifier(int guide, string identifier) -> void
    {
        %{
            ns_layoutguide_set_identifier((uintptr_t) guide, Z_STRVAL(identifier));
        }%
    }

    public static function identifier(int guide) -> string
    {
        string value;
        %{
            char buf[512];
            if (ns_layoutguide_identifier((uintptr_t) guide, buf, (int) sizeof(buf))) {
                ZVAL_STRING(&value, buf);
            } else {
                ZVAL_EMPTY_STRING(&value);
            }
        }%
        return value;
    }

    public static function owningView(int guide) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutguide_owning_view((uintptr_t) guide);
        }%
        return handle;
    }

    public static function addToView(int guide, int view) -> void
    {
        %{
            ns_layoutguide_add_to_view((uintptr_t) guide, (uintptr_t) view);
        }%
    }

    public static function removeFromView(int guide, int view) -> void
    {
        %{
            ns_layoutguide_remove_from_view((uintptr_t) guide, (uintptr_t) view);
        }%
    }

    public static function leadingAnchor(int guide) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutguide_leading_anchor((uintptr_t) guide);
        }%
        return handle;
    }

    public static function trailingAnchor(int guide) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutguide_trailing_anchor((uintptr_t) guide);
        }%
        return handle;
    }

    public static function leftAnchor(int guide) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutguide_left_anchor((uintptr_t) guide);
        }%
        return handle;
    }

    public static function rightAnchor(int guide) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutguide_right_anchor((uintptr_t) guide);
        }%
        return handle;
    }

    public static function topAnchor(int guide) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutguide_top_anchor((uintptr_t) guide);
        }%
        return handle;
    }

    public static function bottomAnchor(int guide) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutguide_bottom_anchor((uintptr_t) guide);
        }%
        return handle;
    }

    public static function widthAnchor(int guide) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutguide_width_anchor((uintptr_t) guide);
        }%
        return handle;
    }

    public static function heightAnchor(int guide) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutguide_height_anchor((uintptr_t) guide);
        }%
        return handle;
    }

    public static function centerXAnchor(int guide) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutguide_center_x_anchor((uintptr_t) guide);
        }%
        return handle;
    }

    public static function centerYAnchor(int guide) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutguide_center_y_anchor((uintptr_t) guide);
        }%
        return handle;
    }

    public static function hasAmbiguousLayout(int guide) -> bool
    {
        bool result;
        %{
            result = ns_layoutguide_has_ambiguous_layout((uintptr_t) guide) == 1;
        }%
        return result;
    }
}

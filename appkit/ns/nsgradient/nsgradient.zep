namespace AppKit\NS\NSGradient;

%{
#include "ns-gradient.h"
#include <stdint.h>
}%

/**
 * NSGradient — multi-stop color gradients.
 */
class NSGradient
{
    public static function withStartingColor(int startingColor, int endingColor) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_gradient_with_starting_color((uintptr_t) startingColor, (uintptr_t) endingColor);
        }%
        return handle;
    }

    /**
     * @param array colors Array of int color handles
     */
    public static function withColors(array colors) -> int
    {
        int handle;
        %{
            zval *item;
            uintptr_t buf[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(colors), item) {
                if (count >= 256) {
                    break;
                }
                convert_to_long(item);
                buf[count++] = (uintptr_t) Z_LVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            handle = (zend_long) ns_gradient_with_colors(buf, count);
        }%
        return handle;
    }

    public static function wrap(int nsGradientPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_gradient_wrap((void *)(uintptr_t) nsGradientPtr);
        }%
        return handle;
    }

    public static function destroy(int gradient) -> void
    {
        %{
            ns_gradient_destroy((uintptr_t) gradient);
        }%
    }

    public static function nsGradient(int gradient) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_gradient_nsgradient((uintptr_t) gradient);
        }%
        return ptr;
    }

    public static function drawFromPoint(int gradient, float startX, float startY, float endX, float endY, int options = 0) -> void
    {
        %{
            ns_gradient_draw_from_point((uintptr_t) gradient, (double) startX, (double) startY, (double) endX, (double) endY, (int) options);
        }%
    }

    public static function drawInRectAngle(int gradient, float x, float y, float width, float height, float angle) -> void
    {
        %{
            ns_gradient_draw_in_rect_angle((uintptr_t) gradient, (double) x, (double) y, (double) width, (double) height, (double) angle);
        }%
    }

    public static function drawInBezierPathAngle(int gradient, int path, float angle) -> void
    {
        %{
            ns_gradient_draw_in_bezier_path_angle((uintptr_t) gradient, (uintptr_t) path, (double) angle);
        }%
    }

    public static function drawFromCenter(int gradient, float startCenterX, float startCenterY, float startRadius, float endCenterX, float endCenterY, float endRadius, int options = 0) -> void
    {
        %{
            ns_gradient_draw_from_center((uintptr_t) gradient, (double) startCenterX, (double) startCenterY, (double) startRadius, (double) endCenterX, (double) endCenterY, (double) endRadius, (int) options);
        }%
    }

    public static function drawInRectRelativeCenter(int gradient, float x, float y, float width, float height, float relCenterX, float relCenterY) -> void
    {
        %{
            ns_gradient_draw_in_rect_relative_center((uintptr_t) gradient, (double) x, (double) y, (double) width, (double) height, (double) relCenterX, (double) relCenterY);
        }%
    }

    public static function drawInBezierPathRelativeCenter(int gradient, int path, float relCenterX, float relCenterY) -> void
    {
        %{
            ns_gradient_draw_in_bezier_path_relative_center((uintptr_t) gradient, (uintptr_t) path, (double) relCenterX, (double) relCenterY);
        }%
    }

    public static function numberOfColorStops(int gradient) -> int
    {
        int value;
        %{
            value = (zend_long) ns_gradient_number_of_color_stops((uintptr_t) gradient);
        }%
        return value;
    }

    public static function interpolatedColorAtLocation(int gradient, float location) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_gradient_interpolated_color_at_location((uintptr_t) gradient, (double) location);
        }%
        return handle;
    }
}

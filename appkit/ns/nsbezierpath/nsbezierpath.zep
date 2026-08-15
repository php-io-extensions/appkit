namespace AppKit\NS\NSBezierPath;

%{
#include "ns-bezierpath.h"
#include <stdint.h>
}%

/**
 * NSBezierPath — vector path construction and drawing.
 */
class NSBezierPath
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_bezierpath_create();
        }%
        return handle;
    }

    public static function withRect(float x, float y, float width, float height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_bezierpath_with_rect((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function withOvalInRect(float x, float y, float width, float height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_bezierpath_with_oval_in_rect((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function withRoundedRect(float x, float y, float width, float height, float xRadius, float yRadius) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_bezierpath_with_rounded_rect((double) x, (double) y, (double) width, (double) height, (double) xRadius, (double) yRadius);
        }%
        return handle;
    }

    public static function wrap(int nsBezierPathPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_bezierpath_wrap((void *)(uintptr_t) nsBezierPathPtr);
        }%
        return handle;
    }

    public static function destroy(int path) -> void
    {
        %{
            ns_bezierpath_destroy((uintptr_t) path);
        }%
    }

    public static function nsBezierPath(int path) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_bezierpath_nsbezierpath((uintptr_t) path);
        }%
        return ptr;
    }

    public static function moveToPoint(int path, float x, float y) -> void
    {
        %{
            ns_bezierpath_move_to_point((uintptr_t) path, (double) x, (double) y);
        }%
    }

    public static function lineToPoint(int path, float x, float y) -> void
    {
        %{
            ns_bezierpath_line_to_point((uintptr_t) path, (double) x, (double) y);
        }%
    }

    public static function curveToPoint(int path, float endX, float endY, float cp1X, float cp1Y, float cp2X, float cp2Y) -> void
    {
        %{
            ns_bezierpath_curve_to_point((uintptr_t) path, (double) endX, (double) endY, (double) cp1X, (double) cp1Y, (double) cp2X, (double) cp2Y);
        }%
    }

    public static function closePath(int path) -> void
    {
        %{
            ns_bezierpath_close_path((uintptr_t) path);
        }%
    }

    public static function removeAllPoints(int path) -> void
    {
        %{
            ns_bezierpath_remove_all_points((uintptr_t) path);
        }%
    }

    public static function appendPath(int path, int other) -> void
    {
        %{
            ns_bezierpath_append_path((uintptr_t) path, (uintptr_t) other);
        }%
    }

    public static function appendRect(int path, float x, float y, float width, float height) -> void
    {
        %{
            ns_bezierpath_append_rect((uintptr_t) path, (double) x, (double) y, (double) width, (double) height);
        }%
    }

    public static function appendOvalInRect(int path, float x, float y, float width, float height) -> void
    {
        %{
            ns_bezierpath_append_oval_in_rect((uintptr_t) path, (double) x, (double) y, (double) width, (double) height);
        }%
    }

    public static function setLineWidth(int path, float width) -> void
    {
        %{
            ns_bezierpath_set_line_width((uintptr_t) path, (double) width);
        }%
    }

    public static function getLineWidth(int path) -> double
    {
        double value;
        %{
            value = ns_bezierpath_get_line_width((uintptr_t) path);
        }%
        return value;
    }

    public static function setLineCap(int path, int style) -> void
    {
        %{
            ns_bezierpath_set_line_cap((uintptr_t) path, (int) style);
        }%
    }

    public static function getLineCap(int path) -> int
    {
        int value;
        %{
            value = (zend_long) ns_bezierpath_get_line_cap((uintptr_t) path);
        }%
        return value;
    }

    public static function setLineJoin(int path, int style) -> void
    {
        %{
            ns_bezierpath_set_line_join((uintptr_t) path, (int) style);
        }%
    }

    public static function getLineJoin(int path) -> int
    {
        int value;
        %{
            value = (zend_long) ns_bezierpath_get_line_join((uintptr_t) path);
        }%
        return value;
    }

    public static function setWindingRule(int path, int rule) -> void
    {
        %{
            ns_bezierpath_set_winding_rule((uintptr_t) path, (int) rule);
        }%
    }

    public static function getWindingRule(int path) -> int
    {
        int value;
        %{
            value = (zend_long) ns_bezierpath_get_winding_rule((uintptr_t) path);
        }%
        return value;
    }

    public static function setMiterLimit(int path, float limit) -> void
    {
        %{
            ns_bezierpath_set_miter_limit((uintptr_t) path, (double) limit);
        }%
    }

    public static function getMiterLimit(int path) -> double
    {
        double value;
        %{
            value = ns_bezierpath_get_miter_limit((uintptr_t) path);
        }%
        return value;
    }

    public static function setFlatness(int path, float flatness) -> void
    {
        %{
            ns_bezierpath_set_flatness((uintptr_t) path, (double) flatness);
        }%
    }

    public static function getFlatness(int path) -> double
    {
        double value;
        %{
            value = ns_bezierpath_get_flatness((uintptr_t) path);
        }%
        return value;
    }

    public static function stroke(int path) -> void
    {
        %{
            ns_bezierpath_stroke((uintptr_t) path);
        }%
    }

    public static function fill(int path) -> void
    {
        %{
            ns_bezierpath_fill((uintptr_t) path);
        }%
    }

    public static function addClip(int path) -> void
    {
        %{
            ns_bezierpath_add_clip((uintptr_t) path);
        }%
    }

    public static function setClip(int path) -> void
    {
        %{
            ns_bezierpath_set_clip((uintptr_t) path);
        }%
    }

    public static function containsPoint(int path, float x, float y) -> bool
    {
        bool result;
        %{
            result = ns_bezierpath_contains_point((uintptr_t) path, (double) x, (double) y) == 1;
        }%
        return result;
    }

    /**
     * @return array [x, y, w, h] or empty array
     */
    public static function getBounds(int path) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            if (ns_bezierpath_get_bounds((uintptr_t) path, &x, &y, &w, &h)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }

    public static function fillRect(float x, float y, float width, float height) -> void
    {
        %{
            ns_bezierpath_fill_rect((double) x, (double) y, (double) width, (double) height);
        }%
    }

    public static function strokeRect(float x, float y, float width, float height) -> void
    {
        %{
            ns_bezierpath_stroke_rect((double) x, (double) y, (double) width, (double) height);
        }%
    }

    public static function clipRect(float x, float y, float width, float height) -> void
    {
        %{
            ns_bezierpath_clip_rect((double) x, (double) y, (double) width, (double) height);
        }%
    }

    public static function strokeLineFromPoint(float x1, float y1, float x2, float y2) -> void
    {
        %{
            ns_bezierpath_stroke_line_from_point((double) x1, (double) y1, (double) x2, (double) y2);
        }%
    }
}

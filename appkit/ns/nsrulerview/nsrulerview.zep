namespace AppKit\NS\NSRulerView;

%{
#include "ns-rulerview.h"
#include <stdint.h>
}%

/** NSRulerView — horizontal or vertical ruler for scroll views. */
class NSRulerView
{
    /** orientation: 0 horizontal, 1 vertical (NSRulerOrientation). */
    public static function create(int orientation = 0) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_rulerview_create((int) orientation);
        }%
        return handle;
    }

    public static function wrap(int nsRulerViewPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_rulerview_wrap((void *)(uintptr_t) nsRulerViewPtr);
        }%
        return handle;
    }

    public static function destroy(int ruler) -> void
    {
        %{
            ns_rulerview_destroy((uintptr_t) ruler);
        }%
    }

    public static function nsRulerView(int ruler) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_rulerview_nsrulerview((uintptr_t) ruler);
        }%
        return ptr;
    }

    public static function setOrientation(int ruler, int orientation) -> void
    {
        %{
            ns_rulerview_set_orientation((uintptr_t) ruler, (int) orientation);
        }%
    }

    public static function getOrientation(int ruler) -> int
    {
        int value;
        %{
            value = (zend_long) ns_rulerview_get_orientation((uintptr_t) ruler);
        }%
        return value;
    }

    public static function setRuleThickness(int ruler, double thickness) -> void
    {
        %{
            ns_rulerview_set_rule_thickness((uintptr_t) ruler, thickness);
        }%
    }

    public static function getRuleThickness(int ruler) -> double
    {
        double value;
        %{
            value = ns_rulerview_get_rule_thickness((uintptr_t) ruler);
        }%
        return value;
    }

    public static function setMeasurementUnits(int ruler, string units) -> void
    {
        %{
            ns_rulerview_set_measurement_units((uintptr_t) ruler, Z_STRVAL(units));
        }%
    }

    public static function getMeasurementUnits(int ruler) -> string
    {
        %{
            char buf[256];
            buf[0] = '\0';
            if (ns_rulerview_get_measurement_units((uintptr_t) ruler, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setOriginOffset(int ruler, double offset) -> void
    {
        %{
            ns_rulerview_set_origin_offset((uintptr_t) ruler, offset);
        }%
    }

    public static function getOriginOffset(int ruler) -> double
    {
        double value;
        %{
            value = ns_rulerview_get_origin_offset((uintptr_t) ruler);
        }%
        return value;
    }

    public static function setClientView(int ruler, int view) -> void
    {
        %{
            ns_rulerview_set_client_view((uintptr_t) ruler, (uintptr_t) view);
        }%
    }

    public static function clientView(int ruler) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_rulerview_client_view((uintptr_t) ruler);
        }%
        return handle;
    }

    public static function setAccessoryView(int ruler, int view) -> void
    {
        %{
            ns_rulerview_set_accessory_view((uintptr_t) ruler, (uintptr_t) view);
        }%
    }

    public static function accessoryView(int ruler) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_rulerview_accessory_view((uintptr_t) ruler);
        }%
        return handle;
    }

    public static function addMarker(int ruler, int marker) -> void
    {
        %{
            ns_rulerview_add_marker((uintptr_t) ruler, (uintptr_t) marker);
        }%
    }

    public static function removeMarker(int ruler, int marker) -> void
    {
        %{
            ns_rulerview_remove_marker((uintptr_t) ruler, (uintptr_t) marker);
        }%
    }

    public static function invalidateHashMarks(int ruler) -> void
    {
        %{
            ns_rulerview_invalidate_hash_marks((uintptr_t) ruler);
        }%
    }

    public static function baselineLocation(int ruler) -> double
    {
        double value;
        %{
            value = ns_rulerview_baseline_location((uintptr_t) ruler);
        }%
        return value;
    }

    public static function requiredThickness(int ruler) -> double
    {
        double value;
        %{
            value = ns_rulerview_required_thickness((uintptr_t) ruler);
        }%
        return value;
    }
}

namespace AppKit\NS\NSPressureConfiguration;

%{
#include "ns-pressureconfiguration.h"
#include <stdint.h>
}%

/**
 * NSPressureConfiguration — Force Touch trackpad pressure behavior.
 */
class NSPressureConfiguration
{
    public static function create(int pressureBehavior) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_pressureconfiguration_create((int) pressureBehavior);
        }%
        return handle;
    }

    public static function wrap(int nsPressureConfigurationPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_pressureconfiguration_wrap((void *)(uintptr_t) nsPressureConfigurationPtr);
        }%
        return handle;
    }

    public static function destroy(int configuration) -> void
    {
        %{
            ns_pressureconfiguration_destroy((uintptr_t) configuration);
        }%
    }

    public static function nsPressureConfiguration(int configuration) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_pressureconfiguration_nspressureconfiguration((uintptr_t) configuration);
        }%
        return ptr;
    }

    public static function pressureBehavior(int configuration) -> int
    {
        int value;
        %{
            value = (zend_long) ns_pressureconfiguration_pressure_behavior((uintptr_t) configuration);
        }%
        return value;
    }

    public static function set(int configuration) -> void
    {
        %{
            ns_pressureconfiguration_set((uintptr_t) configuration);
        }%
    }

    public static function setOnView(int view, int configuration) -> void
    {
        %{
            ns_view_set_pressure_configuration((uintptr_t) view, (uintptr_t) configuration);
        }%
    }

    public static function viewConfiguration(int view) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_view_pressure_configuration((uintptr_t) view);
        }%
        return handle;
    }
}

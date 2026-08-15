namespace AppKit\NS\NSColorSpace;

%{
#include "ns-colorspace.h"
#include <stdint.h>
}%

/**
 * NSColorSpace — sRGB, P3, device, and ICC color spaces.
 */
class NSColorSpace
{
    public static function wrap(int nsColorSpacePtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_colorspace_wrap((void *)(uintptr_t) nsColorSpacePtr);
        }%
        return handle;
    }

    public static function destroy(int space) -> void
    {
        %{
            ns_colorspace_destroy((uintptr_t) space);
        }%
    }

    /**
     * Standard space kind integer — see OKF nscolorspace.md.
     */
    public static function standard(int kind) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_colorspace_standard((int) kind);
        }%
        return handle;
    }

    public static function model(int space) -> int
    {
        int value;
        %{
            value = (zend_long) ns_colorspace_model((uintptr_t) space);
        }%
        return value;
    }

    public static function numberOfColorComponents(int space) -> int
    {
        int value;
        %{
            value = (zend_long) ns_colorspace_number_of_color_components((uintptr_t) space);
        }%
        return value;
    }

    public static function localizedName(int space) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_colorspace_localized_name((uintptr_t) space, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function availableCount(int model = -1) -> int
    {
        int count;
        %{
            count = (zend_long) ns_colorspace_available_count((int) model);
        }%
        return count;
    }

    public static function availableAt(int index, int model = -1) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_colorspace_available_at((int) model, (int) index);
        }%
        return handle;
    }

    public static function nsColorSpace(int space) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_colorspace_nscolorspace((uintptr_t) space);
        }%
        return ptr;
    }
}

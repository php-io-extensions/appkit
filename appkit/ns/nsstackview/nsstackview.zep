namespace AppKit\NS\NSStackView;

%{
#include "ns-stackview.h"
#include <stdint.h>
}%

/**
 * NSStackView auto-layout stack container.
 */
class NSStackView
{
    public static function create(int x, int y, int width, int height, bool vertical = true) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_stackview_create((double) x, (double) y, (double) width, (double) height, vertical ? 1 : 0);
        }%
        return handle;
    }

    public static function destroy(int stack) -> void
    {
        %{
            ns_stackview_destroy((uintptr_t) stack);
        }%
    }

    public static function setSpacing(int stack, double spacing) -> void
    {
        %{
            ns_stackview_set_spacing((uintptr_t) stack, (double) spacing);
        }%
    }

    public static function addArrangedSubview(int stack, int child) -> void
    {
        %{
            ns_stackview_add_arranged_subview((uintptr_t) stack, (uintptr_t) child);
        }%
    }
}

namespace AppKit\NS\NSAnimationContext;

%{
#include "ns-animationcontext.h"
#include <stdint.h>
}%

/**
 * NSAnimationContext — implicit animation grouping and duration.
 */
class NSAnimationContext
{
    public static function beginGrouping() -> void
    {
        %{
            ns_animationcontext_begin_grouping();
        }%
    }

    public static function endGrouping() -> void
    {
        %{
            ns_animationcontext_end_grouping();
        }%
    }

    public static function current() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_animationcontext_current();
        }%
        return handle;
    }

    public static function setDuration(int context, float duration) -> void
    {
        %{
            ns_animationcontext_set_duration((uintptr_t) context, (double) duration);
        }%
    }

    public static function getDuration(int context) -> double
    {
        double value;
        %{
            value = ns_animationcontext_get_duration((uintptr_t) context);
        }%
        return value;
    }

    public static function setAllowsImplicitAnimation(int context, bool enabled) -> void
    {
        %{
            ns_animationcontext_set_allows_implicit_animation((uintptr_t) context, enabled ? 1 : 0);
        }%
    }

    public static function getAllowsImplicitAnimation(int context) -> bool
    {
        bool result;
        %{
            result = ns_animationcontext_get_allows_implicit_animation((uintptr_t) context) == 1;
        }%
        return result;
    }
}

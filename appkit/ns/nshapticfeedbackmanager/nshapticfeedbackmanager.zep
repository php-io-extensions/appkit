namespace AppKit\NS\NSHapticFeedbackManager;

%{
#include "ns-hapticfeedbackmanager.h"
#include <stdint.h>
}%


/**
 * NSHapticFeedbackManager — Force Touch trackpad haptic feedback.
 */
class NSHapticFeedbackManager
{
    public static function defaultPerformer() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_hapticfeedbackmanager_default_performer();
        }%
        return handle;
    }

    public static function destroyPerformer(int performer) -> void
    {
        %{
            ns_hapticfeedbackmanager_destroy_performer((uintptr_t) performer);
        }%
    }

    public static function performFeedback(int performer, int pattern, int performanceTime = 0) -> void
    {
        %{
            ns_hapticfeedbackmanager_perform_feedback((uintptr_t) performer, (int) pattern, (int) performanceTime);
        }%
    }

    public static function performDefaultFeedback(int pattern, int performanceTime = 0) -> void
    {
        %{
            ns_hapticfeedbackmanager_perform_default_feedback((int) pattern, (int) performanceTime);
        }%
    }
}

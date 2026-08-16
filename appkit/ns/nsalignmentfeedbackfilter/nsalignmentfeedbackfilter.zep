namespace AppKit\NS\NSAlignmentFeedbackFilter;

%{
#include "ns-alignmentfeedbackfilter.h"
#include <stdint.h>
}%

/**
 * NSAlignmentFeedbackFilter — alignment haptic feedback during drag.
 */
class NSAlignmentFeedbackFilter
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_alignmentfeedbackfilter_create();
        }%
        return handle;
    }

    public static function wrap(int nsAlignmentFeedbackFilterPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_alignmentfeedbackfilter_wrap((void *)(uintptr_t) nsAlignmentFeedbackFilterPtr);
        }%
        return handle;
    }

    public static function destroy(int filter) -> void
    {
        %{
            ns_alignmentfeedbackfilter_destroy((uintptr_t) filter);
        }%
    }

    public static function nsAlignmentFeedbackFilter(int filter) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_alignmentfeedbackfilter_nsalignmentfeedbackfilter((uintptr_t) filter);
        }%
        return ptr;
    }

    public static function inputEventMask() -> int
    {
        int mask;
        %{
            mask = (zend_long) ns_alignmentfeedbackfilter_input_event_mask();
        }%
        return mask;
    }

    public static function updateWithEvent(int filter, int nsEventPtr) -> void
    {
        %{
            ns_alignmentfeedbackfilter_update_with_event((uintptr_t) filter, (void *)(uintptr_t) nsEventPtr);
        }%
    }

    public static function updateWithPanRecognizer(int filter, int recognizer) -> void
    {
        %{
            ns_alignmentfeedbackfilter_update_with_pan_recognizer((uintptr_t) filter, (uintptr_t) recognizer);
        }%
    }

    public static function tokenForMovement(int filter, int view, double prevX, double prevY, double alignedX, double alignedY, double defaultX, double defaultY) -> int
    {
        int token;
        %{
            token = (zend_long) ns_alignmentfeedbackfilter_token_for_movement(
                (uintptr_t) filter, (uintptr_t) view, prevX, prevY, alignedX, alignedY, defaultX, defaultY);
        }%
        return token;
    }

    public static function tokenForHorizontalMovement(int filter, int view, double previousX, double alignedX, double defaultX) -> int
    {
        int token;
        %{
            token = (zend_long) ns_alignmentfeedbackfilter_token_for_horizontal_movement(
                (uintptr_t) filter, (uintptr_t) view, previousX, alignedX, defaultX);
        }%
        return token;
    }

    public static function tokenForVerticalMovement(int filter, int view, double previousY, double alignedY, double defaultY) -> int
    {
        int token;
        %{
            token = (zend_long) ns_alignmentfeedbackfilter_token_for_vertical_movement(
                (uintptr_t) filter, (uintptr_t) view, previousY, alignedY, defaultY);
        }%
        return token;
    }

    public static function performFeedback(int filter, array tokens, int performanceTime) -> void
    {
        %{
            zval *entry;
            uintptr_t handles[64];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(tokens), entry) {
                if (count >= 64) {
                    break;
                }
                convert_to_long(entry);
                handles[count++] = (uintptr_t) Z_LVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
            ns_alignmentfeedbackfilter_perform_feedback((uintptr_t) filter, handles, count, (int) performanceTime);
        }%
    }

    public static function destroyToken(int token) -> void
    {
        %{
            ns_alignmentfeedbackfilter_destroy_token((uintptr_t) token);
        }%
    }
}

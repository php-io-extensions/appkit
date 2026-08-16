namespace AppKit\NS\NSDraggingSession;

%{
#include "ns-draggingsession.h"
#include <stdint.h>
}%

/** NSDraggingSession — active drag session state and pasteboard. */
class NSDraggingSession
{
    public static function wrap(int nsDraggingSessionPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_draggingsession_wrap((void *)(uintptr_t) nsDraggingSessionPtr);
        }%
        return handle;
    }

    public static function destroy(int session) -> void
    {
        %{
            ns_draggingsession_destroy((uintptr_t) session);
        }%
    }

    public static function nsDraggingSession(int session) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_draggingsession_nsdraggingsession((uintptr_t) session);
        }%
        return ptr;
    }

    public static function getDraggingFormation(int session) -> int
    {
        int value;
        %{
            value = (zend_long) ns_draggingsession_get_dragging_formation((uintptr_t) session);
        }%
        return value;
    }

    public static function setDraggingFormation(int session, int formation) -> void
    {
        %{
            ns_draggingsession_set_dragging_formation((uintptr_t) session, formation);
        }%
    }

    public static function animatesToStartingPositions(int session) -> bool
    {
        bool result;
        %{
            result = ns_draggingsession_get_animates_to_starting_positions((uintptr_t) session) == 1;
        }%
        return result;
    }

    public static function setAnimatesToStartingPositions(int session, bool value) -> void
    {
        %{
            ns_draggingsession_set_animates_to_starting_positions((uintptr_t) session, value ? 1 : 0);
        }%
    }

    public static function getDraggingLeaderIndex(int session) -> int
    {
        int value;
        %{
            value = (zend_long) ns_draggingsession_get_dragging_leader_index((uintptr_t) session);
        }%
        return value;
    }

    public static function setDraggingLeaderIndex(int session, int index) -> void
    {
        %{
            ns_draggingsession_set_dragging_leader_index((uintptr_t) session, (long long) index);
        }%
    }

    public static function draggingPasteboard(int session) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_draggingsession_dragging_pasteboard((uintptr_t) session);
        }%
        return handle;
    }

    public static function draggingSequenceNumber(int session) -> int
    {
        int value;
        %{
            value = (zend_long) ns_draggingsession_dragging_sequence_number((uintptr_t) session);
        }%
        return value;
    }

    public static function draggingLocation(int session) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0;
            ns_draggingsession_dragging_location((uintptr_t) session, &x, &y);
            add_assoc_double(&out, "x", x);
            add_assoc_double(&out, "y", y);
        }%
        return out;
    }
}

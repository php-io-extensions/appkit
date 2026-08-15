namespace AppKit\NS\NSResponder;

%{
#include "ns-responder.h"
#include <stdint.h>
}%

/**
 * NSResponder — first-responder chain base for NSView, NSWindow, controllers, etc.
 * Wrap borrowed native pointers from NSView::nsView(), NSWindow::nsWindow(), etc.
 */
class NSResponder
{
    /**
     * @return int Opaque responder handle, or 0 on failure
     */
    public static function wrap(int nsResponderPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_responder_wrap((void *)(uintptr_t) nsResponderPtr);
        }%
        return handle;
    }

    public static function destroy(int responder) -> void
    {
        %{
            ns_responder_destroy((uintptr_t) responder);
        }%
    }

    /**
     * @return int Borrowed NSResponder pointer, or 0
     */
    public static function nsResponder(int responder) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_responder_nsresponder((uintptr_t) responder);
        }%
        return ptr;
    }

    public static function acceptsFirstResponder(int responder) -> bool
    {
        bool result;
        %{
            result = ns_responder_accepts_first_responder((uintptr_t) responder) == 1;
        }%
        return result;
    }

    public static function becomeFirstResponder(int responder) -> bool
    {
        bool result;
        %{
            result = ns_responder_become_first_responder((uintptr_t) responder) == 1;
        }%
        return result;
    }

    public static function resignFirstResponder(int responder) -> bool
    {
        bool result;
        %{
            result = ns_responder_resign_first_responder((uintptr_t) responder) == 1;
        }%
        return result;
    }

    /**
     * @return int Borrowed nextResponder pointer, or 0
     */
    public static function nextResponder(int responder) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_responder_next_responder((uintptr_t) responder);
        }%
        return ptr;
    }
}

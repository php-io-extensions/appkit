namespace AppKit\NS\NSTextInputContext;

%{
#include "ns-textinputcontext.h"
#include <stdint.h>
}%


/**
 * NSTextInputContext — input method / marked text context.
 */
class NSTextInputContext
{
    public static function current() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textinputcontext_current();
        }%
        return handle;
    }

    public static function create(int clientPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textinputcontext_create((void *)(uintptr_t) clientPtr);
        }%
        return handle;
    }

    public static function wrap(int nsTextInputContextPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textinputcontext_wrap((void *)(uintptr_t) nsTextInputContextPtr);
        }%
        return handle;
    }

    public static function destroy(int context) -> void
    {
        %{
            ns_textinputcontext_destroy((uintptr_t) context);
        }%
    }

    public static function nsTextInputContext(int context) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_textinputcontext_nstextinputcontext((uintptr_t) context);
        }%
        return ptr;
    }

    public static function client(int context) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_textinputcontext_client((uintptr_t) context);
        }%
        return ptr;
    }

    public static function setAcceptsGlyphInfo(int context, bool flag) -> void
    {
        %{
            ns_textinputcontext_set_accepts_glyph_info((uintptr_t) context, flag ? 1 : 0);
        }%
    }

    public static function acceptsGlyphInfo(int context) -> bool
    {
        bool result;
        %{
            result = ns_textinputcontext_accepts_glyph_info((uintptr_t) context) == 1;
        }%
        return result;
    }

    public static function activate(int context) -> void
    {
        %{
            ns_textinputcontext_activate((uintptr_t) context);
        }%
    }

    public static function deactivate(int context) -> void
    {
        %{
            ns_textinputcontext_deactivate((uintptr_t) context);
        }%
    }

    public static function handleEvent(int context, int nseventPtr) -> bool
    {
        bool result;
        %{
            result = ns_textinputcontext_handle_event((uintptr_t) context, (void *)(uintptr_t) nseventPtr) == 1;
        }%
        return result;
    }

    public static function discardMarkedText(int context) -> void
    {
        %{
            ns_textinputcontext_discard_marked_text((uintptr_t) context);
        }%
    }

    public static function invalidateCharacterCoordinates(int context) -> void
    {
        %{
            ns_textinputcontext_invalidate_character_coordinates((uintptr_t) context);
        }%
    }
}

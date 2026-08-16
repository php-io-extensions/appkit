namespace AppKit\NS\NSTouchBar;

%{
#include "ns-touchbar.h"
#include <stdint.h>
}%

/** NSTouchBar customization bar */
class NSTouchBar
{
    public static function create() -> int
    { int handle; %{ handle = (zend_long) ns_touchbar_create(); }% return handle; }
    public static function wrap(int nsTouchBarPtr) -> int
    {
        int handle;
        %{ handle = (zend_long) ns_touchbar_wrap((void *)(uintptr_t) nsTouchBarPtr); }%
        return handle;
    }
    public static function destroy(int bar) -> void
    {
        %{ ns_touchbar_destroy((uintptr_t) bar); }%
    }
    public static function nsTouchBar(int bar) -> int
    {
        int ptr;
        %{ ptr = (zend_long)(uintptr_t) ns_touchbar_nstouchbar((uintptr_t) bar); }%
        return ptr;
    }

    public static function setCustomizationIdentifier(int bar, string identifier) -> void
    { %{ ns_touchbar_set_customization_identifier((uintptr_t) bar, Z_STRVAL(identifier)); }% }
    public static function getCustomizationIdentifier(int bar) -> string
    {
        %{ char buf[4096]; buf[0] = '\0'; if (ns_touchbar_get_customization_identifier((uintptr_t) bar, buf, (int) sizeof(buf))) { RETURN_STRING(buf); } RETURN_EMPTY_STRING(); }%
        return "";
    }

    public static function setDefaultItemIdentifiers(int bar, array identifiers) -> void
    { %{
            zval *entry;
            const char *cstrings[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(identifiers), entry) {
                if (count >= 256) { break; }
                convert_to_string(entry);
                cstrings[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
        ns_touchbar_set_default_item_identifiers((uintptr_t) bar, cstrings, count);
    }% }
    public static function getDefaultItemIdentifiers(int bar) -> array
    { array out = []; %{
        int count = ns_touchbar_default_item_identifiers_count((uintptr_t) bar);
        int i; char buf[4096];
        for (i = 0; i < count; i++) { buf[0] = '\0'; if (ns_touchbar_default_item_identifier_at((uintptr_t) bar, i, buf, (int) sizeof(buf))) add_next_index_string(&out, buf); }
    }% return out; }
    public static function setTemplateItems(int bar, array items) -> void
    { %{
        zval *entry; uintptr_t handles[256]; int count = 0;
        ZEND_HASH_FOREACH_VAL(Z_ARRVAL(items), entry) {
            if (count >= 256) break;
            convert_to_long(entry);
            handles[count++] = (uintptr_t) Z_LVAL_P(entry);
        } ZEND_HASH_FOREACH_END();
        ns_touchbar_set_template_items((uintptr_t) bar, handles, count);
    }% }
    public static function getItemIdentifiers(int bar) -> array
    { array out = []; %{
        int count = ns_touchbar_item_identifiers_count((uintptr_t) bar); int i; char buf[4096];
        for (i = 0; i < count; i++) { buf[0] = '\0'; if (ns_touchbar_item_identifier_at((uintptr_t) bar, i, buf, (int) sizeof(buf))) add_next_index_string(&out, buf); }
    }% return out; }
    public static function itemForIdentifier(int bar, string identifier) -> int
    { int h; %{ h = (zend_long) ns_touchbar_item_for_identifier((uintptr_t) bar, Z_STRVAL(identifier)); }% return h; }
    public static function isVisible(int bar) -> bool
    { bool r; %{ r = ns_touchbar_is_visible((uintptr_t) bar) == 1; }% return r; }
    public static function assignToResponder(int bar, int responder) -> void
    { %{ ns_touchbar_assign_to_responder((uintptr_t) bar, (uintptr_t) responder); }% }
    public static function touchBarFromResponder(int responder) -> int
    { int h; %{ h = (zend_long) ns_touchbar_from_responder((uintptr_t) responder); }% return h; }
    public static function setAutomaticCustomizeTouchBarMenuItemEnabled(bool enabled) -> void
    { %{ ns_touchbar_set_automatic_customize_menu_item_enabled(enabled ? 1 : 0); }% }
    public static function isAutomaticCustomizeTouchBarMenuItemEnabled() -> bool
    { bool r; %{ r = ns_touchbar_is_automatic_customize_menu_item_enabled() == 1; }% return r; }
}

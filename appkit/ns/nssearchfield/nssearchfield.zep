namespace AppKit\NS\NSSearchField;

%{
#include "ns-searchfield.h"
#include <stdint.h>
}%


/**
 * NSSearchField — search field with recents.
 */
class NSSearchField
{
    public static function create(int x, int y, int width, int height, string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_searchfield_create((double) x, (double) y, (double) width, (double) height, Z_STRVAL(value));
        }%
        return handle;
    }

    public static function destroy(int field) -> void
    {
        %{
            ns_searchfield_destroy((uintptr_t) field);
        }%
    }

    public static function setStringValue(int field, string value) -> void
    {
        %{
            ns_searchfield_set_string((uintptr_t) field, Z_STRVAL(value));
        }%
    }

    public static function getStringValue(int field) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_searchfield_get_string((uintptr_t) field, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setRecentSearches(int field, array searches) -> void
    {
        %{
            zval *item;
            const char *cnames[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(searches), item) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(item);
                cnames[count++] = Z_STRVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            ns_searchfield_set_recent_searches((uintptr_t) field, cnames, count);
        }%
    }

    public static function getRecentSearches(int field) -> array
    {
        array out = [];
        %{
            int count = ns_searchfield_recent_searches_count((uintptr_t) field);
            int i;
            for (i = 0; i < count; i++) {
                char buf[4096];
                buf[0] = '\0';
                if (ns_searchfield_recent_search_at((uintptr_t) field, i, buf, (int) sizeof(buf))) {
                    add_next_index_string(&out, buf);
                }
            }
        }%
        return out;
    }

    public static function setRecentsAutosaveName(int field, string name) -> void
    {
        %{
            ns_searchfield_set_recents_autosave_name((uintptr_t) field, Z_STRVAL(name));
        }%
    }

    public static function getRecentsAutosaveName(int field) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_searchfield_get_recents_autosave_name((uintptr_t) field, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setSendsWholeSearchString(int field, bool flag) -> void
    {
        %{
            ns_searchfield_set_sends_whole_search_string((uintptr_t) field, flag ? 1 : 0);
        }%
    }

    public static function sendsWholeSearchString(int field) -> bool
    {
        bool result;
        %{
            result = ns_searchfield_sends_whole_search_string((uintptr_t) field) == 1;
        }%
        return result;
    }

    public static function setMaximumRecents(int field, int maximum) -> void
    {
        %{
            ns_searchfield_set_maximum_recents((uintptr_t) field, (int) maximum);
        }%
    }

    public static function maximumRecents(int field) -> int
    {
        int value;
        %{
            value = (zend_long) ns_searchfield_maximum_recents((uintptr_t) field);
        }%
        return value;
    }

    public static function setSendsSearchStringImmediately(int field, bool flag) -> void
    {
        %{
            ns_searchfield_set_sends_search_string_immediately((uintptr_t) field, flag ? 1 : 0);
        }%
    }

    public static function sendsSearchStringImmediately(int field) -> bool
    {
        bool result;
        %{
            result = ns_searchfield_sends_search_string_immediately((uintptr_t) field) == 1;
        }%
        return result;
    }

    public static function pollChange(int field) -> bool
    {
        bool result;
        %{
            result = ns_searchfield_poll_change((uintptr_t) field) == 1;
        }%
        return result;
    }
}

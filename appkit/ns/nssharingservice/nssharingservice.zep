namespace AppKit\NS\NSSharingService;

%{
#include "ns-sharingservice.h"
#include <stdint.h>
}%

/** NSSharingService — built-in and custom share services. */
class NSSharingService
{
    public static function named(string serviceName) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_sharingservice_named(Z_STRVAL(serviceName));
        }%
        return handle;
    }

    public static function wrap(int nsSharingServicePtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_sharingservice_wrap((void *)(uintptr_t) nsSharingServicePtr);
        }%
        return handle;
    }

    public static function destroy(int service) -> void
    {
        %{
            ns_sharingservice_destroy((uintptr_t) service);
        }%
    }

    public static function nsSharingService(int service) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_sharingservice_nssharingservice((uintptr_t) service);
        }%
        return ptr;
    }

    public static function getTitle(int service) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_sharingservice_title((uintptr_t) service, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function getMenuItemTitle(int service) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_sharingservice_menu_item_title((uintptr_t) service, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setMenuItemTitle(int service, string title) -> void
    {
        %{
            ns_sharingservice_set_menu_item_title((uintptr_t) service, Z_STRVAL(title));
        }%
    }

    public static function getSubject(int service) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_sharingservice_subject((uintptr_t) service, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setSubject(int service, string subject) -> void
    {
        %{
            ns_sharingservice_set_subject((uintptr_t) service, Z_STRVAL(subject));
        }%
    }

    public static function setRecipients(int service, array recipients) -> void
    {
        %{
            zval *entry;
            const char *cstrings[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(recipients), entry) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(entry);
                cstrings[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
            ns_sharingservice_set_recipients((uintptr_t) service, cstrings, count);
        }%
    }

    public static function getRecipients(int service) -> array
    {
        array out = [];
        %{
            int count = ns_sharingservice_recipients_count((uintptr_t) service);
            int i;
            for (i = 0; i < count; i++) {
                char buf[4096];
                buf[0] = '\0';
                if (ns_sharingservice_recipient_at((uintptr_t) service, i, buf, (int) sizeof(buf))) {
                    add_next_index_string(&out, buf);
                }
            }
        }%
        return out;
    }

    public static function canPerformWithStrings(int service, array strings) -> bool
    {
        bool result;
        %{
            zval *entry;
            const char *cstrings[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(strings), entry) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(entry);
                cstrings[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
            result = ns_sharingservice_can_perform_with_strings((uintptr_t) service, cstrings, count) == 1;
        }%
        return result;
    }

    public static function performWithStrings(int service, array strings) -> void
    {
        %{
            zval *entry;
            const char *cstrings[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(strings), entry) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(entry);
                cstrings[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
            ns_sharingservice_perform_with_strings((uintptr_t) service, cstrings, count);
        }%
    }
}

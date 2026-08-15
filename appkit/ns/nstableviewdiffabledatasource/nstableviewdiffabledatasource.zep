namespace AppKit\NS\NSTableViewDiffableDataSource;

%{
#include "ns-tableviewdiffable.h"
#include <stdint.h>
}%


/**
 * Simplified string-identifier NSTableViewDiffableDataSource.
 */
class NSTableViewDiffableDataSource
{
    public static function create(int table) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tableviewdiffable_create((uintptr_t) table);
        }%
        return handle;
    }
    public static function destroy(int source) -> void
    {
        %{
            ns_tableviewdiffable_destroy((uintptr_t) source);
        }%
    }
    public static function setItemTitle(int source, string itemId, string title) -> void
    {
        %{
            ns_tableviewdiffable_set_item_title((uintptr_t) source, Z_STRVAL(itemId), Z_STRVAL(title));
        }%
    }

    public static function apply(int source, string sectionId, array itemIds, bool animating = true) -> void
    {
        %{
            zval *item;
            const char *cids[1024];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(itemIds), item) {
                if (count >= 1024) {
                    break;
                }
                convert_to_string(item);
                cids[count++] = Z_STRVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            ns_tableviewdiffable_apply((uintptr_t) source, Z_STRVAL(sectionId), cids, count, animating ? 1 : 0);
        }%
    }
    public static function itemCount(int source) -> int
    {
        int value;
        %{
            value = (zend_long) ns_tableviewdiffable_item_count((uintptr_t) source);
        }%
        return value;
    }
    public static function itemIdAt(int source, int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_tableviewdiffable_item_id_at((uintptr_t) source, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}

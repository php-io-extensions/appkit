namespace AppKit\NS\NSScrubberFlowLayout;

%{
#include "ns-scrubberflowlayout.h"
#include <stdint.h>
}%

/**
 * NSScrubberFlowLayout — linear end-to-end scrubber item layout.
 */
class NSScrubberFlowLayout
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_scrubberflowlayout_create();
        }%
        return handle;
    }

    public static function wrap(int nsScrubberFlowLayoutPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_scrubberflowlayout_wrap((void *)(uintptr_t) nsScrubberFlowLayoutPtr);
        }%
        return handle;
    }

    public static function destroy(int layout) -> void
    {
        %{
            ns_scrubberflowlayout_destroy((uintptr_t) layout);
        }%
    }

    public static function nsScrubberFlowLayout(int layout) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_scrubberflowlayout_nsscrubberflowlayout((uintptr_t) layout);
        }%
        return ptr;
    }

    public static function setItemSpacing(int layout, double spacing) -> void
    {
        %{
            ns_scrubberflowlayout_set_item_spacing((uintptr_t) layout, spacing);
        }%
    }

    public static function getItemSpacing(int layout) -> double
    {
        double value;
        %{
            value = ns_scrubberflowlayout_get_item_spacing((uintptr_t) layout);
        }%
        return value;
    }

    public static function setItemSize(int layout, double width, double height) -> void
    {
        %{
            ns_scrubberflowlayout_set_item_size((uintptr_t) layout, width, height);
        }%
    }

    /**
     * @return array [width, height] or empty array
     */
    public static function getItemSize(int layout) -> array
    {
        array out = [];
        %{
            double w = 0.0, h = 0.0;
            if (ns_scrubberflowlayout_get_item_size((uintptr_t) layout, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }

    public static function invalidateItemsAtIndexes(int layout, array indexes) -> void
    {
        %{
            int count = (int) zend_hash_num_elements(Z_ARRVAL(indexes));
            if (count <= 0) {
                return;
            }
            int *buf = (int *) ecalloc((size_t) count, sizeof(int));
            int n = 0;
            zval *item;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(indexes), item) {
                if (Z_TYPE_P(item) == IS_LONG) {
                    buf[n++] = (int) Z_LVAL_P(item);
                } else if (Z_TYPE_P(item) == IS_DOUBLE) {
                    buf[n++] = (int) Z_DVAL_P(item);
                }
            } ZEND_HASH_FOREACH_END();
            if (n > 0) {
                ns_scrubberflowlayout_invalidate_items_at_indexes((uintptr_t) layout, buf, n);
            }
            efree(buf);
        }%
    }
}

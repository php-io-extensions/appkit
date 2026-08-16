namespace AppKit\NS\NSPickerTouchBarItem;

%{
#include "ns-pickertouchbaritem.h"
#include <stdint.h>
}%

/** NSPickerTouchBarItem */
class NSPickerTouchBarItem
{

    public static function pickerWithLabels(string identifier, array labels, int selectionMode) -> int { int h; %{
            zval *entry;
            const char *cstrings[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(labels), entry) {
                if (count >= 256) { break; }
                convert_to_string(entry);
                cstrings[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
        h = (zend_long) ns_pickertouchbaritem_picker_with_labels(Z_STRVAL(identifier), cstrings, count, (int) selectionMode);
    }% return h; }
    public static function wrap(int ptr) -> int
    {
        int handle;
        %{ handle = (zend_long) ns_pickertouchbaritem_wrap((void *)(uintptr_t) ptr); }%
        return handle;
    }
    public static function destroy(int item) -> void
    {
        %{ ns_pickertouchbaritem_destroy((uintptr_t) item); }%
    }
    public static function nsPickerTouchBarItem(int item) -> int
    {
        int ptr;
        %{ ptr = (zend_long)(uintptr_t) ns_pickertouchbaritem_nspickertouchbaritem((uintptr_t) item); }%
        return ptr;
    }

    public static function setSelectedIndex(int item, int index) -> void { %{ ns_pickertouchbaritem_set_selected_index((uintptr_t) item, (int) index); }% }
    public static function getSelectedIndex(int item) -> int { int v; %{ v = (zend_long) ns_pickertouchbaritem_get_selected_index((uintptr_t) item); }% return v; }
    public static function pollAction(int item) -> bool { bool r; %{ r = ns_pickertouchbaritem_poll_action((uintptr_t) item) == 1; }% return r; }
}

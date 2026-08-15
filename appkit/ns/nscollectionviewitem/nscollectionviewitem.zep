namespace AppKit\NS\NSCollectionViewItem;

%{
#include "ns-collectionviewitem.h"
#include <stdint.h>
}%


/**
 * NSCollectionViewItem view controller for collection items.
 */
class NSCollectionViewItem
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_collectionviewitem_create();
        }%
        return handle;
    }
    public static function wrap(int nsCollectionViewItemPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_collectionviewitem_wrap((void *)(uintptr_t) nsCollectionViewItemPtr);
        }%
        return handle;
    }
    public static function destroy(int item) -> void
    {
        %{
            ns_collectionviewitem_destroy((uintptr_t) item);
        }%
    }
    public static function nsCollectionViewItem(int item) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_collectionviewitem_nscollectionviewitem((uintptr_t) item);
        }%
        return ptr;
    }
    public static function setView(int item, int view) -> void
    {
        %{
            ns_collectionviewitem_set_view((uintptr_t) item, (uintptr_t) view);
        }%
    }
    public static function view(int item) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_collectionviewitem_view((uintptr_t) item);
        }%
        return handle;
    }
    public static function setTitle(int item, string title) -> void
    {
        %{
            ns_collectionviewitem_set_title((uintptr_t) item, Z_STRVAL(title));
        }%
    }
    public static function getTitle(int item) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_collectionviewitem_get_title((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function setText(int item, string text) -> void
    {
        %{
            ns_collectionviewitem_set_text((uintptr_t) item, Z_STRVAL(text));
        }%
    }
    public static function getText(int item) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_collectionviewitem_get_text((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function setSelected(int item, bool flag) -> void
    {
        %{
            ns_collectionviewitem_set_selected((uintptr_t) item, flag ? 1 : 0);
        }%
    }
    public static function isSelected(int item) -> bool
    {
        bool result;
        %{
            result = ns_collectionviewitem_is_selected((uintptr_t) item) == 1;
        }%
        return result;
    }
    public static function setHighlightState(int item, int state) -> void
    {
        %{
            ns_collectionviewitem_set_highlight_state((uintptr_t) item, (int) state);
        }%
    }
    public static function getHighlightState(int item) -> int
    {
        int value;
        %{
            value = (zend_long) ns_collectionviewitem_get_highlight_state((uintptr_t) item);
        }%
        return value;
    }
    public static function textField(int item) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_collectionviewitem_text_field((uintptr_t) item);
        }%
        return handle;
    }
    public static function imageView(int item) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_collectionviewitem_image_view((uintptr_t) item);
        }%
        return handle;
    }
}

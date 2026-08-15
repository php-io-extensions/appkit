#ifndef PHP_APPKIT_NS_COLLECTIONVIEWITEM_H
#define PHP_APPKIT_NS_COLLECTIONVIEWITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_COLLECTION_VIEW_ITEM_HIGHLIGHT_NONE = 0,
    NS_COLLECTION_VIEW_ITEM_HIGHLIGHT_FOR_SELECTION = 1,
    NS_COLLECTION_VIEW_ITEM_HIGHLIGHT_FOR_DESELECTION = 2,
    NS_COLLECTION_VIEW_ITEM_HIGHLIGHT_AS_DROP_TARGET = 3
} ns_collection_view_item_highlight_state;

uintptr_t ns_collectionviewitem_create(void);
uintptr_t ns_collectionviewitem_wrap(void *item);
void ns_collectionviewitem_destroy(uintptr_t item);
void *ns_collectionviewitem_nscollectionviewitem(uintptr_t item);
void ns_collectionviewitem_set_view(uintptr_t item, uintptr_t view);
uintptr_t ns_collectionviewitem_view(uintptr_t item);
void ns_collectionviewitem_set_title(uintptr_t item, const char *title);
int ns_collectionviewitem_get_title(uintptr_t item, char *out, int out_len);
void ns_collectionviewitem_set_text(uintptr_t item, const char *text);
int ns_collectionviewitem_get_text(uintptr_t item, char *out, int out_len);
void ns_collectionviewitem_set_selected(uintptr_t item, int flag);
int ns_collectionviewitem_is_selected(uintptr_t item);
void ns_collectionviewitem_set_highlight_state(uintptr_t item, int state);
int ns_collectionviewitem_get_highlight_state(uintptr_t item);
uintptr_t ns_collectionviewitem_text_field(uintptr_t item);
uintptr_t ns_collectionviewitem_image_view(uintptr_t item);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLLECTIONVIEWITEM_H */

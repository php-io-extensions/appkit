#ifndef PHP_APPKIT_NS_COLLECTIONVIEWFLOWLAYOUT_H
#define PHP_APPKIT_NS_COLLECTIONVIEWFLOWLAYOUT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_COLLECTION_VIEW_SCROLL_DIRECTION_VERTICAL = 0,
    NS_COLLECTION_VIEW_SCROLL_DIRECTION_HORIZONTAL = 1
} ns_collection_view_scroll_direction;

uintptr_t ns_collectionviewflowlayout_create(void);
uintptr_t ns_collectionviewflowlayout_wrap(void *layout);
void ns_collectionviewflowlayout_destroy(uintptr_t layout);
void *ns_collectionviewflowlayout_nscollectionviewflowlayout(uintptr_t layout);
void ns_collectionviewflowlayout_set_item_size(uintptr_t layout, double width, double height);
int ns_collectionviewflowlayout_get_item_size(uintptr_t layout, double *width, double *height);
void ns_collectionviewflowlayout_set_estimated_item_size(uintptr_t layout, double width, double height);
int ns_collectionviewflowlayout_get_estimated_item_size(uintptr_t layout, double *width, double *height);
void ns_collectionviewflowlayout_set_minimum_line_spacing(uintptr_t layout, double spacing);
double ns_collectionviewflowlayout_get_minimum_line_spacing(uintptr_t layout);
void ns_collectionviewflowlayout_set_minimum_interitem_spacing(uintptr_t layout, double spacing);
double ns_collectionviewflowlayout_get_minimum_interitem_spacing(uintptr_t layout);
void ns_collectionviewflowlayout_set_scroll_direction(uintptr_t layout, int direction);
int ns_collectionviewflowlayout_get_scroll_direction(uintptr_t layout);
void ns_collectionviewflowlayout_set_header_reference_size(uintptr_t layout, double width, double height);
int ns_collectionviewflowlayout_get_header_reference_size(uintptr_t layout, double *width, double *height);
void ns_collectionviewflowlayout_set_footer_reference_size(uintptr_t layout, double width, double height);
int ns_collectionviewflowlayout_get_footer_reference_size(uintptr_t layout, double *width, double *height);
void ns_collectionviewflowlayout_set_section_inset(uintptr_t layout, double top, double left, double bottom, double right);
void ns_collectionviewflowlayout_set_section_headers_pin(uintptr_t layout, int flag);
int ns_collectionviewflowlayout_section_headers_pin(uintptr_t layout);
void ns_collectionviewflowlayout_set_section_footers_pin(uintptr_t layout, int flag);
int ns_collectionviewflowlayout_section_footers_pin(uintptr_t layout);
int ns_collectionviewflowlayout_section_is_collapsed(uintptr_t layout, int section);
void ns_collectionviewflowlayout_collapse_section(uintptr_t layout, int section);
void ns_collectionviewflowlayout_expand_section(uintptr_t layout, int section);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLLECTIONVIEWFLOWLAYOUT_H */

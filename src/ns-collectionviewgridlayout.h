#ifndef PHP_APPKIT_NS_COLLECTIONVIEWGRIDLAYOUT_H
#define PHP_APPKIT_NS_COLLECTIONVIEWGRIDLAYOUT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_collectionviewgridlayout_create(void);
uintptr_t ns_collectionviewgridlayout_wrap(void *layout);
void ns_collectionviewgridlayout_destroy(uintptr_t layout);
void *ns_collectionviewgridlayout_nscollectionviewgridlayout(uintptr_t layout);
void ns_collectionviewgridlayout_set_margins(uintptr_t layout, double top, double left, double bottom, double right);
void ns_collectionviewgridlayout_set_minimum_interitem_spacing(uintptr_t layout, double spacing);
double ns_collectionviewgridlayout_get_minimum_interitem_spacing(uintptr_t layout);
void ns_collectionviewgridlayout_set_minimum_line_spacing(uintptr_t layout, double spacing);
double ns_collectionviewgridlayout_get_minimum_line_spacing(uintptr_t layout);
void ns_collectionviewgridlayout_set_maximum_number_of_rows(uintptr_t layout, int rows);
int ns_collectionviewgridlayout_get_maximum_number_of_rows(uintptr_t layout);
void ns_collectionviewgridlayout_set_maximum_number_of_columns(uintptr_t layout, int columns);
int ns_collectionviewgridlayout_get_maximum_number_of_columns(uintptr_t layout);
void ns_collectionviewgridlayout_set_minimum_item_size(uintptr_t layout, double width, double height);
int ns_collectionviewgridlayout_get_minimum_item_size(uintptr_t layout, double *width, double *height);
void ns_collectionviewgridlayout_set_maximum_item_size(uintptr_t layout, double width, double height);
int ns_collectionviewgridlayout_get_maximum_item_size(uintptr_t layout, double *width, double *height);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLLECTIONVIEWGRIDLAYOUT_H */

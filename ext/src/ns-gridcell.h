#ifndef PHP_APPKIT_NS_GRIDCELL_H
#define PHP_APPKIT_NS_GRIDCELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_gridcell_wrap(void *cell);
void ns_gridcell_destroy(uintptr_t cell);
void *ns_gridcell_nsgridcell(uintptr_t cell);
void ns_gridcell_set_content_view(uintptr_t cell, uintptr_t view);
uintptr_t ns_gridcell_content_view(uintptr_t cell);
uintptr_t ns_gridcell_row(uintptr_t cell);
uintptr_t ns_gridcell_column(uintptr_t cell);
void ns_gridcell_set_x_placement(uintptr_t cell, int placement);
int ns_gridcell_get_x_placement(uintptr_t cell);
void ns_gridcell_set_y_placement(uintptr_t cell, int placement);
int ns_gridcell_get_y_placement(uintptr_t cell);
void ns_gridcell_set_row_alignment(uintptr_t cell, int alignment);
int ns_gridcell_get_row_alignment(uintptr_t cell);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_GRIDCELL_H */

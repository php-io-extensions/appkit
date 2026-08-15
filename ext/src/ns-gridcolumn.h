#ifndef PHP_APPKIT_NS_GRIDCOLUMN_H
#define PHP_APPKIT_NS_GRIDCOLUMN_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_gridcolumn_wrap(void *column);
void ns_gridcolumn_destroy(uintptr_t column);
void *ns_gridcolumn_nsgridcolumn(uintptr_t column);
int ns_gridcolumn_number_of_cells(uintptr_t column);
uintptr_t ns_gridcolumn_cell_at(uintptr_t column, int index);
void ns_gridcolumn_set_x_placement(uintptr_t column, int placement);
int ns_gridcolumn_get_x_placement(uintptr_t column);
void ns_gridcolumn_set_width(uintptr_t column, double width);
double ns_gridcolumn_get_width(uintptr_t column);
void ns_gridcolumn_set_leading_padding(uintptr_t column, double padding);
double ns_gridcolumn_get_leading_padding(uintptr_t column);
void ns_gridcolumn_set_trailing_padding(uintptr_t column, double padding);
double ns_gridcolumn_get_trailing_padding(uintptr_t column);
void ns_gridcolumn_set_hidden(uintptr_t column, int flag);
int ns_gridcolumn_is_hidden(uintptr_t column);
void ns_gridcolumn_merge_cells(uintptr_t column, int start, int length);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_GRIDCOLUMN_H */

#ifndef PHP_APPKIT_NS_GRIDVIEW_H
#define PHP_APPKIT_NS_GRIDVIEW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_gridview_create(double x, double y, double width, double height);

void ns_gridview_destroy(uintptr_t grid);

void ns_gridview_add_view(uintptr_t grid, uintptr_t child, int row, int column);

void ns_gridview_set_row_spacing(uintptr_t grid, double spacing);

void ns_gridview_set_column_spacing(uintptr_t grid, double spacing);

int ns_gridview_number_of_rows(uintptr_t grid);

int ns_gridview_number_of_columns(uintptr_t grid);

uintptr_t ns_gridview_row_at(uintptr_t grid, int index);

uintptr_t ns_gridview_column_at(uintptr_t grid, int index);

uintptr_t ns_gridview_cell_at(uintptr_t grid, int column, int row);

double ns_gridview_size_for_content(void);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_GRIDVIEW_H */

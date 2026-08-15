#ifndef PHP_APPKIT_NS_GRIDROW_H
#define PHP_APPKIT_NS_GRIDROW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_GRID_CELL_PLACEMENT_INHERITED = 0,
    NS_GRID_CELL_PLACEMENT_NONE = 1,
    NS_GRID_CELL_PLACEMENT_LEADING = 2,
    NS_GRID_CELL_PLACEMENT_TOP = 2,
    NS_GRID_CELL_PLACEMENT_TRAILING = 3,
    NS_GRID_CELL_PLACEMENT_BOTTOM = 3,
    NS_GRID_CELL_PLACEMENT_CENTER = 4,
    NS_GRID_CELL_PLACEMENT_FILL = 5
} ns_grid_cell_placement;

typedef enum {
    NS_GRID_ROW_ALIGNMENT_INHERITED = 0,
    NS_GRID_ROW_ALIGNMENT_NONE = 1,
    NS_GRID_ROW_ALIGNMENT_FIRST_BASELINE = 2,
    NS_GRID_ROW_ALIGNMENT_LAST_BASELINE = 3
} ns_grid_row_alignment;

uintptr_t ns_gridrow_wrap(void *row);
void ns_gridrow_destroy(uintptr_t row);
void *ns_gridrow_nsgridrow(uintptr_t row);
int ns_gridrow_number_of_cells(uintptr_t row);
uintptr_t ns_gridrow_cell_at(uintptr_t row, int index);
void ns_gridrow_set_y_placement(uintptr_t row, int placement);
int ns_gridrow_get_y_placement(uintptr_t row);
void ns_gridrow_set_row_alignment(uintptr_t row, int alignment);
int ns_gridrow_get_row_alignment(uintptr_t row);
void ns_gridrow_set_height(uintptr_t row, double height);
double ns_gridrow_get_height(uintptr_t row);
void ns_gridrow_set_top_padding(uintptr_t row, double padding);
double ns_gridrow_get_top_padding(uintptr_t row);
void ns_gridrow_set_bottom_padding(uintptr_t row, double padding);
double ns_gridrow_get_bottom_padding(uintptr_t row);
void ns_gridrow_set_hidden(uintptr_t row, int flag);
int ns_gridrow_is_hidden(uintptr_t row);
void ns_gridrow_merge_cells(uintptr_t row, int start, int length);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_GRIDROW_H */

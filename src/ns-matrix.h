#ifndef PHP_APPKIT_NS_MATRIX_H
#define PHP_APPKIT_NS_MATRIX_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_MATRIX_MODE_RADIO = 0,
    NS_MATRIX_MODE_HIGHLIGHT = 1,
    NS_MATRIX_MODE_LIST = 2,
    NS_MATRIX_MODE_TRACK = 3
} ns_matrix_mode;

uintptr_t ns_matrix_create(double x, double y, double width, double height);
void ns_matrix_destroy(uintptr_t matrix);
void ns_matrix_set_mode(uintptr_t matrix, int mode);
int ns_matrix_get_mode(uintptr_t matrix);
int ns_matrix_number_of_rows(uintptr_t matrix);
int ns_matrix_number_of_columns(uintptr_t matrix);
void ns_matrix_add_row(uintptr_t matrix);
void ns_matrix_add_column(uintptr_t matrix);
int ns_matrix_selected_row(uintptr_t matrix);
int ns_matrix_selected_column(uintptr_t matrix);
void ns_matrix_select_cell_at(uintptr_t matrix, int row, int column);
uintptr_t ns_matrix_cell_at(uintptr_t matrix, int row, int column);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_MATRIX_H */

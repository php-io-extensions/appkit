#ifndef PHP_APPKIT_NS_PREDICATEEDITOR_H
#define PHP_APPKIT_NS_PREDICATEEDITOR_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_PREDICATEEDITOR_NESTING_MODE_SINGLE = 0,
    NS_PREDICATEEDITOR_NESTING_MODE_LIST = 1,
    NS_PREDICATEEDITOR_NESTING_MODE_COMPOUND = 2,
    NS_PREDICATEEDITOR_NESTING_MODE_SIMPLE = 3
} ns_predicateeditor_nesting_mode;

uintptr_t ns_predicateeditor_create(double x, double y, double width, double height);
void ns_predicateeditor_destroy(uintptr_t editor);
void ns_predicateeditor_set_editable(uintptr_t editor, int flag);
int ns_predicateeditor_is_editable(uintptr_t editor);
int ns_predicateeditor_number_of_rows(uintptr_t editor);
void ns_predicateeditor_add_row(uintptr_t editor);
void ns_predicateeditor_remove_row_at(uintptr_t editor, int index);
void ns_predicateeditor_set_nesting_mode(uintptr_t editor, int mode);
int ns_predicateeditor_get_nesting_mode(uintptr_t editor);
void ns_predicateeditor_set_can_remove_all_rows(uintptr_t editor, int flag);
int ns_predicateeditor_can_remove_all_rows(uintptr_t editor);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PREDICATEEDITOR_H */

#ifndef PHP_APPKIT_NS_RULEEDITOR_H
#define PHP_APPKIT_NS_RULEEDITOR_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_RULEEDITOR_NESTING_MODE_SINGLE = 0,
    NS_RULEEDITOR_NESTING_MODE_LIST = 1,
    NS_RULEEDITOR_NESTING_MODE_COMPOUND = 2,
    NS_RULEEDITOR_NESTING_MODE_SIMPLE = 3
} ns_ruleeditor_nesting_mode;

uintptr_t ns_ruleeditor_create(double x, double y, double width, double height);
void ns_ruleeditor_destroy(uintptr_t editor);
void ns_ruleeditor_set_editable(uintptr_t editor, int flag);
int ns_ruleeditor_is_editable(uintptr_t editor);
int ns_ruleeditor_number_of_rows(uintptr_t editor);
void ns_ruleeditor_add_row(uintptr_t editor);
void ns_ruleeditor_remove_row_at(uintptr_t editor, int index);
void ns_ruleeditor_set_nesting_mode(uintptr_t editor, int mode);
int ns_ruleeditor_get_nesting_mode(uintptr_t editor);
void ns_ruleeditor_set_can_remove_all_rows(uintptr_t editor, int flag);
int ns_ruleeditor_can_remove_all_rows(uintptr_t editor);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_RULEEDITOR_H */

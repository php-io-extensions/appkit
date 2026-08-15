#ifndef PHP_APPKIT_NS_FORM_H
#define PHP_APPKIT_NS_FORM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_form_create(double x, double y, double width, double height);
void ns_form_destroy(uintptr_t form);
int ns_form_add_entry(uintptr_t form, const char *title);
void ns_form_set_title_at(uintptr_t form, int index, const char *title);
int ns_form_get_title_at(uintptr_t form, int index, char *out, int out_len);
void ns_form_set_value_at(uintptr_t form, int index, const char *value);
int ns_form_get_value_at(uintptr_t form, int index, char *out, int out_len);
int ns_form_number_of_rows(uintptr_t form);
uintptr_t ns_form_cell_at(uintptr_t form, int index);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_FORM_H */

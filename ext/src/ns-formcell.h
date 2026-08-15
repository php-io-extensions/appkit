#ifndef PHP_APPKIT_NS_FORMCELL_H
#define PHP_APPKIT_NS_FORMCELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_formcell_create_text(const char *string);
uintptr_t ns_formcell_wrap(void *cell);
void ns_formcell_destroy(uintptr_t cell);
void *ns_formcell_nsformcell(uintptr_t cell);

void ns_formcell_set_title(uintptr_t cell, const char *title);
int ns_formcell_get_title(uintptr_t cell, char *out, int out_len);
void ns_formcell_set_state(uintptr_t cell, int state);
int ns_formcell_get_state(uintptr_t cell);
void ns_formcell_set_enabled(uintptr_t cell, int enabled);
int ns_formcell_is_enabled(uintptr_t cell);
void ns_formcell_set_tag(uintptr_t cell, int tag);
int ns_formcell_get_tag(uintptr_t cell);

void ns_formcell_set_placeholder_string(uintptr_t cell, const char *placeholder);
int ns_formcell_get_placeholder_string(uintptr_t cell, char *out, int out_len);
void ns_formcell_set_title_width(uintptr_t cell, double width);
double ns_formcell_get_title_width(uintptr_t cell);
void ns_formcell_set_string_value(uintptr_t cell, const char *value);
int ns_formcell_get_string_value(uintptr_t cell, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_FORMCELL_H */

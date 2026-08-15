#ifndef PHP_APPKIT_NS_PATHCOMPONENTCELL_H
#define PHP_APPKIT_NS_PATHCOMPONENTCELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_pathcomponentcell_create_text(const char *string);
uintptr_t ns_pathcomponentcell_wrap(void *cell);
void ns_pathcomponentcell_destroy(uintptr_t cell);
void *ns_pathcomponentcell_nspathcomponentcell(uintptr_t cell);

void ns_pathcomponentcell_set_title(uintptr_t cell, const char *title);
int ns_pathcomponentcell_get_title(uintptr_t cell, char *out, int out_len);
void ns_pathcomponentcell_set_string_value(uintptr_t cell, const char *value);
int ns_pathcomponentcell_get_string_value(uintptr_t cell, char *out, int out_len);
void ns_pathcomponentcell_set_image(uintptr_t cell, uintptr_t image);
uintptr_t ns_pathcomponentcell_get_image(uintptr_t cell);
void ns_pathcomponentcell_set_url_path(uintptr_t cell, const char *path);
int ns_pathcomponentcell_get_url_path(uintptr_t cell, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PATHCOMPONENTCELL_H */

#ifndef PHP_APPKIT_NS_PATHCELL_H
#define PHP_APPKIT_NS_PATHCELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_pathcell_create_text(const char *string);
uintptr_t ns_pathcell_wrap(void *cell);
void ns_pathcell_destroy(uintptr_t cell);
void *ns_pathcell_nspathcell(uintptr_t cell);

void ns_pathcell_set_title(uintptr_t cell, const char *title);
int ns_pathcell_get_title(uintptr_t cell, char *out, int out_len);
void ns_pathcell_set_state(uintptr_t cell, int state);
int ns_pathcell_get_state(uintptr_t cell);
void ns_pathcell_set_enabled(uintptr_t cell, int enabled);
int ns_pathcell_is_enabled(uintptr_t cell);
void ns_pathcell_set_tag(uintptr_t cell, int tag);
int ns_pathcell_get_tag(uintptr_t cell);

void ns_pathcell_set_path_style(uintptr_t cell, int style);
int ns_pathcell_get_path_style(uintptr_t cell);
void ns_pathcell_set_url_path(uintptr_t cell, const char *path);
int ns_pathcell_get_url_path(uintptr_t cell, char *out, int out_len);
void ns_pathcell_set_placeholder_string(uintptr_t cell, const char *placeholder);
int ns_pathcell_get_placeholder_string(uintptr_t cell, char *out, int out_len);
void ns_pathcell_set_background_color(uintptr_t cell, uintptr_t color);
void ns_pathcell_set_allowed_types(uintptr_t cell, const char **items, int count);
int ns_pathcell_path_component_count(uintptr_t cell);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PATHCELL_H */

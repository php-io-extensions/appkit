#ifndef PHP_APPKIT_NS_BROWSERCELL_H
#define PHP_APPKIT_NS_BROWSERCELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_browsercell_create_text(const char *string);
uintptr_t ns_browsercell_wrap(void *cell);
void ns_browsercell_destroy(uintptr_t cell);
void *ns_browsercell_nsbrowsercell(uintptr_t cell);

void ns_browsercell_set_title(uintptr_t cell, const char *title);
int ns_browsercell_get_title(uintptr_t cell, char *out, int out_len);
void ns_browsercell_set_state(uintptr_t cell, int state);
int ns_browsercell_get_state(uintptr_t cell);
void ns_browsercell_set_enabled(uintptr_t cell, int enabled);
int ns_browsercell_is_enabled(uintptr_t cell);
void ns_browsercell_set_tag(uintptr_t cell, int tag);
int ns_browsercell_get_tag(uintptr_t cell);

void ns_browsercell_set_leaf(uintptr_t cell, int flag);
int ns_browsercell_is_leaf(uintptr_t cell);
void ns_browsercell_set_loaded(uintptr_t cell, int flag);
int ns_browsercell_is_loaded(uintptr_t cell);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_BROWSERCELL_H */

#ifndef PHP_APPKIT_NS_TABLEHEADERCELL_H
#define PHP_APPKIT_NS_TABLEHEADERCELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_tableheadercell_create_text(const char *string);
uintptr_t ns_tableheadercell_wrap(void *cell);
void ns_tableheadercell_destroy(uintptr_t cell);
void *ns_tableheadercell_nstableheadercell(uintptr_t cell);

void ns_tableheadercell_set_title(uintptr_t cell, const char *title);
int ns_tableheadercell_get_title(uintptr_t cell, char *out, int out_len);
void ns_tableheadercell_set_state(uintptr_t cell, int state);
int ns_tableheadercell_get_state(uintptr_t cell);
void ns_tableheadercell_set_enabled(uintptr_t cell, int enabled);
int ns_tableheadercell_is_enabled(uintptr_t cell);
void ns_tableheadercell_set_tag(uintptr_t cell, int tag);
int ns_tableheadercell_get_tag(uintptr_t cell);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TABLEHEADERCELL_H */

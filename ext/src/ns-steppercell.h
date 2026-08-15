#ifndef PHP_APPKIT_NS_STEPPERCELL_H
#define PHP_APPKIT_NS_STEPPERCELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_steppercell_create_text(const char *string);
uintptr_t ns_steppercell_wrap(void *cell);
void ns_steppercell_destroy(uintptr_t cell);
void *ns_steppercell_nssteppercell(uintptr_t cell);

void ns_steppercell_set_title(uintptr_t cell, const char *title);
int ns_steppercell_get_title(uintptr_t cell, char *out, int out_len);
void ns_steppercell_set_state(uintptr_t cell, int state);
int ns_steppercell_get_state(uintptr_t cell);
void ns_steppercell_set_enabled(uintptr_t cell, int enabled);
int ns_steppercell_is_enabled(uintptr_t cell);
void ns_steppercell_set_tag(uintptr_t cell, int tag);
int ns_steppercell_get_tag(uintptr_t cell);

void ns_steppercell_set_min_value(uintptr_t cell, double value);
double ns_steppercell_get_min_value(uintptr_t cell);
void ns_steppercell_set_max_value(uintptr_t cell, double value);
double ns_steppercell_get_max_value(uintptr_t cell);
void ns_steppercell_set_increment(uintptr_t cell, double value);
double ns_steppercell_get_increment(uintptr_t cell);
void ns_steppercell_set_value_wraps(uintptr_t cell, int flag);
int ns_steppercell_value_wraps(uintptr_t cell);
void ns_steppercell_set_autorepeat(uintptr_t cell, int flag);
int ns_steppercell_autorepeat(uintptr_t cell);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_STEPPERCELL_H */

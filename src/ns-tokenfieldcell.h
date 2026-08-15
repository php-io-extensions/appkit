#ifndef PHP_APPKIT_NS_TOKENFIELDCELL_H
#define PHP_APPKIT_NS_TOKENFIELDCELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_tokenfieldcell_create_text(const char *string);
uintptr_t ns_tokenfieldcell_wrap(void *cell);
void ns_tokenfieldcell_destroy(uintptr_t cell);
void *ns_tokenfieldcell_nstokenfieldcell(uintptr_t cell);

void ns_tokenfieldcell_set_string(uintptr_t cell, const char *value);
int ns_tokenfieldcell_get_string(uintptr_t cell, char *out, int out_len);
void ns_tokenfieldcell_set_token_style(uintptr_t cell, int style);
int ns_tokenfieldcell_get_token_style(uintptr_t cell);
void ns_tokenfieldcell_set_completion_delay(uintptr_t cell, double delay);
double ns_tokenfieldcell_get_completion_delay(uintptr_t cell);
double ns_tokenfieldcell_default_completion_delay(void);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TOKENFIELDCELL_H */

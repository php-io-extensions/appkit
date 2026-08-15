#ifndef PHP_APPKIT_NS_APPEARANCE_H
#define PHP_APPKIT_NS_APPEARANCE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_appearance_wrap(void *appearance);

void ns_appearance_destroy(uintptr_t appearance);

void *ns_appearance_nsappearance(uintptr_t appearance);

uintptr_t ns_appearance_named(const char *name);

uintptr_t ns_appearance_create(const char *name);

uintptr_t ns_appearance_current_drawing(void);

int ns_appearance_name(uintptr_t appearance, char *out, int out_len);

int ns_appearance_allows_vibrancy(uintptr_t appearance);

int ns_appearance_best_match(uintptr_t appearance, const char **names, int count, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_APPEARANCE_H */

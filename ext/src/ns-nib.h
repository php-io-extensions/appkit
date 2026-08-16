#ifndef PHP_APPKIT_NS_NIB_H
#define PHP_APPKIT_NS_NIB_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_nib_create_named(const char *nib_name, const char *bundle_path);
uintptr_t ns_nib_wrap(void *nib);
void ns_nib_destroy(uintptr_t nib);
void *ns_nib_nsnib(uintptr_t nib);
int ns_nib_instantiate_with_owner(uintptr_t nib, uintptr_t owner_ptr, int *top_level_count);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_NIB_H */

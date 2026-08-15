#ifndef PHP_APPKIT_NS_CIIMAGEREP_H
#define PHP_APPKIT_NS_CIIMAGEREP_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_ciimagerep_wrap(void *rep);

void ns_ciimagerep_destroy(uintptr_t rep);

void *ns_ciimagerep_nsciimagerep(uintptr_t rep);

uintptr_t ns_ciimagerep_with_ciimage(uintptr_t ci_image);

uintptr_t ns_ciimagerep_ciimage(uintptr_t rep);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_CIIMAGEREP_H */

#ifndef PHP_APPKIT_NS_ATSTYPESETTER_H
#define PHP_APPKIT_NS_ATSTYPESETTER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_atstypesetter_shared_typesetter(void);
uintptr_t ns_atstypesetter_wrap(void *typesetter);
void ns_atstypesetter_destroy(uintptr_t typesetter);
void *ns_atstypesetter_nsatstypesetter(uintptr_t typesetter);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_ATSTYPESETTER_H */

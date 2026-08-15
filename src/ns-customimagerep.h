#ifndef PHP_APPKIT_NS_CUSTOMIMAGEREP_H
#define PHP_APPKIT_NS_CUSTOMIMAGEREP_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_customimagerep_wrap(void *rep);

void ns_customimagerep_destroy(uintptr_t rep);

void *ns_customimagerep_nscustomimagerep(uintptr_t rep);

uintptr_t ns_customimagerep_create(double width, double height, int flipped);

uintptr_t ns_customimagerep_draw_selector(uintptr_t rep);

uintptr_t ns_customimagerep_delegate(uintptr_t rep);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_CUSTOMIMAGEREP_H */

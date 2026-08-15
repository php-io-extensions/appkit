#ifndef PHP_APPKIT_NS_CACHEDIMAGEREP_H
#define PHP_APPKIT_NS_CACHEDIMAGEREP_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_cachedimagerep_wrap(void *rep);

void ns_cachedimagerep_destroy(uintptr_t rep);

void *ns_cachedimagerep_nscachedimagerep(uintptr_t rep);

uintptr_t ns_cachedimagerep_with_window_rect(uintptr_t window, double x, double y, double width, double height);

uintptr_t ns_cachedimagerep_with_size(double width, double height, int depth, int separate, int alpha);

uintptr_t ns_cachedimagerep_window(uintptr_t rep);

int ns_cachedimagerep_get_rect(uintptr_t rep, double *x, double *y, double *width, double *height);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_CACHEDIMAGEREP_H */

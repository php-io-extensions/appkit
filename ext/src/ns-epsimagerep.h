#ifndef PHP_APPKIT_NS_EPSIMAGEREP_H
#define PHP_APPKIT_NS_EPSIMAGEREP_H

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_epsimagerep_wrap(void *rep);

void ns_epsimagerep_destroy(uintptr_t rep);

void *ns_epsimagerep_nsepsimagerep(uintptr_t rep);

uintptr_t ns_epsimagerep_with_data(const char *data, size_t length);

int ns_epsimagerep_get_bounding_box(uintptr_t rep, double *x, double *y, double *width, double *height);

int ns_epsimagerep_get_eps_representation(uintptr_t rep, char **out, size_t *out_len);

void ns_epsimagerep_free_buffer(char *buffer);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_EPSIMAGEREP_H */

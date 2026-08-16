#ifndef PHP_APPKIT_NS_DRAGGINGIMAGECOMPONENT_H
#define PHP_APPKIT_NS_DRAGGINGIMAGECOMPONENT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_draggingimagecomponent_with_key(const char *key);
uintptr_t ns_draggingimagecomponent_wrap(void *component);
void ns_draggingimagecomponent_destroy(uintptr_t component);
void *ns_draggingimagecomponent_nsdraggingimagecomponent(uintptr_t component);
int ns_draggingimagecomponent_key(uintptr_t component, char *out, int out_len);
void ns_draggingimagecomponent_set_key(uintptr_t component, const char *key);
void ns_draggingimagecomponent_set_contents(uintptr_t component, void *contents);
void *ns_draggingimagecomponent_contents(uintptr_t component);
void ns_draggingimagecomponent_get_frame(uintptr_t component, double *x, double *y, double *w, double *h);
void ns_draggingimagecomponent_set_frame(uintptr_t component, double x, double y, double w, double h);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_DRAGGINGIMAGECOMPONENT_H */

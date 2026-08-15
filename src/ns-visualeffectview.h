#ifndef PHP_APPKIT_NS_VISUALEFFECTVIEW_H
#define PHP_APPKIT_NS_VISUALEFFECTVIEW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_visualeffectview_create(double x, double y, double width, double height);
uintptr_t ns_visualeffectview_wrap(void *view);
void ns_visualeffectview_destroy(uintptr_t view);
void *ns_visualeffectview_nsvisualeffectview(uintptr_t view);
void ns_visualeffectview_set_material(uintptr_t view, int material);
int ns_visualeffectview_get_material(uintptr_t view);
void ns_visualeffectview_set_blending_mode(uintptr_t view, int mode);
int ns_visualeffectview_get_blending_mode(uintptr_t view);
void ns_visualeffectview_set_state(uintptr_t view, int state);
int ns_visualeffectview_get_state(uintptr_t view);
void ns_visualeffectview_set_emphasized(uintptr_t view, int flag);
int ns_visualeffectview_is_emphasized(uintptr_t view);
int ns_visualeffectview_interior_background_style(uintptr_t view);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_VISUALEFFECTVIEW_H */

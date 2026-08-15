#ifndef PHP_APPKIT_NS_RULERMARKER_H
#define PHP_APPKIT_NS_RULERMARKER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_rulermarker_create(uintptr_t ruler, double location);
uintptr_t ns_rulermarker_wrap(void *marker);
void ns_rulermarker_destroy(uintptr_t marker);
void *ns_rulermarker_nsrulermarker(uintptr_t marker);
void ns_rulermarker_set_location(uintptr_t marker, double location);
double ns_rulermarker_get_location(uintptr_t marker);
void ns_rulermarker_set_movable(uintptr_t marker, int flag);
int ns_rulermarker_is_movable(uintptr_t marker);
void ns_rulermarker_set_removable(uintptr_t marker, int flag);
int ns_rulermarker_is_removable(uintptr_t marker);
double ns_rulermarker_thickness_required(uintptr_t marker);
int ns_rulermarker_is_dragging(uintptr_t marker);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_RULERMARKER_H */

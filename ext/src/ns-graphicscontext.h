#ifndef PHP_APPKIT_NS_GRAPHICSCONTEXT_H
#define PHP_APPKIT_NS_GRAPHICSCONTEXT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_GRAPHICS_INTERPOLATION_DEFAULT = 0,
    NS_GRAPHICS_INTERPOLATION_NONE = 1,
    NS_GRAPHICS_INTERPOLATION_LOW = 2,
    NS_GRAPHICS_INTERPOLATION_HIGH = 3,
    NS_GRAPHICS_INTERPOLATION_MEDIUM = 4
} ns_graphics_interpolation;

uintptr_t ns_graphicscontext_current(void);

void ns_graphicscontext_set_current(uintptr_t context);

int ns_graphicscontext_drawing_to_screen(void);

int ns_graphicscontext_instance_drawing_to_screen(uintptr_t context);

void ns_graphicscontext_save_state(void);

void ns_graphicscontext_restore_state(void);

uintptr_t ns_graphicscontext_with_bitmap_rep(uintptr_t bitmapRep);

uintptr_t ns_graphicscontext_wrap(void *context);

void ns_graphicscontext_destroy(uintptr_t context);

void *ns_graphicscontext_nsgraphicscontext(uintptr_t context);

void ns_graphicscontext_save_graphics_state(uintptr_t context);

void ns_graphicscontext_restore_graphics_state(uintptr_t context);

void ns_graphicscontext_flush(uintptr_t context);

void ns_graphicscontext_set_should_antialias(uintptr_t context, int enabled);

int ns_graphicscontext_get_should_antialias(uintptr_t context);

void ns_graphicscontext_set_image_interpolation(uintptr_t context, int interpolation);

int ns_graphicscontext_get_image_interpolation(uintptr_t context);

void ns_graphicscontext_set_pattern_phase(uintptr_t context, double x, double y);

void ns_graphicscontext_get_pattern_phase(uintptr_t context, double *x, double *y);

void ns_graphicscontext_set_compositing_operation(uintptr_t context, int operation);

int ns_graphicscontext_get_compositing_operation(uintptr_t context);

int ns_graphicscontext_is_flipped(uintptr_t context);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_GRAPHICSCONTEXT_H */

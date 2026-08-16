#ifndef PHP_APPKIT_NS_LAYOUTGUIDE_H
#define PHP_APPKIT_NS_LAYOUTGUIDE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_layoutguide_create(void);
uintptr_t ns_layoutguide_wrap(void *guide);
void ns_layoutguide_destroy(uintptr_t guide);
void *ns_layoutguide_nslayoutguide(uintptr_t guide);
void ns_layoutguide_frame(uintptr_t guide, double *x, double *y, double *width, double *height);
void ns_layoutguide_set_identifier(uintptr_t guide, const char *identifier);
int ns_layoutguide_identifier(uintptr_t guide, char *out, int out_len);
uintptr_t ns_layoutguide_owning_view(uintptr_t guide);
void ns_layoutguide_add_to_view(uintptr_t guide, uintptr_t view);
void ns_layoutguide_remove_from_view(uintptr_t guide, uintptr_t view);
uintptr_t ns_layoutguide_leading_anchor(uintptr_t guide);
uintptr_t ns_layoutguide_trailing_anchor(uintptr_t guide);
uintptr_t ns_layoutguide_left_anchor(uintptr_t guide);
uintptr_t ns_layoutguide_right_anchor(uintptr_t guide);
uintptr_t ns_layoutguide_top_anchor(uintptr_t guide);
uintptr_t ns_layoutguide_bottom_anchor(uintptr_t guide);
uintptr_t ns_layoutguide_width_anchor(uintptr_t guide);
uintptr_t ns_layoutguide_height_anchor(uintptr_t guide);
uintptr_t ns_layoutguide_center_x_anchor(uintptr_t guide);
uintptr_t ns_layoutguide_center_y_anchor(uintptr_t guide);
int ns_layoutguide_has_ambiguous_layout(uintptr_t guide);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_LAYOUTGUIDE_H */

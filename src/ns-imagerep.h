#ifndef PHP_APPKIT_NS_IMAGEREP_H
#define PHP_APPKIT_NS_IMAGEREP_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_IMAGE_REP_LAYOUT_DIRECTION_UNSPECIFIED = -1,
    NS_IMAGE_REP_LAYOUT_DIRECTION_LEFT_TO_RIGHT = 2,
    NS_IMAGE_REP_LAYOUT_DIRECTION_RIGHT_TO_LEFT = 3
} ns_image_rep_layout_direction;

uintptr_t ns_imagerep_retain_obj(void *object);

uintptr_t ns_imagerep_wrap(void *rep);

void ns_imagerep_destroy(uintptr_t rep);

void *ns_imagerep_nsimagerep(uintptr_t rep);

uintptr_t ns_imagerep_rep_with_contents_of_file(const char *path);

int ns_imagerep_get_size(uintptr_t rep, double *width, double *height);

void ns_imagerep_set_size(uintptr_t rep, double width, double height);

int ns_imagerep_has_alpha(uintptr_t rep);

int ns_imagerep_is_opaque(uintptr_t rep);

int ns_imagerep_pixels_wide(uintptr_t rep);

int ns_imagerep_pixels_high(uintptr_t rep);

int ns_imagerep_bits_per_sample(uintptr_t rep);

int ns_imagerep_layout_direction(uintptr_t rep);

void ns_imagerep_set_layout_direction(uintptr_t rep, int direction);

int ns_imagerep_draw(uintptr_t rep);

int ns_imagerep_draw_at_point(uintptr_t rep, double x, double y);

int ns_imagerep_draw_in_rect(uintptr_t rep, double x, double y, double width, double height);

int ns_imagerep_image_type_count(void);

int ns_imagerep_image_type_at(int index, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_IMAGEREP_H */

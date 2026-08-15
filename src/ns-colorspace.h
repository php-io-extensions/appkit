#ifndef PHP_APPKIT_NS_COLORSPACE_H
#define PHP_APPKIT_NS_COLORSPACE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_COLORSPACE_KIND_SRGB = 0,
    NS_COLORSPACE_KIND_GENERIC_GAMMA22_GRAY,
    NS_COLORSPACE_KIND_EXTENDED_SRGB,
    NS_COLORSPACE_KIND_EXTENDED_GENERIC_GAMMA22_GRAY,
    NS_COLORSPACE_KIND_DISPLAY_P3,
    NS_COLORSPACE_KIND_ADOBE_RGB1998,
    NS_COLORSPACE_KIND_GENERIC_RGB,
    NS_COLORSPACE_KIND_GENERIC_GRAY,
    NS_COLORSPACE_KIND_GENERIC_CMYK,
    NS_COLORSPACE_KIND_DEVICE_RGB,
    NS_COLORSPACE_KIND_DEVICE_GRAY,
    NS_COLORSPACE_KIND_DEVICE_CMYK
} ns_colorspace_kind;

uintptr_t ns_colorspace_wrap(void *space);

void ns_colorspace_destroy(uintptr_t space);

void *ns_colorspace_nscolorspace(uintptr_t space);

uintptr_t ns_colorspace_standard(int kind);

int ns_colorspace_model(uintptr_t space);

int ns_colorspace_number_of_color_components(uintptr_t space);

int ns_colorspace_localized_name(uintptr_t space, char *out, int out_len);

int ns_colorspace_available_count(int model);

uintptr_t ns_colorspace_available_at(int model, int index);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLORSPACE_H */

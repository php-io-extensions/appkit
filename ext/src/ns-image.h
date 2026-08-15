#ifndef PHP_APPKIT_NS_IMAGE_H
#define PHP_APPKIT_NS_IMAGE_H

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_IMAGE_CACHE_MODE_DEFAULT = 0,
    NS_IMAGE_CACHE_MODE_ALWAYS,
    NS_IMAGE_CACHE_MODE_BY_SIZE,
    NS_IMAGE_CACHE_MODE_NEVER
} ns_image_cache_mode;

uintptr_t ns_image_wrap(void *image);

void ns_image_destroy(uintptr_t image);

void *ns_image_nsimage(uintptr_t image);

uintptr_t ns_image_named(const char *name);

uintptr_t ns_image_with_system_symbol_name(const char *name, const char *description);

uintptr_t ns_image_with_size(double width, double height);

uintptr_t ns_image_with_contents_of_file(const char *path);

uintptr_t ns_image_with_data(const char *data, size_t length);

uintptr_t ns_image_by_referencing_file(const char *path);

int ns_image_get_size(uintptr_t image, double *width, double *height);

void ns_image_set_size(uintptr_t image, double width, double height);

int ns_image_is_valid(uintptr_t image);

int ns_image_is_template(uintptr_t image);

void ns_image_set_template(uintptr_t image, int is_template);

int ns_image_set_name(uintptr_t image, const char *name);

int ns_image_get_name(uintptr_t image, char *out, int out_len);

void ns_image_add_representation(uintptr_t image, uintptr_t rep);

void ns_image_remove_representation(uintptr_t image, uintptr_t rep);

int ns_image_representation_count(uintptr_t image);

uintptr_t ns_image_representation_at(uintptr_t image, int index);

int ns_image_draw_in_rect(uintptr_t image, double x, double y, double width, double height);

int ns_image_get_tiff_representation(uintptr_t image, char **out, size_t *out_len);

void ns_image_free_buffer(char *buffer);

int ns_image_get_cache_mode(uintptr_t image);

void ns_image_set_cache_mode(uintptr_t image, int mode);

int ns_image_get_accessibility_description(uintptr_t image, char *out, int out_len);

void ns_image_set_accessibility_description(uintptr_t image, const char *description);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_IMAGE_H */

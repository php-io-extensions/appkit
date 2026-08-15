#ifndef PHP_APPKIT_NS_BITMAPIMAGEREP_H
#define PHP_APPKIT_NS_BITMAPIMAGEREP_H

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_BITMAP_IMAGE_FILE_TYPE_TIFF = 0,
    NS_BITMAP_IMAGE_FILE_TYPE_BMP,
    NS_BITMAP_IMAGE_FILE_TYPE_GIF,
    NS_BITMAP_IMAGE_FILE_TYPE_JPEG,
    NS_BITMAP_IMAGE_FILE_TYPE_PNG,
    NS_BITMAP_IMAGE_FILE_TYPE_JPEG2000
} ns_bitmap_image_file_type;

uintptr_t ns_bitmapimagerep_wrap(void *rep);

void ns_bitmapimagerep_destroy(uintptr_t rep);

void *ns_bitmapimagerep_nsbitmapimagerep(uintptr_t rep);

uintptr_t ns_bitmapimagerep_with_data(const char *data, size_t length);

uintptr_t ns_bitmapimagerep_rep_with_contents_of_file(const char *path);

uintptr_t ns_bitmapimagerep_with_pixels(int width, int height, int has_alpha);

uintptr_t ns_bitmapimagerep_with_cgimage(uintptr_t cg_image);

int ns_bitmapimagerep_is_planar(uintptr_t rep);

int ns_bitmapimagerep_samples_per_pixel(uintptr_t rep);

int ns_bitmapimagerep_bits_per_pixel(uintptr_t rep);

int ns_bitmapimagerep_bytes_per_row(uintptr_t rep);

int ns_bitmapimagerep_number_of_planes(uintptr_t rep);

uintptr_t ns_bitmapimagerep_bitmap_data(uintptr_t rep);

int ns_bitmapimagerep_get_tiff_representation(uintptr_t rep, char **out, size_t *out_len);

int ns_bitmapimagerep_representation_using_type(uintptr_t rep, int file_type, char **out, size_t *out_len);

void ns_bitmapimagerep_free_buffer(char *buffer);

int ns_bitmapimagerep_set_color_at(uintptr_t rep, int x, int y, uintptr_t color);

uintptr_t ns_bitmapimagerep_color_at(uintptr_t rep, int x, int y);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_BITMAPIMAGEREP_H */

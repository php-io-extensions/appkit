#ifndef PHP_APPKIT_NS_TEXTLINEFRAGMENT_H
#define PHP_APPKIT_NS_TEXTLINEFRAGMENT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textlinefragment_create_with_string(const char *string, int location, int length);
uintptr_t ns_textlinefragment_wrap(void *fragment);
void ns_textlinefragment_destroy(uintptr_t fragment);
void *ns_textlinefragment_nstextlinefragment(uintptr_t fragment);

void ns_textlinefragment_character_range(uintptr_t fragment, int *location, int *length);
void ns_textlinefragment_typographic_bounds(uintptr_t fragment, double *x, double *y, double *w, double *h);
void ns_textlinefragment_glyph_origin(uintptr_t fragment, double *x, double *y);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTLINEFRAGMENT_H */

#ifndef PHP_APPKIT_NS_ADAPTIVEIMAGEGLYPH_H
#define PHP_APPKIT_NS_ADAPTIVEIMAGEGLYPH_H

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_adaptiveimageglyph_create_with_image_content(const char *data, size_t length);
uintptr_t ns_adaptiveimageglyph_wrap(void *glyph);
void ns_adaptiveimageglyph_destroy(uintptr_t glyph);
void *ns_adaptiveimageglyph_nsadaptiveimageglyph(uintptr_t glyph);

int ns_adaptiveimageglyph_content_identifier(uintptr_t glyph, char *out, int out_len);
int ns_adaptiveimageglyph_content_description(uintptr_t glyph, char *out, int out_len);
int ns_adaptiveimageglyph_content_type_identifier(uintptr_t glyph, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_ADAPTIVEIMAGEGLYPH_H */

#ifndef PHP_APPKIT_NS_GLYPHGENERATOR_H
#define PHP_APPKIT_NS_GLYPHGENERATOR_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_glyphgenerator_shared_glyph_generator(void);
uintptr_t ns_glyphgenerator_wrap(void *generator);
void ns_glyphgenerator_destroy(uintptr_t generator);
void *ns_glyphgenerator_nsglyphgenerator(uintptr_t generator);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_GLYPHGENERATOR_H */

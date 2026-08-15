#ifndef PHP_APPKIT_NS_TEXTELEMENT_H
#define PHP_APPKIT_NS_TEXTELEMENT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textelement_wrap(void *element);
void ns_textelement_destroy(uintptr_t element);
void *ns_textelement_nstextelement(uintptr_t element);

int ns_textelement_is_represented_element(uintptr_t element);
int ns_textelement_child_elements_count(uintptr_t element);
uintptr_t ns_textelement_element_range_ptr(uintptr_t element);
uintptr_t ns_textelement_text_content_manager(uintptr_t element);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTELEMENT_H */

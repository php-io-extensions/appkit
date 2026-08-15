#ifndef PHP_APPKIT_NS_TEXTPARAGRAPH_H
#define PHP_APPKIT_NS_TEXTPARAGRAPH_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textparagraph_create(const char *string);
uintptr_t ns_textparagraph_wrap(void *paragraph);
void ns_textparagraph_destroy(uintptr_t paragraph);
void *ns_textparagraph_nstextparagraph(uintptr_t paragraph);

int ns_textparagraph_get_attributed_string(uintptr_t paragraph, char *out, int out_len);
uintptr_t ns_textparagraph_paragraph_content_range_ptr(uintptr_t paragraph);
uintptr_t ns_textparagraph_paragraph_separator_range_ptr(uintptr_t paragraph);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTPARAGRAPH_H */

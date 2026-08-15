#ifndef PHP_APPKIT_NS_TEXTCONTENTSTORAGE_H
#define PHP_APPKIT_NS_TEXTCONTENTSTORAGE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textcontentstorage_create(void);
uintptr_t ns_textcontentstorage_wrap(void *storage);
void ns_textcontentstorage_destroy(uintptr_t storage);
void *ns_textcontentstorage_nstextcontentstorage(uintptr_t storage);

int ns_textcontentstorage_get_attributed_string(uintptr_t storage, char *out, int out_len);
void ns_textcontentstorage_set_attributed_string(uintptr_t storage, const char *string);
uintptr_t ns_textcontentstorage_text_element_for_attributed_string(uintptr_t storage, const char *string);
int ns_textcontentstorage_attributed_string_for_text_element(uintptr_t storage, uintptr_t element, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTCONTENTSTORAGE_H */

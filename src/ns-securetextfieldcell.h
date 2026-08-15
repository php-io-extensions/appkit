#ifndef PHP_APPKIT_NS_SECURETEXTFIELDCELL_H
#define PHP_APPKIT_NS_SECURETEXTFIELDCELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/** [[NSSecureTextFieldCell alloc] initTextCell:] — caller owns until destroy. */
uintptr_t ns_securetextfieldcell_create_text(const char *string);

uintptr_t ns_securetextfieldcell_wrap(void *cell);

void ns_securetextfieldcell_destroy(uintptr_t cell);

void *ns_securetextfieldcell_nssecuretextfieldcell(uintptr_t cell);

void ns_securetextfieldcell_set_echos_bullets(uintptr_t cell, int echosBullets);

int ns_securetextfieldcell_echos_bullets(uintptr_t cell);

void ns_securetextfieldcell_set_string(uintptr_t cell, const char *value);

int ns_securetextfieldcell_get_string(uintptr_t cell, char *out, int out_len);

void ns_securetextfieldcell_set_placeholder_string(uintptr_t cell, const char *placeholder);

int ns_securetextfieldcell_get_placeholder_string(uintptr_t cell, char *out, int out_len);

void ns_securetextfieldcell_set_bezel_style(uintptr_t cell, int style);

int ns_securetextfieldcell_get_bezel_style(uintptr_t cell);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SECURETEXTFIELDCELL_H */

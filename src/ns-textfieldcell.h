#ifndef PHP_APPKIT_NS_TEXTFIELDCELL_H
#define PHP_APPKIT_NS_TEXTFIELDCELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_TEXTFIELDCELL_BEZEL_SQUARE = 0,
    NS_TEXTFIELDCELL_BEZEL_ROUNDED = 1
} ns_textfieldcell_bezel_style;

/** [[NSTextFieldCell alloc] initTextCell:] — caller owns until destroy. */
uintptr_t ns_textfieldcell_create_text(const char *string);

uintptr_t ns_textfieldcell_wrap(void *cell);

void ns_textfieldcell_destroy(uintptr_t cell);

void *ns_textfieldcell_nstextfieldcell(uintptr_t cell);

void ns_textfieldcell_set_title(uintptr_t cell, const char *title);

int ns_textfieldcell_get_title(uintptr_t cell, char *out, int out_len);

void ns_textfieldcell_set_string(uintptr_t cell, const char *value);

int ns_textfieldcell_get_string(uintptr_t cell, char *out, int out_len);

void ns_textfieldcell_set_background_color(uintptr_t cell, uintptr_t color);

void ns_textfieldcell_set_draws_background(uintptr_t cell, int drawsBackground);

int ns_textfieldcell_draws_background(uintptr_t cell);

void ns_textfieldcell_set_text_color(uintptr_t cell, uintptr_t color);

void ns_textfieldcell_set_bezel_style(uintptr_t cell, int style);

int ns_textfieldcell_get_bezel_style(uintptr_t cell);

void ns_textfieldcell_set_placeholder_string(uintptr_t cell, const char *placeholder);

int ns_textfieldcell_get_placeholder_string(uintptr_t cell, char *out, int out_len);

void ns_textfieldcell_set_wants_notification_for_marked_text(uintptr_t cell, int flag);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTFIELDCELL_H */

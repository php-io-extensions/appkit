#ifndef PHP_APPKIT_NS_TEXT_H
#define PHP_APPKIT_NS_TEXT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_text_create(double x, double y, double width, double height, const char *value);

uintptr_t ns_text_wrap(void *text);

void ns_text_destroy(uintptr_t text);

void *ns_text_nstext(uintptr_t text);

void ns_text_set_string(uintptr_t text, const char *value);

int ns_text_get_string(uintptr_t text, char *out, int out_len);

void ns_text_set_editable(uintptr_t text, int editable);

int ns_text_is_editable(uintptr_t text);

void ns_text_set_selectable(uintptr_t text, int selectable);

int ns_text_is_selectable(uintptr_t text);

void ns_text_set_rich_text(uintptr_t text, int richText);

int ns_text_is_rich_text(uintptr_t text);

void ns_text_set_draws_background(uintptr_t text, int drawsBackground);

int ns_text_draws_background(uintptr_t text);

void ns_text_set_background_color(uintptr_t text, uintptr_t color);

void ns_text_set_text_color(uintptr_t text, uintptr_t color);

void ns_text_set_font(uintptr_t text, uintptr_t font);

void ns_text_set_alignment(uintptr_t text, int alignment);

int ns_text_get_alignment(uintptr_t text);

void ns_text_set_writing_direction(uintptr_t text, int direction);

int ns_text_get_writing_direction(uintptr_t text);

void ns_text_set_selected_range(uintptr_t text, int location, int length);

void ns_text_get_selected_range(uintptr_t text, int *location, int *length);

void ns_text_size_to_fit(uintptr_t text);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXT_H */

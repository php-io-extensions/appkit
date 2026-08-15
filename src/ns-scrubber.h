#ifndef PHP_APPKIT_NS_SCRUBBER_H
#define PHP_APPKIT_NS_SCRUBBER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_scrubber_create(double x, double y, double width, double height);
uintptr_t ns_scrubber_wrap(void *scrubber);
void ns_scrubber_destroy(uintptr_t scrubber);
void *ns_scrubber_nsscrubber(uintptr_t scrubber);
void ns_scrubber_clear(uintptr_t scrubber);
void ns_scrubber_add_item(uintptr_t scrubber, const char *title);
int ns_scrubber_number_of_items(uintptr_t scrubber);
void ns_scrubber_set_mode(uintptr_t scrubber, int mode);
int ns_scrubber_get_mode(uintptr_t scrubber);
void ns_scrubber_set_item_alignment(uintptr_t scrubber, int alignment);
int ns_scrubber_get_item_alignment(uintptr_t scrubber);
void ns_scrubber_set_continuous(uintptr_t scrubber, int flag);
int ns_scrubber_is_continuous(uintptr_t scrubber);
void ns_scrubber_set_selected_index(uintptr_t scrubber, int index);
int ns_scrubber_get_selected_index(uintptr_t scrubber);
int ns_scrubber_get_highlighted_index(uintptr_t scrubber);
void ns_scrubber_set_shows_arrow_buttons(uintptr_t scrubber, int flag);
int ns_scrubber_shows_arrow_buttons(uintptr_t scrubber);
void ns_scrubber_set_shows_additional_content_indicators(uintptr_t scrubber, int flag);
int ns_scrubber_shows_additional_content_indicators(uintptr_t scrubber);
void ns_scrubber_reload_data(uintptr_t scrubber);
int ns_scrubber_poll_selection(uintptr_t scrubber);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SCRUBBER_H */

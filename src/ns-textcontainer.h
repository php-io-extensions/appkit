#ifndef PHP_APPKIT_NS_TEXTCONTAINER_H
#define PHP_APPKIT_NS_TEXTCONTAINER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_TEXTCONTAINER_LINE_BREAK_BY_WORD_WRAPPING = 0,
    NS_TEXTCONTAINER_LINE_BREAK_CHAR_WRAPPING = 1,
    NS_TEXTCONTAINER_LINE_BREAK_CLIPPING = 2,
    NS_TEXTCONTAINER_LINE_BREAK_TRUNCATING_HEAD = 3,
    NS_TEXTCONTAINER_LINE_BREAK_TRUNCATING_TAIL = 4,
    NS_TEXTCONTAINER_LINE_BREAK_TRUNCATING_MIDDLE = 5
} ns_textcontainer_line_break_mode;

uintptr_t ns_textcontainer_create(double width, double height);
uintptr_t ns_textcontainer_wrap(void *container);
void ns_textcontainer_destroy(uintptr_t container);
void *ns_textcontainer_nstextcontainer(uintptr_t container);

void ns_textcontainer_set_size(uintptr_t container, double width, double height);
void ns_textcontainer_get_size(uintptr_t container, double *width, double *height);
void ns_textcontainer_set_line_break_mode(uintptr_t container, int mode);
int ns_textcontainer_get_line_break_mode(uintptr_t container);
void ns_textcontainer_set_line_fragment_padding(uintptr_t container, double padding);
double ns_textcontainer_get_line_fragment_padding(uintptr_t container);
void ns_textcontainer_set_maximum_number_of_lines(uintptr_t container, int lines);
int ns_textcontainer_get_maximum_number_of_lines(uintptr_t container);
void ns_textcontainer_set_width_tracks_text_view(uintptr_t container, int flag);
int ns_textcontainer_width_tracks_text_view(uintptr_t container);
void ns_textcontainer_set_height_tracks_text_view(uintptr_t container, int flag);
int ns_textcontainer_height_tracks_text_view(uintptr_t container);
int ns_textcontainer_is_simple_rectangular(uintptr_t container);
void ns_textcontainer_replace_layout_manager(uintptr_t container, uintptr_t layout_manager);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTCONTAINER_H */

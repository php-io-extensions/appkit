#ifndef PHP_APPKIT_NS_TEXTINSERTIONINDICATOR_H
#define PHP_APPKIT_NS_TEXTINSERTIONINDICATOR_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_TEXT_INSERTION_DISPLAY_AUTOMATIC = 0,
    NS_TEXT_INSERTION_DISPLAY_HIDDEN = 1,
    NS_TEXT_INSERTION_DISPLAY_VISIBLE = 2
} ns_text_insertion_display_mode;

typedef enum {
    NS_TEXT_INSERTION_AUTO_SHOW_EFFECTS_VIEW = 1,
    NS_TEXT_INSERTION_AUTO_SHOW_WHILE_TRACKING = 2
} ns_text_insertion_auto_mode_options;

uintptr_t ns_textinsertionindicator_create(double x, double y, double width, double height);
uintptr_t ns_textinsertionindicator_wrap(void *indicator);
void ns_textinsertionindicator_destroy(uintptr_t indicator);
void *ns_textinsertionindicator_nstextinsertionindicator(uintptr_t indicator);

void ns_textinsertionindicator_set_display_mode(uintptr_t indicator, int mode);
int ns_textinsertionindicator_get_display_mode(uintptr_t indicator);
void ns_textinsertionindicator_set_color(uintptr_t indicator, uintptr_t color);
uintptr_t ns_textinsertionindicator_get_color(uintptr_t indicator);
void ns_textinsertionindicator_set_automatic_mode_options(uintptr_t indicator, int options);
int ns_textinsertionindicator_get_automatic_mode_options(uintptr_t indicator);

/** Installs effectsViewInserter block that adds the effects view as subview of parentView (borrowed). Pass 0 to clear. */
void ns_textinsertionindicator_set_effects_view_inserter_parent(uintptr_t indicator, uintptr_t parent_view);
void ns_textinsertionindicator_clear_effects_view_inserter(uintptr_t indicator);
int ns_textinsertionindicator_has_effects_view_inserter(uintptr_t indicator);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTINSERTIONINDICATOR_H */

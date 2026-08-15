#ifndef PHP_APPKIT_NS_TEXTINPUTCONTEXT_H
#define PHP_APPKIT_NS_TEXTINPUTCONTEXT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textinputcontext_current(void);
uintptr_t ns_textinputcontext_create(void *client);
uintptr_t ns_textinputcontext_wrap(void *context);
void ns_textinputcontext_destroy(uintptr_t context);
void *ns_textinputcontext_nstextinputcontext(uintptr_t context);

void *ns_textinputcontext_client(uintptr_t context);
void ns_textinputcontext_set_accepts_glyph_info(uintptr_t context, int flag);
int ns_textinputcontext_accepts_glyph_info(uintptr_t context);
void ns_textinputcontext_activate(uintptr_t context);
void ns_textinputcontext_deactivate(uintptr_t context);
int ns_textinputcontext_handle_event(uintptr_t context, void *nsevent);
void ns_textinputcontext_discard_marked_text(uintptr_t context);
void ns_textinputcontext_invalidate_character_coordinates(uintptr_t context);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTINPUTCONTEXT_H */

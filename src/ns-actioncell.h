#ifndef PHP_APPKIT_NS_ACTIONCELL_H
#define PHP_APPKIT_NS_ACTIONCELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/** [[NSActionCell alloc] initTextCell:] — caller owns until ns_actioncell_destroy. */
uintptr_t ns_actioncell_create_text(const char *string);

/** Wrap a borrowed NSActionCell*. */
uintptr_t ns_actioncell_wrap(void *cell);

void ns_actioncell_destroy(uintptr_t cell);

/** Borrowed NSActionCell* (0 if invalid). Do not free. */
void *ns_actioncell_nsactioncell(uintptr_t cell);

void ns_actioncell_set_title(uintptr_t cell, const char *title);

int ns_actioncell_get_title(uintptr_t cell, char *out, int out_len);

void ns_actioncell_set_state(uintptr_t cell, int state);

int ns_actioncell_get_state(uintptr_t cell);

void ns_actioncell_set_enabled(uintptr_t cell, int enabled);

int ns_actioncell_is_enabled(uintptr_t cell);

void ns_actioncell_set_tag(uintptr_t cell, int tag);

int ns_actioncell_get_tag(uintptr_t cell);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_ACTIONCELL_H */

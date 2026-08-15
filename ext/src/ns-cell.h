#ifndef PHP_APPKIT_NS_CELL_H
#define PHP_APPKIT_NS_CELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/** [[NSCell alloc] initTextCell:] — caller owns until ns_cell_destroy. */
uintptr_t ns_cell_create_text(const char *string);

/** Wrap a borrowed NSCell*. */
uintptr_t ns_cell_wrap(void *cell);

void ns_cell_destroy(uintptr_t cell);

/** Borrowed NSCell* (0 if invalid). Do not free. */
void *ns_cell_nscell(uintptr_t cell);

void ns_cell_set_title(uintptr_t cell, const char *title);

int ns_cell_get_title(uintptr_t cell, char *out, int out_len);

/** NSControlStateValue: -1 mixed, 0 off, 1 on. */
void ns_cell_set_state(uintptr_t cell, int state);

int ns_cell_get_state(uintptr_t cell);

void ns_cell_set_enabled(uintptr_t cell, int enabled);

int ns_cell_is_enabled(uintptr_t cell);

void ns_cell_set_tag(uintptr_t cell, int tag);

int ns_cell_get_tag(uintptr_t cell);

void ns_cell_set_string(uintptr_t cell, const char *value);

int ns_cell_get_string(uintptr_t cell, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_CELL_H */

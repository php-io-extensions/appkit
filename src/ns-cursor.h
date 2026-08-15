#ifndef PHP_APPKIT_NS_CURSOR_H
#define PHP_APPKIT_NS_CURSOR_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/** Wrap a borrowed NSCursor*. Caller owns until ns_cursor_destroy. */
uintptr_t ns_cursor_wrap(void *cursor);

void ns_cursor_destroy(uintptr_t cursor);

/** Borrowed NSCursor* (0 if invalid). Do not free. */
void *ns_cursor_nscursor(uintptr_t cursor);

void ns_cursor_hide(void);

void ns_cursor_unhide(void);

void ns_cursor_set_hidden_until_mouse_moves(int flag);

void ns_cursor_pop_class(void);

void ns_cursor_push(uintptr_t cursor);

void ns_cursor_set(uintptr_t cursor);

void ns_cursor_pop(uintptr_t cursor);

int ns_cursor_hot_spot(uintptr_t cursor, double *x, double *y);

uintptr_t ns_cursor_current(void);

uintptr_t ns_cursor_arrow(void);

uintptr_t ns_cursor_crosshair(void);

uintptr_t ns_cursor_pointing_hand(void);

uintptr_t ns_cursor_i_beam(void);

uintptr_t ns_cursor_closed_hand(void);

uintptr_t ns_cursor_open_hand(void);

uintptr_t ns_cursor_operation_not_allowed(void);

uintptr_t ns_cursor_drag_link(void);

uintptr_t ns_cursor_drag_copy(void);

uintptr_t ns_cursor_contextual_menu(void);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_CURSOR_H */

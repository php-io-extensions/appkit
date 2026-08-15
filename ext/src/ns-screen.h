#ifndef PHP_APPKIT_NS_SCREEN_H
#define PHP_APPKIT_NS_SCREEN_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/** Wrap a borrowed NSScreen*. Caller owns until ns_screen_destroy. */
uintptr_t ns_screen_wrap(void *screen);

void ns_screen_destroy(uintptr_t screen);

/** Borrowed NSScreen* (0 if invalid). Do not free. */
void *ns_screen_nsscreen(uintptr_t screen);

/** [NSScreen mainScreen] retained handle, or 0. */
uintptr_t ns_screen_main(void);

/** [NSScreen deepestScreen] retained handle, or 0. */
uintptr_t ns_screen_deepest(void);

/** Number of entries in [NSScreen screens]. */
int ns_screen_screens_count(void);

/** Retained handle for screens[index], or 0. */
uintptr_t ns_screen_screens_at(int index);

int ns_screen_screens_have_separate_spaces(void);

/** Frame as global screen coords [x, y, w, h]. Returns 1 on success. */
int ns_screen_frame(uintptr_t screen, double *x, double *y, double *w, double *h);

/** visibleFrame [x, y, w, h]. Returns 1 on success. */
int ns_screen_visible_frame(uintptr_t screen, double *x, double *y, double *w, double *h);

double ns_screen_backing_scale_factor(uintptr_t screen);

int ns_screen_localized_name(uintptr_t screen, char *out, int out_len);

int ns_screen_depth(uintptr_t screen);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SCREEN_H */

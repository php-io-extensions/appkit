#ifndef PHP_APPKIT_NS_TEXTLAYOUTFRAGMENT_H
#define PHP_APPKIT_NS_TEXTLAYOUTFRAGMENT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_TEXTLAYOUTFRAGMENT_STATE_NONE = 0,
    NS_TEXTLAYOUTFRAGMENT_STATE_ESTIMATED_USAGE_BOUNDS = 1,
    NS_TEXTLAYOUTFRAGMENT_STATE_CALCULATED_USAGE_BOUNDS = 2,
    NS_TEXTLAYOUTFRAGMENT_STATE_LAYOUT_AVAILABLE = 3
} ns_textlayoutfragment_state;

uintptr_t ns_textlayoutfragment_wrap(void *fragment);
void ns_textlayoutfragment_destroy(uintptr_t fragment);
void *ns_textlayoutfragment_nstextlayoutfragment(uintptr_t fragment);

int ns_textlayoutfragment_get_state(uintptr_t fragment);
void ns_textlayoutfragment_layout_fragment_frame(uintptr_t fragment, double *x, double *y, double *w, double *h);
void ns_textlayoutfragment_rendering_surface_bounds(uintptr_t fragment, double *x, double *y, double *w, double *h);
int ns_textlayoutfragment_text_line_fragments_count(uintptr_t fragment);
void ns_textlayoutfragment_invalidate_layout(uintptr_t fragment);
double ns_textlayoutfragment_leading_padding(uintptr_t fragment);
double ns_textlayoutfragment_trailing_padding(uintptr_t fragment);
double ns_textlayoutfragment_top_margin(uintptr_t fragment);
double ns_textlayoutfragment_bottom_margin(uintptr_t fragment);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTLAYOUTFRAGMENT_H */

#ifndef PHP_APPKIT_NS_CLIPVIEW_H
#define PHP_APPKIT_NS_CLIPVIEW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_clipview_create(double x, double y, double width, double height);
uintptr_t ns_clipview_wrap(void *clip);
void ns_clipview_destroy(uintptr_t clip);
void *ns_clipview_nsclipview(uintptr_t clip);
void ns_clipview_set_document_view(uintptr_t clip, uintptr_t child);
uintptr_t ns_clipview_document_view(uintptr_t clip);
void ns_clipview_set_draws_background(uintptr_t clip, int flag);
int ns_clipview_draws_background(uintptr_t clip);
void ns_clipview_scroll_to_point(uintptr_t clip, double x, double y);
void ns_clipview_set_content_insets(uintptr_t clip, double top, double left, double bottom, double right);
void ns_clipview_set_automatically_adjusts_content_insets(uintptr_t clip, int flag);
int ns_clipview_automatically_adjusts_content_insets(uintptr_t clip);
void ns_clipview_get_document_visible_rect(uintptr_t clip, double *x, double *y, double *w, double *h);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_CLIPVIEW_H */

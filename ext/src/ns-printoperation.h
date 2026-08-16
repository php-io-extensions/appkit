#ifndef PHP_APPKIT_NS_PRINTOPERATION_H
#define PHP_APPKIT_NS_PRINTOPERATION_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_printoperation_wrap(void *operation);
void ns_printoperation_destroy(uintptr_t operation);
void *ns_printoperation_nsprintoperation(uintptr_t operation);

uintptr_t ns_printoperation_with_view(uintptr_t view);
uintptr_t ns_printoperation_with_view_print_info(uintptr_t view, uintptr_t printInfo);
uintptr_t ns_printoperation_pdf_with_view_rect_path(uintptr_t view, double x, double y, double width, double height, const char *path, uintptr_t printInfo);
uintptr_t ns_printoperation_eps_with_view_rect_path(uintptr_t view, double x, double y, double width, double height, const char *path, uintptr_t printInfo);

uintptr_t ns_printoperation_current_operation(void);
void ns_printoperation_set_current_operation(uintptr_t operation);

int ns_printoperation_is_copying_operation(uintptr_t operation);
int ns_printoperation_preferred_rendering_quality(uintptr_t operation);

int ns_printoperation_job_title(uintptr_t operation, char *out, int out_len);
void ns_printoperation_set_job_title(uintptr_t operation, const char *title);

int ns_printoperation_shows_print_panel(uintptr_t operation);
void ns_printoperation_set_shows_print_panel(uintptr_t operation, int shows);
int ns_printoperation_shows_progress_panel(uintptr_t operation);
void ns_printoperation_set_shows_progress_panel(uintptr_t operation, int shows);

uintptr_t ns_printoperation_print_panel(uintptr_t operation);
void ns_printoperation_set_print_panel(uintptr_t operation, uintptr_t panel);

int ns_printoperation_page_order(uintptr_t operation);
void ns_printoperation_set_page_order(uintptr_t operation, int page_order);

int ns_printoperation_run_operation(uintptr_t operation);
int ns_printoperation_run_operation_modal_for_window(uintptr_t operation, uintptr_t window);

void *ns_printoperation_view(uintptr_t operation);
uintptr_t ns_printoperation_print_info(uintptr_t operation);
void ns_printoperation_set_print_info(uintptr_t operation, uintptr_t printInfo);

int ns_printoperation_page_range(uintptr_t operation, long *location, long *length);
int ns_printoperation_current_page(uintptr_t operation);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PRINTOPERATION_H */

#ifndef PHP_APPKIT_NS_PRINTINFO_H
#define PHP_APPKIT_NS_PRINTINFO_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_printinfo_wrap(void *printInfo);
void ns_printinfo_destroy(uintptr_t printInfo);
void *ns_printinfo_nsprintinfo(uintptr_t printInfo);

uintptr_t ns_printinfo_create(void);
uintptr_t ns_printinfo_shared(void);
void ns_printinfo_set_shared(void *printInfo);
void *ns_printinfo_default_printer(void);

int ns_printinfo_paper_name(uintptr_t printInfo, char *out, int out_len);
void ns_printinfo_set_paper_name(uintptr_t printInfo, const char *name);
int ns_printinfo_paper_size(uintptr_t printInfo, double *width, double *height);
void ns_printinfo_set_paper_size(uintptr_t printInfo, double width, double height);
int ns_printinfo_orientation(uintptr_t printInfo);
void ns_printinfo_set_orientation(uintptr_t printInfo, int orientation);
double ns_printinfo_scaling_factor(uintptr_t printInfo);
void ns_printinfo_set_scaling_factor(uintptr_t printInfo, double factor);

double ns_printinfo_left_margin(uintptr_t printInfo);
void ns_printinfo_set_left_margin(uintptr_t printInfo, double value);
double ns_printinfo_right_margin(uintptr_t printInfo);
void ns_printinfo_set_right_margin(uintptr_t printInfo, double value);
double ns_printinfo_top_margin(uintptr_t printInfo);
void ns_printinfo_set_top_margin(uintptr_t printInfo, double value);
double ns_printinfo_bottom_margin(uintptr_t printInfo);
void ns_printinfo_set_bottom_margin(uintptr_t printInfo, double value);
int ns_printinfo_is_horizontally_centered(uintptr_t printInfo);
void ns_printinfo_set_horizontally_centered(uintptr_t printInfo, int centered);
int ns_printinfo_is_vertically_centered(uintptr_t printInfo);
void ns_printinfo_set_vertically_centered(uintptr_t printInfo, int centered);
int ns_printinfo_horizontal_pagination(uintptr_t printInfo);
void ns_printinfo_set_horizontal_pagination(uintptr_t printInfo, int mode);
int ns_printinfo_vertical_pagination(uintptr_t printInfo);
void ns_printinfo_set_vertical_pagination(uintptr_t printInfo, int mode);

int ns_printinfo_job_disposition(uintptr_t printInfo, char *out, int out_len);
void ns_printinfo_set_job_disposition(uintptr_t printInfo, const char *disposition);

uintptr_t ns_printinfo_printer(uintptr_t printInfo);
void ns_printinfo_set_printer(uintptr_t printInfo, uintptr_t printer);

void ns_printinfo_set_up_print_operation_default_values(uintptr_t printInfo);
int ns_printinfo_imageable_page_bounds(uintptr_t printInfo, double *x, double *y, double *width, double *height);
int ns_printinfo_localized_paper_name(uintptr_t printInfo, char *out, int out_len);
int ns_printinfo_is_selection_only(uintptr_t printInfo);
void ns_printinfo_set_selection_only(uintptr_t printInfo, int selection_only);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PRINTINFO_H */

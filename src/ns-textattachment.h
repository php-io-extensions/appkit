#ifndef PHP_APPKIT_NS_TEXTATTACHMENT_H
#define PHP_APPKIT_NS_TEXTATTACHMENT_H

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textattachment_create(void);
uintptr_t ns_textattachment_create_with_data(const char *data, size_t length, const char *file_type);
uintptr_t ns_textattachment_wrap(void *attachment);
void ns_textattachment_destroy(uintptr_t attachment);
void *ns_textattachment_nstextattachment(uintptr_t attachment);

void ns_textattachment_set_file_type(uintptr_t attachment, const char *file_type);
int ns_textattachment_get_file_type(uintptr_t attachment, char *out, int out_len);
void ns_textattachment_set_image(uintptr_t attachment, uintptr_t image);
uintptr_t ns_textattachment_get_image(uintptr_t attachment);
void ns_textattachment_set_bounds(uintptr_t attachment, double x, double y, double width, double height);
void ns_textattachment_get_bounds(uintptr_t attachment, double *x, double *y, double *width, double *height);
void ns_textattachment_set_attachment_cell(uintptr_t attachment, uintptr_t cell);
uintptr_t ns_textattachment_get_attachment_cell(uintptr_t attachment);
void ns_textattachment_set_line_layout_padding(uintptr_t attachment, double padding);
double ns_textattachment_get_line_layout_padding(uintptr_t attachment);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTATTACHMENT_H */

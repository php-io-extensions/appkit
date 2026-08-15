#ifndef PHP_APPKIT_NS_TEXTATTACHMENTCELL_H
#define PHP_APPKIT_NS_TEXTATTACHMENTCELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textattachmentcell_create(void);
uintptr_t ns_textattachmentcell_wrap(void *cell);
void ns_textattachmentcell_destroy(uintptr_t cell);
void *ns_textattachmentcell_nstextattachmentcell(uintptr_t cell);

void ns_textattachmentcell_set_attachment(uintptr_t cell, uintptr_t attachment);
uintptr_t ns_textattachmentcell_get_attachment(uintptr_t cell);
void ns_textattachmentcell_cell_size(uintptr_t cell, double *width, double *height);
void ns_textattachmentcell_cell_baseline_offset(uintptr_t cell, double *x, double *y);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTATTACHMENTCELL_H */

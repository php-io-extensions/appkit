#ifndef PHP_APPKIT_NS_PDFIMAGEREP_H
#define PHP_APPKIT_NS_PDFIMAGEREP_H

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_pdfimagerep_wrap(void *rep);

void ns_pdfimagerep_destroy(uintptr_t rep);

void *ns_pdfimagerep_nspdfimagerep(uintptr_t rep);

uintptr_t ns_pdfimagerep_with_data(const char *data, size_t length);

int ns_pdfimagerep_get_bounds(uintptr_t rep, double *x, double *y, double *width, double *height);

int ns_pdfimagerep_get_pdf_representation(uintptr_t rep, char **out, size_t *out_len);

void ns_pdfimagerep_free_buffer(char *buffer);

int ns_pdfimagerep_current_page(uintptr_t rep);

void ns_pdfimagerep_set_current_page(uintptr_t rep, int page);

int ns_pdfimagerep_page_count(uintptr_t rep);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PDFIMAGEREP_H */

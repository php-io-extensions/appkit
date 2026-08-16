#ifndef PHP_APPKIT_NS_PRINTER_H
#define PHP_APPKIT_NS_PRINTER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_printer_wrap(void *printer);
void ns_printer_destroy(uintptr_t printer);
void *ns_printer_nsprinter(uintptr_t printer);

int ns_printer_names_count(void);
int ns_printer_names_at(int index, char *out, int out_len);
int ns_printer_types_count(void);
int ns_printer_types_at(int index, char *out, int out_len);

uintptr_t ns_printer_with_name(const char *name);
uintptr_t ns_printer_with_type(const char *type);

int ns_printer_name(uintptr_t printer, char *out, int out_len);
int ns_printer_type(uintptr_t printer, char *out, int out_len);
int ns_printer_language_level(uintptr_t printer);
int ns_printer_page_size_for_paper(uintptr_t printer, const char *paper_name, double *width, double *height);
int ns_printer_device_is_printer(uintptr_t printer);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PRINTER_H */

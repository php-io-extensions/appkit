#ifndef PHP_APPKIT_NS_SLIDERTOUCHBARITEM_H
#define PHP_APPKIT_NS_SLIDERTOUCHBARITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_slidertouchbaritem_create(const char *identifier);
uintptr_t ns_slidertouchbaritem_wrap(void *item);
void ns_slidertouchbaritem_destroy(uintptr_t item);
void *ns_slidertouchbaritem_nsslidertouchbaritem(uintptr_t item);
void ns_slidertouchbaritem_set_double_value(uintptr_t item, double value);
double ns_slidertouchbaritem_get_double_value(uintptr_t item);
void ns_slidertouchbaritem_set_label(uintptr_t item, const char *label);
int ns_slidertouchbaritem_get_label(uintptr_t item, char *out, int out_len);
void ns_slidertouchbaritem_set_minimum_slider_width(uintptr_t item, double width);
double ns_slidertouchbaritem_get_minimum_slider_width(uintptr_t item);
void ns_slidertouchbaritem_set_maximum_slider_width(uintptr_t item, double width);
double ns_slidertouchbaritem_get_maximum_slider_width(uintptr_t item);
void ns_slidertouchbaritem_set_customization_label(uintptr_t item, const char *label);
int ns_slidertouchbaritem_get_customization_label(uintptr_t item, char *out, int out_len);
int ns_slidertouchbaritem_poll_action(uintptr_t item);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SLIDERTOUCHBARITEM_H */

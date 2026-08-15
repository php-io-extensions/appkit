#ifndef PHP_APPKIT_NS_PATHCONTROL_H
#define PHP_APPKIT_NS_PATHCONTROL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_PATH_STYLE_STANDARD = 0,
    NS_PATH_STYLE_NAVIGATION_BAR = 1,
    NS_PATH_STYLE_POP_UP = 2
} ns_path_style;

uintptr_t ns_pathcontrol_create(double x, double y, double width, double height);
void ns_pathcontrol_destroy(uintptr_t control);
void ns_pathcontrol_set_url_path(uintptr_t control, const char *path);
int ns_pathcontrol_get_url_path(uintptr_t control, char *out, int out_len);
void ns_pathcontrol_set_path_style(uintptr_t control, int style);
int ns_pathcontrol_get_path_style(uintptr_t control);
void ns_pathcontrol_set_editable(uintptr_t control, int flag);
int ns_pathcontrol_is_editable(uintptr_t control);
void ns_pathcontrol_set_placeholder_string(uintptr_t control, const char *placeholder);
int ns_pathcontrol_get_placeholder_string(uintptr_t control, char *out, int out_len);
void ns_pathcontrol_set_background_color(uintptr_t control, uintptr_t color);
void ns_pathcontrol_set_allowed_types(uintptr_t control, const char **items, int count);
int ns_pathcontrol_poll_change(uintptr_t control);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PATHCONTROL_H */

#ifndef PHP_APPKIT_NS_PRINTPANEL_H
#define PHP_APPKIT_NS_PRINTPANEL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_printpanel_wrap(void *panel);
void ns_printpanel_destroy(uintptr_t panel);
void *ns_printpanel_nsprintpanel(uintptr_t panel);

uintptr_t ns_printpanel_print_panel(void);

unsigned ns_printpanel_options(uintptr_t panel);
void ns_printpanel_set_options(uintptr_t panel, unsigned options);

int ns_printpanel_default_button_title(uintptr_t panel, char *out, int out_len);
void ns_printpanel_set_default_button_title(uintptr_t panel, const char *title);
int ns_printpanel_help_anchor(uintptr_t panel, char *out, int out_len);
void ns_printpanel_set_help_anchor(uintptr_t panel, const char *anchor);
int ns_printpanel_job_style_hint(uintptr_t panel, char *out, int out_len);
void ns_printpanel_set_job_style_hint(uintptr_t panel, const char *hint);

int ns_printpanel_run_modal(uintptr_t panel);
int ns_printpanel_run_modal_with_print_info(uintptr_t panel, void *printInfo);
void *ns_printpanel_print_info(uintptr_t panel);

void ns_printpanel_add_accessory_controller(uintptr_t panel, uintptr_t controller);
void ns_printpanel_remove_accessory_controller(uintptr_t panel, uintptr_t controller);
int ns_printpanel_accessory_controller_count(uintptr_t panel);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PRINTPANEL_H */

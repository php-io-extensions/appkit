#ifndef PHP_APPKIT_NS_LEVELINDICATORCELL_H
#define PHP_APPKIT_NS_LEVELINDICATORCELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_levelindicatorcell_create_text(const char *string);
uintptr_t ns_levelindicatorcell_wrap(void *cell);
void ns_levelindicatorcell_destroy(uintptr_t cell);
void *ns_levelindicatorcell_nslevelindicatorcell(uintptr_t cell);

void ns_levelindicatorcell_set_title(uintptr_t cell, const char *title);
int ns_levelindicatorcell_get_title(uintptr_t cell, char *out, int out_len);
void ns_levelindicatorcell_set_state(uintptr_t cell, int state);
int ns_levelindicatorcell_get_state(uintptr_t cell);
void ns_levelindicatorcell_set_enabled(uintptr_t cell, int enabled);
int ns_levelindicatorcell_is_enabled(uintptr_t cell);
void ns_levelindicatorcell_set_tag(uintptr_t cell, int tag);
int ns_levelindicatorcell_get_tag(uintptr_t cell);

void ns_levelindicatorcell_set_level_indicator_style(uintptr_t cell, int style);
int ns_levelindicatorcell_get_level_indicator_style(uintptr_t cell);
void ns_levelindicatorcell_set_editable(uintptr_t cell, int flag);
int ns_levelindicatorcell_is_editable(uintptr_t cell);
void ns_levelindicatorcell_set_min_value(uintptr_t cell, double value);
double ns_levelindicatorcell_get_min_value(uintptr_t cell);
void ns_levelindicatorcell_set_max_value(uintptr_t cell, double value);
double ns_levelindicatorcell_get_max_value(uintptr_t cell);
void ns_levelindicatorcell_set_warning_value(uintptr_t cell, double value);
double ns_levelindicatorcell_get_warning_value(uintptr_t cell);
void ns_levelindicatorcell_set_critical_value(uintptr_t cell, double value);
double ns_levelindicatorcell_get_critical_value(uintptr_t cell);
void ns_levelindicatorcell_set_double_value(uintptr_t cell, double value);
double ns_levelindicatorcell_get_double_value(uintptr_t cell);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_LEVELINDICATORCELL_H */

#ifndef PHP_APPKIT_NS_LEVELINDICATOR_H
#define PHP_APPKIT_NS_LEVELINDICATOR_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_LEVEL_INDICATOR_STYLE_RELEVANCY = 0,
    NS_LEVEL_INDICATOR_STYLE_CONTINUOUS_CAPACITY = 1,
    NS_LEVEL_INDICATOR_STYLE_DISCRETE_CAPACITY = 2,
    NS_LEVEL_INDICATOR_STYLE_RATING = 3
} ns_level_indicator_style;

typedef enum {
    NS_LEVEL_INDICATOR_PLACEHOLDER_VISIBILITY_AUTOMATIC = 0,
    NS_LEVEL_INDICATOR_PLACEHOLDER_VISIBILITY_ALWAYS = 1,
    NS_LEVEL_INDICATOR_PLACEHOLDER_VISIBILITY_WHILE_EDITING = 2
} ns_level_indicator_placeholder_visibility;

uintptr_t ns_levelindicator_create(double x, double y, double width, double height);
void ns_levelindicator_destroy(uintptr_t indicator);
void ns_levelindicator_set_level_indicator_style(uintptr_t indicator, int style);
int ns_levelindicator_get_level_indicator_style(uintptr_t indicator);
void ns_levelindicator_set_editable(uintptr_t indicator, int flag);
int ns_levelindicator_is_editable(uintptr_t indicator);
void ns_levelindicator_set_min_value(uintptr_t indicator, double value);
double ns_levelindicator_get_min_value(uintptr_t indicator);
void ns_levelindicator_set_max_value(uintptr_t indicator, double value);
double ns_levelindicator_get_max_value(uintptr_t indicator);
void ns_levelindicator_set_warning_value(uintptr_t indicator, double value);
double ns_levelindicator_get_warning_value(uintptr_t indicator);
void ns_levelindicator_set_critical_value(uintptr_t indicator, double value);
double ns_levelindicator_get_critical_value(uintptr_t indicator);
void ns_levelindicator_set_double_value(uintptr_t indicator, double value);
double ns_levelindicator_get_double_value(uintptr_t indicator);
void ns_levelindicator_set_number_of_tick_marks(uintptr_t indicator, int count);
int ns_levelindicator_get_number_of_tick_marks(uintptr_t indicator);
void ns_levelindicator_set_number_of_major_tick_marks(uintptr_t indicator, int count);
int ns_levelindicator_get_number_of_major_tick_marks(uintptr_t indicator);
void ns_levelindicator_set_draws_tiered_capacity_levels(uintptr_t indicator, int flag);
int ns_levelindicator_draws_tiered_capacity_levels(uintptr_t indicator);
void ns_levelindicator_set_placeholder_visibility(uintptr_t indicator, int visibility);
int ns_levelindicator_get_placeholder_visibility(uintptr_t indicator);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_LEVELINDICATOR_H */

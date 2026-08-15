#ifndef PHP_APPKIT_NS_TEXTTABLE_H
#define PHP_APPKIT_NS_TEXTTABLE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_TEXTTABLE_LAYOUT_AUTOMATIC = 0,
    NS_TEXTTABLE_LAYOUT_FIXED = 1
} ns_texttable_layout_algorithm;

typedef enum {
    NS_TEXTBLOCK_VALUE_ABSOLUTE = 0,
    NS_TEXTBLOCK_VALUE_PERCENTAGE = 1
} ns_textblock_value_type;

typedef enum {
    NS_TEXTBLOCK_VERTICAL_ALIGNMENT_TOP = 0,
    NS_TEXTBLOCK_VERTICAL_ALIGNMENT_MIDDLE = 1,
    NS_TEXTBLOCK_VERTICAL_ALIGNMENT_BOTTOM = 2,
    NS_TEXTBLOCK_VERTICAL_ALIGNMENT_BASELINE = 3
} ns_textblock_vertical_alignment;

uintptr_t ns_texttable_create(void);
uintptr_t ns_texttable_wrap(void *table);
void ns_texttable_destroy(uintptr_t table);
void *ns_texttable_nstexttable(uintptr_t table);

void ns_texttable_set_number_of_columns(uintptr_t table, int columns);
int ns_texttable_get_number_of_columns(uintptr_t table);
void ns_texttable_set_layout_algorithm(uintptr_t table, int algorithm);
int ns_texttable_get_layout_algorithm(uintptr_t table);
void ns_texttable_set_collapses_borders(uintptr_t table, int flag);
int ns_texttable_collapses_borders(uintptr_t table);
void ns_texttable_set_hides_empty_cells(uintptr_t table, int flag);
int ns_texttable_hides_empty_cells(uintptr_t table);
void ns_texttable_set_content_width(uintptr_t table, double width, int type);
void ns_texttable_get_content_width(uintptr_t table, double *width, int *type);
void ns_texttable_set_vertical_alignment(uintptr_t table, int alignment);
int ns_texttable_get_vertical_alignment(uintptr_t table);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTTABLE_H */

#ifndef PHP_APPKIT_NS_TABLECOLUMN_H
#define PHP_APPKIT_NS_TABLECOLUMN_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_TABLE_COLUMN_NO_RESIZING = 0,
    NS_TABLE_COLUMN_AUTORESIZING_MASK = 1,
    NS_TABLE_COLUMN_USER_RESIZING_MASK = 2
} ns_table_column_resizing_mask;

uintptr_t ns_tablecolumn_create(const char *identifier);
uintptr_t ns_tablecolumn_wrap(void *column);
void ns_tablecolumn_destroy(uintptr_t column);
void *ns_tablecolumn_nstablecolumn(uintptr_t column);
void ns_tablecolumn_set_identifier(uintptr_t column, const char *identifier);
int ns_tablecolumn_get_identifier(uintptr_t column, char *out, int out_len);
void ns_tablecolumn_set_title(uintptr_t column, const char *title);
int ns_tablecolumn_get_title(uintptr_t column, char *out, int out_len);
void ns_tablecolumn_set_width(uintptr_t column, double width);
double ns_tablecolumn_get_width(uintptr_t column);
void ns_tablecolumn_set_min_width(uintptr_t column, double width);
double ns_tablecolumn_get_min_width(uintptr_t column);
void ns_tablecolumn_set_max_width(uintptr_t column, double width);
double ns_tablecolumn_get_max_width(uintptr_t column);
void ns_tablecolumn_set_hidden(uintptr_t column, int flag);
int ns_tablecolumn_is_hidden(uintptr_t column);
void ns_tablecolumn_set_editable(uintptr_t column, int flag);
int ns_tablecolumn_is_editable(uintptr_t column);
void ns_tablecolumn_set_resizing_mask(uintptr_t column, int mask);
int ns_tablecolumn_get_resizing_mask(uintptr_t column);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TABLECOLUMN_H */

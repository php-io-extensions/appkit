#ifndef PHP_APPKIT_NS_TEXTBLOCK_H
#define PHP_APPKIT_NS_TEXTBLOCK_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_TEXTBLOCK_DIMENSION_WIDTH = 0,
    NS_TEXTBLOCK_DIMENSION_MINIMUM_WIDTH = 1,
    NS_TEXTBLOCK_DIMENSION_MAXIMUM_WIDTH = 2,
    NS_TEXTBLOCK_DIMENSION_HEIGHT = 4,
    NS_TEXTBLOCK_DIMENSION_MINIMUM_HEIGHT = 5,
    NS_TEXTBLOCK_DIMENSION_MAXIMUM_HEIGHT = 6
} ns_textblock_dimension;

typedef enum {
    NS_TEXTBLOCK_LAYER_PADDING = -1,
    NS_TEXTBLOCK_LAYER_BORDER = 0,
    NS_TEXTBLOCK_LAYER_MARGIN = 1
} ns_textblock_layer;

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

uintptr_t ns_textblock_create(void);
uintptr_t ns_textblock_wrap(void *block);
void ns_textblock_destroy(uintptr_t block);
void *ns_textblock_nstextblock(uintptr_t block);

void ns_textblock_set_value(uintptr_t block, double val, int type, int dimension);
double ns_textblock_value_for_dimension(uintptr_t block, int dimension);
int ns_textblock_value_type_for_dimension(uintptr_t block, int dimension);
void ns_textblock_set_content_width(uintptr_t block, double width, int type);
double ns_textblock_content_width(uintptr_t block);
int ns_textblock_content_width_value_type(uintptr_t block);
void ns_textblock_set_width(uintptr_t block, double val, int type, int layer, int edge);
double ns_textblock_width_for_layer(uintptr_t block, int layer, int edge);
int ns_textblock_width_value_type_for_layer(uintptr_t block, int layer, int edge);
void ns_textblock_set_vertical_alignment(uintptr_t block, int alignment);
int ns_textblock_get_vertical_alignment(uintptr_t block);
void ns_textblock_set_background_color(uintptr_t block, uintptr_t color);
uintptr_t ns_textblock_background_color(uintptr_t block);
void ns_textblock_set_border_color(uintptr_t block, uintptr_t color, int edge);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTBLOCK_H */

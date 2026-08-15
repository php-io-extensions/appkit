#ifndef PHP_APPKIT_NS_BEZIERPATH_H
#define PHP_APPKIT_NS_BEZIERPATH_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_BEZIERPATH_LINE_CAP_BUTT = 0,
    NS_BEZIERPATH_LINE_CAP_ROUND = 1,
    NS_BEZIERPATH_LINE_CAP_SQUARE = 2
} ns_bezierpath_line_cap;

typedef enum {
    NS_BEZIERPATH_LINE_JOIN_MITER = 0,
    NS_BEZIERPATH_LINE_JOIN_ROUND = 1,
    NS_BEZIERPATH_LINE_JOIN_BEVEL = 2
} ns_bezierpath_line_join;

typedef enum {
    NS_BEZIERPATH_WINDING_NON_ZERO = 0,
    NS_BEZIERPATH_WINDING_EVEN_ODD = 1
} ns_bezierpath_winding_rule;

uintptr_t ns_bezierpath_create(void);

uintptr_t ns_bezierpath_with_rect(double x, double y, double width, double height);

uintptr_t ns_bezierpath_with_oval_in_rect(double x, double y, double width, double height);

uintptr_t ns_bezierpath_with_rounded_rect(double x, double y, double width, double height, double xRadius, double yRadius);

uintptr_t ns_bezierpath_wrap(void *path);

void ns_bezierpath_destroy(uintptr_t path);

void *ns_bezierpath_nsbezierpath(uintptr_t path);

void ns_bezierpath_move_to_point(uintptr_t path, double x, double y);

void ns_bezierpath_line_to_point(uintptr_t path, double x, double y);

void ns_bezierpath_curve_to_point(uintptr_t path, double endX, double endY, double cp1X, double cp1Y, double cp2X, double cp2Y);

void ns_bezierpath_close_path(uintptr_t path);

void ns_bezierpath_remove_all_points(uintptr_t path);

void ns_bezierpath_append_path(uintptr_t path, uintptr_t other);

void ns_bezierpath_append_rect(uintptr_t path, double x, double y, double width, double height);

void ns_bezierpath_append_oval_in_rect(uintptr_t path, double x, double y, double width, double height);

void ns_bezierpath_set_line_width(uintptr_t path, double width);

double ns_bezierpath_get_line_width(uintptr_t path);

void ns_bezierpath_set_line_cap(uintptr_t path, int style);

int ns_bezierpath_get_line_cap(uintptr_t path);

void ns_bezierpath_set_line_join(uintptr_t path, int style);

int ns_bezierpath_get_line_join(uintptr_t path);

void ns_bezierpath_set_winding_rule(uintptr_t path, int rule);

int ns_bezierpath_get_winding_rule(uintptr_t path);

void ns_bezierpath_set_miter_limit(uintptr_t path, double limit);

double ns_bezierpath_get_miter_limit(uintptr_t path);

void ns_bezierpath_set_flatness(uintptr_t path, double flatness);

double ns_bezierpath_get_flatness(uintptr_t path);

void ns_bezierpath_stroke(uintptr_t path);

void ns_bezierpath_fill(uintptr_t path);

void ns_bezierpath_add_clip(uintptr_t path);

void ns_bezierpath_set_clip(uintptr_t path);

int ns_bezierpath_contains_point(uintptr_t path, double x, double y);

int ns_bezierpath_get_bounds(uintptr_t path, double *x, double *y, double *width, double *height);

void ns_bezierpath_fill_rect(double x, double y, double width, double height);

void ns_bezierpath_stroke_rect(double x, double y, double width, double height);

void ns_bezierpath_clip_rect(double x, double y, double width, double height);

void ns_bezierpath_stroke_line_from_point(double x1, double y1, double x2, double y2);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_BEZIERPATH_H */

#ifndef PHP_APPKIT_NS_GRADIENT_H
#define PHP_APPKIT_NS_GRADIENT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_GRADIENT_DRAWS_BEFORE_START = 1,
    NS_GRADIENT_DRAWS_AFTER_END = 2
} ns_gradient_drawing_option;

uintptr_t ns_gradient_with_starting_color(uintptr_t startingColor, uintptr_t endingColor);

uintptr_t ns_gradient_with_colors(const uintptr_t *colors, int count);

uintptr_t ns_gradient_wrap(void *gradient);

void ns_gradient_destroy(uintptr_t gradient);

void *ns_gradient_nsgradient(uintptr_t gradient);

void ns_gradient_draw_from_point(uintptr_t gradient, double startX, double startY, double endX, double endY, int options);

void ns_gradient_draw_in_rect_angle(uintptr_t gradient, double x, double y, double width, double height, double angle);

void ns_gradient_draw_in_bezier_path_angle(uintptr_t gradient, uintptr_t path, double angle);

void ns_gradient_draw_from_center(uintptr_t gradient, double startCenterX, double startCenterY, double startRadius, double endCenterX, double endCenterY, double endRadius, int options);

void ns_gradient_draw_in_rect_relative_center(uintptr_t gradient, double x, double y, double width, double height, double relCenterX, double relCenterY);

void ns_gradient_draw_in_bezier_path_relative_center(uintptr_t gradient, uintptr_t path, double relCenterX, double relCenterY);

int ns_gradient_number_of_color_stops(uintptr_t gradient);

uintptr_t ns_gradient_interpolated_color_at_location(uintptr_t gradient, double location);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_GRADIENT_H */

#ifndef PHP_APPKIT_NS_COLORWELL_H
#define PHP_APPKIT_NS_COLORWELL_H

/*
 * Faithful 1:1 binding of AppKit NSColorWell.h. Every member of
 * the class (the single base interface; no same-file categories) is
 * either bound or reserved. The bordered getter/setter is
 * API_DEPRECATED (API_TO_BE_DEPRECATED) and reserved. The
 * NSColorWellStyle typedef is not a class member. The
 * NSColorChanging protocol is not a class member. Inherited
 * NSControl / NSView members stay on those classes. No designated
 * initializer is declared here — construction is synthesized
 * initWithFrame (allocs NSColorWell) plus the colorWellWithStyle:
 * class factory. getter=isActive emits isActive. NSColor / NSImage
 * and pulldownTarget (id) cross as handles (0 = nil). Nullable SEL
 * pulldownAction crosses as var. NSColorWellStyle crosses as int.
 * drawWellInside: follows the NSRect convention (component doubles
 * in).
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSColorWell ---- */

/*@zep-construct NS\NSColorWell initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nscolorwell_init_with_frame(zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSColorWell colorWellWithStyle(int style) -> int */
zend_long ns_nscolorwell_color_well_with_style(zval *style);

/*@zep NS\NSColorWell deactivate(int handle) -> void */
void ns_nscolorwell_deactivate(zval *handle);
/*@zep NS\NSColorWell activate(int handle, bool exclusive) -> void */
void ns_nscolorwell_activate(zval *handle, zval *exclusive);
/*@zep NS\NSColorWell isActive(int handle) -> bool */
zend_long ns_nscolorwell_is_active(zval *handle);

/*@zep NS\NSColorWell drawWellInside(int handle, double x, double y, double width, double height) -> void */
void ns_nscolorwell_draw_well_inside(zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@reserved NS\NSColorWell @property (getter=isBordered) BOOL bordered API_DEPRECATED — getter */
/*@reserved NS\NSColorWell @property (getter=isBordered) BOOL bordered API_DEPRECATED — setter */

/*@zep NS\NSColorWell takeColorFrom(int handle, int sender) -> void */
void ns_nscolorwell_take_color_from(zval *handle, zval *sender);

/*@zep NS\NSColorWell color(int handle) -> int */
zend_long ns_nscolorwell_color(zval *handle);
/*@zep NS\NSColorWell setColor(int handle, int color) -> void */
void ns_nscolorwell_set_color(zval *handle, zval *color);

/*@zep NS\NSColorWell colorWellStyle(int handle) -> int */
zend_long ns_nscolorwell_color_well_style(zval *handle);
/*@zep NS\NSColorWell setColorWellStyle(int handle, int colorWellStyle) -> void */
void ns_nscolorwell_set_color_well_style(zval *handle, zval *colorWellStyle);

/*@zep NS\NSColorWell image(int handle) -> int */
zend_long ns_nscolorwell_image(zval *handle);
/*@zep NS\NSColorWell setImage(int handle, int image) -> void */
void ns_nscolorwell_set_image(zval *handle, zval *image);

/*@zep NS\NSColorWell pulldownTarget(int handle) -> int */
zend_long ns_nscolorwell_pulldown_target(zval *handle);
/*@zep NS\NSColorWell setPulldownTarget(int handle, int pulldownTarget) -> void */
void ns_nscolorwell_set_pulldown_target(zval *handle, zval *pulldownTarget);

/*@zep NS\NSColorWell pulldownAction(int handle) -> var */
void ns_nscolorwell_pulldown_action(zval *return_value, zval *handle);
/*@zep NS\NSColorWell setPulldownAction(int handle, var pulldownAction) -> void */
void ns_nscolorwell_set_pulldown_action(zval *handle, zval *pulldownAction);

/*@zep NS\NSColorWell supportsAlpha(int handle) -> bool */
zend_long ns_nscolorwell_supports_alpha(zval *handle);
/*@zep NS\NSColorWell setSupportsAlpha(int handle, bool supportsAlpha) -> void */
void ns_nscolorwell_set_supports_alpha(zval *handle, zval *supportsAlpha);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLORWELL_H */

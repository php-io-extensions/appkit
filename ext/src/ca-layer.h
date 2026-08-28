#ifndef PHP_APPKIT_CA_LAYER_H
#define PHP_APPKIT_CA_LAYER_H

/*
 * Wave A minimal binding of QuartzCore CALayer.h — the four properties
 * NSView.layer consumers need today: backgroundColor, contentsGravity,
 * cornerRadius, masksToBounds. The rest of the header is sanctioned
 * as a visible partial (not silently omitted). Adopted NSSecureCoding
 * / CAMediaTiming and the CALayerDelegate / CAAction / CALayoutManager
 * protocols are not class members. Same-file categories and the
 * CALayerContentsGravity / CALayerContentsFormat / CALayerContentsFilter
 * / CALayerCornerCurve / CAToneMapMode typedefs, the CAAutoresizingMask
 * / CAEdgeAntialiasingMask / CACornerMask options, and the kCAGravity*
 * names are not members of this slice. Construction is synthesized
 * init (allocs CALayer); layers also come from NSView::layer /
 * makeBackingLayer. Inherited NSObject members stay on that class.
 *
 * backgroundColor (nullable CGColorRef) crosses as int pointer bits
 * (0 = NULL), not a registry handle — same crossing as
 * NSColor::colorWithCGColor:. contentsGravity
 * (CALayerContentsGravity, an NSString typed enum) crosses as string.
 * cornerRadius (CGFloat) crosses as double. masksToBounds (BOOL)
 * crosses as bool. The getter is masksToBounds, not isMasksToBounds.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/*@audit partial QuartzCore\CALayer Wave A minimal: backgroundColor, contentsGravity, cornerRadius, masksToBounds */

/* ---- CALayer (Wave A) ---- */

/*@zep-construct QuartzCore\CALayer init() -> int */
zend_long ns_calayer_init(void);

/*@zep QuartzCore\CALayer backgroundColor(int handle) -> int */
zend_long ns_calayer_background_color(zval *handle);
/*@zep QuartzCore\CALayer setBackgroundColor(int handle, int backgroundColor) -> void */
void ns_calayer_set_background_color(zval *handle, zval *backgroundColor);

/*@zep QuartzCore\CALayer contentsGravity(int handle) -> string */
void ns_calayer_contents_gravity(zval *return_value, zval *handle);
/*@zep QuartzCore\CALayer setContentsGravity(int handle, string contentsGravity) -> void */
void ns_calayer_set_contents_gravity(zval *handle, zval *contentsGravity);

/*@zep QuartzCore\CALayer cornerRadius(int handle) -> double */
double ns_calayer_corner_radius(zval *handle);
/*@zep QuartzCore\CALayer setCornerRadius(int handle, double cornerRadius) -> void */
void ns_calayer_set_corner_radius(zval *handle, zval *cornerRadius);

/*@zep QuartzCore\CALayer masksToBounds(int handle) -> bool */
zend_long ns_calayer_masks_to_bounds(zval *handle);
/*@zep QuartzCore\CALayer setMasksToBounds(int handle, bool masksToBounds) -> void */
void ns_calayer_set_masks_to_bounds(zval *handle, zval *masksToBounds);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_CA_LAYER_H */

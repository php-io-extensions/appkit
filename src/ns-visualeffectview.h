#ifndef PHP_APPKIT_NS_VISUALEFFECTVIEW_H
#define PHP_APPKIT_NS_VISUALEFFECTVIEW_H

/*
 * Faithful 1:1 binding of AppKit NSVisualEffectView.h. Every member
 * of the single base interface is either bound or reserved. Nothing
 * is reserved — the header has no blocks, NSCoder, NSAttributedString,
 * NSData, Class, or API_DEPRECATED members. There are no same-file
 * categories. The NSVisualEffectMaterial / NSVisualEffectBlendingMode
 * / NSVisualEffectState typedefs are not class members (the three
 * appearance-based material enum cases are deprecated constants on
 * the typedef, not class members). Inherited NSView / NSResponder
 * members stay on those classes. viewDidMoveToWindow and
 * viewWillMoveToWindow: are redeclared here as NS_REQUIRES_SUPER
 * overrides and bind here. This header declares no initializer —
 * construction is synthesized initWithFrame (allocs
 * NSVisualEffectView). getter=isEmphasized emits isEmphasized /
 * setEmphasized. material / blendingMode / state /
 * interiorBackgroundStyle (readonly NSBackgroundStyle) cross as
 * int. maskImage is a nullable NSImage and crosses as an int
 * handle (0 = nil). The APPKIT_API_UNAVAILABLE_BEGIN_MACCATALYST
 * wrap is blanked by the audit, so the members still count.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- construction glue ---- */

/*@zep-construct NS\NSVisualEffectView initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nsvisualeffectview_init_with_frame(zval *x, zval *y, zval *width, zval *height);

/* ---- Material, blending, and state ---- */

/*@zep NS\NSVisualEffectView material(int handle) -> int */
zend_long ns_nsvisualeffectview_material(zval *handle);
/*@zep NS\NSVisualEffectView setMaterial(int handle, int material) -> void */
void ns_nsvisualeffectview_set_material(zval *handle, zval *material);

/*@zep NS\NSVisualEffectView interiorBackgroundStyle(int handle) -> int */
zend_long ns_nsvisualeffectview_interior_background_style(zval *handle);

/*@zep NS\NSVisualEffectView blendingMode(int handle) -> int */
zend_long ns_nsvisualeffectview_blending_mode(zval *handle);
/*@zep NS\NSVisualEffectView setBlendingMode(int handle, int blendingMode) -> void */
void ns_nsvisualeffectview_set_blending_mode(zval *handle, zval *blendingMode);

/*@zep NS\NSVisualEffectView state(int handle) -> int */
zend_long ns_nsvisualeffectview_state(zval *handle);
/*@zep NS\NSVisualEffectView setState(int handle, int state) -> void */
void ns_nsvisualeffectview_set_state(zval *handle, zval *state);

/*@zep NS\NSVisualEffectView maskImage(int handle) -> int */
zend_long ns_nsvisualeffectview_mask_image(zval *handle);
/*@zep NS\NSVisualEffectView setMaskImage(int handle, int maskImage) -> void */
void ns_nsvisualeffectview_set_mask_image(zval *handle, zval *maskImage);

/*@zep NS\NSVisualEffectView isEmphasized(int handle) -> bool */
zend_long ns_nsvisualeffectview_is_emphasized(zval *handle);
/*@zep NS\NSVisualEffectView setEmphasized(int handle, bool emphasized) -> void */
void ns_nsvisualeffectview_set_emphasized(zval *handle, zval *emphasized);

/* ---- Redeclared NSView overrides ---- */

/*@zep NS\NSVisualEffectView viewDidMoveToWindow(int handle) -> void */
void ns_nsvisualeffectview_view_did_move_to_window(zval *handle);

/*@zep NS\NSVisualEffectView viewWillMoveToWindow(int handle, int newWindow) -> void */
void ns_nsvisualeffectview_view_will_move_to_window(zval *handle, zval *newWindow);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_VISUALEFFECTVIEW_H */

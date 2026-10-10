/*
 * The glue every binding shares: one PHP object per native object, retained
 * while PHP holds it; NSExceptions turned into AppKitException; PHP callables
 * that native code calls back into.
 */

#ifndef APPKIT_RUNTIME_H
#define APPKIT_RUNTIME_H

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include "php.h"
#include "zend_enum.h"
#include "zend_exceptions.h"
#include "php_appkit.h"

#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>
#import <AppKit/AppKit.h>
#include <pthread.h>

/* A PHP callable held for native code to call back into. */
typedef struct appkit_callout {
	zval callable;                 /* UNDEF once detached at request end */
	uint32_t refcount;             /* native references to this record */
	CFTypeRef owner;               /* the native object calling back, not retained */
	void (*detach)(CFTypeRef);     /* stops owner from calling back */
	pthread_t thread;              /* the PHP thread that made it: the only thread that may enter its callable */
	struct appkit_callout *prev;
	struct appkit_callout *next;
} appkit_callout;

ZEND_BEGIN_MODULE_GLOBALS(appkit)
	HashTable boxes;               /* native address => zend_object*, not refcounted */
	appkit_callout *callouts;      /* every callout still attached this request */
ZEND_END_MODULE_GLOBALS(appkit)

ZEND_EXTERN_MODULE_GLOBALS(appkit)
#define APPKIT_G(v) ZEND_MODULE_GLOBALS_ACCESSOR(appkit, v)

typedef struct {
	void *ptr;                     /* retained id or CFTypeRef, NULL before boxing */
	bool cf;                       /* CFRelease() on free instead of -release */
	zend_object std;
} appkit_object;

static zend_always_inline appkit_object *appkit_object_from(zend_object *obj)
{
	return (appkit_object *) ((char *) obj - XtOffsetOf(appkit_object, std));
}

#define APPKIT_ID(zobj) ((id) appkit_object_from(zobj)->ptr)
#define APPKIT_CF(zobj) ((CFTypeRef) appkit_object_from(zobj)->ptr)

extern zend_class_entry *appkit_ce_AppKitException;
extern zend_class_entry *appkit_ce_NSObject;
extern zend_class_entry *appkit_ce_NSResponder;
extern zend_class_entry *appkit_ce_NSApplication;
extern zend_class_entry *appkit_ce_NSApplicationActivationPolicy;
extern zend_class_entry *appkit_ce_NSRequestUserAttentionType;
extern zend_class_entry *appkit_ce_NSEvent;
extern zend_class_entry *appkit_ce_NSEventType;
extern zend_class_entry *appkit_ce_NSEventMask;
extern zend_class_entry *appkit_ce_NSEventModifierFlags;
extern zend_class_entry *appkit_ce_NSDate;
extern zend_class_entry *appkit_ce_NSPoint;
extern zend_class_entry *appkit_ce_CFType;
extern zend_class_entry *appkit_ce_CFRunLoop;
extern zend_class_entry *appkit_ce_CFRunLoopRunResult;
extern zend_class_entry *appkit_ce_CFRunLoopSource;
extern zend_class_entry *appkit_ce_CFFileDescriptor;
extern zend_class_entry *appkit_ce_CFData;
extern zend_class_entry *appkit_ce_CGDataProvider;
extern zend_class_entry *appkit_ce_CGColorSpace;
extern zend_class_entry *appkit_ce_CGImage;
extern zend_class_entry *appkit_ce_NSSize;
extern zend_class_entry *appkit_ce_NSRect;
extern zend_class_entry *appkit_ce_CALayer;
extern zend_class_entry *appkit_ce_NSView;
extern zend_class_entry *appkit_ce_NSWindow;
extern zend_class_entry *appkit_ce_NSWindowStyleMask;
extern zend_class_entry *appkit_ce_NSBackingStoreType;
extern zend_class_entry *appkit_ce_NSMenu;
extern zend_class_entry *appkit_ce_NSMenuItem;
extern zend_class_entry *appkit_ce_NSControlStateValue;
extern zend_class_entry *appkit_ce_ObjCDelegate;
extern zend_class_entry *appkit_ce_ObjCTarget;
extern zend_class_entry *appkit_ce_ObjCObserver;
extern zend_class_entry *appkit_ce_ObjCOpenGLView;
extern zend_class_entry *appkit_ce_NSOpenGLPixelFormat;
extern zend_class_entry *appkit_ce_NSOpenGLContext;
extern zend_class_entry *appkit_ce_NSOpenGLView;
extern zend_class_entry *appkit_ce_NSNotification;
extern zend_class_entry *appkit_ce_NSNotificationCenter;
extern zend_class_entry *appkit_ce_NSOperationQueue;
extern zend_class_entry *appkit_ce_NSCell;
extern zend_class_entry *appkit_ce_NSURL;
extern zend_class_entry *appkit_ce_CMTime;
extern zend_class_entry *appkit_ce_AVPlayerItemStatus;
extern zend_class_entry *appkit_ce_AVPlayerItem;
extern zend_class_entry *appkit_ce_AVPlayerTimeControlStatus;
extern zend_class_entry *appkit_ce_AVPlayer;
extern zend_class_entry *appkit_ce_AVPlayerActionAtItemEnd;
extern zend_class_entry *appkit_ce_AVPlayerViewControlsStyle;
extern zend_class_entry *appkit_ce_AVPlayerView;
extern zend_class_entry *appkit_ce_NSEdgeInsets;
extern zend_class_entry *appkit_ce_NSLayoutAnchor;
extern zend_class_entry *appkit_ce_NSLayoutConstraint;
extern zend_class_entry *appkit_ce_NSColor;
extern zend_class_entry *appkit_ce_NSColorSpace;
extern zend_class_entry *appkit_ce_NSFont;
extern zend_class_entry *appkit_ce_NSFontManager;
extern zend_class_entry *appkit_ce_NSUserInterfaceLayoutOrientation;
extern zend_class_entry *appkit_ce_NSLayoutConstraintOrientation;
extern zend_class_entry *appkit_ce_NSStackViewGravity;
extern zend_class_entry *appkit_ce_NSLayoutAttribute;
extern zend_class_entry *appkit_ce_NSStackViewDistribution;
extern zend_class_entry *appkit_ce_NSStackView;
extern zend_class_entry *appkit_ce_NSGridCellPlacement;
extern zend_class_entry *appkit_ce_NSRange;
extern zend_class_entry *appkit_ce_NSGridView;
extern zend_class_entry *appkit_ce_NSGridCell;
extern zend_class_entry *appkit_ce_NSGridRow;
extern zend_class_entry *appkit_ce_NSGridColumn;
extern zend_class_entry *appkit_ce_NSTextAlignment;
extern zend_class_entry *appkit_ce_NSLineBreakMode;
extern zend_class_entry *appkit_ce_NSControl;
extern zend_class_entry *appkit_ce_NSTextField;
extern zend_class_entry *appkit_ce_NSSecureTextField;
extern zend_class_entry *appkit_ce_NSButtonType;
extern zend_class_entry *appkit_ce_NSButton;
extern zend_class_entry *appkit_ce_NSSwitch;
extern zend_class_entry *appkit_ce_NSSlider;
extern zend_class_entry *appkit_ce_NSPopUpButton;
extern zend_class_entry *appkit_ce_NSDatePickerStyle;
extern zend_class_entry *appkit_ce_NSDatePickerMode;
extern zend_class_entry *appkit_ce_NSTimeZone;
extern zend_class_entry *appkit_ce_NSDatePicker;
extern zend_class_entry *appkit_ce_NSProgressIndicatorStyle;
extern zend_class_entry *appkit_ce_NSProgressIndicator;
extern zend_class_entry *appkit_ce_NSImage;
extern zend_class_entry *appkit_ce_NSImageScaling;
extern zend_class_entry *appkit_ce_NSImageView;
extern zend_class_entry *appkit_ce_NSBoxType;
extern zend_class_entry *appkit_ce_NSBox;
extern zend_class_entry *appkit_ce_NSScrollView;
extern zend_class_entry *appkit_ce_NSTextView;
extern zend_class_entry *appkit_ce_NSTextContainer;
extern zend_class_entry *appkit_ce_NSLayoutManager;
extern zend_class_entry *appkit_ce_NSIndexSet;
extern zend_class_entry *appkit_ce_NSTableColumn;
extern zend_class_entry *appkit_ce_NSTableHeaderView;
extern zend_class_entry *appkit_ce_NSTableView;
extern zend_class_entry *appkit_ce_NSWindowCollectionBehavior;
extern zend_class_entry *appkit_ce_NSWindowTitleVisibility;
extern zend_class_entry *appkit_ce_NSWindowOcclusionState;
extern zend_class_entry *appkit_ce_NSViewLayerContentsRedrawPolicy;
extern zend_class_entry *appkit_ce_NSScreen;
extern zend_class_entry *appkit_ce_CGDisplayMode;
extern zend_class_entry *appkit_ce_CGDisplay;
extern zend_class_entry *appkit_ce_CGInterpolationQuality;
extern zend_class_entry *appkit_ce_CGContext;
extern zend_class_entry *appkit_ce_NSGraphicsContext;
extern zend_class_entry *appkit_ce_CAFrameRateRange;
extern zend_class_entry *appkit_ce_CADisplayLink;
extern zend_class_entry *appkit_ce_NSRunLoop;
extern zend_class_entry *appkit_ce_NSActivityOptions;
extern zend_class_entry *appkit_ce_NSProcessInfo;
extern zend_class_entry *appkit_ce_IOPMAssertion;
extern zend_class_entry *appkit_ce_NSOpenGLContextParameter;
extern zend_class_entry *appkit_ce_ObjCDrawView;
extern zend_class_entry *appkit_ce_ObjCStageWindow;
extern zend_class_entry *appkit_ce_CGEventType;
extern zend_class_entry *appkit_ce_CGMouseButton;
extern zend_class_entry *appkit_ce_CGScrollEventUnit;
extern zend_class_entry *appkit_ce_CGEvent;
extern zend_class_entry *appkit_ce_CGEventSourceStateID;
extern zend_class_entry *appkit_ce_CGEventSource;
extern zend_class_entry *appkit_ce_GCControllerPlayerIndex;
extern zend_class_entry *appkit_ce_GCController;
extern zend_class_entry *appkit_ce_GCPhysicalInputProfile;
extern zend_class_entry *appkit_ce_GCExtendedGamepad;
extern zend_class_entry *appkit_ce_GCMicroGamepad;
extern zend_class_entry *appkit_ce_GCControllerElement;
extern zend_class_entry *appkit_ce_GCControllerButtonInput;
extern zend_class_entry *appkit_ce_GCControllerAxisInput;
extern zend_class_entry *appkit_ce_GCControllerDirectionPad;

/* Class registration, one per stub, called from MINIT in hierarchy order. */
void appkit_register_NSObject(void);
void appkit_register_CALayer(void);
void appkit_register_NSResponder(void);
void appkit_register_NSApplication(void);
void appkit_register_NSEvent(void);
void appkit_register_NSDate(void);
void appkit_register_NSPoint(void);
void appkit_register_CFType(void);
void appkit_register_CFRunLoop(void);
void appkit_register_CFFileDescriptor(void);
void appkit_register_CoreGraphics(int module_number);
void appkit_register_NSGeometry(void);
void appkit_register_NSView(int module_number);
void appkit_register_NSWindow(int module_number);
void appkit_register_NSScreen(void);
void appkit_register_NSGraphicsContext(void);
void appkit_register_CADisplayLink(void);
void appkit_register_NSRunLoop(void);
void appkit_register_NSProcessInfo(void);
void appkit_register_IOPMLib(int module_number);
void appkit_register_CGDirectDisplay(int module_number);
void appkit_register_CGEvent(int module_number);
void appkit_register_GameController(int module_number);
void appkit_register_NSMenu(void);
void appkit_register_ObjCGlue(void);
void appkit_register_NSOpenGL(int module_number);
void appkit_register_NSLayout(void);
void appkit_register_NSColor(void);
void appkit_register_NSFont(void);
void appkit_register_NSStackView(void);
void appkit_register_NSGridView(void);
void appkit_register_NSControls(int module_number);
void appkit_register_NSTableView(void);
void appkit_register_NSNotificationCenter(int module_number);
void appkit_register_AVKit(int module_number);

/* Object model. */
void appkit_object_setup(zend_class_entry *ce);
void appkit_map_objc_class(const char *objc_class, zend_class_entry *ce);
void appkit_box_objc(zval *rv, id obj);
void appkit_box_cf(zval *rv, CFTypeRef ref);
void appkit_adopt_objc(zend_object *wrapper, id retained);
Class appkit_called_class(zend_execute_data *execute_data);

/* Values. */
NSString *appkit_nsstring(zend_string *str);
CFStringRef appkit_run_loop_mode(zend_string *mode);
zend_string *appkit_zend_string(CFStringRef str);
const char *appkit_cfstring_constant(CFStringRef str);
zend_long appkit_enum_value(zend_object *obj_or_null, zend_long fallback);
void appkit_return_enum(zval *rv, zend_class_entry *ce, zend_long value, bool int_fallback);
bool appkit_fd_from_zval(zval *zfd, uint32_t arg_num, int *fd);
bool appkit_rect_from(zend_object *rect, uint32_t arg_num, NSRect *out);
bool appkit_size_from(zend_object *size, uint32_t arg_num, NSSize *out);
bool appkit_point_from(zend_object *point, uint32_t arg_num, NSPoint *out);
bool appkit_edge_insets_from(zend_object *insets, uint32_t arg_num, NSEdgeInsets *out);
void appkit_return_edge_insets(zval *rv, NSEdgeInsets insets);
NSArray *appkit_view_array(HashTable *ht, uint32_t arg_num, id null_placeholder);
void appkit_return_rect(zval *rv, NSRect rect);
void appkit_return_size(zval *rv, NSSize size);
void appkit_return_point(zval *rv, NSPoint point);
NSDictionary *appkit_nsdictionary(HashTable *ht, uint32_t arg_num);
void appkit_zval_from_id(zval *out, id value);

/* Errors. */
void appkit_throw_nsexception(NSException *e);
bool appkit_on_main_thread(void);

/* Callouts. */
appkit_callout *appkit_callout_new(zval *callable, void (*detach)(CFTypeRef));
const void *appkit_callout_retain(const void *info);
void appkit_callout_release(const void *info);
bool appkit_callout_can_enter(appkit_callout *callout);
void appkit_callout_invoke(appkit_callout *callout, uint32_t argc, zval *argv);
bool appkit_callout_call(appkit_callout *callout, uint32_t argc, zval *argv, zval *retval);
void appkit_callouts_detach_all(void);

/*
 * Every binding body runs inside an autorelease pool and turns an NSException
 * into AppKitException. RETURN_* inside the body is fine: the pool drains on
 * the way out and anything returned was boxed (retained) first.
 */
#define APPKIT_BEGIN @autoreleasepool { @try {
#define APPKIT_END } @catch (NSException *appkit_exception) { appkit_throw_nsexception(appkit_exception); RETURN_THROWS(); } }

/* AppKit asserts on the main thread; this makes the refusal a PHP exception. */
#define APPKIT_REQUIRE_MAIN_THREAD() do { \
	if (!appkit_on_main_thread()) { \
		zend_throw_exception_ex(appkit_ce_AppKitException, 0, \
			"%s::%s() must be called on the main thread", \
			ZSTR_VAL(EX(func)->common.scope->name), ZSTR_VAL(EX(func)->common.function_name)); \
		RETURN_THROWS(); \
	} \
} while (0)

/* Owns the callout a notification block calls, so the block's lifetime is the callout's. */
@interface PHPAppKitBlockCallout : NSObject {
@public
	appkit_callout *callout;
}
@end

#endif

/*
 * appkit: 1:1 bindings of AppKit and the CoreFoundation run-loop API AppKit
 * runs on, as PHP classes named after their native counterparts.
 */

#include "runtime.h"
#include "ext/standard/info.h"
#include "ext/spl/spl_exceptions.h"

#import <AppKit/AppKit.h>

#include "../stubs/appkit_arginfo.h"

ZEND_DECLARE_MODULE_GLOBALS(appkit)

zend_class_entry *appkit_ce_AppKitException;
zend_class_entry *appkit_ce_NSObject;
zend_class_entry *appkit_ce_NSResponder;
zend_class_entry *appkit_ce_NSApplication;
zend_class_entry *appkit_ce_NSApplicationActivationPolicy;
zend_class_entry *appkit_ce_NSRequestUserAttentionType;
zend_class_entry *appkit_ce_NSEvent;
zend_class_entry *appkit_ce_NSEventType;
zend_class_entry *appkit_ce_NSEventMask;
zend_class_entry *appkit_ce_NSEventModifierFlags;
zend_class_entry *appkit_ce_NSDate;
zend_class_entry *appkit_ce_NSPoint;
zend_class_entry *appkit_ce_CFType;
zend_class_entry *appkit_ce_CFRunLoop;
zend_class_entry *appkit_ce_CFRunLoopRunResult;
zend_class_entry *appkit_ce_CFRunLoopSource;
zend_class_entry *appkit_ce_CFFileDescriptor;
zend_class_entry *appkit_ce_CFData;
zend_class_entry *appkit_ce_CGDataProvider;
zend_class_entry *appkit_ce_CGColorSpace;
zend_class_entry *appkit_ce_CGImage;
zend_class_entry *appkit_ce_NSSize;
zend_class_entry *appkit_ce_NSRect;
zend_class_entry *appkit_ce_CALayer;
zend_class_entry *appkit_ce_NSView;
zend_class_entry *appkit_ce_NSWindow;
zend_class_entry *appkit_ce_NSWindowStyleMask;
zend_class_entry *appkit_ce_NSBackingStoreType;
zend_class_entry *appkit_ce_NSMenu;
zend_class_entry *appkit_ce_NSMenuItem;
zend_class_entry *appkit_ce_NSControlStateValue;
zend_class_entry *appkit_ce_ObjCDelegate;
zend_class_entry *appkit_ce_ObjCTarget;
zend_class_entry *appkit_ce_ObjCObserver;
zend_class_entry *appkit_ce_ObjCOpenGLView;
zend_class_entry *appkit_ce_NSOpenGLPixelFormat;
zend_class_entry *appkit_ce_NSOpenGLContext;
zend_class_entry *appkit_ce_NSOpenGLView;
zend_class_entry *appkit_ce_NSNotification;
zend_class_entry *appkit_ce_NSNotificationCenter;
zend_class_entry *appkit_ce_NSOperationQueue;
zend_class_entry *appkit_ce_NSCell;
zend_class_entry *appkit_ce_NSURL;
zend_class_entry *appkit_ce_CMTime;
zend_class_entry *appkit_ce_AVPlayerItemStatus;
zend_class_entry *appkit_ce_AVPlayerItem;
zend_class_entry *appkit_ce_AVPlayerTimeControlStatus;
zend_class_entry *appkit_ce_AVPlayer;
zend_class_entry *appkit_ce_AVPlayerActionAtItemEnd;
zend_class_entry *appkit_ce_AVPlayerViewControlsStyle;
zend_class_entry *appkit_ce_AVPlayerView;
zend_class_entry *appkit_ce_NSEdgeInsets;
zend_class_entry *appkit_ce_NSLayoutAnchor;
zend_class_entry *appkit_ce_NSLayoutConstraint;
zend_class_entry *appkit_ce_NSColor;
zend_class_entry *appkit_ce_NSColorSpace;
zend_class_entry *appkit_ce_NSFont;
zend_class_entry *appkit_ce_NSFontManager;
zend_class_entry *appkit_ce_NSUserInterfaceLayoutOrientation;
zend_class_entry *appkit_ce_NSLayoutConstraintOrientation;
zend_class_entry *appkit_ce_NSStackViewGravity;
zend_class_entry *appkit_ce_NSLayoutAttribute;
zend_class_entry *appkit_ce_NSStackViewDistribution;
zend_class_entry *appkit_ce_NSStackView;
zend_class_entry *appkit_ce_NSGridCellPlacement;
zend_class_entry *appkit_ce_NSRange;
zend_class_entry *appkit_ce_NSGridView;
zend_class_entry *appkit_ce_NSGridCell;
zend_class_entry *appkit_ce_NSGridRow;
zend_class_entry *appkit_ce_NSGridColumn;
zend_class_entry *appkit_ce_NSTextAlignment;
zend_class_entry *appkit_ce_NSLineBreakMode;
zend_class_entry *appkit_ce_NSControl;
zend_class_entry *appkit_ce_NSTextField;
zend_class_entry *appkit_ce_NSSecureTextField;
zend_class_entry *appkit_ce_NSButtonType;
zend_class_entry *appkit_ce_NSButton;
zend_class_entry *appkit_ce_NSSwitch;
zend_class_entry *appkit_ce_NSSlider;
zend_class_entry *appkit_ce_NSPopUpButton;
zend_class_entry *appkit_ce_NSDatePickerStyle;
zend_class_entry *appkit_ce_NSDatePickerMode;
zend_class_entry *appkit_ce_NSTimeZone;
zend_class_entry *appkit_ce_NSDatePicker;
zend_class_entry *appkit_ce_NSProgressIndicatorStyle;
zend_class_entry *appkit_ce_NSProgressIndicator;
zend_class_entry *appkit_ce_NSImage;
zend_class_entry *appkit_ce_NSImageScaling;
zend_class_entry *appkit_ce_NSImageView;
zend_class_entry *appkit_ce_NSBoxType;
zend_class_entry *appkit_ce_NSBox;
zend_class_entry *appkit_ce_NSScrollView;
zend_class_entry *appkit_ce_NSTextView;
zend_class_entry *appkit_ce_NSTextContainer;
zend_class_entry *appkit_ce_NSLayoutManager;
zend_class_entry *appkit_ce_NSIndexSet;
zend_class_entry *appkit_ce_NSTableColumn;
zend_class_entry *appkit_ce_NSTableHeaderView;
zend_class_entry *appkit_ce_NSTableView;
zend_class_entry *appkit_ce_NSWindowCollectionBehavior;
zend_class_entry *appkit_ce_NSWindowTitleVisibility;
zend_class_entry *appkit_ce_NSWindowOcclusionState;
zend_class_entry *appkit_ce_NSViewLayerContentsRedrawPolicy;
zend_class_entry *appkit_ce_NSScreen;
zend_class_entry *appkit_ce_CGDisplayMode;
zend_class_entry *appkit_ce_CGDisplay;
zend_class_entry *appkit_ce_CGInterpolationQuality;
zend_class_entry *appkit_ce_CGContext;
zend_class_entry *appkit_ce_NSGraphicsContext;
zend_class_entry *appkit_ce_CAFrameRateRange;
zend_class_entry *appkit_ce_CADisplayLink;
zend_class_entry *appkit_ce_NSRunLoop;
zend_class_entry *appkit_ce_NSActivityOptions;
zend_class_entry *appkit_ce_NSProcessInfo;
zend_class_entry *appkit_ce_IOPMAssertion;
zend_class_entry *appkit_ce_NSOpenGLContextParameter;
zend_class_entry *appkit_ce_ObjCDrawView;
zend_class_entry *appkit_ce_ObjCStageWindow;

static PHP_GINIT_FUNCTION(appkit)
{
#if defined(COMPILE_DL_APPKIT) && defined(ZTS)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif
	zend_hash_init(&appkit_globals->boxes, 32, NULL, NULL, 1);
	appkit_globals->callouts = NULL;
}

static PHP_GSHUTDOWN_FUNCTION(appkit)
{
	zend_hash_destroy(&appkit_globals->boxes);
}

PHP_MINIT_FUNCTION(appkit)
{
	register_appkit_symbols(module_number);
	appkit_ce_AppKitException = register_class_AppKitException(spl_ce_RuntimeException);

	appkit_register_NSObject();
	appkit_register_CALayer();
	appkit_register_NSResponder();
	appkit_register_NSApplication();
	appkit_register_NSEvent();
	appkit_register_NSDate();
	appkit_register_NSPoint();
	appkit_register_NSGeometry();
	appkit_register_NSView(module_number);
	appkit_register_NSOpenGL(module_number);
	appkit_register_NSLayout();
	appkit_register_NSColor();
	appkit_register_NSFont();
	appkit_register_NSStackView();
	appkit_register_NSGridView();
	appkit_register_NSControls(module_number);
	appkit_register_NSTableView();
	appkit_register_NSNotificationCenter(module_number);
	appkit_register_AVKit(module_number);
	appkit_register_NSWindow(module_number);
	appkit_register_NSScreen();
	appkit_register_NSGraphicsContext();
	appkit_register_CADisplayLink();
	appkit_register_NSRunLoop();
	appkit_register_NSProcessInfo();
	appkit_register_IOPMLib(module_number);
	appkit_register_NSMenu();
	appkit_register_ObjCGlue();

	appkit_register_CFType();
	appkit_register_CFRunLoop();
	appkit_register_CFFileDescriptor();
	appkit_register_CoreGraphics(module_number);
	appkit_register_CGDirectDisplay(module_number);

	return SUCCESS;
}

PHP_RINIT_FUNCTION(appkit)
{
#if defined(COMPILE_DL_APPKIT) && defined(ZTS)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif
	return SUCCESS;
}

PHP_RSHUTDOWN_FUNCTION(appkit)
{
	appkit_callouts_detach_all();
	return SUCCESS;
}

PHP_MINFO_FUNCTION(appkit)
{
	php_info_print_table_start();
	php_info_print_table_row(2, "appkit support", "enabled");
	php_info_print_table_row(2, "Version", PHP_APPKIT_VERSION);
	php_info_print_table_row(2, "macOS", [[[NSProcessInfo processInfo] operatingSystemVersionString] UTF8String]);
	php_info_print_table_end();
}

zend_module_entry appkit_module_entry = {
	STANDARD_MODULE_HEADER,
	"appkit",
	NULL,
	PHP_MINIT(appkit),
	NULL,
	PHP_RINIT(appkit),
	PHP_RSHUTDOWN(appkit),
	PHP_MINFO(appkit),
	PHP_APPKIT_VERSION,
	PHP_MODULE_GLOBALS(appkit),
	PHP_GINIT(appkit),
	PHP_GSHUTDOWN(appkit),
	NULL,
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_APPKIT
# ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
# endif
ZEND_GET_MODULE(appkit)
#endif

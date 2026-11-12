#include "runtime.h"
#include "controls.h"

#import <WebKit/WebKit.h>

#include "../stubs/WebKit_arginfo.h"

void appkit_register_WebKit(void)
{
	APPKIT_MAP(NSURLRequest, appkit_ce_NSObject);
	APPKIT_MAP(WKNavigation, appkit_ce_NSObject);
	APPKIT_MAP(WKWebViewConfiguration, appkit_ce_NSObject);
	APPKIT_MAP(WKWebView, appkit_ce_NSView);
}

/* NSURLRequest */
ANY_METHOD(NSURLRequest, requestWithURL, PARSE_OBJ(appkit_ce_NSURL), appkit_box_objc(return_value, [CALLED requestWithURL:(NSURL *) APPKIT_ID(v)]);)
ANY_OBJ_GET(NSURLRequest, NSURLRequest, URL, URL)

/* WKWebViewConfiguration */
ZEND_METHOD(WKWebViewConfiguration, init)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		WKWebViewConfiguration *configuration = [[CALLED alloc] init];
		appkit_box_objc(return_value, configuration);
		[configuration release];
	APPKIT_END
}

/* WKWebView */
ZEND_METHOD(WKWebView, initWithFrameConfiguration)
{
	zend_object *frame, *configuration;
	NSRect rect;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(frame, appkit_ce_NSRect)
		Z_PARAM_OBJ_OF_CLASS(configuration, appkit_ce_WKWebViewConfiguration)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-wkwebview-init-with-frame-configuration */
	if (!appkit_rect_from(frame, 1, &rect)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		WKWebView *view = [[(Class) appkit_called_class(execute_data) alloc] initWithFrame:rect configuration:(WKWebViewConfiguration *) APPKIT_ID(configuration)];
		appkit_box_objc(return_value, view);
		[view release];
	APPKIT_END
}

OBJ_SET_OR_NULL(WKWebView, WKWebView, setNavigationDelegate, setNavigationDelegate, appkit_ce_NSObject, id<WKNavigationDelegate>) /* binding:main-thread-wkwebview-set-navigation-delegate */
METHOD(WKWebView, loadRequest, PARSE_OBJ(appkit_ce_NSURLRequest), appkit_box_objc(return_value, [SELF(WKWebView) loadRequest:(NSURLRequest *) APPKIT_ID(v)]);) /* binding:main-thread-wkwebview-load-request */

ZEND_METHOD(WKWebView, loadHTMLStringBaseURL)
{
	zend_string *string;
	zend_object *base = NULL;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(string)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(base, appkit_ce_NSURL)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-wkwebview-load-html-string-base-url */

	APPKIT_BEGIN
		appkit_box_objc(return_value, [SELF(WKWebView) loadHTMLString:appkit_nsstring(string) baseURL:(NSURL *) OPTIONAL_ID(base)]);
	APPKIT_END
}

STR_GET_OR_NULL(WKWebView, WKWebView, title, title) /* binding:main-thread-wkwebview-title */
OBJ_GET(WKWebView, WKWebView, URL, URL) /* binding:main-thread-wkwebview-url */
BOOL_GET(WKWebView, WKWebView, isLoading, isLoading) /* binding:main-thread-wkwebview-is-loading */
BOOL_GET(WKWebView, WKWebView, canGoBack, canGoBack) /* binding:main-thread-wkwebview-can-go-back */
BOOL_GET(WKWebView, WKWebView, canGoForward, canGoForward) /* binding:main-thread-wkwebview-can-go-forward */
OBJ_GET(WKWebView, WKWebView, goBack, goBack) /* binding:main-thread-wkwebview-go-back */
OBJ_GET(WKWebView, WKWebView, goForward, goForward) /* binding:main-thread-wkwebview-go-forward */
OBJ_GET(WKWebView, WKWebView, reload, reload) /* binding:main-thread-wkwebview-reload */
VOID_METHOD(WKWebView, WKWebView, stopLoading, stopLoading) /* binding:main-thread-wkwebview-stop-loading */

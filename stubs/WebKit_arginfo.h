/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 752ed159c635b921f67c5ef75870cab3a4604b82 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSURLRequest_requestWithURL, 0, 1, IS_STATIC, 0)
	ZEND_ARG_OBJ_INFO(0, URL, NSURL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSURLRequest_URL, 0, 0, NSURL, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_WKWebViewConfiguration_init, 0, 0, IS_STATIC, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_WKWebView_initWithFrameConfiguration, 0, 2, IS_STATIC, 0)
	ZEND_ARG_OBJ_INFO(0, frame, NSRect, 0)
	ZEND_ARG_OBJ_INFO(0, configuration, WKWebViewConfiguration, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_WKWebView_setNavigationDelegate, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, navigationDelegate, NSObject, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_WKWebView_loadRequest, 0, 1, WKNavigation, 1)
	ZEND_ARG_OBJ_INFO(0, request, NSURLRequest, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_WKWebView_loadHTMLStringBaseURL, 0, 2, WKNavigation, 1)
	ZEND_ARG_TYPE_INFO(0, string, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, baseURL, NSURL, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_WKWebView_title, 0, 0, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_WKWebView_URL arginfo_class_NSURLRequest_URL

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_WKWebView_isLoading, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_WKWebView_canGoBack arginfo_class_WKWebView_isLoading

#define arginfo_class_WKWebView_canGoForward arginfo_class_WKWebView_isLoading

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_WKWebView_goBack, 0, 0, WKNavigation, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_WKWebView_goForward arginfo_class_WKWebView_goBack

#define arginfo_class_WKWebView_reload arginfo_class_WKWebView_goBack

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_WKWebView_stopLoading, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSURLRequest, requestWithURL);
ZEND_METHOD(NSURLRequest, URL);
ZEND_METHOD(WKWebViewConfiguration, init);
ZEND_METHOD(WKWebView, initWithFrameConfiguration);
ZEND_METHOD(WKWebView, setNavigationDelegate);
ZEND_METHOD(WKWebView, loadRequest);
ZEND_METHOD(WKWebView, loadHTMLStringBaseURL);
ZEND_METHOD(WKWebView, title);
ZEND_METHOD(WKWebView, URL);
ZEND_METHOD(WKWebView, isLoading);
ZEND_METHOD(WKWebView, canGoBack);
ZEND_METHOD(WKWebView, canGoForward);
ZEND_METHOD(WKWebView, goBack);
ZEND_METHOD(WKWebView, goForward);
ZEND_METHOD(WKWebView, reload);
ZEND_METHOD(WKWebView, stopLoading);

static const zend_function_entry class_NSURLRequest_methods[] = {
	ZEND_ME(NSURLRequest, requestWithURL, arginfo_class_NSURLRequest_requestWithURL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSURLRequest, URL, arginfo_class_NSURLRequest_URL, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_WKWebViewConfiguration_methods[] = {
	ZEND_ME(WKWebViewConfiguration, init, arginfo_class_WKWebViewConfiguration_init, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static const zend_function_entry class_WKWebView_methods[] = {
	ZEND_ME(WKWebView, initWithFrameConfiguration, arginfo_class_WKWebView_initWithFrameConfiguration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(WKWebView, setNavigationDelegate, arginfo_class_WKWebView_setNavigationDelegate, ZEND_ACC_PUBLIC)
	ZEND_ME(WKWebView, loadRequest, arginfo_class_WKWebView_loadRequest, ZEND_ACC_PUBLIC)
	ZEND_ME(WKWebView, loadHTMLStringBaseURL, arginfo_class_WKWebView_loadHTMLStringBaseURL, ZEND_ACC_PUBLIC)
	ZEND_ME(WKWebView, title, arginfo_class_WKWebView_title, ZEND_ACC_PUBLIC)
	ZEND_ME(WKWebView, URL, arginfo_class_WKWebView_URL, ZEND_ACC_PUBLIC)
	ZEND_ME(WKWebView, isLoading, arginfo_class_WKWebView_isLoading, ZEND_ACC_PUBLIC)
	ZEND_ME(WKWebView, canGoBack, arginfo_class_WKWebView_canGoBack, ZEND_ACC_PUBLIC)
	ZEND_ME(WKWebView, canGoForward, arginfo_class_WKWebView_canGoForward, ZEND_ACC_PUBLIC)
	ZEND_ME(WKWebView, goBack, arginfo_class_WKWebView_goBack, ZEND_ACC_PUBLIC)
	ZEND_ME(WKWebView, goForward, arginfo_class_WKWebView_goForward, ZEND_ACC_PUBLIC)
	ZEND_ME(WKWebView, reload, arginfo_class_WKWebView_reload, ZEND_ACC_PUBLIC)
	ZEND_ME(WKWebView, stopLoading, arginfo_class_WKWebView_stopLoading, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSURLRequest(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSURLRequest", class_NSURLRequest_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_WKNavigation(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "WKNavigation", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_WKWebViewConfiguration(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "WKWebViewConfiguration", class_WKWebViewConfiguration_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_WKWebView(zend_class_entry *class_entry_NSView)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "WKWebView", class_WKWebView_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSView, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

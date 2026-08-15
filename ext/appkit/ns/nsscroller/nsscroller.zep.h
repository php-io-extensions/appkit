
extern zend_class_entry *appkit_ns_nsscroller_nsscroller_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSScroller_NSScroller);

PHP_METHOD(AppKit_NS_NSScroller_NSScroller, create);
PHP_METHOD(AppKit_NS_NSScroller_NSScroller, wrap);
PHP_METHOD(AppKit_NS_NSScroller_NSScroller, destroy);
PHP_METHOD(AppKit_NS_NSScroller_NSScroller, nsScroller);
PHP_METHOD(AppKit_NS_NSScroller_NSScroller, setScrollerStyle);
PHP_METHOD(AppKit_NS_NSScroller_NSScroller, getScrollerStyle);
PHP_METHOD(AppKit_NS_NSScroller_NSScroller, setKnobStyle);
PHP_METHOD(AppKit_NS_NSScroller_NSScroller, getKnobStyle);
PHP_METHOD(AppKit_NS_NSScroller_NSScroller, setControlSize);
PHP_METHOD(AppKit_NS_NSScroller_NSScroller, getControlSize);
PHP_METHOD(AppKit_NS_NSScroller_NSScroller, setKnobProportion);
PHP_METHOD(AppKit_NS_NSScroller_NSScroller, getKnobProportion);
PHP_METHOD(AppKit_NS_NSScroller_NSScroller, hitPart);
PHP_METHOD(AppKit_NS_NSScroller_NSScroller, preferredScrollerStyle);
PHP_METHOD(AppKit_NS_NSScroller_NSScroller, scrollerWidth);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscroller_nsscroller_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscroller_nsscroller_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsScrollerPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscroller_nsscroller_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, scroller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscroller_nsscroller_nsscroller, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scroller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscroller_nsscroller_setscrollerstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, scroller, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscroller_nsscroller_getscrollerstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scroller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscroller_nsscroller_setknobstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, scroller, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscroller_nsscroller_getknobstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scroller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscroller_nsscroller_setcontrolsize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, scroller, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscroller_nsscroller_getcontrolsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scroller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscroller_nsscroller_setknobproportion, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, scroller, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, proportion, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscroller_nsscroller_getknobproportion, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, scroller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscroller_nsscroller_hitpart, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scroller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscroller_nsscroller_preferredscrollerstyle, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscroller_nsscroller_scrollerwidth, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, controlSize, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scrollerStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsscroller_nsscroller_method_entry) {
	PHP_ME(AppKit_NS_NSScroller_NSScroller, create, arginfo_appkit_ns_nsscroller_nsscroller_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScroller_NSScroller, wrap, arginfo_appkit_ns_nsscroller_nsscroller_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScroller_NSScroller, destroy, arginfo_appkit_ns_nsscroller_nsscroller_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScroller_NSScroller, nsScroller, arginfo_appkit_ns_nsscroller_nsscroller_nsscroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScroller_NSScroller, setScrollerStyle, arginfo_appkit_ns_nsscroller_nsscroller_setscrollerstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScroller_NSScroller, getScrollerStyle, arginfo_appkit_ns_nsscroller_nsscroller_getscrollerstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScroller_NSScroller, setKnobStyle, arginfo_appkit_ns_nsscroller_nsscroller_setknobstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScroller_NSScroller, getKnobStyle, arginfo_appkit_ns_nsscroller_nsscroller_getknobstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScroller_NSScroller, setControlSize, arginfo_appkit_ns_nsscroller_nsscroller_setcontrolsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScroller_NSScroller, getControlSize, arginfo_appkit_ns_nsscroller_nsscroller_getcontrolsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScroller_NSScroller, setKnobProportion, arginfo_appkit_ns_nsscroller_nsscroller_setknobproportion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScroller_NSScroller, getKnobProportion, arginfo_appkit_ns_nsscroller_nsscroller_getknobproportion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScroller_NSScroller, hitPart, arginfo_appkit_ns_nsscroller_nsscroller_hitpart, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScroller_NSScroller, preferredScrollerStyle, arginfo_appkit_ns_nsscroller_nsscroller_preferredscrollerstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScroller_NSScroller, scrollerWidth, arginfo_appkit_ns_nsscroller_nsscroller_scrollerwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

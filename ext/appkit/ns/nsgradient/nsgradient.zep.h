
extern zend_class_entry *appkit_ns_nsgradient_nsgradient_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSGradient_NSGradient);

PHP_METHOD(AppKit_NS_NSGradient_NSGradient, withStartingColor);
PHP_METHOD(AppKit_NS_NSGradient_NSGradient, withColors);
PHP_METHOD(AppKit_NS_NSGradient_NSGradient, wrap);
PHP_METHOD(AppKit_NS_NSGradient_NSGradient, destroy);
PHP_METHOD(AppKit_NS_NSGradient_NSGradient, nsGradient);
PHP_METHOD(AppKit_NS_NSGradient_NSGradient, drawFromPoint);
PHP_METHOD(AppKit_NS_NSGradient_NSGradient, drawInRectAngle);
PHP_METHOD(AppKit_NS_NSGradient_NSGradient, drawInBezierPathAngle);
PHP_METHOD(AppKit_NS_NSGradient_NSGradient, drawFromCenter);
PHP_METHOD(AppKit_NS_NSGradient_NSGradient, drawInRectRelativeCenter);
PHP_METHOD(AppKit_NS_NSGradient_NSGradient, drawInBezierPathRelativeCenter);
PHP_METHOD(AppKit_NS_NSGradient_NSGradient, numberOfColorStops);
PHP_METHOD(AppKit_NS_NSGradient_NSGradient, interpolatedColorAtLocation);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgradient_nsgradient_withstartingcolor, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, startingColor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, endingColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgradient_nsgradient_withcolors, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, colors, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgradient_nsgradient_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsGradientPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgradient_nsgradient_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, gradient, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgradient_nsgradient_nsgradient, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gradient, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgradient_nsgradient_drawfrompoint, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, gradient, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, startX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, startY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, endX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, endY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgradient_nsgradient_drawinrectangle, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, gradient, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, angle, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgradient_nsgradient_drawinbezierpathangle, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, gradient, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, angle, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgradient_nsgradient_drawfromcenter, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, gradient, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, startCenterX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, startCenterY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, startRadius, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, endCenterX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, endCenterY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, endRadius, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgradient_nsgradient_drawinrectrelativecenter, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, gradient, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, relCenterX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, relCenterY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgradient_nsgradient_drawinbezierpathrelativecenter, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, gradient, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, relCenterX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, relCenterY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgradient_nsgradient_numberofcolorstops, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gradient, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgradient_nsgradient_interpolatedcoloratlocation, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gradient, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsgradient_nsgradient_method_entry) {
	PHP_ME(AppKit_NS_NSGradient_NSGradient, withStartingColor, arginfo_appkit_ns_nsgradient_nsgradient_withstartingcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGradient_NSGradient, withColors, arginfo_appkit_ns_nsgradient_nsgradient_withcolors, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGradient_NSGradient, wrap, arginfo_appkit_ns_nsgradient_nsgradient_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGradient_NSGradient, destroy, arginfo_appkit_ns_nsgradient_nsgradient_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGradient_NSGradient, nsGradient, arginfo_appkit_ns_nsgradient_nsgradient_nsgradient, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGradient_NSGradient, drawFromPoint, arginfo_appkit_ns_nsgradient_nsgradient_drawfrompoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGradient_NSGradient, drawInRectAngle, arginfo_appkit_ns_nsgradient_nsgradient_drawinrectangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGradient_NSGradient, drawInBezierPathAngle, arginfo_appkit_ns_nsgradient_nsgradient_drawinbezierpathangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGradient_NSGradient, drawFromCenter, arginfo_appkit_ns_nsgradient_nsgradient_drawfromcenter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGradient_NSGradient, drawInRectRelativeCenter, arginfo_appkit_ns_nsgradient_nsgradient_drawinrectrelativecenter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGradient_NSGradient, drawInBezierPathRelativeCenter, arginfo_appkit_ns_nsgradient_nsgradient_drawinbezierpathrelativecenter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGradient_NSGradient, numberOfColorStops, arginfo_appkit_ns_nsgradient_nsgradient_numberofcolorstops, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGradient_NSGradient, interpolatedColorAtLocation, arginfo_appkit_ns_nsgradient_nsgradient_interpolatedcoloratlocation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

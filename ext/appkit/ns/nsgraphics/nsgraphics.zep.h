
extern zend_class_entry *appkit_ns_nsgraphics_nsgraphics_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSGraphics_NSGraphics);

PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, beep);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, rectFill);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, rectFillUsingOperation);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, frameRect);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, frameRectWithWidth);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, frameRectWithWidthUsingOperation);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, rectClip);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, drawGrayBezel);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, drawGroove);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, drawWhiteBezel);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, drawButton);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, drawDarkBezel);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, drawLightBezel);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, eraseRect);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, highlightRect);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, dottedFrameRect);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, drawWindowBackground);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, setFocusRingStyle);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, disableScreenUpdates);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, enableScreenUpdates);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, showAnimationEffect);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, white);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, lightGray);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, darkGray);
PHP_METHOD(AppKit_NS_NSGraphics_NSGraphics, black);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_beep, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_rectfill, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_rectfillusingoperation, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, op, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_framerect, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_framerectwithwidth, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, frameWidth, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_framerectwithwidthusingoperation, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, frameWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, op, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_rectclip, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_drawgraybezel, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipW, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipH, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_drawgroove, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipW, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipH, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_drawwhitebezel, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipW, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipH, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_drawbutton, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipW, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipH, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_drawdarkbezel, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipW, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipH, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_drawlightbezel, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipW, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, clipH, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_eraserect, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_highlightrect, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_dottedframerect, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_drawwindowbackground, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_setfocusringstyle, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, placement, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_disablescreenupdates, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_enablescreenupdates, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_showanimationeffect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, effect, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, centerX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, centerY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sizeW, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sizeH, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_white, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_lightgray, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_darkgray, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsgraphics_nsgraphics_black, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsgraphics_nsgraphics_method_entry) {
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, beep, arginfo_appkit_ns_nsgraphics_nsgraphics_beep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, rectFill, arginfo_appkit_ns_nsgraphics_nsgraphics_rectfill, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, rectFillUsingOperation, arginfo_appkit_ns_nsgraphics_nsgraphics_rectfillusingoperation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, frameRect, arginfo_appkit_ns_nsgraphics_nsgraphics_framerect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, frameRectWithWidth, arginfo_appkit_ns_nsgraphics_nsgraphics_framerectwithwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, frameRectWithWidthUsingOperation, arginfo_appkit_ns_nsgraphics_nsgraphics_framerectwithwidthusingoperation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, rectClip, arginfo_appkit_ns_nsgraphics_nsgraphics_rectclip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, drawGrayBezel, arginfo_appkit_ns_nsgraphics_nsgraphics_drawgraybezel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, drawGroove, arginfo_appkit_ns_nsgraphics_nsgraphics_drawgroove, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, drawWhiteBezel, arginfo_appkit_ns_nsgraphics_nsgraphics_drawwhitebezel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, drawButton, arginfo_appkit_ns_nsgraphics_nsgraphics_drawbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, drawDarkBezel, arginfo_appkit_ns_nsgraphics_nsgraphics_drawdarkbezel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, drawLightBezel, arginfo_appkit_ns_nsgraphics_nsgraphics_drawlightbezel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, eraseRect, arginfo_appkit_ns_nsgraphics_nsgraphics_eraserect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, highlightRect, arginfo_appkit_ns_nsgraphics_nsgraphics_highlightrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, dottedFrameRect, arginfo_appkit_ns_nsgraphics_nsgraphics_dottedframerect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, drawWindowBackground, arginfo_appkit_ns_nsgraphics_nsgraphics_drawwindowbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, setFocusRingStyle, arginfo_appkit_ns_nsgraphics_nsgraphics_setfocusringstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, disableScreenUpdates, arginfo_appkit_ns_nsgraphics_nsgraphics_disablescreenupdates, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, enableScreenUpdates, arginfo_appkit_ns_nsgraphics_nsgraphics_enablescreenupdates, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, showAnimationEffect, arginfo_appkit_ns_nsgraphics_nsgraphics_showanimationeffect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, white, arginfo_appkit_ns_nsgraphics_nsgraphics_white, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, lightGray, arginfo_appkit_ns_nsgraphics_nsgraphics_lightgray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, darkGray, arginfo_appkit_ns_nsgraphics_nsgraphics_darkgray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSGraphics_NSGraphics, black, arginfo_appkit_ns_nsgraphics_nsgraphics_black, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

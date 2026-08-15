
extern zend_class_entry *appkit_ns_nsbezierpath_nsbezierpath_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSBezierPath_NSBezierPath);

PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, create);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, withRect);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, withOvalInRect);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, withRoundedRect);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, wrap);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, destroy);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, nsBezierPath);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, moveToPoint);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, lineToPoint);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, curveToPoint);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, closePath);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, removeAllPoints);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, appendPath);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, appendRect);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, appendOvalInRect);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, setLineWidth);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, getLineWidth);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, setLineCap);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, getLineCap);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, setLineJoin);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, getLineJoin);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, setWindingRule);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, getWindingRule);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, setMiterLimit);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, getMiterLimit);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, setFlatness);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, getFlatness);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, stroke);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, fill);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, addClip);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, setClip);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, containsPoint);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, getBounds);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, fillRect);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, strokeRect);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, clipRect);
PHP_METHOD(AppKit_NS_NSBezierPath_NSBezierPath, strokeLineFromPoint);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_create, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_withrect, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_withovalinrect, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_withroundedrect, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, xRadius, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, yRadius, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsBezierPathPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_nsbezierpath, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_movetopoint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_linetopoint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_curvetopoint, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, endX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, endY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cp1X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cp1Y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cp2X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cp2Y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_closepath, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_removeallpoints, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_appendpath, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_appendrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_appendovalinrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_setlinewidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_getlinewidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_setlinecap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_getlinecap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_setlinejoin, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_getlinejoin, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_setwindingrule, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rule, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_getwindingrule, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_setmiterlimit, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, limit, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_getmiterlimit, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_setflatness, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flatness, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_getflatness, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_stroke, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_fill, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_addclip, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_setclip, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_containspoint, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_getbounds, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_fillrect, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_strokerect, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_cliprect, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbezierpath_nsbezierpath_strokelinefrompoint, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, x1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsbezierpath_nsbezierpath_method_entry) {
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, create, arginfo_appkit_ns_nsbezierpath_nsbezierpath_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, withRect, arginfo_appkit_ns_nsbezierpath_nsbezierpath_withrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, withOvalInRect, arginfo_appkit_ns_nsbezierpath_nsbezierpath_withovalinrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, withRoundedRect, arginfo_appkit_ns_nsbezierpath_nsbezierpath_withroundedrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, wrap, arginfo_appkit_ns_nsbezierpath_nsbezierpath_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, destroy, arginfo_appkit_ns_nsbezierpath_nsbezierpath_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, nsBezierPath, arginfo_appkit_ns_nsbezierpath_nsbezierpath_nsbezierpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, moveToPoint, arginfo_appkit_ns_nsbezierpath_nsbezierpath_movetopoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, lineToPoint, arginfo_appkit_ns_nsbezierpath_nsbezierpath_linetopoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, curveToPoint, arginfo_appkit_ns_nsbezierpath_nsbezierpath_curvetopoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, closePath, arginfo_appkit_ns_nsbezierpath_nsbezierpath_closepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, removeAllPoints, arginfo_appkit_ns_nsbezierpath_nsbezierpath_removeallpoints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, appendPath, arginfo_appkit_ns_nsbezierpath_nsbezierpath_appendpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, appendRect, arginfo_appkit_ns_nsbezierpath_nsbezierpath_appendrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, appendOvalInRect, arginfo_appkit_ns_nsbezierpath_nsbezierpath_appendovalinrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, setLineWidth, arginfo_appkit_ns_nsbezierpath_nsbezierpath_setlinewidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, getLineWidth, arginfo_appkit_ns_nsbezierpath_nsbezierpath_getlinewidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, setLineCap, arginfo_appkit_ns_nsbezierpath_nsbezierpath_setlinecap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, getLineCap, arginfo_appkit_ns_nsbezierpath_nsbezierpath_getlinecap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, setLineJoin, arginfo_appkit_ns_nsbezierpath_nsbezierpath_setlinejoin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, getLineJoin, arginfo_appkit_ns_nsbezierpath_nsbezierpath_getlinejoin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, setWindingRule, arginfo_appkit_ns_nsbezierpath_nsbezierpath_setwindingrule, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, getWindingRule, arginfo_appkit_ns_nsbezierpath_nsbezierpath_getwindingrule, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, setMiterLimit, arginfo_appkit_ns_nsbezierpath_nsbezierpath_setmiterlimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, getMiterLimit, arginfo_appkit_ns_nsbezierpath_nsbezierpath_getmiterlimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, setFlatness, arginfo_appkit_ns_nsbezierpath_nsbezierpath_setflatness, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, getFlatness, arginfo_appkit_ns_nsbezierpath_nsbezierpath_getflatness, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, stroke, arginfo_appkit_ns_nsbezierpath_nsbezierpath_stroke, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, fill, arginfo_appkit_ns_nsbezierpath_nsbezierpath_fill, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, addClip, arginfo_appkit_ns_nsbezierpath_nsbezierpath_addclip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, setClip, arginfo_appkit_ns_nsbezierpath_nsbezierpath_setclip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, containsPoint, arginfo_appkit_ns_nsbezierpath_nsbezierpath_containspoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, getBounds, arginfo_appkit_ns_nsbezierpath_nsbezierpath_getbounds, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, fillRect, arginfo_appkit_ns_nsbezierpath_nsbezierpath_fillrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, strokeRect, arginfo_appkit_ns_nsbezierpath_nsbezierpath_strokerect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, clipRect, arginfo_appkit_ns_nsbezierpath_nsbezierpath_cliprect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSBezierPath_NSBezierPath, strokeLineFromPoint, arginfo_appkit_ns_nsbezierpath_nsbezierpath_strokelinefrompoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

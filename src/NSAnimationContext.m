#include "runtime.h"
#include "../stubs/NSAnimationContext_arginfo.h"

void appkit_register_NSAnimationContext(void)
{
	appkit_ce_NSAnimationContext = register_class_NSAnimationContext(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_NSAnimationContext);
	appkit_map_objc_class("NSAnimationContext", appkit_ce_NSAnimationContext);
}

#define THIS_CONTEXT ((NSAnimationContext *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(NSAnimationContext, beginGrouping)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		[NSAnimationContext beginGrouping];
	APPKIT_END
}

ZEND_METHOD(NSAnimationContext, endGrouping)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		[NSAnimationContext endGrouping];
	APPKIT_END
}

ZEND_METHOD(NSAnimationContext, currentContext)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [NSAnimationContext currentContext]);
	APPKIT_END
}

ZEND_METHOD(NSAnimationContext, duration)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_DOUBLE((double) [THIS_CONTEXT duration]);
	APPKIT_END
}

ZEND_METHOD(NSAnimationContext, setDuration)
{
	double duration;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_DOUBLE(duration)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		[THIS_CONTEXT setDuration:(NSTimeInterval) duration];
	APPKIT_END
}

ZEND_METHOD(NSAnimationContext, allowsImplicitAnimation)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_BOOL([THIS_CONTEXT allowsImplicitAnimation]);
	APPKIT_END
}

ZEND_METHOD(NSAnimationContext, setAllowsImplicitAnimation)
{
	bool allows;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(allows)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		[THIS_CONTEXT setAllowsImplicitAnimation:allows];
	APPKIT_END
}

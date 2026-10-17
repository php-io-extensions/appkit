#include "runtime.h"
#import <QuartzCore/QuartzCore.h>
#include "../stubs/CALayer_arginfo.h"

void appkit_register_CALayer(int module_number)
{
	register_CALayer_symbols(module_number);
	appkit_ce_CALayer = register_class_CALayer(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_CALayer);
	appkit_map_objc_class("CALayer", appkit_ce_CALayer);
}

#define THIS_LAYER ((CALayer *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(CALayer, layer)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [CALayer layer]);
	APPKIT_END
}

ZEND_METHOD(CALayer, contentsScale)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_DOUBLE(THIS_LAYER.contentsScale);
	APPKIT_END
}

ZEND_METHOD(CALayer, setContentsScale)
{
	double scale;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_DOUBLE(scale)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		THIS_LAYER.contentsScale = scale;
	APPKIT_END
}

ZEND_METHOD(CALayer, sublayers)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		array_init(return_value);
		for (CALayer *sublayer in THIS_LAYER.sublayers) {
			zval boxed;
			appkit_box_objc(&boxed, sublayer);
			add_next_index_zval(return_value, &boxed);
		}
	APPKIT_END
}

ZEND_METHOD(CALayer, addSublayer)
{
	zend_object *layer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(layer, appkit_ce_CALayer)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		[THIS_LAYER addSublayer:(CALayer *) APPKIT_ID(layer)];
	APPKIT_END
}

ZEND_METHOD(CALayer, backgroundColor)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		appkit_box_cf(return_value, THIS_LAYER.backgroundColor);
	APPKIT_END
}

ZEND_METHOD(CALayer, setBackgroundColor)
{
	zend_object *color = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(color, appkit_ce_CGColor)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		THIS_LAYER.backgroundColor = color == NULL ? NULL : (CGColorRef) APPKIT_CF(color);
	APPKIT_END
}

/* A CGImageRef is a CF object: it comes back as its CF class, any other contents object as its Objective-C class. */
ZEND_METHOD(CALayer, contents)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		id contents = THIS_LAYER.contents;
		if (contents != nil && CFGetTypeID((CFTypeRef) contents) == CGImageGetTypeID()) {
			appkit_box_cf(return_value, (CFTypeRef) contents);
		} else {
			appkit_box_objc(return_value, contents);
		}
	APPKIT_END
}

/* Any NSObject or CF object: a CF object (a CGImageRef) is toll-free an id here. */
ZEND_METHOD(CALayer, setContents)
{
	zend_object *contents;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OR_NULL(contents)
	ZEND_PARSE_PARAMETERS_END();

	if (contents != NULL && !instanceof_function(contents->ce, appkit_ce_NSObject) && !instanceof_function(contents->ce, appkit_ce_CFType)) {
		zend_argument_type_error(1, "must be of type NSObject|CFType|null, %s given", ZSTR_VAL(contents->ce->name)); /* binding:calayer-contents-value */
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		THIS_LAYER.contents = contents == NULL ? nil : APPKIT_ID(contents);
	APPKIT_END
}

ZEND_METHOD(CALayer, contentsGravity)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_STR(appkit_zend_string((CFStringRef) THIS_LAYER.contentsGravity));
	APPKIT_END
}

ZEND_METHOD(CALayer, setContentsGravity)
{
	zend_string *gravity;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(gravity)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		THIS_LAYER.contentsGravity = appkit_nsstring(gravity);
	APPKIT_END
}

ZEND_METHOD(CALayer, masksToBounds)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_BOOL(THIS_LAYER.masksToBounds);
	APPKIT_END
}

ZEND_METHOD(CALayer, setMasksToBounds)
{
	bool flag;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		THIS_LAYER.masksToBounds = flag;
	APPKIT_END
}

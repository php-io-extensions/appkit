#include "runtime.h"
#import <QuartzCore/QuartzCore.h>
#include "../stubs/CALayer_arginfo.h"

void appkit_register_CALayer(void)
{
	appkit_ce_CALayer = register_class_CALayer(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_CALayer);
	appkit_map_objc_class("CALayer", appkit_ce_CALayer);
}

#define THIS_LAYER ((CALayer *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(CALayer, layer)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [CALayer layer]);
	APPKIT_END
}

ZEND_METHOD(CALayer, contentsScale)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

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
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		THIS_LAYER.contentsScale = scale;
	APPKIT_END
}

ZEND_METHOD(CALayer, sublayers)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

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
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[THIS_LAYER addSublayer:(CALayer *) APPKIT_ID(layer)];
	APPKIT_END
}

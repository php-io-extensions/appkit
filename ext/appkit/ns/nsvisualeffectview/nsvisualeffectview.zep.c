
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "src/ns-visualeffectview.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSVisualEffectView_NSVisualEffectView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSVisualEffectView, NSVisualEffectView, appkit, ns_nsvisualeffectview_nsvisualeffectview, appkit_ns_nsvisualeffectview_nsvisualeffectview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, initWithFrame)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3;
	double x, y, width, height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_DOUBLE(&_0, x);
	ZVAL_DOUBLE(&_1, y);
	ZVAL_DOUBLE(&_2, width);
	ZVAL_DOUBLE(&_3, height);
	RETURN_LONG(ns_nsvisualeffectview_init_with_frame(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, material)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsvisualeffectview_material(&_0));
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, setMaterial)
{
	zval *handle_param = NULL, *material_param = NULL, _0, _1;
	zend_long handle, material;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(material)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &material_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, material);
	ns_nsvisualeffectview_set_material(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, interiorBackgroundStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsvisualeffectview_interior_background_style(&_0));
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, blendingMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsvisualeffectview_blending_mode(&_0));
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, setBlendingMode)
{
	zval *handle_param = NULL, *blendingMode_param = NULL, _0, _1;
	zend_long handle, blendingMode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(blendingMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &blendingMode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, blendingMode);
	ns_nsvisualeffectview_set_blending_mode(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, state)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsvisualeffectview_state(&_0));
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, setState)
{
	zval *handle_param = NULL, *state_param = NULL, _0, _1;
	zend_long handle, state;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &state_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, state);
	ns_nsvisualeffectview_set_state(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, maskImage)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsvisualeffectview_mask_image(&_0));
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, setMaskImage)
{
	zval *handle_param = NULL, *maskImage_param = NULL, _0, _1;
	zend_long handle, maskImage;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(maskImage)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &maskImage_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, maskImage);
	ns_nsvisualeffectview_set_mask_image(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, isEmphasized)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsvisualeffectview_is_emphasized(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, setEmphasized)
{
	zend_bool emphasized;
	zval *handle_param = NULL, *emphasized_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(emphasized)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &emphasized_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (emphasized ? 1 : 0));
	ns_nsvisualeffectview_set_emphasized(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, viewDidMoveToWindow)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsvisualeffectview_view_did_move_to_window(&_0);
}

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, viewWillMoveToWindow)
{
	zval *handle_param = NULL, *newWindow_param = NULL, _0, _1;
	zend_long handle, newWindow;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newWindow)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newWindow_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newWindow);
	ns_nsvisualeffectview_view_will_move_to_window(&_0, &_1);
}


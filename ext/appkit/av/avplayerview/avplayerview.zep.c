
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
#include "src/av-playerview.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_AV_AVPlayerView_AVPlayerView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\AV\\AVPlayerView, AVPlayerView, appkit, av_avplayerview_avplayerview, appkit_av_avplayerview_avplayerview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_AV_AVPlayerView_AVPlayerView, initWithFrame)
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
	RETURN_LONG(ns_avplayerview_init_with_frame(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_AV_AVPlayerView_AVPlayerView, player)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_avplayerview_player(&_0));
}

PHP_METHOD(AppKit_AV_AVPlayerView_AVPlayerView, setPlayer)
{
	zval *handle_param = NULL, *player_param = NULL, _0, _1;
	zend_long handle, player;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(player)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &player_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, player);
	ns_avplayerview_set_player(&_0, &_1);
}

PHP_METHOD(AppKit_AV_AVPlayerView_AVPlayerView, controlsStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_avplayerview_controls_style(&_0));
}

PHP_METHOD(AppKit_AV_AVPlayerView_AVPlayerView, setControlsStyle)
{
	zval *handle_param = NULL, *controlsStyle_param = NULL, _0, _1;
	zend_long handle, controlsStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(controlsStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &controlsStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, controlsStyle);
	ns_avplayerview_set_controls_style(&_0, &_1);
}

PHP_METHOD(AppKit_AV_AVPlayerView_AVPlayerView, videoGravity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_avplayerview_video_gravity(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_AV_AVPlayerView_AVPlayerView, setVideoGravity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval videoGravity;
	zval *handle_param = NULL, *videoGravity_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&videoGravity);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(videoGravity)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &videoGravity_param);
	zephir_get_strval(&videoGravity, videoGravity_param);
	ZVAL_LONG(&_0, handle);
	ns_avplayerview_set_video_gravity(&_0, &videoGravity);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_AV_AVPlayerView_AVPlayerView, showsFullScreenToggleButton)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_avplayerview_shows_full_screen_toggle_button(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_AV_AVPlayerView_AVPlayerView, setShowsFullScreenToggleButton)
{
	zend_bool shows;
	zval *handle_param = NULL, *shows_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(shows)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &shows_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (shows ? 1 : 0));
	ns_avplayerview_set_shows_full_screen_toggle_button(&_0, &_1);
}


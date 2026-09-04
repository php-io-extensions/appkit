
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
#include "src/av-player.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_AV_AVPlayer_AVPlayer)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\AV\\AVPlayer, AVPlayer, appkit, av_avplayer_avplayer, appkit_av_avplayer_avplayer_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_AV_AVPlayer_AVPlayer, playerWithURL)
{
	zval *url_param = NULL, _0;
	zend_long url;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(url)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &url_param);
	ZVAL_LONG(&_0, url);
	RETURN_LONG(ns_avplayer_player_with_url(&_0));
}

PHP_METHOD(AppKit_AV_AVPlayer_AVPlayer, play)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_avplayer_play(&_0);
}

PHP_METHOD(AppKit_AV_AVPlayer_AVPlayer, pause)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_avplayer_pause(&_0);
}

PHP_METHOD(AppKit_AV_AVPlayer_AVPlayer, rate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_avplayer_rate(&_0));
}

PHP_METHOD(AppKit_AV_AVPlayer_AVPlayer, setRate)
{
	double rate;
	zval *handle_param = NULL, *rate_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &rate_param);
	rate = zephir_get_doubleval(rate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rate);
	ns_avplayer_set_rate(&_0, &_1);
}

PHP_METHOD(AppKit_AV_AVPlayer_AVPlayer, volume)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_avplayer_volume(&_0));
}

PHP_METHOD(AppKit_AV_AVPlayer_AVPlayer, setVolume)
{
	double volume;
	zval *handle_param = NULL, *volume_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(volume)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &volume_param);
	volume = zephir_get_doubleval(volume_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, volume);
	ns_avplayer_set_volume(&_0, &_1);
}

PHP_METHOD(AppKit_AV_AVPlayer_AVPlayer, isMuted)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_avplayer_is_muted(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_AV_AVPlayer_AVPlayer, setMuted)
{
	zend_bool muted;
	zval *handle_param = NULL, *muted_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(muted)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &muted_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (muted ? 1 : 0));
	ns_avplayer_set_muted(&_0, &_1);
}

PHP_METHOD(AppKit_AV_AVPlayer_AVPlayer, status)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_avplayer_status(&_0));
}

PHP_METHOD(AppKit_AV_AVPlayer_AVPlayer, timeControlStatus)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_avplayer_time_control_status(&_0));
}


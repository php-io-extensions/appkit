
extern zend_class_entry *appkit_av_avplayer_avplayer_ce;

ZEPHIR_INIT_CLASS(AppKit_AV_AVPlayer_AVPlayer);

PHP_METHOD(AppKit_AV_AVPlayer_AVPlayer, playerWithURL);
PHP_METHOD(AppKit_AV_AVPlayer_AVPlayer, play);
PHP_METHOD(AppKit_AV_AVPlayer_AVPlayer, pause);
PHP_METHOD(AppKit_AV_AVPlayer_AVPlayer, rate);
PHP_METHOD(AppKit_AV_AVPlayer_AVPlayer, setRate);
PHP_METHOD(AppKit_AV_AVPlayer_AVPlayer, volume);
PHP_METHOD(AppKit_AV_AVPlayer_AVPlayer, setVolume);
PHP_METHOD(AppKit_AV_AVPlayer_AVPlayer, isMuted);
PHP_METHOD(AppKit_AV_AVPlayer_AVPlayer, setMuted);
PHP_METHOD(AppKit_AV_AVPlayer_AVPlayer, status);
PHP_METHOD(AppKit_AV_AVPlayer_AVPlayer, timeControlStatus);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_av_avplayer_avplayer_playerwithurl, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_av_avplayer_avplayer_play, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_av_avplayer_avplayer_pause, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_av_avplayer_avplayer_rate, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_av_avplayer_avplayer_setrate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rate, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_av_avplayer_avplayer_volume, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_av_avplayer_avplayer_setvolume, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, volume, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_av_avplayer_avplayer_ismuted, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_av_avplayer_avplayer_setmuted, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, muted, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_av_avplayer_avplayer_status, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_av_avplayer_avplayer_timecontrolstatus, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_av_avplayer_avplayer_method_entry) {
	PHP_ME(AppKit_AV_AVPlayer_AVPlayer, playerWithURL, arginfo_appkit_av_avplayer_avplayer_playerwithurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_AV_AVPlayer_AVPlayer, play, arginfo_appkit_av_avplayer_avplayer_play, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_AV_AVPlayer_AVPlayer, pause, arginfo_appkit_av_avplayer_avplayer_pause, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_AV_AVPlayer_AVPlayer, rate, arginfo_appkit_av_avplayer_avplayer_rate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_AV_AVPlayer_AVPlayer, setRate, arginfo_appkit_av_avplayer_avplayer_setrate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_AV_AVPlayer_AVPlayer, volume, arginfo_appkit_av_avplayer_avplayer_volume, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_AV_AVPlayer_AVPlayer, setVolume, arginfo_appkit_av_avplayer_avplayer_setvolume, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_AV_AVPlayer_AVPlayer, isMuted, arginfo_appkit_av_avplayer_avplayer_ismuted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_AV_AVPlayer_AVPlayer, setMuted, arginfo_appkit_av_avplayer_avplayer_setmuted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_AV_AVPlayer_AVPlayer, status, arginfo_appkit_av_avplayer_avplayer_status, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_AV_AVPlayer_AVPlayer, timeControlStatus, arginfo_appkit_av_avplayer_avplayer_timecontrolstatus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

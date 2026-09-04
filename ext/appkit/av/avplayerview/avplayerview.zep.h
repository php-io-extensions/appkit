
extern zend_class_entry *appkit_av_avplayerview_avplayerview_ce;

ZEPHIR_INIT_CLASS(AppKit_AV_AVPlayerView_AVPlayerView);

PHP_METHOD(AppKit_AV_AVPlayerView_AVPlayerView, initWithFrame);
PHP_METHOD(AppKit_AV_AVPlayerView_AVPlayerView, player);
PHP_METHOD(AppKit_AV_AVPlayerView_AVPlayerView, setPlayer);
PHP_METHOD(AppKit_AV_AVPlayerView_AVPlayerView, controlsStyle);
PHP_METHOD(AppKit_AV_AVPlayerView_AVPlayerView, setControlsStyle);
PHP_METHOD(AppKit_AV_AVPlayerView_AVPlayerView, videoGravity);
PHP_METHOD(AppKit_AV_AVPlayerView_AVPlayerView, setVideoGravity);
PHP_METHOD(AppKit_AV_AVPlayerView_AVPlayerView, showsFullScreenToggleButton);
PHP_METHOD(AppKit_AV_AVPlayerView_AVPlayerView, setShowsFullScreenToggleButton);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_av_avplayerview_avplayerview_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_av_avplayerview_avplayerview_player, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_av_avplayerview_avplayerview_setplayer, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, player, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_av_avplayerview_avplayerview_controlsstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_av_avplayerview_avplayerview_setcontrolsstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, controlsStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_av_avplayerview_avplayerview_videogravity, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_av_avplayerview_avplayerview_setvideogravity, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, videoGravity, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_av_avplayerview_avplayerview_showsfullscreentogglebutton, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_av_avplayerview_avplayerview_setshowsfullscreentogglebutton, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, shows, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_av_avplayerview_avplayerview_method_entry) {
	PHP_ME(AppKit_AV_AVPlayerView_AVPlayerView, initWithFrame, arginfo_appkit_av_avplayerview_avplayerview_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_AV_AVPlayerView_AVPlayerView, player, arginfo_appkit_av_avplayerview_avplayerview_player, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_AV_AVPlayerView_AVPlayerView, setPlayer, arginfo_appkit_av_avplayerview_avplayerview_setplayer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_AV_AVPlayerView_AVPlayerView, controlsStyle, arginfo_appkit_av_avplayerview_avplayerview_controlsstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_AV_AVPlayerView_AVPlayerView, setControlsStyle, arginfo_appkit_av_avplayerview_avplayerview_setcontrolsstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_AV_AVPlayerView_AVPlayerView, videoGravity, arginfo_appkit_av_avplayerview_avplayerview_videogravity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_AV_AVPlayerView_AVPlayerView, setVideoGravity, arginfo_appkit_av_avplayerview_avplayerview_setvideogravity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_AV_AVPlayerView_AVPlayerView, showsFullScreenToggleButton, arginfo_appkit_av_avplayerview_avplayerview_showsfullscreentogglebutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_AV_AVPlayerView_AVPlayerView, setShowsFullScreenToggleButton, arginfo_appkit_av_avplayerview_avplayerview_setshowsfullscreentogglebutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};


extern zend_class_entry *appkit_ns_nssound_nssound_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSound_NSSound);

PHP_METHOD(AppKit_NS_NSSound_NSSound, soundNamed);
PHP_METHOD(AppKit_NS_NSSound_NSSound, createWithContentsOfFile);
PHP_METHOD(AppKit_NS_NSSound_NSSound, createWithContentsOfURL);
PHP_METHOD(AppKit_NS_NSSound_NSSound, wrap);
PHP_METHOD(AppKit_NS_NSSound_NSSound, destroy);
PHP_METHOD(AppKit_NS_NSSound_NSSound, nsSound);
PHP_METHOD(AppKit_NS_NSSound_NSSound, setName);
PHP_METHOD(AppKit_NS_NSSound_NSSound, name);
PHP_METHOD(AppKit_NS_NSSound_NSSound, play);
PHP_METHOD(AppKit_NS_NSSound_NSSound, pause);
PHP_METHOD(AppKit_NS_NSSound_NSSound, resume);
PHP_METHOD(AppKit_NS_NSSound_NSSound, stop);
PHP_METHOD(AppKit_NS_NSSound_NSSound, isPlaying);
PHP_METHOD(AppKit_NS_NSSound_NSSound, duration);
PHP_METHOD(AppKit_NS_NSSound_NSSound, volume);
PHP_METHOD(AppKit_NS_NSSound_NSSound, setVolume);
PHP_METHOD(AppKit_NS_NSSound_NSSound, currentTime);
PHP_METHOD(AppKit_NS_NSSound_NSSound, setCurrentTime);
PHP_METHOD(AppKit_NS_NSSound_NSSound, loops);
PHP_METHOD(AppKit_NS_NSSound_NSSound, setLoops);
PHP_METHOD(AppKit_NS_NSSound_NSSound, playbackDeviceIdentifier);
PHP_METHOD(AppKit_NS_NSSound_NSSound, setPlaybackDeviceIdentifier);
PHP_METHOD(AppKit_NS_NSSound_NSSound, canInitWithPasteboard);
PHP_METHOD(AppKit_NS_NSSound_NSSound, createWithPasteboard);
PHP_METHOD(AppKit_NS_NSSound_NSSound, writeToPasteboard);
PHP_METHOD(AppKit_NS_NSSound_NSSound, unfilteredTypesCount);
PHP_METHOD(AppKit_NS_NSSound_NSSound, unfilteredTypeAt);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_soundnamed, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_createwithcontentsoffile, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, byRef, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_createwithcontentsofurl, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, byRef, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsSoundPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, sound, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_nssound, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sound, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_setname, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, sound, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, sound, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_play, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, sound, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_pause, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, sound, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_resume, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, sound, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_stop, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, sound, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_isplaying, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, sound, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_duration, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sound, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_volume, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sound, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_setvolume, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, sound, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, volume, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_currenttime, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sound, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_setcurrenttime, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, sound, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_loops, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, sound, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_setloops, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, sound, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, loops, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_playbackdeviceidentifier, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, sound, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_setplaybackdeviceidentifier, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, sound, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_caninitwithpasteboard, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_createwithpasteboard, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_writetopasteboard, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, sound, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_unfilteredtypescount, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssound_nssound_unfilteredtypeat, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nssound_nssound_method_entry) {
	PHP_ME(AppKit_NS_NSSound_NSSound, soundNamed, arginfo_appkit_ns_nssound_nssound_soundnamed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, createWithContentsOfFile, arginfo_appkit_ns_nssound_nssound_createwithcontentsoffile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, createWithContentsOfURL, arginfo_appkit_ns_nssound_nssound_createwithcontentsofurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, wrap, arginfo_appkit_ns_nssound_nssound_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, destroy, arginfo_appkit_ns_nssound_nssound_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, nsSound, arginfo_appkit_ns_nssound_nssound_nssound, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, setName, arginfo_appkit_ns_nssound_nssound_setname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, name, arginfo_appkit_ns_nssound_nssound_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, play, arginfo_appkit_ns_nssound_nssound_play, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, pause, arginfo_appkit_ns_nssound_nssound_pause, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, resume, arginfo_appkit_ns_nssound_nssound_resume, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, stop, arginfo_appkit_ns_nssound_nssound_stop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, isPlaying, arginfo_appkit_ns_nssound_nssound_isplaying, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, duration, arginfo_appkit_ns_nssound_nssound_duration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, volume, arginfo_appkit_ns_nssound_nssound_volume, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, setVolume, arginfo_appkit_ns_nssound_nssound_setvolume, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, currentTime, arginfo_appkit_ns_nssound_nssound_currenttime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, setCurrentTime, arginfo_appkit_ns_nssound_nssound_setcurrenttime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, loops, arginfo_appkit_ns_nssound_nssound_loops, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, setLoops, arginfo_appkit_ns_nssound_nssound_setloops, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, playbackDeviceIdentifier, arginfo_appkit_ns_nssound_nssound_playbackdeviceidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, setPlaybackDeviceIdentifier, arginfo_appkit_ns_nssound_nssound_setplaybackdeviceidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, canInitWithPasteboard, arginfo_appkit_ns_nssound_nssound_caninitwithpasteboard, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, createWithPasteboard, arginfo_appkit_ns_nssound_nssound_createwithpasteboard, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, writeToPasteboard, arginfo_appkit_ns_nssound_nssound_writetopasteboard, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, unfilteredTypesCount, arginfo_appkit_ns_nssound_nssound_unfilteredtypescount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSound_NSSound, unfilteredTypeAt, arginfo_appkit_ns_nssound_nssound_unfilteredtypeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};

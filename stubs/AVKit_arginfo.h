/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: a5c634fff290cad564ce995beb9bbbd24a0dc640 */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSURL_fileURLWithPath, 0, 1, NSURL, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSURL_path, 0, 0, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_CMTime___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, value, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, timescale, IS_LONG, 0, "1")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "1")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, epoch, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_CMTime_withSeconds, 0, 2, CMTime, 0)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, preferredTimescale, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CMTime_seconds, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AVPlayerItem_playerItemWithURL, 0, 1, IS_STATIC, 0)
	ZEND_ARG_OBJ_INFO(0, url, NSURL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AVPlayerItem_status, 0, 0, AVPlayerItemStatus, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AVPlayerItem_duration, 0, 0, CMTime, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AVPlayerItem_error, 0, 0, NSObject, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AVPlayer_playerWithPlayerItem, 0, 1, IS_STATIC, 0)
	ZEND_ARG_OBJ_INFO(0, item, AVPlayerItem, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AVPlayer_play, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_AVPlayer_pause arginfo_class_AVPlayer_play

#define arginfo_class_AVPlayer_rate arginfo_class_CMTime_seconds

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AVPlayer_setRate, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, rate, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_AVPlayer_currentTime arginfo_class_AVPlayerItem_duration

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AVPlayer_seekToTime, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, time, CMTime, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AVPlayer_isMuted, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AVPlayer_setMuted, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, muted, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AVPlayer_timeControlStatus, 0, 0, AVPlayerTimeControlStatus, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AVPlayer_actionAtItemEnd, 0, 0, AVPlayerActionAtItemEnd, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AVPlayer_setActionAtItemEnd, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, action, AVPlayerActionAtItemEnd, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AVPlayer_currentItem, 0, 0, AVPlayerItem, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AVPlayer_replaceCurrentItemWithPlayerItem, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, item, AVPlayerItem, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AVPlayerView_player, 0, 0, AVPlayer, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AVPlayerView_setPlayer, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, player, AVPlayer, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AVPlayerView_controlsStyle, 0, 0, AVPlayerViewControlsStyle, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AVPlayerView_setControlsStyle, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, style, AVPlayerViewControlsStyle, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSURL, fileURLWithPath);
ZEND_METHOD(NSURL, path);
ZEND_METHOD(CMTime, __construct);
ZEND_METHOD(CMTime, withSeconds);
ZEND_METHOD(CMTime, seconds);
ZEND_METHOD(AVPlayerItem, playerItemWithURL);
ZEND_METHOD(AVPlayerItem, status);
ZEND_METHOD(AVPlayerItem, duration);
ZEND_METHOD(AVPlayerItem, error);
ZEND_METHOD(AVPlayer, playerWithPlayerItem);
ZEND_METHOD(AVPlayer, play);
ZEND_METHOD(AVPlayer, pause);
ZEND_METHOD(AVPlayer, rate);
ZEND_METHOD(AVPlayer, setRate);
ZEND_METHOD(AVPlayer, currentTime);
ZEND_METHOD(AVPlayer, seekToTime);
ZEND_METHOD(AVPlayer, isMuted);
ZEND_METHOD(AVPlayer, setMuted);
ZEND_METHOD(AVPlayer, timeControlStatus);
ZEND_METHOD(AVPlayer, actionAtItemEnd);
ZEND_METHOD(AVPlayer, setActionAtItemEnd);
ZEND_METHOD(AVPlayer, currentItem);
ZEND_METHOD(AVPlayer, replaceCurrentItemWithPlayerItem);
ZEND_METHOD(AVPlayerView, player);
ZEND_METHOD(AVPlayerView, setPlayer);
ZEND_METHOD(AVPlayerView, controlsStyle);
ZEND_METHOD(AVPlayerView, setControlsStyle);

static const zend_function_entry class_NSURL_methods[] = {
	ZEND_ME(NSURL, fileURLWithPath, arginfo_class_NSURL_fileURLWithPath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSURL, path, arginfo_class_NSURL_path, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_CMTime_methods[] = {
	ZEND_ME(CMTime, __construct, arginfo_class_CMTime___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(CMTime, withSeconds, arginfo_class_CMTime_withSeconds, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(CMTime, seconds, arginfo_class_CMTime_seconds, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_AVPlayerItem_methods[] = {
	ZEND_ME(AVPlayerItem, playerItemWithURL, arginfo_class_AVPlayerItem_playerItemWithURL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(AVPlayerItem, status, arginfo_class_AVPlayerItem_status, ZEND_ACC_PUBLIC)
	ZEND_ME(AVPlayerItem, duration, arginfo_class_AVPlayerItem_duration, ZEND_ACC_PUBLIC)
	ZEND_ME(AVPlayerItem, error, arginfo_class_AVPlayerItem_error, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_AVPlayer_methods[] = {
	ZEND_ME(AVPlayer, playerWithPlayerItem, arginfo_class_AVPlayer_playerWithPlayerItem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(AVPlayer, play, arginfo_class_AVPlayer_play, ZEND_ACC_PUBLIC)
	ZEND_ME(AVPlayer, pause, arginfo_class_AVPlayer_pause, ZEND_ACC_PUBLIC)
	ZEND_ME(AVPlayer, rate, arginfo_class_AVPlayer_rate, ZEND_ACC_PUBLIC)
	ZEND_ME(AVPlayer, setRate, arginfo_class_AVPlayer_setRate, ZEND_ACC_PUBLIC)
	ZEND_ME(AVPlayer, currentTime, arginfo_class_AVPlayer_currentTime, ZEND_ACC_PUBLIC)
	ZEND_ME(AVPlayer, seekToTime, arginfo_class_AVPlayer_seekToTime, ZEND_ACC_PUBLIC)
	ZEND_ME(AVPlayer, isMuted, arginfo_class_AVPlayer_isMuted, ZEND_ACC_PUBLIC)
	ZEND_ME(AVPlayer, setMuted, arginfo_class_AVPlayer_setMuted, ZEND_ACC_PUBLIC)
	ZEND_ME(AVPlayer, timeControlStatus, arginfo_class_AVPlayer_timeControlStatus, ZEND_ACC_PUBLIC)
	ZEND_ME(AVPlayer, actionAtItemEnd, arginfo_class_AVPlayer_actionAtItemEnd, ZEND_ACC_PUBLIC)
	ZEND_ME(AVPlayer, setActionAtItemEnd, arginfo_class_AVPlayer_setActionAtItemEnd, ZEND_ACC_PUBLIC)
	ZEND_ME(AVPlayer, currentItem, arginfo_class_AVPlayer_currentItem, ZEND_ACC_PUBLIC)
	ZEND_ME(AVPlayer, replaceCurrentItemWithPlayerItem, arginfo_class_AVPlayer_replaceCurrentItemWithPlayerItem, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_AVPlayerView_methods[] = {
	ZEND_ME(AVPlayerView, player, arginfo_class_AVPlayerView_player, ZEND_ACC_PUBLIC)
	ZEND_ME(AVPlayerView, setPlayer, arginfo_class_AVPlayerView_setPlayer, ZEND_ACC_PUBLIC)
	ZEND_ME(AVPlayerView, controlsStyle, arginfo_class_AVPlayerView_controlsStyle, ZEND_ACC_PUBLIC)
	ZEND_ME(AVPlayerView, setControlsStyle, arginfo_class_AVPlayerView_setControlsStyle, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_AVKit_symbols(int module_number)
{
	REGISTER_STRING_CONSTANT("AVPlayerItemDidPlayToEndTimeNotification", appkit_cfstring_constant((CFStringRef) AVPlayerItemDidPlayToEndTimeNotification), CONST_PERSISTENT);
}

static zend_class_entry *register_class_NSURL(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSURL", class_NSURL_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_CMTime(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "CMTime", class_CMTime_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval const_FLAG_VALID_value;
	ZVAL_LONG(&const_FLAG_VALID_value, 1);
	zend_string *const_FLAG_VALID_name = zend_string_init_interned("FLAG_VALID", sizeof("FLAG_VALID") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_FLAG_VALID_name, &const_FLAG_VALID_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_FLAG_VALID_name);

	zval const_FLAG_HAS_BEEN_ROUNDED_value;
	ZVAL_LONG(&const_FLAG_HAS_BEEN_ROUNDED_value, 2);
	zend_string *const_FLAG_HAS_BEEN_ROUNDED_name = zend_string_init_interned("FLAG_HAS_BEEN_ROUNDED", sizeof("FLAG_HAS_BEEN_ROUNDED") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_FLAG_HAS_BEEN_ROUNDED_name, &const_FLAG_HAS_BEEN_ROUNDED_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_FLAG_HAS_BEEN_ROUNDED_name);

	zval const_FLAG_POSITIVE_INFINITY_value;
	ZVAL_LONG(&const_FLAG_POSITIVE_INFINITY_value, 4);
	zend_string *const_FLAG_POSITIVE_INFINITY_name = zend_string_init_interned("FLAG_POSITIVE_INFINITY", sizeof("FLAG_POSITIVE_INFINITY") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_FLAG_POSITIVE_INFINITY_name, &const_FLAG_POSITIVE_INFINITY_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_FLAG_POSITIVE_INFINITY_name);

	zval const_FLAG_NEGATIVE_INFINITY_value;
	ZVAL_LONG(&const_FLAG_NEGATIVE_INFINITY_value, 8);
	zend_string *const_FLAG_NEGATIVE_INFINITY_name = zend_string_init_interned("FLAG_NEGATIVE_INFINITY", sizeof("FLAG_NEGATIVE_INFINITY") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_FLAG_NEGATIVE_INFINITY_name, &const_FLAG_NEGATIVE_INFINITY_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_FLAG_NEGATIVE_INFINITY_name);

	zval const_FLAG_INDEFINITE_value;
	ZVAL_LONG(&const_FLAG_INDEFINITE_value, 16);
	zend_string *const_FLAG_INDEFINITE_name = zend_string_init_interned("FLAG_INDEFINITE", sizeof("FLAG_INDEFINITE") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_FLAG_INDEFINITE_name, &const_FLAG_INDEFINITE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_FLAG_INDEFINITE_name);

	zval property_value_default_value;
	ZVAL_LONG(&property_value_default_value, 0);
	zend_string *property_value_name = zend_string_init("value", sizeof("value") - 1, 1);
	zend_declare_typed_property(class_entry, property_value_name, &property_value_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_value_name);

	zval property_timescale_default_value;
	ZVAL_LONG(&property_timescale_default_value, 1);
	zend_string *property_timescale_name = zend_string_init("timescale", sizeof("timescale") - 1, 1);
	zend_declare_typed_property(class_entry, property_timescale_name, &property_timescale_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_timescale_name);

	zval property_flags_default_value;
	ZVAL_LONG(&property_flags_default_value, 1);
	zend_string *property_flags_name = zend_string_init("flags", sizeof("flags") - 1, 1);
	zend_declare_typed_property(class_entry, property_flags_name, &property_flags_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_flags_name);

	zval property_epoch_default_value;
	ZVAL_LONG(&property_epoch_default_value, 0);
	zend_string *property_epoch_name = zend_string_init("epoch", sizeof("epoch") - 1, 1);
	zend_declare_typed_property(class_entry, property_epoch_name, &property_epoch_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_epoch_name);

	return class_entry;
}

static zend_class_entry *register_class_AVPlayerItemStatus(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("AVPlayerItemStatus", IS_LONG, NULL);

	zval enum_case_UNKNOWN_value;
	ZVAL_LONG(&enum_case_UNKNOWN_value, 0);
	zend_enum_add_case_cstr(class_entry, "UNKNOWN", &enum_case_UNKNOWN_value);

	zval enum_case_READY_TO_PLAY_value;
	ZVAL_LONG(&enum_case_READY_TO_PLAY_value, 1);
	zend_enum_add_case_cstr(class_entry, "READY_TO_PLAY", &enum_case_READY_TO_PLAY_value);

	zval enum_case_FAILED_value;
	ZVAL_LONG(&enum_case_FAILED_value, 2);
	zend_enum_add_case_cstr(class_entry, "FAILED", &enum_case_FAILED_value);

	return class_entry;
}

static zend_class_entry *register_class_AVPlayerItem(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "AVPlayerItem", class_AVPlayerItem_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_AVPlayerTimeControlStatus(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("AVPlayerTimeControlStatus", IS_LONG, NULL);

	zval enum_case_PAUSED_value;
	ZVAL_LONG(&enum_case_PAUSED_value, 0);
	zend_enum_add_case_cstr(class_entry, "PAUSED", &enum_case_PAUSED_value);

	zval enum_case_WAITING_TO_PLAY_AT_SPECIFIED_RATE_value;
	ZVAL_LONG(&enum_case_WAITING_TO_PLAY_AT_SPECIFIED_RATE_value, 1);
	zend_enum_add_case_cstr(class_entry, "WAITING_TO_PLAY_AT_SPECIFIED_RATE", &enum_case_WAITING_TO_PLAY_AT_SPECIFIED_RATE_value);

	zval enum_case_PLAYING_value;
	ZVAL_LONG(&enum_case_PLAYING_value, 2);
	zend_enum_add_case_cstr(class_entry, "PLAYING", &enum_case_PLAYING_value);

	return class_entry;
}

static zend_class_entry *register_class_AVPlayerActionAtItemEnd(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("AVPlayerActionAtItemEnd", IS_LONG, NULL);

	zval enum_case_ADVANCE_value;
	ZVAL_LONG(&enum_case_ADVANCE_value, 0);
	zend_enum_add_case_cstr(class_entry, "ADVANCE", &enum_case_ADVANCE_value);

	zval enum_case_PAUSE_value;
	ZVAL_LONG(&enum_case_PAUSE_value, 1);
	zend_enum_add_case_cstr(class_entry, "PAUSE", &enum_case_PAUSE_value);

	zval enum_case_NONE_value;
	ZVAL_LONG(&enum_case_NONE_value, 2);
	zend_enum_add_case_cstr(class_entry, "NONE", &enum_case_NONE_value);

	return class_entry;
}

static zend_class_entry *register_class_AVPlayer(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "AVPlayer", class_AVPlayer_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_AVPlayerViewControlsStyle(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("AVPlayerViewControlsStyle", IS_LONG, NULL);

	zval enum_case_NONE_value;
	ZVAL_LONG(&enum_case_NONE_value, 0);
	zend_enum_add_case_cstr(class_entry, "NONE", &enum_case_NONE_value);

	zval enum_case_INLINE_value;
	ZVAL_LONG(&enum_case_INLINE_value, 1);
	zend_enum_add_case_cstr(class_entry, "INLINE", &enum_case_INLINE_value);

	zval enum_case_FLOATING_value;
	ZVAL_LONG(&enum_case_FLOATING_value, 2);
	zend_enum_add_case_cstr(class_entry, "FLOATING", &enum_case_FLOATING_value);

	zval enum_case_MINIMAL_value;
	ZVAL_LONG(&enum_case_MINIMAL_value, 3);
	zend_enum_add_case_cstr(class_entry, "MINIMAL", &enum_case_MINIMAL_value);

	return class_entry;
}

static zend_class_entry *register_class_AVPlayerView(zend_class_entry *class_entry_NSView)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "AVPlayerView", class_AVPlayerView_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSView, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

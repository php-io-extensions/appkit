#include "runtime.h"
#include "controls.h"

#import <AVKit/AVKit.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>

#include "../stubs/AVKit_arginfo.h"

_Static_assert(kCMTimeFlags_Valid == 1 && kCMTimeFlags_HasBeenRounded == 2 && kCMTimeFlags_PositiveInfinity == 4
	&& kCMTimeFlags_NegativeInfinity == 8 && kCMTimeFlags_Indefinite == 16, "CMTimeFlags values moved");
_Static_assert(AVPlayerItemStatusUnknown == 0 && AVPlayerItemStatusReadyToPlay == 1 && AVPlayerItemStatusFailed == 2, "AVPlayerItemStatus values moved");
_Static_assert(AVPlayerTimeControlStatusPaused == 0 && AVPlayerTimeControlStatusWaitingToPlayAtSpecifiedRate == 1 && AVPlayerTimeControlStatusPlaying == 2, "AVPlayerTimeControlStatus values moved");
_Static_assert(AVPlayerActionAtItemEndAdvance == 0 && AVPlayerActionAtItemEndPause == 1 && AVPlayerActionAtItemEndNone == 2, "AVPlayerActionAtItemEnd values moved");
_Static_assert(AVPlayerViewControlsStyleNone == 0 && AVPlayerViewControlsStyleInline == 1 && AVPlayerViewControlsStyleFloating == 2
	&& AVPlayerViewControlsStyleMinimal == 3 && AVPlayerViewControlsStyleDefault == 1, "AVPlayerViewControlsStyle values moved");

void appkit_register_AVKit(int module_number)
{
	register_AVKit_symbols(module_number);

	appkit_ce_CMTime = register_class_CMTime();
	appkit_ce_AVPlayerItemStatus = register_class_AVPlayerItemStatus();
	appkit_ce_AVPlayerTimeControlStatus = register_class_AVPlayerTimeControlStatus();
	appkit_ce_AVPlayerActionAtItemEnd = register_class_AVPlayerActionAtItemEnd();
	appkit_ce_AVPlayerViewControlsStyle = register_class_AVPlayerViewControlsStyle();

	APPKIT_MAP(NSURL, appkit_ce_NSObject);
	APPKIT_MAP(AVPlayerItem, appkit_ce_NSObject);
	APPKIT_MAP(AVPlayer, appkit_ce_NSObject);
	APPKIT_MAP(AVPlayerView, appkit_ce_NSView);
}

/* CMTime value class: properties 0 = value, 1 = timescale, 2 = flags, 3 = epoch, as the struct. */
static bool appkit_cmtime_from(zend_object *time, uint32_t arg_num, CMTime *out)
{
	zend_long v[4];

	for (int i = 0; i < 4; i++) {
		zval *prop = OBJ_PROP_NUM(time, i);

		if (Z_TYPE_P(prop) != IS_LONG) {
			if (arg_num == 0) {
				zend_throw_error(NULL, "CMTime must have every property initialized");
			} else {
				zend_argument_value_error(arg_num, "must have every property initialized");
			}
			return false;
		}
		v[i] = Z_LVAL_P(prop);
	}
	*out = (CMTime) { .value = (CMTimeValue) v[0], .timescale = (CMTimeScale) v[1], .flags = (CMTimeFlags) v[2], .epoch = (CMTimeEpoch) v[3] };
	return true;
}

static void appkit_return_cmtime(zval *rv, CMTime time)
{
	object_init_ex(rv, appkit_ce_CMTime);
	ZVAL_LONG(OBJ_PROP_NUM(Z_OBJ_P(rv), 0), (zend_long) time.value);
	ZVAL_LONG(OBJ_PROP_NUM(Z_OBJ_P(rv), 1), (zend_long) time.timescale);
	ZVAL_LONG(OBJ_PROP_NUM(Z_OBJ_P(rv), 2), (zend_long) time.flags);
	ZVAL_LONG(OBJ_PROP_NUM(Z_OBJ_P(rv), 3), (zend_long) time.epoch);
}

ZEND_METHOD(CMTime, __construct)
{
	zend_long value = 0;
	zend_long timescale = 1;
	zend_long flags = kCMTimeFlags_Valid;
	zend_long epoch = 0;

	ZEND_PARSE_PARAMETERS_START(0, 4)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(value)
		Z_PARAM_LONG(timescale)
		Z_PARAM_LONG(flags)
		Z_PARAM_LONG(epoch)
	ZEND_PARSE_PARAMETERS_END();

	ZVAL_LONG(OBJ_PROP_NUM(Z_OBJ_P(ZEND_THIS), 0), value);
	ZVAL_LONG(OBJ_PROP_NUM(Z_OBJ_P(ZEND_THIS), 1), timescale);
	ZVAL_LONG(OBJ_PROP_NUM(Z_OBJ_P(ZEND_THIS), 2), flags);
	ZVAL_LONG(OBJ_PROP_NUM(Z_OBJ_P(ZEND_THIS), 3), epoch);
}

ZEND_METHOD(CMTime, withSeconds)
{
	double seconds;
	zend_long timescale;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_DOUBLE(seconds)
		Z_PARAM_LONG(timescale)
	ZEND_PARSE_PARAMETERS_END();

	appkit_return_cmtime(return_value, CMTimeMakeWithSeconds(seconds, (CMTimeScale) timescale));
}

ZEND_METHOD(CMTime, seconds)
{
	CMTime time;

	ZEND_PARSE_PARAMETERS_NONE();
	if (!appkit_cmtime_from(Z_OBJ_P(ZEND_THIS), 0, &time)) {
		RETURN_THROWS();
	}

	RETURN_DOUBLE(CMTimeGetSeconds(time));
}

/* NSURL */
METHOD(NSURL, fileURLWithPath, PARSE_STR, appkit_box_objc(return_value, [NSURL fileURLWithPath:appkit_nsstring(v)]);)
STR_GET_OR_NULL(NSURL, NSURL, path, path)

/* AVPlayerItem */
METHOD(AVPlayerItem, playerItemWithURL, PARSE_OBJ(appkit_ce_NSURL), appkit_box_objc(return_value, [CALLED playerItemWithURL:(NSURL *) APPKIT_ID(v)]);)
ENUM_GET(AVPlayerItem, AVPlayerItem, status, status, appkit_ce_AVPlayerItemStatus, false)
METHOD(AVPlayerItem, duration, PARSE_NONE, appkit_return_cmtime(return_value, [SELF(AVPlayerItem) duration]);)
OBJ_GET(AVPlayerItem, AVPlayerItem, error, error)

/* AVPlayer */
METHOD(AVPlayer, playerWithPlayerItem, PARSE_OBJ_OR_NULL(appkit_ce_AVPlayerItem), appkit_box_objc(return_value, [CALLED playerWithPlayerItem:(AVPlayerItem *) OPTIONAL_ID(v)]);)
VOID_METHOD(AVPlayer, AVPlayer, play, play)
VOID_METHOD(AVPlayer, AVPlayer, pause, pause)
DOUBLE_GET(AVPlayer, AVPlayer, rate, rate)
METHOD(AVPlayer, setRate, PARSE_DOUBLE, [SELF(AVPlayer) setRate:(float) v];)
METHOD(AVPlayer, currentTime, PARSE_NONE, appkit_return_cmtime(return_value, [SELF(AVPlayer) currentTime]);)
ZEND_METHOD(AVPlayer, seekToTime)
{
	zend_object *time;
	CMTime value;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(time, appkit_ce_CMTime)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();
	if (!appkit_cmtime_from(time, 1, &value)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		[SELF(AVPlayer) seekToTime:value];
	APPKIT_END
}
BOOL_GET(AVPlayer, AVPlayer, isMuted, isMuted)
BOOL_SET(AVPlayer, AVPlayer, setMuted, setMuted)
ENUM_GET(AVPlayer, AVPlayer, timeControlStatus, timeControlStatus, appkit_ce_AVPlayerTimeControlStatus, false)
ENUM_GET(AVPlayer, AVPlayer, actionAtItemEnd, actionAtItemEnd, appkit_ce_AVPlayerActionAtItemEnd, false)
ENUM_SET(AVPlayer, AVPlayer, setActionAtItemEnd, setActionAtItemEnd, appkit_ce_AVPlayerActionAtItemEnd, AVPlayerActionAtItemEnd)
OBJ_GET(AVPlayer, AVPlayer, currentItem, currentItem)
OBJ_SET_OR_NULL(AVPlayer, AVPlayer, replaceCurrentItemWithPlayerItem, replaceCurrentItemWithPlayerItem, appkit_ce_AVPlayerItem, AVPlayerItem *)

/* AVPlayerView */
OBJ_GET(AVPlayerView, AVPlayerView, player, player)
OBJ_SET_OR_NULL(AVPlayerView, AVPlayerView, setPlayer, setPlayer, appkit_ce_AVPlayer, AVPlayer *)
ENUM_GET(AVPlayerView, AVPlayerView, controlsStyle, controlsStyle, appkit_ce_AVPlayerViewControlsStyle, false)
ENUM_SET(AVPlayerView, AVPlayerView, setControlsStyle, setControlsStyle, appkit_ce_AVPlayerViewControlsStyle, AVPlayerViewControlsStyle)

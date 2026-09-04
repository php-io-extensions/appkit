#ifndef PHP_APPKIT_AV_PLAYER_H
#define PHP_APPKIT_AV_PLAYER_H

/*
 * AVFoundation AVPlayer — curated minimum for playing one URL inside an
 * AVPlayerView: mint from a URL, start, stop, rate, volume, mute, and the
 * two status reads. The rest of the class (items and queues, CMTime
 * seeking, periodic observers — all block- or struct-heavy) stays
 * unbound until something needs it:
 *   seekToTime:, currentTime (CMTime struct), replaceCurrentItemWithPlayerItem:
 *   (needs AVPlayerItem), addPeriodicTimeObserver… (blocks), error (NSError).
 *
 * AVFoundation is a sister framework like QuartzCore: its own file prefix
 * (av-), its own namespace segment (AV\), liftable into its own ext if a
 * need ever appears.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/*@zep AV\AVPlayer playerWithURL(int url) -> int */
zend_long ns_avplayer_player_with_url(zval *url);
/*@zep AV\AVPlayer play(int handle) -> void */
void ns_avplayer_play(zval *handle);
/*@zep AV\AVPlayer pause(int handle) -> void */
void ns_avplayer_pause(zval *handle);
/*@zep AV\AVPlayer rate(int handle) -> double */
double ns_avplayer_rate(zval *handle);
/*@zep AV\AVPlayer setRate(int handle, double rate) -> void */
void ns_avplayer_set_rate(zval *handle, zval *rate);
/*@zep AV\AVPlayer volume(int handle) -> double */
double ns_avplayer_volume(zval *handle);
/*@zep AV\AVPlayer setVolume(int handle, double volume) -> void */
void ns_avplayer_set_volume(zval *handle, zval *volume);
/*@zep AV\AVPlayer isMuted(int handle) -> bool */
zend_long ns_avplayer_is_muted(zval *handle);
/*@zep AV\AVPlayer setMuted(int handle, bool muted) -> void */
void ns_avplayer_set_muted(zval *handle, zval *muted);
/*@zep AV\AVPlayer status(int handle) -> int */
zend_long ns_avplayer_status(zval *handle);
/*@zep AV\AVPlayer timeControlStatus(int handle) -> int */
zend_long ns_avplayer_time_control_status(zval *handle);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_AV_PLAYER_H */

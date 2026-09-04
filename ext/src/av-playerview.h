#ifndef PHP_APPKIT_AV_PLAYERVIEW_H
#define PHP_APPKIT_AV_PLAYERVIEW_H

/*
 * AVKit AVPlayerView — curated minimum for putting an AVPlayer on screen
 * as an ordinary NSView with native controls. Everything else (trim,
 * chapters, sharing, picture-in-picture delegates — block- and
 * delegate-heavy) stays unbound until something needs it.
 *
 * AVKit rides the same sister-framework seam as AVFoundation: av- files,
 * AV\ namespace, liftable if a need ever appears.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/*@zep-construct AV\AVPlayerView initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_avplayerview_init_with_frame(zval *x, zval *y, zval *width, zval *height);
/*@zep AV\AVPlayerView player(int handle) -> int */
zend_long ns_avplayerview_player(zval *handle);
/*@zep AV\AVPlayerView setPlayer(int handle, int player) -> void */
void ns_avplayerview_set_player(zval *handle, zval *player);
/*@zep AV\AVPlayerView controlsStyle(int handle) -> int */
zend_long ns_avplayerview_controls_style(zval *handle);
/*@zep AV\AVPlayerView setControlsStyle(int handle, int controlsStyle) -> void */
void ns_avplayerview_set_controls_style(zval *handle, zval *controlsStyle);
/*@zep AV\AVPlayerView videoGravity(int handle) -> var */
void ns_avplayerview_video_gravity(zval *return_value, zval *handle);
/*@zep AV\AVPlayerView setVideoGravity(int handle, string videoGravity) -> void */
void ns_avplayerview_set_video_gravity(zval *handle, zval *videoGravity);
/*@zep AV\AVPlayerView showsFullScreenToggleButton(int handle) -> bool */
zend_long ns_avplayerview_shows_full_screen_toggle_button(zval *handle);
/*@zep AV\AVPlayerView setShowsFullScreenToggleButton(int handle, bool shows) -> void */
void ns_avplayerview_set_shows_full_screen_toggle_button(zval *handle, zval *shows);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_AV_PLAYERVIEW_H */

#include "av-playerview.h"
#include "ns-value.h"
#import <AVKit/AVKit.h>

/* ====================================================================== */
/* AVPlayerView                                                           */
/* ====================================================================== */

zend_long ns_avplayerview_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[AVPlayerView alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

zend_long ns_avplayerview_player(zval *handle)
{
    @autoreleasepool {
        AVPlayerView *v = NS_ARG_AS(AVPlayerView, handle);
        return v != nil ? ns_handle_for([v player]) : 0;
    }
}

void ns_avplayerview_set_player(zval *handle, zval *player)
{
    @autoreleasepool {
        AVPlayerView *v = NS_ARG_AS(AVPlayerView, handle);
        if (v == nil) return;
        [v setPlayer:NS_ARG_AS(AVPlayer, player)];
    }
}

zend_long ns_avplayerview_controls_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        AVPlayerView *v = NS_ARG_AS(AVPlayerView, handle);
        r = v != nil ? (zend_long) [v controlsStyle] : 0;
    }
    return r;
}

void ns_avplayerview_set_controls_style(zval *handle, zval *controlsStyle)
{
    @autoreleasepool {
        AVPlayerView *v = NS_ARG_AS(AVPlayerView, handle);
        if (v == nil) return;
        [v setControlsStyle:(AVPlayerViewControlsStyle) ns_arg_long(controlsStyle)];
    }
}

void ns_avplayerview_video_gravity(zval *return_value, zval *handle)
{
    @autoreleasepool {
        AVPlayerView *v = NS_ARG_AS(AVPlayerView, handle);
        ns_ret_string(return_value, v != nil ? [v videoGravity] : nil);
    }
}

void ns_avplayerview_set_video_gravity(zval *handle, zval *videoGravity)
{
    @autoreleasepool {
        AVPlayerView *v = NS_ARG_AS(AVPlayerView, handle);
        if (v == nil) return;
        [v setVideoGravity:ns_arg_string(videoGravity)];
    }
}

zend_long ns_avplayerview_shows_full_screen_toggle_button(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        AVPlayerView *v = NS_ARG_AS(AVPlayerView, handle);
        r = (v != nil && [v showsFullScreenToggleButton]) ? 1 : 0;
    }
    return r;
}

void ns_avplayerview_set_shows_full_screen_toggle_button(zval *handle, zval *shows)
{
    @autoreleasepool {
        AVPlayerView *v = NS_ARG_AS(AVPlayerView, handle);
        if (v == nil) return;
        [v setShowsFullScreenToggleButton:ns_arg_bool(shows)];
    }
}

#include "av-player.h"
#include "ns-value.h"
#import <AVFoundation/AVFoundation.h>

/* ====================================================================== */
/* AVPlayer                                                               */
/* ====================================================================== */

zend_long ns_avplayer_player_with_url(zval *url)
{
    @autoreleasepool {
        NSURL *u = NS_ARG_AS(NSURL, url);
        if (u == nil) return 0;
        return ns_handle_for([AVPlayer playerWithURL:u]);
    }
}

void ns_avplayer_play(zval *handle)
{
    @autoreleasepool {
        AVPlayer *p = NS_ARG_AS(AVPlayer, handle);
        if (p == nil) return;
        [p play];
    }
}

void ns_avplayer_pause(zval *handle)
{
    @autoreleasepool {
        AVPlayer *p = NS_ARG_AS(AVPlayer, handle);
        if (p == nil) return;
        [p pause];
    }
}

double ns_avplayer_rate(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        AVPlayer *p = NS_ARG_AS(AVPlayer, handle);
        r = p != nil ? (double) [p rate] : 0.0;
    }
    return r;
}

void ns_avplayer_set_rate(zval *handle, zval *rate)
{
    @autoreleasepool {
        AVPlayer *p = NS_ARG_AS(AVPlayer, handle);
        if (p == nil) return;
        [p setRate:(float) ns_arg_double(rate)];
    }
}

double ns_avplayer_volume(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        AVPlayer *p = NS_ARG_AS(AVPlayer, handle);
        r = p != nil ? (double) [p volume] : 0.0;
    }
    return r;
}

void ns_avplayer_set_volume(zval *handle, zval *volume)
{
    @autoreleasepool {
        AVPlayer *p = NS_ARG_AS(AVPlayer, handle);
        if (p == nil) return;
        [p setVolume:(float) ns_arg_double(volume)];
    }
}

zend_long ns_avplayer_is_muted(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        AVPlayer *p = NS_ARG_AS(AVPlayer, handle);
        r = (p != nil && [p isMuted]) ? 1 : 0;
    }
    return r;
}

void ns_avplayer_set_muted(zval *handle, zval *muted)
{
    @autoreleasepool {
        AVPlayer *p = NS_ARG_AS(AVPlayer, handle);
        if (p == nil) return;
        [p setMuted:ns_arg_bool(muted)];
    }
}

zend_long ns_avplayer_status(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        AVPlayer *p = NS_ARG_AS(AVPlayer, handle);
        r = p != nil ? (zend_long) [p status] : 0;
    }
    return r;
}

zend_long ns_avplayer_time_control_status(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        AVPlayer *p = NS_ARG_AS(AVPlayer, handle);
        r = p != nil ? (zend_long) [p timeControlStatus] : 0;
    }
    return r;
}

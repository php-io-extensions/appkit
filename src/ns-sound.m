#import <AppKit/AppKit.h>
#import "ns-sound.h"
#import "ns-pasteboard.h"

static int ns_copy_nsstring(NSString *text, char *out, int out_len)
{
    if (!out || out_len <= 0) {
        return 0;
    }
    if (!text) {
        out[0] = '\0';
        return 1;
    }
    return [text getCString:out maxLength:(NSUInteger)out_len encoding:NSUTF8StringEncoding] ? 1 : 0;
}

static uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static void ns_release_handle(uintptr_t handle)
{
    if (handle) {
        CFRelease((void *)handle);
    }
}

static NSSound *ns_sound_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSSound class]] ? (NSSound *)obj : nil;
}

static NSPasteboard *ns_pasteboard_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSPasteboard class]] ? (NSPasteboard *)obj : nil;
}

uintptr_t ns_sound_sound_named(const char *name)
{
    @autoreleasepool {
        if (!name) {
            return 0;
        }
        NSSound *sound = [NSSound soundNamed:[NSString stringWithUTF8String:name]];
        return sound ? ns_retain_obj(sound) : 0;
    }
}

uintptr_t ns_sound_create_with_contents_of_file(const char *path, int by_ref)
{
    @autoreleasepool {
        if (!path) {
            return 0;
        }
        NSSound *sound = [[NSSound alloc] initWithContentsOfFile:[NSString stringWithUTF8String:path] byReference:by_ref ? YES : NO];
        return sound ? ns_retain_obj(sound) : 0;
    }
}

uintptr_t ns_sound_create_with_contents_of_url(const char *url, int by_ref)
{
    @autoreleasepool {
        if (!url) {
            return 0;
        }
        NSURL *parsed = [NSURL URLWithString:[NSString stringWithUTF8String:url]];
        if (!parsed) {
            parsed = [NSURL fileURLWithPath:[NSString stringWithUTF8String:url]];
        }
        if (!parsed) {
            return 0;
        }
        NSSound *sound = [[NSSound alloc] initWithContentsOfURL:parsed byReference:by_ref ? YES : NO];
        return sound ? ns_retain_obj(sound) : 0;
    }
}

uintptr_t ns_sound_wrap(void *sound)
{
    if (!sound) {
        return 0;
    }
    @autoreleasepool {
        NSSound *obj = (__bridge NSSound *)sound;
        return [obj isKindOfClass:[NSSound class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_sound_destroy(uintptr_t sound)
{
    ns_release_handle(sound);
}

void *ns_sound_nssound(uintptr_t sound)
{
    NSSound *obj = ns_sound_from(sound);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_sound_set_name(uintptr_t sound, const char *name)
{
    @autoreleasepool {
        NSSound *obj = ns_sound_from(sound);
        if (!obj) {
            return 0;
        }
        return [obj setName:name ? [NSString stringWithUTF8String:name] : nil] ? 1 : 0;
    }
}

int ns_sound_name(uintptr_t sound, char *out, int out_len)
{
    @autoreleasepool {
        NSSound *obj = ns_sound_from(sound);
        return obj ? ns_copy_nsstring(obj.name, out, out_len) : 0;
    }
}

int ns_sound_play(uintptr_t sound)
{
    @autoreleasepool {
        NSSound *obj = ns_sound_from(sound);
        return obj && [obj play] ? 1 : 0;
    }
}

int ns_sound_pause(uintptr_t sound)
{
    @autoreleasepool {
        NSSound *obj = ns_sound_from(sound);
        return obj && [obj pause] ? 1 : 0;
    }
}

int ns_sound_resume(uintptr_t sound)
{
    @autoreleasepool {
        NSSound *obj = ns_sound_from(sound);
        return obj && [obj resume] ? 1 : 0;
    }
}

int ns_sound_stop(uintptr_t sound)
{
    @autoreleasepool {
        NSSound *obj = ns_sound_from(sound);
        return obj && [obj stop] ? 1 : 0;
    }
}

int ns_sound_is_playing(uintptr_t sound)
{
    @autoreleasepool {
        NSSound *obj = ns_sound_from(sound);
        return obj && obj.isPlaying ? 1 : 0;
    }
}

double ns_sound_duration(uintptr_t sound)
{
    @autoreleasepool {
        NSSound *obj = ns_sound_from(sound);
        return obj ? (double)obj.duration : 0.0;
    }
}

float ns_sound_volume(uintptr_t sound)
{
    @autoreleasepool {
        NSSound *obj = ns_sound_from(sound);
        return obj ? obj.volume : 0.0f;
    }
}

void ns_sound_set_volume(uintptr_t sound, float volume)
{
    @autoreleasepool {
        NSSound *obj = ns_sound_from(sound);
        if (obj) {
            obj.volume = volume;
        }
    }
}

double ns_sound_current_time(uintptr_t sound)
{
    @autoreleasepool {
        NSSound *obj = ns_sound_from(sound);
        return obj ? (double)obj.currentTime : 0.0;
    }
}

void ns_sound_set_current_time(uintptr_t sound, double seconds)
{
    @autoreleasepool {
        NSSound *obj = ns_sound_from(sound);
        if (obj) {
            obj.currentTime = (NSTimeInterval)seconds;
        }
    }
}

int ns_sound_loops(uintptr_t sound)
{
    @autoreleasepool {
        NSSound *obj = ns_sound_from(sound);
        return obj && obj.loops ? 1 : 0;
    }
}

void ns_sound_set_loops(uintptr_t sound, int loops)
{
    @autoreleasepool {
        NSSound *obj = ns_sound_from(sound);
        if (obj) {
            obj.loops = loops ? YES : NO;
        }
    }
}

int ns_sound_playback_device_identifier(uintptr_t sound, char *out, int out_len)
{
    @autoreleasepool {
        NSSound *obj = ns_sound_from(sound);
        return obj ? ns_copy_nsstring(obj.playbackDeviceIdentifier, out, out_len) : 0;
    }
}

void ns_sound_set_playback_device_identifier(uintptr_t sound, const char *identifier)
{
    @autoreleasepool {
        NSSound *obj = ns_sound_from(sound);
        if (obj) {
            obj.playbackDeviceIdentifier = (identifier && identifier[0]) ? [NSString stringWithUTF8String:identifier] : nil;
        }
    }
}

int ns_sound_can_init_with_pasteboard(uintptr_t pasteboard)
{
    @autoreleasepool {
        NSPasteboard *board = ns_pasteboard_from(pasteboard);
        return board && [NSSound canInitWithPasteboard:board] ? 1 : 0;
    }
}

uintptr_t ns_sound_create_with_pasteboard(uintptr_t pasteboard)
{
    @autoreleasepool {
        NSPasteboard *board = ns_pasteboard_from(pasteboard);
        if (!board) {
            return 0;
        }
        NSSound *sound = [[NSSound alloc] initWithPasteboard:board];
        return sound ? ns_retain_obj(sound) : 0;
    }
}

void ns_sound_write_to_pasteboard(uintptr_t sound, uintptr_t pasteboard)
{
    @autoreleasepool {
        NSSound *obj = ns_sound_from(sound);
        NSPasteboard *board = ns_pasteboard_from(pasteboard);
        if (obj && board) {
            [obj writeToPasteboard:board];
        }
    }
}

int ns_sound_unfiltered_types_count(void)
{
    @autoreleasepool {
        return (int)[NSSound soundUnfilteredTypes].count;
    }
}

int ns_sound_unfiltered_type_at(int index, char *out, int out_len)
{
    @autoreleasepool {
        NSArray<NSString *> *types = [NSSound soundUnfilteredTypes];
        if (index < 0 || index >= (int)types.count) {
            return 0;
        }
        return ns_copy_nsstring(types[(NSUInteger)index], out, out_len);
    }
}

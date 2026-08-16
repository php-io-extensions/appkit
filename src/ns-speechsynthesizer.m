#import <AppKit/AppKit.h>
#import "ns-speechsynthesizer.h"

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

static NSSpeechSynthesizer *ns_speechsynthesizer_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSSpeechSynthesizer class]] ? (NSSpeechSynthesizer *)obj : nil;
}

static NSSpeechBoundary ns_speech_boundary_from_int(int boundary)
{
    switch (boundary) {
        case 1:
            return NSSpeechWordBoundary;
        case 2:
            return NSSpeechSentenceBoundary;
        default:
            return NSSpeechImmediateBoundary;
    }
}

uintptr_t ns_speechsynthesizer_create(const char *voice)
{
    @autoreleasepool {
        NSString *voiceName = (voice && voice[0]) ? [NSString stringWithUTF8String:voice] : nil;
        NSSpeechSynthesizer *obj = [[NSSpeechSynthesizer alloc] initWithVoice:voiceName];
        return obj ? ns_retain_obj(obj) : 0;
    }
}

uintptr_t ns_speechsynthesizer_wrap(void *synthesizer)
{
    if (!synthesizer) {
        return 0;
    }
    @autoreleasepool {
        NSSpeechSynthesizer *obj = (__bridge NSSpeechSynthesizer *)synthesizer;
        return [obj isKindOfClass:[NSSpeechSynthesizer class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_speechsynthesizer_destroy(uintptr_t synthesizer)
{
    ns_release_handle(synthesizer);
}

void *ns_speechsynthesizer_nsspeechsynthesizer(uintptr_t synthesizer)
{
    NSSpeechSynthesizer *obj = ns_speechsynthesizer_from(synthesizer);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_speechsynthesizer_start_speaking_string(uintptr_t synthesizer, const char *string)
{
    @autoreleasepool {
        NSSpeechSynthesizer *obj = ns_speechsynthesizer_from(synthesizer);
        if (!obj) {
            return 0;
        }
        return [obj startSpeakingString:string ? [NSString stringWithUTF8String:string] : @""] ? 1 : 0;
    }
}

int ns_speechsynthesizer_start_speaking_string_to_url(uintptr_t synthesizer, const char *string, const char *url)
{
    @autoreleasepool {
        NSSpeechSynthesizer *obj = ns_speechsynthesizer_from(synthesizer);
        if (!obj || !url) {
            return 0;
        }
        NSURL *parsed = [NSURL URLWithString:[NSString stringWithUTF8String:url]];
        if (!parsed) {
            parsed = [NSURL fileURLWithPath:[NSString stringWithUTF8String:url]];
        }
        if (!parsed) {
            return 0;
        }
        return [obj startSpeakingString:string ? [NSString stringWithUTF8String:string] : @"" toURL:parsed] ? 1 : 0;
    }
}

int ns_speechsynthesizer_is_speaking(uintptr_t synthesizer)
{
    @autoreleasepool {
        NSSpeechSynthesizer *obj = ns_speechsynthesizer_from(synthesizer);
        return obj && obj.isSpeaking ? 1 : 0;
    }
}

void ns_speechsynthesizer_stop_speaking(uintptr_t synthesizer)
{
    @autoreleasepool {
        NSSpeechSynthesizer *obj = ns_speechsynthesizer_from(synthesizer);
        if (obj) {
            [obj stopSpeaking];
        }
    }
}

void ns_speechsynthesizer_stop_speaking_at_boundary(uintptr_t synthesizer, int boundary)
{
    @autoreleasepool {
        NSSpeechSynthesizer *obj = ns_speechsynthesizer_from(synthesizer);
        if (obj) {
            [obj stopSpeakingAtBoundary:ns_speech_boundary_from_int(boundary)];
        }
    }
}

void ns_speechsynthesizer_pause_speaking_at_boundary(uintptr_t synthesizer, int boundary)
{
    @autoreleasepool {
        NSSpeechSynthesizer *obj = ns_speechsynthesizer_from(synthesizer);
        if (obj) {
            [obj pauseSpeakingAtBoundary:ns_speech_boundary_from_int(boundary)];
        }
    }
}

void ns_speechsynthesizer_continue_speaking(uintptr_t synthesizer)
{
    @autoreleasepool {
        NSSpeechSynthesizer *obj = ns_speechsynthesizer_from(synthesizer);
        if (obj) {
            [obj continueSpeaking];
        }
    }
}

int ns_speechsynthesizer_voice(uintptr_t synthesizer, char *out, int out_len)
{
    @autoreleasepool {
        NSSpeechSynthesizer *obj = ns_speechsynthesizer_from(synthesizer);
        return obj ? ns_copy_nsstring(obj.voice, out, out_len) : 0;
    }
}

int ns_speechsynthesizer_set_voice(uintptr_t synthesizer, const char *voice)
{
    @autoreleasepool {
        NSSpeechSynthesizer *obj = ns_speechsynthesizer_from(synthesizer);
        if (!obj) {
            return 0;
        }
        NSString *voiceName = (voice && voice[0]) ? [NSString stringWithUTF8String:voice] : nil;
        return [obj setVoice:voiceName] ? 1 : 0;
    }
}

float ns_speechsynthesizer_rate(uintptr_t synthesizer)
{
    @autoreleasepool {
        NSSpeechSynthesizer *obj = ns_speechsynthesizer_from(synthesizer);
        return obj ? obj.rate : 0.0f;
    }
}

void ns_speechsynthesizer_set_rate(uintptr_t synthesizer, float rate)
{
    @autoreleasepool {
        NSSpeechSynthesizer *obj = ns_speechsynthesizer_from(synthesizer);
        if (obj) {
            obj.rate = rate;
        }
    }
}

float ns_speechsynthesizer_volume(uintptr_t synthesizer)
{
    @autoreleasepool {
        NSSpeechSynthesizer *obj = ns_speechsynthesizer_from(synthesizer);
        return obj ? obj.volume : 0.0f;
    }
}

void ns_speechsynthesizer_set_volume(uintptr_t synthesizer, float volume)
{
    @autoreleasepool {
        NSSpeechSynthesizer *obj = ns_speechsynthesizer_from(synthesizer);
        if (obj) {
            obj.volume = volume;
        }
    }
}

int ns_speechsynthesizer_uses_feedback_window(uintptr_t synthesizer)
{
    @autoreleasepool {
        NSSpeechSynthesizer *obj = ns_speechsynthesizer_from(synthesizer);
        return obj && obj.usesFeedbackWindow ? 1 : 0;
    }
}

void ns_speechsynthesizer_set_uses_feedback_window(uintptr_t synthesizer, int flag)
{
    @autoreleasepool {
        NSSpeechSynthesizer *obj = ns_speechsynthesizer_from(synthesizer);
        if (obj) {
            obj.usesFeedbackWindow = flag ? YES : NO;
        }
    }
}

int ns_speechsynthesizer_phonemes_from_text(uintptr_t synthesizer, const char *text, char *out, int out_len)
{
    @autoreleasepool {
        NSSpeechSynthesizer *obj = ns_speechsynthesizer_from(synthesizer);
        if (!obj) {
            return 0;
        }
        NSString *phonemes = [obj phonemesFromText:text ? [NSString stringWithUTF8String:text] : @""];
        return ns_copy_nsstring(phonemes, out, out_len);
    }
}

int ns_speechsynthesizer_is_any_application_speaking(void)
{
    @autoreleasepool {
        return [NSSpeechSynthesizer isAnyApplicationSpeaking] ? 1 : 0;
    }
}

int ns_speechsynthesizer_default_voice(char *out, int out_len)
{
    @autoreleasepool {
        return ns_copy_nsstring([NSSpeechSynthesizer defaultVoice], out, out_len);
    }
}

int ns_speechsynthesizer_available_voices_count(void)
{
    @autoreleasepool {
        return (int)[NSSpeechSynthesizer availableVoices].count;
    }
}

int ns_speechsynthesizer_available_voice_at(int index, char *out, int out_len)
{
    @autoreleasepool {
        NSArray<NSSpeechSynthesizerVoiceName> *voices = [NSSpeechSynthesizer availableVoices];
        if (index < 0 || index >= (int)voices.count) {
            return 0;
        }
        return ns_copy_nsstring(voices[(NSUInteger)index], out, out_len);
    }
}

int ns_speechsynthesizer_attribute_for_voice(const char *voice, const char *key, char *out, int out_len)
{
    @autoreleasepool {
        if (!voice || !key) {
            return 0;
        }
        NSDictionary<NSVoiceAttributeKey, id> *attrs = [NSSpeechSynthesizer attributesForVoice:[NSString stringWithUTF8String:voice]];
        id value = attrs[[NSString stringWithUTF8String:key]];
        if ([value isKindOfClass:[NSString class]]) {
            return ns_copy_nsstring((NSString *)value, out, out_len);
        }
        if ([value isKindOfClass:[NSNumber class]]) {
            return ns_copy_nsstring([(NSNumber *)value stringValue], out, out_len);
        }
        return 0;
    }
}

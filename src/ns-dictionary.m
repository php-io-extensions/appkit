#import <Foundation/Foundation.h>
#import "ns-dictionary.h"

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

static id ns_dictionary_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    if ([obj isKindOfClass:[NSDictionary class]]) {
        return obj;
    }
    return nil;
}

uintptr_t ns_dictionary_create_mutable(void)
{
    @autoreleasepool {
        return ns_retain_obj([NSMutableDictionary dictionary]);
    }
}

uintptr_t ns_dictionary_wrap(void *dictionary)
{
    if (!dictionary) {
        return 0;
    }
    @autoreleasepool {
        id obj = (__bridge id)dictionary;
        return [obj isKindOfClass:[NSDictionary class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_dictionary_destroy(uintptr_t dictionary)
{
    ns_release_handle(dictionary);
}

void *ns_dictionary_nsdictionary(uintptr_t dictionary)
{
    id obj = ns_dictionary_from(dictionary);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_dictionary_count(uintptr_t dictionary)
{
    @autoreleasepool {
        id obj = ns_dictionary_from(dictionary);
        return obj ? (int)[(NSDictionary *)obj count] : 0;
    }
}

void ns_dictionary_set_string(uintptr_t dictionary, const char *key, const char *value)
{
    @autoreleasepool {
        NSMutableDictionary *obj = (NSMutableDictionary *)ns_dictionary_from(dictionary);
        if (!obj || !key || ![obj isKindOfClass:[NSMutableDictionary class]]) {
            return;
        }
        [obj setObject:(value ? [NSString stringWithUTF8String:value] : @"") forKey:[NSString stringWithUTF8String:key]];
    }
}

int ns_dictionary_get_string(uintptr_t dictionary, const char *key, char *out, int out_len)
{
    @autoreleasepool {
        id obj = ns_dictionary_from(dictionary);
        if (!obj || !key) {
            return 0;
        }
        id value = [(NSDictionary *)obj objectForKey:[NSString stringWithUTF8String:key]];
        if (![value isKindOfClass:[NSString class]]) {
            return 0;
        }
        return ns_copy_nsstring((NSString *)value, out, out_len);
    }
}

void ns_dictionary_set_int(uintptr_t dictionary, const char *key, long long value)
{
    @autoreleasepool {
        NSMutableDictionary *obj = (NSMutableDictionary *)ns_dictionary_from(dictionary);
        if (!obj || !key || ![obj isKindOfClass:[NSMutableDictionary class]]) {
            return;
        }
        [obj setObject:@(value) forKey:[NSString stringWithUTF8String:key]];
    }
}

int ns_dictionary_get_int(uintptr_t dictionary, const char *key, long long *out)
{
    @autoreleasepool {
        id obj = ns_dictionary_from(dictionary);
        if (!obj || !key || !out) {
            return 0;
        }
        id value = [(NSDictionary *)obj objectForKey:[NSString stringWithUTF8String:key]];
        if (![value isKindOfClass:[NSNumber class]]) {
            return 0;
        }
        *out = [(NSNumber *)value longLongValue];
        return 1;
    }
}

void ns_dictionary_set_double(uintptr_t dictionary, const char *key, double value)
{
    @autoreleasepool {
        NSMutableDictionary *obj = (NSMutableDictionary *)ns_dictionary_from(dictionary);
        if (!obj || !key || ![obj isKindOfClass:[NSMutableDictionary class]]) {
            return;
        }
        [obj setObject:@(value) forKey:[NSString stringWithUTF8String:key]];
    }
}

int ns_dictionary_get_double(uintptr_t dictionary, const char *key, double *out)
{
    @autoreleasepool {
        id obj = ns_dictionary_from(dictionary);
        if (!obj || !key || !out) {
            return 0;
        }
        id value = [(NSDictionary *)obj objectForKey:[NSString stringWithUTF8String:key]];
        if (![value isKindOfClass:[NSNumber class]]) {
            return 0;
        }
        *out = [(NSNumber *)value doubleValue];
        return 1;
    }
}

void ns_dictionary_set_bool(uintptr_t dictionary, const char *key, int value)
{
    @autoreleasepool {
        NSMutableDictionary *obj = (NSMutableDictionary *)ns_dictionary_from(dictionary);
        if (!obj || !key || ![obj isKindOfClass:[NSMutableDictionary class]]) {
            return;
        }
        [obj setObject:@(value ? YES : NO) forKey:[NSString stringWithUTF8String:key]];
    }
}

int ns_dictionary_get_bool(uintptr_t dictionary, const char *key, int *out)
{
    @autoreleasepool {
        id obj = ns_dictionary_from(dictionary);
        if (!obj || !key || !out) {
            return 0;
        }
        id value = [(NSDictionary *)obj objectForKey:[NSString stringWithUTF8String:key]];
        if (![value isKindOfClass:[NSNumber class]]) {
            return 0;
        }
        *out = [(NSNumber *)value boolValue] ? 1 : 0;
        return 1;
    }
}

void ns_dictionary_set_dictionary(uintptr_t dictionary, const char *key, uintptr_t value_dictionary)
{
    @autoreleasepool {
        NSMutableDictionary *obj = (NSMutableDictionary *)ns_dictionary_from(dictionary);
        id nested = ns_dictionary_from(value_dictionary);
        if (!obj || !key || !nested || ![obj isKindOfClass:[NSMutableDictionary class]]) {
            return;
        }
        [obj setObject:nested forKey:[NSString stringWithUTF8String:key]];
    }
}

uintptr_t ns_dictionary_get_dictionary(uintptr_t dictionary, const char *key)
{
    @autoreleasepool {
        id obj = ns_dictionary_from(dictionary);
        if (!obj || !key) {
            return 0;
        }
        id value = [(NSDictionary *)obj objectForKey:[NSString stringWithUTF8String:key]];
        return [value isKindOfClass:[NSDictionary class]] ? ns_retain_obj(value) : 0;
    }
}

int ns_dictionary_has_key(uintptr_t dictionary, const char *key)
{
    @autoreleasepool {
        id obj = ns_dictionary_from(dictionary);
        if (!obj || !key) {
            return 0;
        }
        return [(NSDictionary *)obj objectForKey:[NSString stringWithUTF8String:key]] != nil ? 1 : 0;
    }
}

int ns_dictionary_keys_count(uintptr_t dictionary)
{
    @autoreleasepool {
        id obj = ns_dictionary_from(dictionary);
        return obj ? (int)[(NSDictionary *)obj count] : 0;
    }
}

int ns_dictionary_key_at(uintptr_t dictionary, int index, char *out, int out_len)
{
    @autoreleasepool {
        id obj = ns_dictionary_from(dictionary);
        if (!obj || index < 0 || index >= (int)[(NSDictionary *)obj count]) {
            return 0;
        }
        id key = [(NSDictionary *)obj allKeys][(NSUInteger)index];
        if (![key isKindOfClass:[NSString class]]) {
            return 0;
        }
        return ns_copy_nsstring((NSString *)key, out, out_len);
    }
}

uintptr_t ns_dictionary_copy_immutable(uintptr_t dictionary)
{
    @autoreleasepool {
        id obj = ns_dictionary_from(dictionary);
        return obj ? ns_retain_obj([(NSDictionary *)obj copy]) : 0;
    }
}

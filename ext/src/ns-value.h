#ifndef PHP_APPKIT_NS_VALUE_H
#define PHP_APPKIT_NS_VALUE_H

/*
 * Marshalling between zvals and AppKit values. Included by every bridge .m.
 *
 * Handles: every Objective-C object that crosses into PHP does so as an int —
 * its pointer — and the registry in ns-bridge.m holds a strong reference for
 * as long as PHP holds the handle. 0 is nil. Resolving validates against the
 * registry, so a stale or fabricated int is nil rather than a crash.
 *
 * Structs cross as their components in (doubles) and as assoc arrays out.
 * NSString crosses as string; nil is null.
 */

#include "php.h"
#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ns-bridge.m */
zend_long ns_handle_for(id object);     /* register (retain) if new; 0 for nil */
id        ns_handle_object(zend_long h); /* nil when unknown */
void      ns_handle_release(zend_long h);

#ifdef __cplusplus
}
#endif

static inline zval *ns_deref(zval *z)
{
    if (z != NULL) { ZVAL_DEREF(z); }
    return z;
}

static inline zend_long ns_arg_long(zval *z)
{
    z = ns_deref(z);
    if (z == NULL) return 0;
    switch (Z_TYPE_P(z)) {
        case IS_LONG:   return Z_LVAL_P(z);
        case IS_DOUBLE: return (zend_long) Z_DVAL_P(z);
        case IS_TRUE:   return 1;
        default:        return 0;
    }
}

static inline double ns_arg_double(zval *z)
{
    z = ns_deref(z);
    if (z == NULL) return 0.0;
    switch (Z_TYPE_P(z)) {
        case IS_DOUBLE: return Z_DVAL_P(z);
        case IS_LONG:   return (double) Z_LVAL_P(z);
        default:        return 0.0;
    }
}

static inline BOOL ns_arg_bool(zval *z)
{
    z = ns_deref(z);
    if (z == NULL) return NO;
    switch (Z_TYPE_P(z)) {
        case IS_TRUE: return YES;
        case IS_LONG: return Z_LVAL_P(z) != 0;
        default:      return NO;
    }
}

/* NSString or nil (null / non-string). */
static inline NSString *ns_arg_string(zval *z)
{
    z = ns_deref(z);
    if (z == NULL || Z_TYPE_P(z) != IS_STRING) return nil;
    return [[NSString alloc] initWithBytes:Z_STRVAL_P(z) length:Z_STRLEN_P(z) encoding:NSUTF8StringEncoding];
}

/* SEL or NULL for empty / null. */
static inline SEL ns_arg_sel(zval *z)
{
    NSString *s = ns_arg_string(z);
    if (s == nil || [s length] == 0) return NULL;
    return NSSelectorFromString(s);
}

static inline id ns_arg_object(zval *z)
{
    return ns_handle_object(ns_arg_long(z));
}

static inline NSRect ns_arg_rect(zval *x, zval *y, zval *w, zval *h)
{
    return NSMakeRect(ns_arg_double(x), ns_arg_double(y), ns_arg_double(w), ns_arg_double(h));
}

static inline NSPoint ns_arg_point(zval *x, zval *y)
{
    return NSMakePoint(ns_arg_double(x), ns_arg_double(y));
}

static inline NSSize ns_arg_size(zval *w, zval *h)
{
    return NSMakeSize(ns_arg_double(w), ns_arg_double(h));
}

static inline NSRange ns_arg_range(zval *loc, zval *len)
{
    return NSMakeRange((NSUInteger) ns_arg_long(loc), (NSUInteger) ns_arg_long(len));
}

/* PHP list of handles -> NSArray of objects (unknown handles skipped). */
static inline NSArray *ns_arg_object_array(zval *z)
{
    NSMutableArray *out = [NSMutableArray new];
    z = ns_deref(z);
    if (z == NULL || Z_TYPE_P(z) != IS_ARRAY) return out;
    zval *e;
    ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(z), e) {
        id o = ns_arg_object(e);
        if (o != nil) [out addObject:o];
    }     ZEND_HASH_FOREACH_END();
    return out;
}

/* PHP list of lists of handles -> NSArray<NSArray *> (inner non-arrays become empty rows). */
static inline NSArray *ns_arg_object_array_array(zval *z)
{
    NSMutableArray *out = [NSMutableArray new];
    z = ns_deref(z);
    if (z == NULL || Z_TYPE_P(z) != IS_ARRAY) return out;
    zval *e;
    ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(z), e) {
        [out addObject:ns_arg_object_array(e)];
    } ZEND_HASH_FOREACH_END();
    return out;
}

/* PHP list of strings -> NSArray<NSString*> (non-strings skipped). */
static inline NSArray<NSString *> *ns_arg_string_array(zval *z)
{
    NSMutableArray *out = [NSMutableArray new];
    z = ns_deref(z);
    if (z == NULL || Z_TYPE_P(z) != IS_ARRAY) return out;
    zval *e;
    ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(z), e) {
        NSString *s = ns_arg_string(e);
        if (s != nil) [out addObject:s];
    } ZEND_HASH_FOREACH_END();
    return out;
}

/* ---- returns: write into return_value ---- */

static inline void ns_ret_string(zval *rv, NSString *s)
{
    if (s == nil) { ZVAL_NULL(rv); return; }
    const char *u = [s UTF8String];
    if (u == NULL) { ZVAL_EMPTY_STRING(rv); return; }
    ZVAL_STRINGL(rv, u, (size_t) strlen(u));
}

static inline void ns_ret_sel(zval *rv, SEL sel)
{
    if (sel == NULL) { ZVAL_NULL(rv); return; }
    ns_ret_string(rv, NSStringFromSelector(sel));
}

static inline void ns_ret_rect(zval *rv, NSRect r)
{
    array_init_size(rv, 4);
    add_assoc_double(rv, "x", r.origin.x);
    add_assoc_double(rv, "y", r.origin.y);
    add_assoc_double(rv, "width", r.size.width);
    add_assoc_double(rv, "height", r.size.height);
}

static inline void ns_ret_point(zval *rv, NSPoint p)
{
    array_init_size(rv, 2);
    add_assoc_double(rv, "x", p.x);
    add_assoc_double(rv, "y", p.y);
}

static inline void ns_ret_size(zval *rv, NSSize s)
{
    array_init_size(rv, 2);
    add_assoc_double(rv, "width", s.width);
    add_assoc_double(rv, "height", s.height);
}

static inline void ns_ret_range(zval *rv, NSRange r)
{
    array_init_size(rv, 2);
    add_assoc_long(rv, "location", (zend_long) r.location);
    add_assoc_long(rv, "length", (zend_long) r.length);
}

static inline void ns_ret_edge_insets(zval *rv, NSEdgeInsets e)
{
    array_init_size(rv, 4);
    add_assoc_double(rv, "top", e.top);
    add_assoc_double(rv, "left", e.left);
    add_assoc_double(rv, "bottom", e.bottom);
    add_assoc_double(rv, "right", e.right);
}

static inline void ns_ret_object_array(zval *rv, NSArray *a)
{
    array_init(rv);
    for (id o in a) { add_next_index_long(rv, ns_handle_for(o)); }
}

/* PHP list of handles -> NSSet of objects (unknown handles skipped). */
static inline NSSet *ns_arg_object_set(zval *z)
{
    NSMutableSet *out = [NSMutableSet new];
    z = ns_deref(z);
    if (z == NULL || Z_TYPE_P(z) != IS_ARRAY) return out;
    zval *e;
    ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(z), e) {
        id o = ns_arg_object(e);
        if (o != nil) [out addObject:o];
    } ZEND_HASH_FOREACH_END();
    return out;
}

/* NSSet of objects -> PHP list of handles (nil set -> empty array). */
static inline void ns_ret_object_set(zval *rv, NSSet *s)
{
    array_init(rv);
    for (id o in s) { add_next_index_long(rv, ns_handle_for(o)); }
}

/* PHP list of strings -> NSSet<NSString*> (non-strings skipped). */
static inline NSSet<NSString *> *ns_arg_string_set(zval *z)
{
    NSMutableSet *out = [NSMutableSet new];
    z = ns_deref(z);
    if (z == NULL || Z_TYPE_P(z) != IS_ARRAY) return out;
    zval *e;
    ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(z), e) {
        NSString *s = ns_arg_string(e);
        if (s != nil) [out addObject:s];
    } ZEND_HASH_FOREACH_END();
    return out;
}

/* NSSet of strings -> PHP list of strings (nil set -> empty array). */
static inline void ns_ret_string_set(zval *rv, NSSet<NSString *> *s)
{
    array_init(rv);
    for (NSString *str in s) {
        const char *u = [str UTF8String];
        add_next_index_string(rv, u != NULL ? u : "");
    }
}

static inline void ns_ret_string_array(zval *rv, NSArray<NSString *> *a)
{
    array_init(rv);
    for (NSString *s in a) {
        const char *u = [s UTF8String];
        add_next_index_string(rv, u != NULL ? u : "");
    }
}

/* Resolve a handle to an instance of a class; nil when not that kind. */
#define NS_ARG_AS(Type, z) ((Type *) ns_arg_typed(z, [Type class]))

static inline id ns_arg_typed(zval *z, Class cls)
{
    id o = ns_arg_object(z);
    return (o != nil && [o isKindOfClass:cls]) ? o : nil;
}

#endif /* PHP_APPKIT_NS_VALUE_H */

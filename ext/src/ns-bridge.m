#import <objc/runtime.h>
#import <objc/message.h>

#include "ns-bridge.h"
#include "ns-value.h"

/* ====================================================================== */
/* Protocol registration                                                  */
/* ====================================================================== */

/*
 * NSProtocolFromString only finds protocols whose metadata is linked into the
 * runtime, and nothing in AppKit itself conforms to the purely user-facing
 * ones (NSComboBoxDataSource was the first casualty). Referencing them here
 * embeds their descriptions in this binary so delegateNew can resolve every
 * delegate/data-source protocol of a bound class.
 */
__attribute__((constructor))
static void ns_bridge_register_protocols(void)
{
    Protocol *refs[] = {
        @protocol(NSAlertDelegate),
        @protocol(NSApplicationDelegate),
        @protocol(NSCollectionViewDataSource),
        @protocol(NSCollectionViewDelegate),
        @protocol(NSCollectionViewDelegateFlowLayout),
        @protocol(NSComboBoxDataSource),
        @protocol(NSComboBoxDelegate),
        @protocol(NSControlTextEditingDelegate),
        @protocol(NSDatePickerCellDelegate),
        @protocol(NSImageDelegate),
        @protocol(NSLayoutManagerDelegate),
        @protocol(NSMenuDelegate),
        @protocol(NSMenuItemValidation),
        @protocol(NSOpenSavePanelDelegate),
        @protocol(NSOutlineViewDataSource),
        @protocol(NSOutlineViewDelegate),
        @protocol(NSPathCellDelegate),
        @protocol(NSPathControlDelegate),
        @protocol(NSPopoverDelegate),
        @protocol(NSSearchFieldDelegate),
        @protocol(NSSplitViewDelegate),
        @protocol(NSStackViewDelegate),
        @protocol(NSTabViewDelegate),
        @protocol(NSTableViewDataSource),
        @protocol(NSTableViewDelegate),
        @protocol(NSTextDelegate),
        @protocol(NSTextFieldDelegate),
        @protocol(NSTextStorageDelegate),
        @protocol(NSTextViewDelegate),
        @protocol(NSToolbarDelegate),
        @protocol(NSToolbarItemValidation),
        @protocol(NSWindowDelegate),
    };
    (void) refs;
}

/* ====================================================================== */
/* Handle registry                                                        */
/* ====================================================================== */

static NSMutableDictionary<NSNumber *, id> *ns_registry = nil;

static NSMutableDictionary *ns_registry_table(void)
{
    if (ns_registry == nil) ns_registry = [NSMutableDictionary new];
    return ns_registry;
}

zend_long ns_handle_for(id object)
{
    if (object == nil) return 0;
    zend_long h = (zend_long) (uintptr_t) object;
    NSNumber *key = @(h);
    if ([ns_registry_table() objectForKey:key] == nil) {
        [ns_registry_table() setObject:object forKey:key];
    }
    return h;
}

id ns_handle_object(zend_long h)
{
    if (h == 0) return nil;
    return [ns_registry_table() objectForKey:@(h)];
}

void ns_handle_release(zend_long h)
{
    if (h == 0) return;
    [ns_registry_table() removeObjectForKey:@(h)];
}

zend_long ns_bridge_retain(zval *handle)
{
    zend_long h = ns_arg_long(handle);
    return ns_handle_object(h) != nil ? 1 : 0;
}

void ns_bridge_release(zval *handle)
{
    @autoreleasepool { ns_handle_release(ns_arg_long(handle)); }
}

zend_long ns_bridge_is_valid(zval *handle)
{
    return ns_handle_object(ns_arg_long(handle)) != nil ? 1 : 0;
}

void ns_bridge_class_name(zval *return_value, zval *handle)
{
    @autoreleasepool {
        id o = ns_arg_object(handle);
        ns_ret_string(return_value, o != nil ? NSStringFromClass([o class]) : nil);
    }
}

zend_long ns_bridge_is_kind_of_class(zval *handle, zval *className)
{
    @autoreleasepool {
        id o = ns_arg_object(handle);
        NSString *name = ns_arg_string(className);
        if (o == nil || name == nil) return 0;
        Class cls = NSClassFromString(name);
        return (cls != Nil && [o isKindOfClass:cls]) ? 1 : 0;
    }
}

/* ====================================================================== */
/* Calling PHP                                                            */
/* ====================================================================== */

static void ns_call(zval *callable, uint32_t argc, zval *argv, zval *retval)
{
    zval local;
    ZVAL_UNDEF(&local);
    if (retval == NULL) retval = &local;
    ZVAL_UNDEF(retval);
    if (callable == NULL || Z_TYPE_P(callable) == IS_UNDEF || Z_TYPE_P(callable) == IS_NULL) return;
    call_user_function(EG(function_table), NULL, callable, retval, argc, argv);
    if (retval == &local && !Z_ISUNDEF(local)) zval_ptr_dtor(&local);
}

static void ns_args_dtor(uint32_t argc, zval *argv)
{
    for (uint32_t i = 0; i < argc; i++) zval_ptr_dtor(&argv[i]);
}

/* ====================================================================== */
/* Event pump                                                             */
/* ====================================================================== */

zend_long ns_bridge_pump(zval *timeout)
{
    zend_long sent = 0;
    double wait = ns_arg_double(timeout);
    if (NSApp == nil) return 0;
    @autoreleasepool {
        NSDate *until = wait > 0.0 ? [NSDate dateWithTimeIntervalSinceNow:wait] : [NSDate distantPast];
        NSEvent *event;
        while ((event = [NSApp nextEventMatchingMask:NSEventMaskAny untilDate:until
                                              inMode:NSDefaultRunLoopMode dequeue:YES]) != nil) {
            [NSApp sendEvent:event];
            sent++;
            until = [NSDate distantPast];
            if (EG(exception)) break;
        }
    }
    return sent;
}

/* ====================================================================== */
/* Target/action                                                          */
/* ====================================================================== */

static HashTable ns_actions;          /* sender pointer -> callable */
static int ns_actions_ready = 0;

static HashTable *ns_action_table(void)
{
    if (!ns_actions_ready) { zend_hash_init(&ns_actions, 16, NULL, ZVAL_PTR_DTOR, 1); ns_actions_ready = 1; }
    return &ns_actions;
}

@interface NSPhpActionTarget : NSObject
- (void)phpAction:(id)sender;
@end

@implementation NSPhpActionTarget
- (void)phpAction:(id)sender
{
    zend_long h = (zend_long) (uintptr_t) sender;
    zval *callable = zend_hash_index_find(ns_action_table(), (zend_ulong) h);
    if (callable == NULL) return;
    zval argv[1];
    ZVAL_LONG(&argv[0], ns_handle_for(sender));
    ns_call(callable, 1, argv, NULL);
    ns_args_dtor(1, argv);
}
@end

static NSPhpActionTarget *ns_action_target = nil;

static NSPhpActionTarget *ns_action_shared(void)
{
    if (ns_action_target == nil) ns_action_target = [NSPhpActionTarget new];
    return ns_action_target;
}

zend_long ns_bridge_set_action(zval *handle, zval *callable)
{
    @autoreleasepool {
        id o = ns_arg_object(handle);
        if (o == nil || callable == NULL || !zend_is_callable(callable, 0, NULL)) return 0;
        if (![o respondsToSelector:@selector(setTarget:)] || ![o respondsToSelector:@selector(setAction:)]) return 0;
        zval copy;
        ZVAL_COPY(&copy, callable);
        zend_hash_index_update(ns_action_table(), (zend_ulong) (uintptr_t) o, &copy);
        [o setTarget:ns_action_shared()];
        [o setAction:@selector(phpAction:)];
        return 1;
    }
}

void ns_bridge_remove_action(zval *handle)
{
    @autoreleasepool {
        id o = ns_arg_object(handle);
        if (o == nil) return;
        zend_hash_index_del(ns_action_table(), (zend_ulong) (uintptr_t) o);
        if ([o respondsToSelector:@selector(target)] && [o target] == ns_action_target) {
            [o setTarget:nil];
            [o setAction:NULL];
        }
    }
}

/* ====================================================================== */
/* Notifications                                                          */
/* ====================================================================== */

@interface NSPhpObservation : NSObject
@property (nonatomic, assign) zend_long token;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, weak) id object;
@end
@implementation NSPhpObservation @end

static HashTable ns_observations;      /* token -> callable */
static int ns_observations_ready = 0;
static NSMutableDictionary<NSNumber *, NSPhpObservation *> *ns_observation_meta = nil;
static zend_long ns_observation_next = 1;

static HashTable *ns_observation_table(void)
{
    if (!ns_observations_ready) { zend_hash_init(&ns_observations, 16, NULL, ZVAL_PTR_DTOR, 1); ns_observations_ready = 1; }
    return &ns_observations;
}

@interface NSPhpObserver : NSObject
- (void)phpNotification:(NSNotification *)note;
@end

@implementation NSPhpObserver
- (void)phpNotification:(NSNotification *)note
{
    if (ns_observation_meta == nil) return;
    id object = [note object];
    NSString *name = [note name];
    /* Every observation matching (name, object-or-any) fires. */
    for (NSNumber *key in [ns_observation_meta allKeys]) {
        NSPhpObservation *obs = ns_observation_meta[key];
        if (![obs.name isEqualToString:name]) continue;
        if (obs.object != nil && obs.object != object) continue;
        zval *callable = zend_hash_index_find(ns_observation_table(), (zend_ulong) obs.token);
        if (callable == NULL) continue;
        zval argv[2];
        ZVAL_LONG(&argv[0], ns_handle_for(object));
        ns_ret_string(&argv[1], name);
        ns_call(callable, 2, argv, NULL);
        ns_args_dtor(2, argv);
        if (EG(exception)) break;
    }
}
@end

static NSPhpObserver *ns_observer = nil;

static NSPhpObserver *ns_observer_shared(void)
{
    if (ns_observer == nil) ns_observer = [NSPhpObserver new];
    return ns_observer;
}

zend_long ns_bridge_observe(zval *object, zval *name, zval *callable)
{
    @autoreleasepool {
        NSString *n = ns_arg_string(name);
        id o = ns_arg_object(object);
        if (n == nil || [n length] == 0 || callable == NULL || !zend_is_callable(callable, 0, NULL)) return 0;
        if (ns_observation_meta == nil) ns_observation_meta = [NSMutableDictionary new];

        zend_long token = ns_observation_next++;
        NSPhpObservation *obs = [NSPhpObservation new];
        obs.token = token; obs.name = n; obs.object = o;
        ns_observation_meta[@(token)] = obs;

        zval copy;
        ZVAL_COPY(&copy, callable);
        zend_hash_index_update(ns_observation_table(), (zend_ulong) token, &copy);

        [[NSNotificationCenter defaultCenter] addObserver:ns_observer_shared()
                                                 selector:@selector(phpNotification:)
                                                     name:n object:o];
        return token;
    }
}

void ns_bridge_unobserve(zval *token)
{
    @autoreleasepool {
        zend_long t = ns_arg_long(token);
        if (ns_observation_meta == nil) return;
        NSPhpObservation *obs = ns_observation_meta[@(t)];
        if (obs == nil) return;
        [[NSNotificationCenter defaultCenter] removeObserver:ns_observer_shared() name:obs.name object:obs.object];
        [ns_observation_meta removeObjectForKey:@(t)];
        zend_hash_index_del(ns_observation_table(), (zend_ulong) t);
        /* Another observation may still want this (name, object); re-add for it. */
        for (NSNumber *key in [ns_observation_meta allKeys]) {
            NSPhpObservation *other = ns_observation_meta[key];
            if ([other.name isEqualToString:obs.name] && other.object == obs.object) {
                [[NSNotificationCenter defaultCenter] addObserver:ns_observer_shared()
                                                         selector:@selector(phpNotification:)
                                                             name:other.name object:other.object];
                break;
            }
        }
    }
}

/* ====================================================================== */
/* Generic delegate                                                       */
/* ====================================================================== */

/*
 * One class that can stand in for any delegate protocol. It answers
 * respondsToSelector: only for selectors PHP registered, builds the method
 * signature from the protocol's own description, and marshals the invocation
 * both ways by type encoding.
 */
@interface NSPhpDelegate : NSObject
@property (nonatomic, assign) Protocol *protocol;
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSNumber *> *slots; /* selector -> callable id */
@end

static HashTable ns_delegate_callables;  /* callable id -> callable */
static int ns_delegate_ready = 0;
static zend_long ns_delegate_next = 1;

static HashTable *ns_delegate_table(void)
{
    if (!ns_delegate_ready) { zend_hash_init(&ns_delegate_callables, 16, NULL, ZVAL_PTR_DTOR, 1); ns_delegate_ready = 1; }
    return &ns_delegate_callables;
}

static const char *ns_enc_skip_qualifiers(const char *t)
{
    while (*t == 'r' || *t == 'n' || *t == 'N' || *t == 'o' || *t == 'O' || *t == 'R' || *t == 'V') t++;
    return t;
}

static void ns_enc_arg_to_zval(NSInvocation *inv, NSUInteger index, const char *type, zval *out)
{
    type = ns_enc_skip_qualifiers(type);
    switch (*type) {
        case '@': { __unsafe_unretained id o = nil; [inv getArgument:&o atIndex:index]; ZVAL_LONG(out, ns_handle_for(o)); return; }
        case ':': { SEL s = NULL; [inv getArgument:&s atIndex:index]; ns_ret_sel(out, s); return; }
        case 'B': { bool b = false; [inv getArgument:&b atIndex:index]; ZVAL_BOOL(out, b); return; }
        case 'c': { signed char c = 0; [inv getArgument:&c atIndex:index]; ZVAL_LONG(out, c); return; }
        case 'C': { unsigned char c = 0; [inv getArgument:&c atIndex:index]; ZVAL_LONG(out, c); return; }
        case 's': { short v = 0; [inv getArgument:&v atIndex:index]; ZVAL_LONG(out, v); return; }
        case 'S': { unsigned short v = 0; [inv getArgument:&v atIndex:index]; ZVAL_LONG(out, v); return; }
        case 'i': { int v = 0; [inv getArgument:&v atIndex:index]; ZVAL_LONG(out, v); return; }
        case 'I': { unsigned int v = 0; [inv getArgument:&v atIndex:index]; ZVAL_LONG(out, v); return; }
        case 'l': { long v = 0; [inv getArgument:&v atIndex:index]; ZVAL_LONG(out, v); return; }
        case 'L': { unsigned long v = 0; [inv getArgument:&v atIndex:index]; ZVAL_LONG(out, (zend_long) v); return; }
        case 'q': { long long v = 0; [inv getArgument:&v atIndex:index]; ZVAL_LONG(out, (zend_long) v); return; }
        case 'Q': { unsigned long long v = 0; [inv getArgument:&v atIndex:index]; ZVAL_LONG(out, (zend_long) v); return; }
        case 'f': { float v = 0; [inv getArgument:&v atIndex:index]; ZVAL_DOUBLE(out, v); return; }
        case 'd': { double v = 0; [inv getArgument:&v atIndex:index]; ZVAL_DOUBLE(out, v); return; }
        case '*': { char *s = NULL; [inv getArgument:&s atIndex:index]; if (s) ZVAL_STRING(out, s); else ZVAL_NULL(out); return; }
        case '{': {
            if (strncmp(type, "{CGRect=", 8) == 0) { NSRect r; [inv getArgument:&r atIndex:index]; ns_ret_rect(out, r); return; }
            if (strncmp(type, "{CGPoint=", 9) == 0) { NSPoint p; [inv getArgument:&p atIndex:index]; ns_ret_point(out, p); return; }
            if (strncmp(type, "{CGSize=", 8) == 0) { NSSize s; [inv getArgument:&s atIndex:index]; ns_ret_size(out, s); return; }
            if (strncmp(type, "{_NSRange=", 10) == 0) { NSRange r; [inv getArgument:&r atIndex:index]; ns_ret_range(out, r); return; }
            ZVAL_NULL(out); return;
        }
        default: ZVAL_NULL(out); return;
    }
}

static double ns_zval_number(zval *z, double fallback)
{
    z = ns_deref(z);
    if (z == NULL) return fallback;
    switch (Z_TYPE_P(z)) {
        case IS_DOUBLE: return Z_DVAL_P(z);
        case IS_LONG:   return (double) Z_LVAL_P(z);
        case IS_TRUE:   return 1.0;
        case IS_FALSE:
        case IS_NULL:   return 0.0;
        default:        return fallback;
    }
}

static double ns_zval_key(zval *arr, const char *key)
{
    zval *v = zend_hash_str_find(Z_ARRVAL_P(arr), key, strlen(key));
    return v != NULL ? ns_zval_number(v, 0.0) : 0.0;
}

static void ns_enc_zval_to_return(NSInvocation *inv, const char *type, zval *in)
{
    type = ns_enc_skip_qualifiers(type);
    in = ns_deref(in);
    switch (*type) {
        case 'v': return;
        case '@': {
            /* An object return follows the same value mapping the bindings use
             * everywhere else: int = registry handle (0 = nil), and the PHP
             * value types cross as the Foundation value classes so a data
             * source can answer objectValue-style selectors. */
            id o = nil;
            if (in != NULL) {
                switch (Z_TYPE_P(in)) {
                    case IS_LONG:   o = ns_handle_object(Z_LVAL_P(in)); break;
                    case IS_STRING: o = [NSString stringWithUTF8String:Z_STRVAL_P(in)]; break;
                    case IS_DOUBLE: o = [NSNumber numberWithDouble:Z_DVAL_P(in)]; break;
                    case IS_TRUE:   o = [NSNumber numberWithBool:YES]; break;
                    case IS_FALSE:  o = [NSNumber numberWithBool:NO]; break;
                    default:        break;
                }
            }
            [inv setReturnValue:&o];
            return;
        }
        case 'B': { bool b = in ? zend_is_true(in) : false; [inv setReturnValue:&b]; return; }
        case 'c': { signed char c = in ? (signed char) zend_is_true(in) : 0; [inv setReturnValue:&c]; return; }
        case 'C': { unsigned char c = (unsigned char) ns_zval_number(in, 0); [inv setReturnValue:&c]; return; }
        case 's': { short v = (short) ns_zval_number(in, 0); [inv setReturnValue:&v]; return; }
        case 'S': { unsigned short v = (unsigned short) ns_zval_number(in, 0); [inv setReturnValue:&v]; return; }
        case 'i': { int v = (int) ns_zval_number(in, 0); [inv setReturnValue:&v]; return; }
        case 'I': { unsigned int v = (unsigned int) ns_zval_number(in, 0); [inv setReturnValue:&v]; return; }
        case 'l': { long v = (long) ns_zval_number(in, 0); [inv setReturnValue:&v]; return; }
        case 'L': { unsigned long v = (unsigned long) ns_zval_number(in, 0); [inv setReturnValue:&v]; return; }
        case 'q': { long long v = (long long) ns_zval_number(in, 0); [inv setReturnValue:&v]; return; }
        case 'Q': { unsigned long long v = (unsigned long long) ns_zval_number(in, 0); [inv setReturnValue:&v]; return; }
        case 'f': { float v = (float) ns_zval_number(in, 0); [inv setReturnValue:&v]; return; }
        case 'd': { double v = ns_zval_number(in, 0); [inv setReturnValue:&v]; return; }
        case '{': {
            if (in == NULL || Z_TYPE_P(in) != IS_ARRAY) return;
            if (strncmp(type, "{CGRect=", 8) == 0) {
                NSRect r = NSMakeRect(ns_zval_key(in, "x"), ns_zval_key(in, "y"), ns_zval_key(in, "width"), ns_zval_key(in, "height"));
                [inv setReturnValue:&r]; return;
            }
            if (strncmp(type, "{CGPoint=", 9) == 0) { NSPoint p = NSMakePoint(ns_zval_key(in, "x"), ns_zval_key(in, "y")); [inv setReturnValue:&p]; return; }
            if (strncmp(type, "{CGSize=", 8) == 0) { NSSize s = NSMakeSize(ns_zval_key(in, "width"), ns_zval_key(in, "height")); [inv setReturnValue:&s]; return; }
            if (strncmp(type, "{_NSRange=", 10) == 0) { NSRange r = NSMakeRange((NSUInteger) ns_zval_key(in, "location"), (NSUInteger) ns_zval_key(in, "length")); [inv setReturnValue:&r]; return; }
            return;
        }
        default: return;
    }
}

@implementation NSPhpDelegate

- (instancetype)init
{
    self = [super init];
    if (self) _slots = [NSMutableDictionary new];
    return self;
}

- (BOOL)conformsToProtocol:(Protocol *)aProtocol
{
    if (self.protocol != nil && protocol_isEqual(aProtocol, self.protocol)) return YES;
    if (self.protocol != nil && protocol_conformsToProtocol(self.protocol, aProtocol)) return YES;
    return [super conformsToProtocol:aProtocol];
}

- (BOOL)respondsToSelector:(SEL)sel
{
    if ([super respondsToSelector:sel]) return YES;
    return self.slots[NSStringFromSelector(sel)] != nil;
}

- (NSMethodSignature *)methodSignatureForSelector:(SEL)sel
{
    NSMethodSignature *sig = [super methodSignatureForSelector:sel];
    if (sig != nil) return sig;
    if (self.protocol == nil) return nil;
    struct objc_method_description d = protocol_getMethodDescription(self.protocol, sel, NO, YES);
    if (d.types == NULL) d = protocol_getMethodDescription(self.protocol, sel, YES, YES);
    if (d.types == NULL) {
        /* Walk protocols this one adopts. */
        unsigned int count = 0;
        Protocol * __unsafe_unretained *list = protocol_copyProtocolList(self.protocol, &count);
        for (unsigned int i = 0; i < count && d.types == NULL; i++) {
            d = protocol_getMethodDescription(list[i], sel, NO, YES);
            if (d.types == NULL) d = protocol_getMethodDescription(list[i], sel, YES, YES);
        }
        if (list) free(list);
    }
    if (d.types == NULL) return nil;
    return [NSMethodSignature signatureWithObjCTypes:d.types];
}

- (void)forwardInvocation:(NSInvocation *)inv
{
    NSString *name = NSStringFromSelector([inv selector]);
    NSNumber *cid = self.slots[name];
    if (cid == nil) { [super forwardInvocation:inv]; return; }
    zval *callable = zend_hash_index_find(ns_delegate_table(), (zend_ulong) [cid longLongValue]);
    if (callable == NULL) return;

    NSMethodSignature *sig = [inv methodSignature];
    NSUInteger n = [sig numberOfArguments];   /* self, _cmd, args... */
    uint32_t argc = (uint32_t) (n > 2 ? n - 2 : 0);
    zval *argv = argc ? safe_emalloc(argc, sizeof(zval), 0) : NULL;
    for (NSUInteger i = 2; i < n; i++) {
        ns_enc_arg_to_zval(inv, i, [sig getArgumentTypeAtIndex:i], &argv[i - 2]);
    }
    zval ret;
    ns_call(callable, argc, argv, &ret);
    if (!Z_ISUNDEF(ret)) {
        ns_enc_zval_to_return(inv, [sig methodReturnType], &ret);
        zval_ptr_dtor(&ret);
    }
    if (argv) { ns_args_dtor(argc, argv); efree(argv); }
}

@end

zend_long ns_bridge_delegate_new(zval *protocolName)
{
    @autoreleasepool {
        NSString *name = ns_arg_string(protocolName);
        if (name == nil) return 0;
        Protocol *proto = NSProtocolFromString(name);
        if (proto == nil) return 0;
        NSPhpDelegate *d = [NSPhpDelegate new];
        d.protocol = proto;
        return ns_handle_for(d);
    }
}

zend_long ns_bridge_delegate_on(zval *delegate, zval *selector, zval *callable)
{
    @autoreleasepool {
        NSPhpDelegate *d = NS_ARG_AS(NSPhpDelegate, delegate);
        NSString *sel = ns_arg_string(selector);
        if (d == nil || sel == nil || [sel length] == 0 || callable == NULL || !zend_is_callable(callable, 0, NULL)) return 0;
        NSNumber *existing = d.slots[sel];
        if (existing != nil) zend_hash_index_del(ns_delegate_table(), (zend_ulong) [existing longLongValue]);
        zend_long id = ns_delegate_next++;
        zval copy;
        ZVAL_COPY(&copy, callable);
        zend_hash_index_update(ns_delegate_table(), (zend_ulong) id, &copy);
        d.slots[sel] = @(id);
        return 1;
    }
}

void ns_bridge_delegate_off(zval *delegate, zval *selector)
{
    @autoreleasepool {
        NSPhpDelegate *d = NS_ARG_AS(NSPhpDelegate, delegate);
        NSString *sel = ns_arg_string(selector);
        if (d == nil || sel == nil) return;
        NSNumber *existing = d.slots[sel];
        if (existing == nil) return;
        zend_hash_index_del(ns_delegate_table(), (zend_ulong) [existing longLongValue]);
        [d.slots removeObjectForKey:sel];
    }
}

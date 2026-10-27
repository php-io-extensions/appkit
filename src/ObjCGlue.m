/*
 * The two trampolines a PHP callable needs to stand where AppKit wants an
 * object: a delegate answering a protocol's selectors, and a target answering
 * action:. Both hold their callables as callout records, released when the
 * Objective-C object deallocates, inert after request end.
 */

#include "runtime.h"
#include "../stubs/ObjCGlue_arginfo.h"

#include <objc/runtime.h>

/* ---- argument and return conversion ------------------------------------ */

/* Skip the method-qualifier characters (const, in, out, ...) in front of a type encoding. */
static const char *appkit_bare_type(const char *type)
{
	while (*type != '\0' && strchr("rnNoORV", *type) != NULL) {
		type++;
	}

	return type;
}

static void appkit_invocation_arg(zval *out, NSInvocation *invocation, NSUInteger index)
{
	const char *type = appkit_bare_type([[invocation methodSignature] getArgumentTypeAtIndex:index]);

	switch (type[0]) {
		case '@': {
			__unsafe_unretained id value = nil;
			[invocation getArgument:&value atIndex:index];
			appkit_box_objc(out, value);
			return;
		}
		case '#': {
			Class value = Nil;
			[invocation getArgument:&value atIndex:index];
			if (value == Nil) {
				ZVAL_NULL(out);
			} else {
				ZVAL_STRING(out, class_getName(value));
			}
			return;
		}
		case ':': {
			SEL value = NULL;
			[invocation getArgument:&value atIndex:index];
			if (value == NULL) {
				ZVAL_NULL(out);
			} else {
				ZVAL_STRING(out, sel_getName(value));
			}
			return;
		}
		case 'B': { bool value; [invocation getArgument:&value atIndex:index]; ZVAL_BOOL(out, value); return; }
		/* A real signed char on arm64, where BOOL encodes as 'B'. */
		case 'c': { signed char value; [invocation getArgument:&value atIndex:index]; ZVAL_LONG(out, value); return; }
		case 'C': { unsigned char value; [invocation getArgument:&value atIndex:index]; ZVAL_LONG(out, value); return; }
		case 's': { short value; [invocation getArgument:&value atIndex:index]; ZVAL_LONG(out, value); return; }
		case 'S': { unsigned short value; [invocation getArgument:&value atIndex:index]; ZVAL_LONG(out, value); return; }
		case 'i': { int value; [invocation getArgument:&value atIndex:index]; ZVAL_LONG(out, value); return; }
		case 'I': { unsigned int value; [invocation getArgument:&value atIndex:index]; ZVAL_LONG(out, (zend_long) value); return; }
		case 'l': { long value; [invocation getArgument:&value atIndex:index]; ZVAL_LONG(out, (zend_long) value); return; }
		case 'L': { unsigned long value; [invocation getArgument:&value atIndex:index]; ZVAL_LONG(out, (zend_long) value); return; }
		case 'q': { long long value; [invocation getArgument:&value atIndex:index]; ZVAL_LONG(out, (zend_long) value); return; }
		case 'Q': { unsigned long long value; [invocation getArgument:&value atIndex:index]; ZVAL_LONG(out, (zend_long) value); return; }
		case 'f': { float value; [invocation getArgument:&value atIndex:index]; ZVAL_DOUBLE(out, value); return; }
		case 'd': { double value; [invocation getArgument:&value atIndex:index]; ZVAL_DOUBLE(out, value); return; }
		case '^': { void *value = NULL; [invocation getArgument:&value atIndex:index]; ZVAL_LONG(out, (zend_long) (uintptr_t) value); return; }
		case '*': {
			char *value = NULL;
			[invocation getArgument:&value atIndex:index];
			if (value == NULL) {
				ZVAL_NULL(out);
			} else {
				ZVAL_STRING(out, value);
			}
			return;
		}
		case '{':
			if (strncmp(type, "{CGRect=", 8) == 0) {
				NSRect value;
				[invocation getArgument:&value atIndex:index];
				appkit_return_rect(out, value);
				return;
			}
			if (strncmp(type, "{CGSize=", 8) == 0) {
				NSSize value;
				[invocation getArgument:&value atIndex:index];
				appkit_return_size(out, value);
				return;
			}
			if (strncmp(type, "{CGPoint=", 9) == 0) {
				NSPoint value;
				[invocation getArgument:&value atIndex:index];
				appkit_return_point(out, value);
				return;
			}
			if (strncmp(type, "{_NSRange=", 10) == 0) {
				NSRange value;
				[invocation getArgument:&value atIndex:index];
				appkit_return_range(out, value);
				return;
			}
			if (strncmp(type, "{NSEdgeInsets=", 14) == 0) {
				NSEdgeInsets value;
				[invocation getArgument:&value atIndex:index];
				appkit_return_edge_insets(out, value);
				return;
			}
			break;
	}

	/* A type with no PHP form (a struct without a value class, a union, a bit field). */
	ZVAL_NULL(out);
}

/* The struct value class a return slot of this encoding takes, or NULL. */
static zend_class_entry *appkit_struct_class(const char *type)
{
	if (strncmp(type, "{CGRect=", 8) == 0) {
		return appkit_ce_NSRect;
	}
	if (strncmp(type, "{CGSize=", 8) == 0) {
		return appkit_ce_NSSize;
	}
	if (strncmp(type, "{CGPoint=", 9) == 0) {
		return appkit_ce_NSPoint;
	}
	if (strncmp(type, "{_NSRange=", 10) == 0) {
		return appkit_ce_NSRange;
	}
	if (strncmp(type, "{NSEdgeInsets=", 14) == 0) {
		return appkit_ce_NSEdgeInsets;
	}
	return NULL;
}

/* A struct return: the value class's fields written into the slot. A value of another class leaves the zeroed slot. */
static void appkit_invocation_struct_return(NSInvocation *invocation, const char *type, zval *value)
{
	zend_class_entry *ce = appkit_struct_class(type);

	if (ce == NULL || Z_TYPE_P(value) != IS_OBJECT || !instanceof_function(Z_OBJCE_P(value), ce)) {
		return;
	}
	if (ce == appkit_ce_NSRect) {
		NSRect out;
		if (appkit_rect_from(Z_OBJ_P(value), 0, &out)) {
			[invocation setReturnValue:&out];
		}
	} else if (ce == appkit_ce_NSSize) {
		NSSize out;
		if (appkit_size_from(Z_OBJ_P(value), 0, &out)) {
			[invocation setReturnValue:&out];
		}
	} else if (ce == appkit_ce_NSPoint) {
		NSPoint out;
		if (appkit_point_from(Z_OBJ_P(value), 0, &out)) {
			[invocation setReturnValue:&out];
		}
	} else if (ce == appkit_ce_NSRange) {
		NSRange out;
		if (appkit_range_from(Z_OBJ_P(value), 0, &out)) {
			[invocation setReturnValue:&out];
		}
	} else {
		NSEdgeInsets out;
		if (appkit_edge_insets_from(Z_OBJ_P(value), 0, &out)) {
			[invocation setReturnValue:&out];
		}
	}
}

/* The PHP return value written into the invocation's return slot, typed by the selector's signature. */
static void appkit_invocation_return(NSInvocation *invocation, zval *value)
{
	const char *type = appkit_bare_type([[invocation methodSignature] methodReturnType]);

	switch (type[0]) {
		case 'v': return;
		case 'B': { bool out = zend_is_true(value); [invocation setReturnValue:&out]; return; }
		case 'c': { signed char out = (signed char) zval_get_long(value); [invocation setReturnValue:&out]; return; }
		case 'C': { unsigned char out = (unsigned char) zval_get_long(value); [invocation setReturnValue:&out]; return; }
		case 's': { short out = (short) zval_get_long(value); [invocation setReturnValue:&out]; return; }
		case 'S': { unsigned short out = (unsigned short) zval_get_long(value); [invocation setReturnValue:&out]; return; }
		case 'i': { int out = (int) zval_get_long(value); [invocation setReturnValue:&out]; return; }
		case 'I': { unsigned int out = (unsigned int) zval_get_long(value); [invocation setReturnValue:&out]; return; }
		case 'l': { long out = (long) zval_get_long(value); [invocation setReturnValue:&out]; return; }
		case 'L': { unsigned long out = (unsigned long) zval_get_long(value); [invocation setReturnValue:&out]; return; }
		case 'q': { long long out = (long long) zval_get_long(value); [invocation setReturnValue:&out]; return; }
		case 'Q': { unsigned long long out = (unsigned long long) zval_get_long(value); [invocation setReturnValue:&out]; return; }
		case 'f': { float out = (float) zval_get_double(value); [invocation setReturnValue:&out]; return; }
		case 'd': { double out = zval_get_double(value); [invocation setReturnValue:&out]; return; }
		case '@': {
			__unsafe_unretained id out = nil;
			switch (Z_TYPE_P(value)) {
				case IS_OBJECT:
					/* +1 for the caller, released by the pool it is running in: the PHP value may be the object's only owner and dies right after this returns. */
					if (instanceof_function(Z_OBJCE_P(value), appkit_ce_NSObject)) {
						out = [[APPKIT_ID(Z_OBJ_P(value)) retain] autorelease];
					}
					break;
				case IS_STRING: out = appkit_nsstring(Z_STR_P(value)); break;
				case IS_LONG:   out = [NSNumber numberWithLongLong:(long long) Z_LVAL_P(value)]; break;
				case IS_DOUBLE: out = [NSNumber numberWithDouble:Z_DVAL_P(value)]; break;
				case IS_TRUE:   out = [NSNumber numberWithBool:YES]; break;
				case IS_FALSE:  out = [NSNumber numberWithBool:NO]; break;
			}
			[invocation setReturnValue:&out];
			return;
		}
		case ':': {
			SEL out = Z_TYPE_P(value) == IS_STRING ? sel_registerName(Z_STRVAL_P(value)) : NULL;
			[invocation setReturnValue:&out];
			return;
		}
		case '#': {
			Class out = Z_TYPE_P(value) == IS_STRING ? objc_getClass(Z_STRVAL_P(value)) : Nil;
			[invocation setReturnValue:&out];
			return;
		}
		case '^':
		case '*': {
			void *out = (void *) (uintptr_t) zval_get_long(value);
			[invocation setReturnValue:&out];
			return;
		}
		case '{':
			appkit_invocation_struct_return(invocation, type, value);
			return;
	}
}

/* ---- PHPAppKitDelegate -------------------------------------------------- */

@interface PHPAppKitDelegate : NSObject {
@public
	Protocol *protocol;
	NSMutableDictionary<NSString *, NSValue *> *handlers;  /* selector name => appkit_callout* */
}
- (instancetype)initWithProtocol:(Protocol *)aProtocol;
- (void)setHandler:(appkit_callout *)callout forSelector:(NSString *)name;
- (void)removeHandlerForSelector:(NSString *)name;
@end

@implementation PHPAppKitDelegate

- (instancetype)initWithProtocol:(Protocol *)aProtocol
{
	if ((self = [super init])) {
		protocol = aProtocol;
		handlers = [[NSMutableDictionary alloc] init];
	}

	return self;
}

- (void)dealloc
{
	for (NSValue *value in [handlers allValues]) {
		appkit_callout_release([value pointerValue]);
	}
	[handlers release];
	[super dealloc];
}

- (void)setHandler:(appkit_callout *)callout forSelector:(NSString *)name
{
	[self removeHandlerForSelector:name];
	handlers[name] = [NSValue valueWithPointer:callout];
}

- (void)removeHandlerForSelector:(NSString *)name
{
	NSValue *existing = handlers[name];

	if (existing != nil) {
		appkit_callout *callout = [existing pointerValue];
		[handlers removeObjectForKey:name];
		appkit_callout_release(callout);
	}
}

- (BOOL)conformsToProtocol:(Protocol *)aProtocol
{
	return aProtocol == protocol || [super conformsToProtocol:aProtocol];
}

- (BOOL)respondsToSelector:(SEL)selector
{
	return handlers[NSStringFromSelector(selector)] != nil || [super respondsToSelector:selector];
}

- (NSMethodSignature *)methodSignatureForSelector:(SEL)selector
{
	NSMethodSignature *signature = [super methodSignatureForSelector:selector];

	if (signature != nil) {
		return signature;
	}

	struct objc_method_description description = protocol_getMethodDescription(protocol, selector, NO, YES);
	if (description.types == NULL) {
		description = protocol_getMethodDescription(protocol, selector, YES, YES);
	}

	return description.types != NULL ? [NSMethodSignature signatureWithObjCTypes:description.types] : nil;
}

- (void)forwardInvocation:(NSInvocation *)invocation
{
	NSValue *handler = handlers[NSStringFromSelector([invocation selector])];

	if (handler == nil) {
		[super forwardInvocation:invocation];
		return;
	}
	if (!appkit_callout_can_enter([handler pointerValue])) {
		return;
	}

	NSUInteger count = [[invocation methodSignature] numberOfArguments];
	uint32_t argc = (uint32_t) (count > 2 ? count - 2 : 0);
	zval *argv = argc > 0 ? safe_emalloc(argc, sizeof(zval), 0) : NULL;
	zval retval;

	for (uint32_t i = 0; i < argc; i++) {
		appkit_invocation_arg(&argv[i], invocation, i + 2);
	}

	if (appkit_callout_call([handler pointerValue], argc, argv, &retval)) {
		appkit_invocation_return(invocation, &retval);
	}
	zval_ptr_dtor(&retval);

	for (uint32_t i = 0; i < argc; i++) {
		zval_ptr_dtor(&argv[i]);
	}
	if (argv != NULL) {
		efree(argv);
	}
}

@end

/* ---- PHPAppKitTarget ---------------------------------------------------- */

@interface PHPAppKitTarget : NSObject {
@public
	appkit_callout *callout;
}
- (void)action:(id)sender;
@end

@implementation PHPAppKitTarget

- (void)dealloc
{
	if (callout != NULL) {
		appkit_callout_release(callout);
	}
	[super dealloc];
}

- (void)action:(id)sender
{
	zval argv[1];

	if (!appkit_callout_can_enter(callout)) {
		return;
	}

	appkit_box_objc(&argv[0], sender);
	appkit_callout_invoke(callout, 1, argv);
	zval_ptr_dtor(&argv[0]);
}

@end

/* ---- PHPStageWindow ------------------------------------------------------ */

@interface PHPStageWindow : NSWindow {
@public
	NSMutableDictionary<NSString *, NSValue *> *handlers;  /* selector name => appkit_callout*, made by the first on() */
}
@end

@implementation PHPStageWindow

- (void)dealloc
{
	for (NSValue *value in [handlers allValues]) {
		appkit_callout_release([value pointerValue]);
	}
	[handlers release];
	[super dealloc];
}

/* The handler's answer for $name, or false when there is none or it did not run. */
- (BOOL)answer:(NSString *)name into:(BOOL *)answer
{
	NSValue *handler = handlers[name];
	zval retval;
	bool called;

	if (handler == nil) {
		return NO;
	}
	called = appkit_callout_call([handler pointerValue], 0, NULL, &retval);
	if (called) {
		*answer = zend_is_true(&retval) ? YES : NO;
	}
	zval_ptr_dtor(&retval);

	return called ? YES : NO;
}

- (BOOL)canBecomeKeyWindow
{
	BOOL answer;

	return [self answer:@"canBecomeKeyWindow" into:&answer] ? answer : [super canBecomeKeyWindow];
}

- (BOOL)canBecomeMainWindow
{
	BOOL answer;

	return [self answer:@"canBecomeMainWindow" into:&answer] ? answer : [super canBecomeMainWindow];
}

@end

/* ---- Handler tables (PHPFocusView, PHPKeyWindow) ------------------------- */

/* Selector name => appkit_callout*, made by the first on(); every record released at dealloc. */
typedef NSMutableDictionary<NSString *, NSValue *> appkit_handlers;

static void appkit_handlers_set(appkit_handlers **handlers, zend_string *selector_name, zend_fcall_info *fci)
{
	NSString *name = appkit_nsstring(selector_name);
	/* No detach: a callout whose callable is freed at request end goes inert, and dealloc frees the record. */
	appkit_callout *callout = appkit_callout_new(&fci->function_name, NULL);

	appkit_callout_retain(callout);
	if (*handlers == nil) {
		*handlers = [[NSMutableDictionary alloc] init];
	}
	/* The pointer first: replacing the entry releases the NSValue holding it. */
	appkit_callout *replaced = (*handlers)[name] != nil ? [(*handlers)[name] pointerValue] : NULL;
	(*handlers)[name] = [NSValue valueWithPointer:callout];
	if (replaced != NULL) {
		appkit_callout_release(replaced);
	}
}

static void appkit_handlers_unset(appkit_handlers *handlers, zend_string *selector_name)
{
	NSString *name = appkit_nsstring(selector_name);
	NSValue *existing = handlers[name];

	if (existing != nil) {
		/* The pointer first: removing the entry releases the NSValue holding it. */
		appkit_callout *callout = [existing pointerValue];
		[handlers removeObjectForKey:name];
		appkit_callout_release(callout);
	}
}

static void appkit_handlers_release(appkit_handlers *handlers)
{
	for (NSValue *value in [handlers allValues]) {
		appkit_callout_release([value pointerValue]);
	}
	[handlers release];
}

/* The handler's bool for $name into *answer; NO when there is none or it did not run. */
static BOOL appkit_handlers_answer(appkit_handlers *handlers, NSString *name, uint32_t argc, zval *argv, BOOL *answer)
{
	NSValue *handler = handlers[name];
	zval retval;
	bool called;

	if (handler == nil) {
		return NO;
	}
	called = appkit_callout_call([handler pointerValue], argc, argv, &retval);
	if (called) {
		*answer = zend_is_true(&retval) ? YES : NO;
	}
	zval_ptr_dtor(&retval);

	return called ? YES : NO;
}

/* ---- PHPFocusView -------------------------------------------------------- */

@interface PHPFocusView : NSView <NSTextInputClient> {
@public
	appkit_handlers *handlers;
	NSString *marked;
}
@end

@implementation PHPFocusView

- (void)dealloc
{
	appkit_handlers_release(handlers);
	[marked release];
	[super dealloc];
}

- (BOOL)acceptsFirstResponder
{
	BOOL answer;

	return appkit_handlers_answer(handlers, @"acceptsFirstResponder", 0, NULL, &answer) ? answer : [super acceptsFirstResponder];
}

/* PHP's true takes the event; false, no handler, or a handler that did not run calls NSView's own. */
- (BOOL)forwardEvent:(NSEvent *)event to:(NSString *)name
{
	zval argv[1];
	BOOL taken = NO;
	BOOL called;

	appkit_box_objc(&argv[0], event);
	called = appkit_handlers_answer(handlers, name, 1, argv, &taken);
	zval_ptr_dtor(&argv[0]);

	return called && taken;
}

- (void)keyDown:(NSEvent *)event
{
	if (![self forwardEvent:event to:@"keyDown:"]) {
		[super keyDown:event];
	}
}

- (void)keyUp:(NSEvent *)event
{
	if (![self forwardEvent:event to:@"keyUp:"]) {
		[super keyUp:event];
	}
}

- (void)flagsChanged:(NSEvent *)event
{
	if (![self forwardEvent:event to:@"flagsChanged:"]) {
		[super flagsChanged:event];
	}
}

/* NSTextInputClient: the two that reach PHP. */

- (void)insertText:(id)string replacementRange:(NSRange)replacementRange
{
	NSString *text = [string isKindOfClass:[NSAttributedString class]] ? [string string] : string;
	zval argv[1];
	BOOL taken = NO;
	BOOL called;

	[marked release];
	marked = nil;
	ZVAL_STR(&argv[0], appkit_zend_string((CFStringRef) text));
	called = appkit_handlers_answer(handlers, @"insertText:replacementRange:", 1, argv, &taken);
	zval_ptr_dtor(&argv[0]);
	if (!called || !taken) {
		[super insertText:string];
	}
}

/* The key binding manager's plain insertText: (no input context active): the same handler, the whole text. */
- (void)insertText:(id)string
{
	[self insertText:string replacementRange:NSMakeRange(NSNotFound, 0)];
}

- (void)doCommandBySelector:(SEL)selector
{
	zval argv[1];
	BOOL taken = NO;
	BOOL called;

	ZVAL_STR(&argv[0], appkit_zend_string((CFStringRef) NSStringFromSelector(selector)));
	called = appkit_handlers_answer(handlers, @"doCommandBySelector:", 1, argv, &taken);
	zval_ptr_dtor(&argv[0]);
	if (!called || !taken) {
		[super doCommandBySelector:selector];
	}
}

/* The standard edit actions: answered only while PHP holds a handler under the action's name, so
 * AppKit enables an item that sends one only then. PHP's false passes the action up the chain. */

static BOOL appkit_focus_view_action(SEL selector)
{
	return selector == @selector(cut:) || selector == @selector(copy:) || selector == @selector(paste:)
		|| selector == @selector(selectAll:) || selector == @selector(undo:) || selector == @selector(redo:);
}

- (BOOL)respondsToSelector:(SEL)selector
{
	if (appkit_focus_view_action(selector)) {
		return handlers[NSStringFromSelector(selector)] != nil;
	}

	return [super respondsToSelector:selector];
}

- (void)forwardAction:(SEL)action sender:(id)sender
{
	zval argv[1];
	BOOL taken = NO;
	BOOL called;

	appkit_box_objc(&argv[0], sender);
	called = appkit_handlers_answer(handlers, NSStringFromSelector(action), 1, argv, &taken);
	zval_ptr_dtor(&argv[0]);
	if (!called || !taken) {
		[[self nextResponder] tryToPerform:action with:sender];
	}
}

- (void)cut:(id)sender { [self forwardAction:_cmd sender:sender]; }
- (void)copy:(id)sender { [self forwardAction:_cmd sender:sender]; }
- (void)paste:(id)sender { [self forwardAction:_cmd sender:sender]; }
- (void)selectAll:(id)sender { [self forwardAction:_cmd sender:sender]; }
- (void)undo:(id)sender { [self forwardAction:_cmd sender:sender]; }
- (void)redo:(id)sender { [self forwardAction:_cmd sender:sender]; }

/* NSTextInputClient: the rest, answered here. The marked text is held, never shown or sent to PHP. */

- (void)setMarkedText:(id)string selectedRange:(NSRange)selectedRange replacementRange:(NSRange)replacementRange
{
	NSString *text = [string isKindOfClass:[NSAttributedString class]] ? [string string] : string;

	[marked release];
	marked = [text copy];
}

- (void)unmarkText
{
	[marked release];
	marked = nil;
}

- (NSRange)selectedRange
{
	return NSMakeRange(NSNotFound, 0);
}

- (NSRange)markedRange
{
	return marked != nil ? NSMakeRange(0, [marked length]) : NSMakeRange(NSNotFound, 0);
}

- (BOOL)hasMarkedText
{
	return marked != nil;
}

- (NSAttributedString *)attributedSubstringForProposedRange:(NSRange)range actualRange:(NSRangePointer)actualRange
{
	return nil;
}

- (NSArray<NSAttributedStringKey> *)validAttributesForMarkedText
{
	return @[];
}

- (NSRect)firstRectForCharacterRange:(NSRange)range actualRange:(NSRangePointer)actualRange
{
	NSRect rect = [self convertRect:[self bounds] toView:nil];

	return [self window] != nil ? [[self window] convertRectToScreen:rect] : rect;
}

- (NSUInteger)characterIndexForPoint:(NSPoint)point
{
	return 0;
}

@end

/* ---- PHPKeyWindow -------------------------------------------------------- */

@interface PHPKeyWindow : NSWindow {
@public
	appkit_handlers *handlers;
}
@end

@implementation PHPKeyWindow

- (void)dealloc
{
	appkit_handlers_release(handlers);
	[super dealloc];
}

/* PHP's true keeps the key; false, no handler, or a handler that did not run hands it to NSWindow. */
- (void)keyDown:(NSEvent *)event
{
	zval argv[1];
	BOOL taken = NO;
	BOOL called;

	appkit_box_objc(&argv[0], event);
	called = appkit_handlers_answer(handlers, @"keyDown:", 1, argv, &taken);
	zval_ptr_dtor(&argv[0]);
	if (!called || !taken) {
		[super keyDown:event];
	}
}

@end

/* ---- PHPDrawView --------------------------------------------------------- */

@interface PHPDrawView : NSView {
@public
	appkit_callout *draw;
}
@end

@implementation PHPDrawView

- (void)dealloc
{
	if (draw != NULL) {
		appkit_callout_release(draw);
	}
	[super dealloc];
}

- (void)drawRect:(NSRect)dirty
{
	zval argv[2];

	if (draw == NULL || !appkit_callout_can_enter(draw)) {
		return;
	}
	appkit_box_objc(&argv[0], self);
	appkit_return_rect(&argv[1], dirty);
	appkit_callout_invoke(draw, 2, argv);
	zval_ptr_dtor(&argv[0]);
	zval_ptr_dtor(&argv[1]);
}

@end

/* ---- PHPOpenGLView ------------------------------------------------------- */

@interface PHPOpenGLView : NSOpenGLView {
@public
	appkit_callout *draw;
}
@end

@implementation PHPOpenGLView

- (void)dealloc
{
	if (draw != NULL) {
		appkit_callout_release(draw);
	}
	[super dealloc];
}

- (void)drawRect:(NSRect)dirty
{
	zval argv[2];

	if (draw == NULL || !appkit_callout_can_enter(draw)) {
		return;
	}
	appkit_box_objc(&argv[0], self);
	appkit_return_rect(&argv[1], dirty);
	appkit_callout_invoke(draw, 2, argv);
	zval_ptr_dtor(&argv[0]);
	zval_ptr_dtor(&argv[1]);
}

@end

/* ---- PHPAppKitObserver -------------------------------------------------- */

@interface PHPAppKitObserver : NSObject {
@public
	appkit_callout *callout;
	NSMutableArray<NSArray *> *observed;  /* (object, keyPath, context) registrations still held, one entry each */
}
@end

@implementation PHPAppKitObserver

- (instancetype)init
{
	if ((self = [super init])) {
		observed = [[NSMutableArray alloc] init];
	}

	return self;
}

- (void)dealloc
{
	/* Every recorded pair was registered; the guard keeps a dealloc from ever raising out of PHP's object free. */
	for (NSArray *registration in observed) {
		@try {
			[registration[0] removeObserver:self forKeyPath:registration[1] context:(void *) (uintptr_t) [registration[2] unsignedLongLongValue]];
		} @catch (NSException *ignored) {
		}
	}
	[observed release];
	if (callout != NULL) {
		appkit_callout_release(callout);
	}
	[super dealloc];
}

- (NSUInteger)indexOfObject:(id)object keyPath:(NSString *)keyPath context:(uintptr_t)context
{
	return [observed indexOfObjectPassingTest:^BOOL(NSArray *registration, NSUInteger idx, BOOL *stop) {
		return registration[0] == object && [registration[1] isEqualToString:keyPath]
			&& (uintptr_t) [registration[2] unsignedLongLongValue] == context;
	}];
}

- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary *)change context:(void *)context
{
	zval argv[4];

	if (!appkit_callout_can_enter(callout)) {
		return;
	}
	ZVAL_STR(&argv[0], appkit_zend_string((CFStringRef) keyPath));
	appkit_box_objc(&argv[1], object);
	/* Every entry KVO sent, under its own key: kind, new, old, indexes, notificationIsPrior. */
	array_init_size(&argv[2], (uint32_t) [change count]);
	for (NSString *key in change) {
		zval zv;
		zend_string *name = appkit_zend_string((CFStringRef) key);

		appkit_zval_from_id(&zv, change[key]);
		zend_symtable_update(Z_ARRVAL(argv[2]), name, &zv);
		zend_string_release(name);
	}
	ZVAL_LONG(&argv[3], (zend_long) (uintptr_t) context);

	appkit_callout_invoke(callout, 4, argv);

	for (int i = 0; i < 4; i++) {
		zval_ptr_dtor(&argv[i]);
	}
}

@end

/* ---- PHP classes -------------------------------------------------------- */

void appkit_register_ObjCGlue(void)
{
	appkit_ce_ObjCDelegate = register_class_ObjCDelegate(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_ObjCDelegate);
	appkit_map_objc_class("PHPAppKitDelegate", appkit_ce_ObjCDelegate);

	appkit_ce_ObjCTarget = register_class_ObjCTarget(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_ObjCTarget);
	appkit_map_objc_class("PHPAppKitTarget", appkit_ce_ObjCTarget);

	appkit_ce_ObjCObserver = register_class_ObjCObserver(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_ObjCObserver);
	appkit_map_objc_class("PHPAppKitObserver", appkit_ce_ObjCObserver);

	appkit_ce_ObjCOpenGLView = register_class_ObjCOpenGLView(appkit_ce_NSOpenGLView);
	appkit_object_setup(appkit_ce_ObjCOpenGLView);
	appkit_map_objc_class("PHPOpenGLView", appkit_ce_ObjCOpenGLView);

	appkit_ce_ObjCStageWindow = register_class_ObjCStageWindow(appkit_ce_NSWindow);
	appkit_object_setup(appkit_ce_ObjCStageWindow);
	appkit_map_objc_class("PHPStageWindow", appkit_ce_ObjCStageWindow);

	appkit_ce_ObjCKeyWindow = register_class_ObjCKeyWindow(appkit_ce_NSWindow);
	appkit_object_setup(appkit_ce_ObjCKeyWindow);
	appkit_map_objc_class("PHPKeyWindow", appkit_ce_ObjCKeyWindow);

	appkit_ce_ObjCFocusView = register_class_ObjCFocusView(appkit_ce_NSView);
	appkit_object_setup(appkit_ce_ObjCFocusView);
	appkit_map_objc_class("PHPFocusView", appkit_ce_ObjCFocusView);

	appkit_ce_ObjCDrawView = register_class_ObjCDrawView(appkit_ce_NSView);
	appkit_object_setup(appkit_ce_ObjCDrawView);
	appkit_map_objc_class("PHPDrawView", appkit_ce_ObjCDrawView);
}

#define THIS_DELEGATE ((PHPAppKitDelegate *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

static bool appkit_require_unconstructed(zval *this_zv)
{
	if (!APPKIT_PROBE_OFF("glue-construct-once") && (appkit_object_from(Z_OBJ_P(this_zv))->ptr != NULL)) {
		zend_throw_error(NULL, "%s::__construct() called twice", ZSTR_VAL(Z_OBJCE_P(this_zv)->name)); /* binding:glue-construct-once */
		return false;
	}

	return true;
}

ZEND_METHOD(ObjCDelegate, __construct)
{
	zend_string *protocol_name;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(protocol_name)
	ZEND_PARSE_PARAMETERS_END();

	if (!appkit_require_unconstructed(ZEND_THIS)) {
		RETURN_THROWS();
	}

	Protocol *protocol = objc_getProtocol(ZSTR_VAL(protocol_name));
	if (protocol == NULL) {
		zend_argument_value_error(1, "names no Objective-C protocol known to this process");
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		appkit_adopt_objc(Z_OBJ_P(ZEND_THIS), [[PHPAppKitDelegate alloc] initWithProtocol:protocol]);
	APPKIT_END
}

ZEND_METHOD(ObjCDelegate, on)
{
	zend_string *selector_name;
	zval *handler;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(selector_name)
		Z_PARAM_ZVAL(handler)
	ZEND_PARSE_PARAMETERS_END();

	if (!zend_is_callable(handler, 0, NULL)) {
		zend_argument_type_error(2, "must be a valid callback");
		RETURN_THROWS();
	}

	PHPAppKitDelegate *delegate = THIS_DELEGATE;

	APPKIT_BEGIN
		/* No detach: a callout whose callable is freed at request end goes inert, and dealloc frees the record. */
		appkit_callout *callout = appkit_callout_new(handler, NULL);
		appkit_callout_retain(callout);
		[delegate setHandler:callout forSelector:[NSString stringWithUTF8String:ZSTR_VAL(selector_name)]];
	APPKIT_END
}

ZEND_METHOD(ObjCDelegate, off)
{
	zend_string *selector_name;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(selector_name)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		[THIS_DELEGATE removeHandlerForSelector:[NSString stringWithUTF8String:ZSTR_VAL(selector_name)]];
	APPKIT_END
}

ZEND_METHOD(ObjCDelegate, protocolName)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_STRING(protocol_getName(THIS_DELEGATE->protocol));
}

ZEND_METHOD(ObjCTarget, __construct)
{
	zval *handler;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(handler)
	ZEND_PARSE_PARAMETERS_END();

	if (!appkit_require_unconstructed(ZEND_THIS)) {
		RETURN_THROWS();
	}

	if (!zend_is_callable(handler, 0, NULL)) {
		zend_argument_type_error(1, "must be a valid callback");
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		PHPAppKitTarget *target = [[PHPAppKitTarget alloc] init];
		target->callout = appkit_callout_new(handler, NULL);
		appkit_callout_retain(target->callout);
		appkit_adopt_objc(Z_OBJ_P(ZEND_THIS), target);
	APPKIT_END
}

#define THIS_OBSERVER ((PHPAppKitObserver *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(ObjCObserver, __construct)
{
	zval *handler;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(handler)
	ZEND_PARSE_PARAMETERS_END();

	if (!appkit_require_unconstructed(ZEND_THIS)) {
		RETURN_THROWS();
	}

	if (!zend_is_callable(handler, 0, NULL)) {
		zend_argument_type_error(1, "must be a valid callback");
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		PHPAppKitObserver *observer = [[PHPAppKitObserver alloc] init];
		observer->callout = appkit_callout_new(handler, NULL);
		appkit_callout_retain(observer->callout);
		appkit_adopt_objc(Z_OBJ_P(ZEND_THIS), observer);
	APPKIT_END
}

ZEND_METHOD(ObjCObserver, observe)
{
	zend_object *object;
	zend_string *key_path;
	zend_long options, context;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_OBJ_OF_CLASS(object, appkit_ce_NSObject)
		Z_PARAM_STR(key_path)
		Z_PARAM_LONG(options)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		id target = APPKIT_ID(object);
		NSString *path = appkit_nsstring(key_path);

		/* One record per registration, duplicates included, as KVO counts them. Recorded first so an OPTION_INITIAL handler can stop() it; dropped again when AppKit refuses the key path. */
		NSArray *registration = @[target, path, @((unsigned long long) (uintptr_t) context)];
		[THIS_OBSERVER->observed addObject:registration];
		@try {
			[target addObserver:THIS_OBSERVER forKeyPath:path options:(NSKeyValueObservingOptions) options context:(void *) (uintptr_t) context];
		} @catch (NSException *refused) {
			[THIS_OBSERVER->observed removeObjectIdenticalTo:registration];
			@throw;
		}
	APPKIT_END
}

ZEND_METHOD(ObjCObserver, stop)
{
	zend_object *object;
	zend_string *key_path;
	zend_long context;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_OBJ_OF_CLASS(object, appkit_ce_NSObject)
		Z_PARAM_STR(key_path)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		id target = APPKIT_ID(object);
		NSString *path = appkit_nsstring(key_path);
		/* KVO answers a registration it does not hold (NSRangeException); the record drops one entry once KVO removed one. */
		[target removeObserver:THIS_OBSERVER forKeyPath:path context:(void *) (uintptr_t) context];
		NSUInteger index = [THIS_OBSERVER indexOfObject:target keyPath:path context:(uintptr_t) context];
		if (index != NSNotFound) {
			[THIS_OBSERVER->observed removeObjectAtIndex:index];
		}
	APPKIT_END
}

ZEND_METHOD(ObjCOpenGLView, initWithFramePixelFormatDraw)
{
	zend_object *frame, *format_obj = NULL;
	zval *handler;
	NSRect rect;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_OBJ_OF_CLASS(frame, appkit_ce_NSRect)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(format_obj, appkit_ce_NSOpenGLPixelFormat)
		Z_PARAM_ZVAL(handler)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();
	if (!appkit_rect_from(frame, 1, &rect)) {
		RETURN_THROWS();
	}
	if (!zend_is_callable(handler, 0, NULL)) {
		zend_argument_type_error(3, "must be a valid callback");
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		PHPOpenGLView *view = [[PHPOpenGLView alloc]
			initWithFrame:rect pixelFormat:format_obj != NULL ? (NSOpenGLPixelFormat *) APPKIT_ID(format_obj) : nil];
		if (view == nil) {
			RETURN_NULL();
		}
		view->draw = appkit_callout_new(handler, NULL);
		appkit_callout_retain(view->draw);
		appkit_box_objc(return_value, view);
		[view release];
	APPKIT_END
}

#define THIS_STAGE_WINDOW ((PHPStageWindow *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(ObjCStageWindow, on)
{
	zend_string *selector_name;
	zend_fcall_info fci;
	zend_fcall_info_cache fcc;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(selector_name)
		Z_PARAM_FUNC(fci, fcc)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		PHPStageWindow *window = THIS_STAGE_WINDOW;
		NSString *name = appkit_nsstring(selector_name);
		/* No detach: a callout whose callable is freed at request end goes inert, and dealloc frees the record. */
		appkit_callout *callout = appkit_callout_new(&fci.function_name, NULL);

		appkit_callout_retain(callout);
		if (window->handlers == nil) {
			window->handlers = [[NSMutableDictionary alloc] init];
		}
		/* The pointer first: replacing the entry releases the NSValue holding it. */
		appkit_callout *replaced = window->handlers[name] != nil ? [window->handlers[name] pointerValue] : NULL;
		window->handlers[name] = [NSValue valueWithPointer:callout];
		if (replaced != NULL) {
			appkit_callout_release(replaced);
		}
	APPKIT_END
}

ZEND_METHOD(ObjCStageWindow, off)
{
	zend_string *selector_name;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(selector_name)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		PHPStageWindow *window = THIS_STAGE_WINDOW;
		NSString *name = appkit_nsstring(selector_name);
		NSValue *existing = window->handlers[name];

		if (existing != nil) {
			/* The pointer first: removing the entry releases the NSValue holding it. */
			appkit_callout *callout = [existing pointerValue];
			[window->handlers removeObjectForKey:name];
			appkit_callout_release(callout);
		}
	APPKIT_END
}

#define THIS_FOCUS_VIEW ((PHPFocusView *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))
#define THIS_KEY_WINDOW ((PHPKeyWindow *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(ObjCFocusView, on)
{
	zend_string *selector_name;
	zend_fcall_info fci;
	zend_fcall_info_cache fcc;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(selector_name)
		Z_PARAM_FUNC(fci, fcc)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-objcfocusview-on */

	APPKIT_BEGIN
		appkit_handlers_set(&THIS_FOCUS_VIEW->handlers, selector_name, &fci);
	APPKIT_END
}

ZEND_METHOD(ObjCFocusView, off)
{
	zend_string *selector_name;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(selector_name)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-objcfocusview-off */

	APPKIT_BEGIN
		appkit_handlers_unset(THIS_FOCUS_VIEW->handlers, selector_name);
	APPKIT_END
}

ZEND_METHOD(ObjCKeyWindow, on)
{
	zend_string *selector_name;
	zend_fcall_info fci;
	zend_fcall_info_cache fcc;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(selector_name)
		Z_PARAM_FUNC(fci, fcc)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-objckeywindow-on */

	APPKIT_BEGIN
		appkit_handlers_set(&THIS_KEY_WINDOW->handlers, selector_name, &fci);
	APPKIT_END
}

ZEND_METHOD(ObjCKeyWindow, off)
{
	zend_string *selector_name;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(selector_name)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD(); /* binding:main-thread-objckeywindow-off */

	APPKIT_BEGIN
		appkit_handlers_unset(THIS_KEY_WINDOW->handlers, selector_name);
	APPKIT_END
}

ZEND_METHOD(ObjCDrawView, initWithFrameDraw)
{
	zend_object *frame;
	zval *handler;
	NSRect rect;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(frame, appkit_ce_NSRect)
		Z_PARAM_ZVAL(handler)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();
	if (!appkit_rect_from(frame, 1, &rect)) {
		RETURN_THROWS();
	}
	if (!zend_is_callable(handler, 0, NULL)) {
		zend_argument_type_error(2, "must be a valid callback");
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		PHPDrawView *view = [[PHPDrawView alloc] initWithFrame:rect];
		view->draw = appkit_callout_new(handler, NULL);
		appkit_callout_retain(view->draw);
		appkit_box_objc(return_value, view);
		[view release];
	APPKIT_END
}


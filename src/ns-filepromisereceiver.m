#import <AppKit/AppKit.h>
#import <objc/runtime.h>
#import "ns-filepromisereceiver.h"

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

static const void *kNSPhpFilePromiseReceiverBoxKey = &kNSPhpFilePromiseReceiverBoxKey;

@interface NSPhpFilePromiseReceiverBox : NSObject
@property (nonatomic, copy) NSString *receivedURL;
@property (nonatomic, assign) int received;
@property (nonatomic, assign) int hadError;
@end

@implementation NSPhpFilePromiseReceiverBox
@end

static NSFilePromiseReceiver *ns_filepromisereceiver_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSFilePromiseReceiver class]] ? (NSFilePromiseReceiver *)obj : nil;
}

static NSPhpFilePromiseReceiverBox *ns_filepromisereceiver_box(NSFilePromiseReceiver *receiver)
{
    if (!receiver) {
        return nil;
    }
    NSPhpFilePromiseReceiverBox *box = objc_getAssociatedObject(receiver, kNSPhpFilePromiseReceiverBoxKey);
    if (!box) {
        box = [NSPhpFilePromiseReceiverBox new];
        objc_setAssociatedObject(receiver, kNSPhpFilePromiseReceiverBoxKey, box, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return box;
}

int ns_filepromisereceiver_readable_dragged_types_count(void)
{
    @autoreleasepool {
        NSArray *types = [NSFilePromiseReceiver readableDraggedTypes];
        return types ? (int)types.count : 0;
    }
}

int ns_filepromisereceiver_readable_dragged_type_at(int index, char *out, int out_len)
{
    @autoreleasepool {
        NSArray *types = [NSFilePromiseReceiver readableDraggedTypes];
        if (!types || index < 0 || index >= (int)types.count) {
            return 0;
        }
        id value = types[(NSUInteger)index];
        return [value isKindOfClass:[NSString class]] ? ns_copy_nsstring((NSString *)value, out, out_len) : 0;
    }
}

uintptr_t ns_filepromisereceiver_wrap(void *receiver)
{
    if (!receiver) {
        return 0;
    }
    @autoreleasepool {
        NSFilePromiseReceiver *obj = (__bridge NSFilePromiseReceiver *)receiver;
        if (![obj isKindOfClass:[NSFilePromiseReceiver class]]) {
            return 0;
        }
        (void) ns_filepromisereceiver_box(obj);
        return ns_retain_obj(obj);
    }
}

void ns_filepromisereceiver_destroy(uintptr_t receiver)
{
    ns_release_handle(receiver);
}

void *ns_filepromisereceiver_nsfilepromisereceiver(uintptr_t receiver)
{
    NSFilePromiseReceiver *obj = ns_filepromisereceiver_from(receiver);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_filepromisereceiver_file_types_count(uintptr_t receiver)
{
    @autoreleasepool {
        NSFilePromiseReceiver *obj = ns_filepromisereceiver_from(receiver);
        return obj && obj.fileTypes ? (int)obj.fileTypes.count : 0;
    }
}

int ns_filepromisereceiver_file_type_at(uintptr_t receiver, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSFilePromiseReceiver *obj = ns_filepromisereceiver_from(receiver);
        if (!obj || !obj.fileTypes || index < 0 || index >= (int)obj.fileTypes.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.fileTypes[(NSUInteger)index], out, out_len);
    }
}

int ns_filepromisereceiver_file_names_count(uintptr_t receiver)
{
    @autoreleasepool {
        NSFilePromiseReceiver *obj = ns_filepromisereceiver_from(receiver);
        return obj && obj.fileNames ? (int)obj.fileNames.count : 0;
    }
}

int ns_filepromisereceiver_file_name_at(uintptr_t receiver, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSFilePromiseReceiver *obj = ns_filepromisereceiver_from(receiver);
        if (!obj || !obj.fileNames || index < 0 || index >= (int)obj.fileNames.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.fileNames[(NSUInteger)index], out, out_len);
    }
}

void ns_filepromisereceiver_receive_at_destination(uintptr_t receiver, const char *destination_dir)
{
    @autoreleasepool {
        NSFilePromiseReceiver *obj = ns_filepromisereceiver_from(receiver);
        NSPhpFilePromiseReceiverBox *box = ns_filepromisereceiver_box(obj);
        if (!obj || !destination_dir || !box) {
            return;
        }
        box.received = 0;
        box.hadError = 0;
        box.receivedURL = nil;
        NSURL *dest = [NSURL fileURLWithPath:[NSString stringWithUTF8String:destination_dir] isDirectory:YES];
        NSOperationQueue *queue = [[NSOperationQueue alloc] init];
        [obj receivePromisedFilesAtDestination:dest options:@{} operationQueue:queue reader:^(NSURL *fileURL, NSError *errorOrNil) {
            box.received = 1;
            box.hadError = errorOrNil ? 1 : 0;
            box.receivedURL = fileURL ? fileURL.absoluteString : nil;
        }];
    }
}

int ns_filepromisereceiver_poll_received_file(uintptr_t receiver, char *url_out, int url_len, int *error_flag)
{
    @autoreleasepool {
        NSFilePromiseReceiver *obj = ns_filepromisereceiver_from(receiver);
        NSPhpFilePromiseReceiverBox *box = ns_filepromisereceiver_box(obj);
        if (!box || !box.received) {
            return 0;
        }
        box.received = 0;
        if (error_flag) {
            *error_flag = box.hadError;
        }
        return ns_copy_nsstring(box.receivedURL, url_out, url_len);
    }
}

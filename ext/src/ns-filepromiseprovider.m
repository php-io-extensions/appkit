#import <AppKit/AppKit.h>
#import <objc/runtime.h>
#import "ns-filepromiseprovider.h"

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

static const void *kNSPhpFilePromiseProviderBoxKey = &kNSPhpFilePromiseProviderBoxKey;

@interface NSPhpFilePromiseProviderBox : NSObject <NSFilePromiseProviderDelegate>
@property (nonatomic, copy) NSString *fileName;
@property (nonatomic, assign) long long userInfoTag;
@property (nonatomic, assign) int writeRequested;
@property (nonatomic, copy) NSString *requestedFileType;
@property (nonatomic, copy) NSURL *requestedURL;
@property (nonatomic, assign) int writeCompleted;
@property (nonatomic, assign) int writeSuccess;
@end

@implementation NSPhpFilePromiseProviderBox

- (NSString *)filePromiseProvider:(NSFilePromiseProvider *)filePromiseProvider fileNameForType:(NSString *)fileType
{
    (void)filePromiseProvider;
    self.writeRequested = 1;
    self.requestedFileType = [fileType copy];
    return self.fileName.length > 0 ? self.fileName : @"promised-file";
}

- (void)filePromiseProvider:(NSFilePromiseProvider *)filePromiseProvider writePromiseToURL:(NSURL *)url completionHandler:(void (^)(NSError * _Nullable))completionHandler
{
    (void)filePromiseProvider;
    self.requestedURL = url;
    self.writeCompleted = 0;
    self.writeSuccess = 0;
    if (completionHandler) {
        completionHandler(nil);
        self.writeCompleted = 1;
        self.writeSuccess = 1;
    }
}

@end

static NSFilePromiseProvider *ns_filepromiseprovider_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSFilePromiseProvider class]] ? (NSFilePromiseProvider *)obj : nil;
}

static NSPhpFilePromiseProviderBox *ns_filepromiseprovider_box(NSFilePromiseProvider *provider)
{
    if (!provider) {
        return nil;
    }
    NSPhpFilePromiseProviderBox *box = objc_getAssociatedObject(provider, kNSPhpFilePromiseProviderBoxKey);
    if (!box) {
        box = [NSPhpFilePromiseProviderBox new];
        box.fileName = @"promised-file";
        box.userInfoTag = 0;
        box.writeRequested = 0;
        box.writeCompleted = 0;
        box.writeSuccess = 0;
        provider.delegate = box;
        objc_setAssociatedObject(provider, kNSPhpFilePromiseProviderBoxKey, box, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return box;
}

uintptr_t ns_filepromiseprovider_create(const char *file_type)
{
    @autoreleasepool {
        if (!file_type) {
            return 0;
        }
        NSPhpFilePromiseProviderBox *box = [NSPhpFilePromiseProviderBox new];
        box.fileName = @"promised-file";
        NSFilePromiseProvider *provider = [[NSFilePromiseProvider alloc] initWithFileType:[NSString stringWithUTF8String:file_type]
                                                                                 delegate:box];
        objc_setAssociatedObject(provider, kNSPhpFilePromiseProviderBoxKey, box, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return provider ? ns_retain_obj(provider) : 0;
    }
}

uintptr_t ns_filepromiseprovider_wrap(void *provider)
{
    if (!provider) {
        return 0;
    }
    @autoreleasepool {
        NSFilePromiseProvider *obj = (__bridge NSFilePromiseProvider *)provider;
        if (![obj isKindOfClass:[NSFilePromiseProvider class]]) {
            return 0;
        }
        (void) ns_filepromiseprovider_box(obj);
        return ns_retain_obj(obj);
    }
}

void ns_filepromiseprovider_destroy(uintptr_t provider)
{
    ns_release_handle(provider);
}

void *ns_filepromiseprovider_nsfilepromiseprovider(uintptr_t provider)
{
    NSFilePromiseProvider *obj = ns_filepromiseprovider_from(provider);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_filepromiseprovider_set_file_type(uintptr_t provider, const char *file_type)
{
    @autoreleasepool {
        NSFilePromiseProvider *obj = ns_filepromiseprovider_from(provider);
        if (obj && file_type) {
            obj.fileType = [NSString stringWithUTF8String:file_type];
        }
    }
}

int ns_filepromiseprovider_file_type(uintptr_t provider, char *out, int out_len)
{
    @autoreleasepool {
        NSFilePromiseProvider *obj = ns_filepromiseprovider_from(provider);
        return ns_copy_nsstring(obj.fileType, out, out_len);
    }
}

void ns_filepromiseprovider_set_user_info_tag(uintptr_t provider, long long tag)
{
    @autoreleasepool {
        NSFilePromiseProvider *obj = ns_filepromiseprovider_from(provider);
        NSPhpFilePromiseProviderBox *box = ns_filepromiseprovider_box(obj);
        if (box) {
            box.userInfoTag = tag;
            obj.userInfo = box;
        }
    }
}

long long ns_filepromiseprovider_user_info_tag(uintptr_t provider)
{
    @autoreleasepool {
        NSFilePromiseProvider *obj = ns_filepromiseprovider_from(provider);
        NSPhpFilePromiseProviderBox *box = ns_filepromiseprovider_box(obj);
        return box ? box.userInfoTag : 0;
    }
}

void ns_filepromiseprovider_set_file_name(uintptr_t provider, const char *file_name)
{
    @autoreleasepool {
        NSFilePromiseProvider *obj = ns_filepromiseprovider_from(provider);
        NSPhpFilePromiseProviderBox *box = ns_filepromiseprovider_box(obj);
        if (box && file_name) {
            box.fileName = [NSString stringWithUTF8String:file_name];
        }
    }
}

int ns_filepromiseprovider_poll_write_request(uintptr_t provider, char *file_type_out, int file_type_len, char *url_out, int url_len)
{
    @autoreleasepool {
        NSFilePromiseProvider *obj = ns_filepromiseprovider_from(provider);
        NSPhpFilePromiseProviderBox *box = ns_filepromiseprovider_box(obj);
        if (!box || !box.writeRequested) {
            return 0;
        }
        box.writeRequested = 0;
        ns_copy_nsstring(box.requestedFileType, file_type_out, file_type_len);
        ns_copy_nsstring(box.requestedURL.path, url_out, url_len);
        return 1;
    }
}

void ns_filepromiseprovider_complete_write(uintptr_t provider, int success)
{
    @autoreleasepool {
        NSFilePromiseProvider *obj = ns_filepromiseprovider_from(provider);
        NSPhpFilePromiseProviderBox *box = ns_filepromiseprovider_box(obj);
        if (box) {
            box.writeSuccess = success ? 1 : 0;
            box.writeCompleted = 1;
        }
    }
}

/*
    NSRelic.h — deprecated-class fixture. The whole @interface carries
    API_DEPRECATED, the way NSOpenGLContext and NSOpenGLView do, so binding
    it is only sanctioned under an @audit deprecated-class marker.
    Composition: 2 methods + 1 readwrite property = 4 members.
*/

API_DEPRECATED("Please use NSGadget.", macos(10.0, 10.14))
@interface NSRelic : NSObject

- (instancetype)initWithSerial:(NSInteger)serial;
- (void)wind;

@property (copy) NSString *label;

@end

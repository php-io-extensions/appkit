/*
    NSDial.h — adopts-marker fixture. NSDial's own members: 1 method +
    1 readonly property = 2. The NSTurning protocol it adopts carries
    1 method + 1 readwrite property = 3, counted only under a marker.
*/

#import <Foundation/Foundation.h>

@protocol NSTurning;

@protocol NSTurning <NSObject>
- (void)turnBy:(double)amount;
@property (nonatomic) double angle;
@end

@interface NSDial : NSObject <NSCopying, NSTurning>
+ (NSDial *)standardDial;
@property (readonly) NSString *label;
@end

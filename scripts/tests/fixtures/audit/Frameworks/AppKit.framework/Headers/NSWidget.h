/*
    NSWidget.h — parser fixture. Known composition:
      methods = 6, readwrite properties = 2, readonly properties = 2.
      Expected member count = 6 + 2*2 + 2 = 12.
    The @protocol below must never be counted.
*/

#import <AppKit/NSControl.h>

@class NSOtherThing;

@protocol NSWidgetDelegate <NSObject>
- (void)widgetWillActivate:(id)widget;
- (BOOL)widgetShouldClose:(id)widget;
@end

@interface NSWidget : NSControl <NSUserInterfaceValidations>
{
    id _guts;
    BOOL _flags;
}

- (instancetype)initWithTitle:(NSString *)title;
- (void)performAction:(SEL)action with:(id)sender;
+ (NSWidget *)standardWidget;
- (void)configureTitle:(NSString *)title
              subtitle:(NSString *)subtitle;

@property (copy) NSString *title;
@property (nullable, readonly) NSString *subtitle;
@property (class, readonly, strong) NSWidget *shared;
@property (getter=isEnabled) BOOL enabled;

#if WIDGET_EXTRAS
- (void)extraThing;
#endif

@end

@interface NSWidget (NSWidgetDeprecated)

- (void)oldThing API_DEPRECATED("use something newer", macos(10.0, 11.0));

@end

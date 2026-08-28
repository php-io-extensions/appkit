/* NSGadget.h — partial-audit fixture: 3 methods + 1 readwrite property = 5. */

@interface NSGadget : NSObject

+ (NSGadget *)standardGadget;
- (void)spinUp;
- (void)spinDown;

@property (copy) NSString *label;

@end

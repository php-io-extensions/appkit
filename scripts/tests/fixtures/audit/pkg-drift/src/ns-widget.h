/* Negative audit fixture: NSWidget bound+reserved = 3 + 8 = 11, one member
 * short of the fixture SDK header's 12. The audit must FAIL. */

#include "php.h"

/*@zep NS\NSWidget initWithTitle(string title) -> int */
zend_long ns_nswidget_init_with_title(zval *title);
/*@zep NS\NSWidget title(int handle) -> string */
void ns_nswidget_title(zval *return_value, zval *handle);
/*@zep NS\NSWidget setTitle(int handle, string title) -> void */
void ns_nswidget_set_title(zval *handle, zval *title);

/*@reserved NS\NSWidget - (void)performAction:(SEL)action with:(id)sender */
/*@reserved NS\NSWidget + (NSWidget *)standardWidget */
/*@reserved NS\NSWidget - (void)configureTitle:subtitle: */
/*@reserved NS\NSWidget @property (nullable, readonly) NSString *subtitle */
/*@reserved NS\NSWidget @property (class, readonly, strong) NSWidget *shared */
/*@reserved NS\NSWidget @property (getter=isEnabled) BOOL enabled — getter */
/*@reserved NS\NSWidget @property (getter=isEnabled) BOOL enabled — setter */
/*@reserved NS\NSWidget - (void)extraThing */

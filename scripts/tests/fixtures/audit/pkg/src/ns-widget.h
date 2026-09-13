/* Positive audit fixture: NSWidget bound+reserved = 3 + 9 = 12 (matches
 * the fixture SDK header exactly); NSGadget is sanctioned-partial 1 of 5. */

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
/*@reserved NS\NSWidget - (void)oldThing (deprecated) */

/*@audit partial NS\NSGadget only standardGadget is needed for now */
/*@zep NS\NSGadget standardGadget() -> int */
zend_long ns_nsgadget_standard_gadget(void);

/* NSRelic is deprecated in its entirety in the fixture SDK header; the
 * marker is what makes binding it (rather than reserving every member)
 * sanctioned, and the audit reports it as DEPRECATED-CLASS. */
/*@audit deprecated-class NS\NSRelic deprecated in its entirety but still the only way to wind a relic */
/*@zep NS\NSRelic initWithSerial(int serial) -> int */
zend_long ns_nsrelic_init_with_serial(zval *serial);
/*@zep NS\NSRelic wind(int handle) -> void */
void ns_nsrelic_wind(zval *handle);
/*@zep NS\NSRelic label(int handle) -> string */
void ns_nsrelic_label(zval *return_value, zval *handle);
/*@zep NS\NSRelic setLabel(int handle, string label) -> void */
void ns_nsrelic_set_label(zval *handle, zval *label);

/* Adopts fixture: NSDial 2 own members + NSTurning 3 = 5, all accounted. */

#include "php.h"

/*@audit adopts NS\NSDial NSTurning angle and turnBy live on the protocol */
/*@zep NS\NSDial standardDial() -> int */
zend_long ns_nsdial_standard_dial(void);
/*@zep NS\NSDial label(int handle) -> string */
void ns_nsdial_label(zval *return_value, zval *handle);
/*@zep NS\NSDial turnBy(int handle, double amount) -> void */
void ns_nsdial_turn_by(zval *handle, zval *amount);
/*@zep NS\NSDial angle(int handle) -> double */
double ns_nsdial_angle(zval *handle);
/*@reserved NS\NSDial @property (nonatomic) double angle — setter */

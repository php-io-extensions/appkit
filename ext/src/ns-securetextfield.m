#include "ns-securetextfield.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSSecureTextField                                                      */
/* ====================================================================== */

zend_long ns_nssecuretextfield_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSSecureTextField alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

/* ====================================================================== */
/* NSSecureTextFieldCell                                                  */
/* ====================================================================== */

zend_long ns_nssecuretextfieldcell_init_text_cell(zval *string_)
{
    @autoreleasepool {
        return ns_handle_for([[NSSecureTextFieldCell alloc] initTextCell:ns_arg_string(string_)]);
    }
}

zend_long ns_nssecuretextfieldcell_echos_bullets(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSecureTextFieldCell *c = NS_ARG_AS(NSSecureTextFieldCell, handle);
        r = (c != nil && [c echosBullets]) ? 1 : 0;
    }
    return r;
}

void ns_nssecuretextfieldcell_set_echos_bullets(zval *handle, zval *echosBullets)
{
    @autoreleasepool {
        NSSecureTextFieldCell *c = NS_ARG_AS(NSSecureTextFieldCell, handle);
        if (c == nil) return;
        [c setEchosBullets:ns_arg_bool(echosBullets)];
    }
}

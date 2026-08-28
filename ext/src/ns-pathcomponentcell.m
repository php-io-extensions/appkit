#include "ns-pathcomponentcell.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSPathComponentCell                                                    */
/* ====================================================================== */

zend_long ns_nspathcomponentcell_init_text_cell(zval *string_)
{
    @autoreleasepool {
        return ns_handle_for([[NSPathComponentCell alloc] initTextCell:ns_arg_string(string_)]);
    }
}

zend_long ns_nspathcomponentcell_image(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPathComponentCell *c = NS_ARG_AS(NSPathComponentCell, handle);
        h = ns_handle_for(c != nil ? [c image] : nil);
    }
    return h;
}

void ns_nspathcomponentcell_set_image(zval *handle, zval *image)
{
    @autoreleasepool {
        NSPathComponentCell *c = NS_ARG_AS(NSPathComponentCell, handle);
        if (c == nil) return;
        [c setImage:NS_ARG_AS(NSImage, image)];
    }
}

zend_long ns_nspathcomponentcell_url(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPathComponentCell *c = NS_ARG_AS(NSPathComponentCell, handle);
        h = ns_handle_for(c != nil ? [c URL] : nil);
    }
    return h;
}

void ns_nspathcomponentcell_set_url(zval *handle, zval *URL)
{
    @autoreleasepool {
        NSPathComponentCell *c = NS_ARG_AS(NSPathComponentCell, handle);
        if (c == nil) return;
        [c setURL:NS_ARG_AS(NSURL, URL)];
    }
}

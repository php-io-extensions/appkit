#include "ns-textstorage.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSTextStorage                                                          */
/* ====================================================================== */

zend_long ns_nstextstorage_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[NSTextStorage alloc] init]);
    }
}

zend_long ns_nstextstorage_init_with_string(zval *string_)
{
    @autoreleasepool {
        return ns_handle_for([[NSTextStorage alloc] initWithString:ns_arg_string(string_)]);
    }
}

void ns_nstextstorage_layout_managers(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTextStorage *s = NS_ARG_AS(NSTextStorage, handle);
        ns_ret_object_array(return_value, s != nil ? [s layoutManagers] : nil);
    }
}

void ns_nstextstorage_add_layout_manager(zval *handle, zval *aLayoutManager)
{
    @autoreleasepool {
        NSTextStorage *s = NS_ARG_AS(NSTextStorage, handle);
        if (s == nil) return;
        [s addLayoutManager:NS_ARG_AS(NSLayoutManager, aLayoutManager)];
    }
}

void ns_nstextstorage_remove_layout_manager(zval *handle, zval *aLayoutManager)
{
    @autoreleasepool {
        NSTextStorage *s = NS_ARG_AS(NSTextStorage, handle);
        if (s == nil) return;
        [s removeLayoutManager:NS_ARG_AS(NSLayoutManager, aLayoutManager)];
    }
}

zend_long ns_nstextstorage_edited_mask(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextStorage *s = NS_ARG_AS(NSTextStorage, handle);
        r = s != nil ? (zend_long) [s editedMask] : 0;
    }
    return r;
}

void ns_nstextstorage_edited_range(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTextStorage *s = NS_ARG_AS(NSTextStorage, handle);
        ns_ret_range(return_value, s != nil ? [s editedRange] : NSMakeRange(0, 0));
    }
}

zend_long ns_nstextstorage_change_in_length(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextStorage *s = NS_ARG_AS(NSTextStorage, handle);
        r = s != nil ? (zend_long) [s changeInLength] : 0;
    }
    return r;
}

zend_long ns_nstextstorage_delegate(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextStorage *s = NS_ARG_AS(NSTextStorage, handle);
        h = ns_handle_for(s != nil ? [s delegate] : nil);
    }
    return h;
}

void ns_nstextstorage_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSTextStorage *s = NS_ARG_AS(NSTextStorage, handle);
        if (s == nil) return;
        [s setDelegate:ns_arg_object(delegate)];
    }
}

void ns_nstextstorage_edited_range_change_in_length(zval *handle, zval *editedMask, zval *location, zval *length, zval *delta)
{
    @autoreleasepool {
        NSTextStorage *s = NS_ARG_AS(NSTextStorage, handle);
        if (s == nil) return;
        [s edited:(NSTextStorageEditActions) ns_arg_long(editedMask)
            range:ns_arg_range(location, length)
   changeInLength:(NSInteger) ns_arg_long(delta)];
    }
}

void ns_nstextstorage_process_editing(zval *handle)
{
    @autoreleasepool {
        NSTextStorage *s = NS_ARG_AS(NSTextStorage, handle);
        if (s == nil) return;
        [s processEditing];
    }
}

zend_long ns_nstextstorage_fixes_attributes_lazily(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextStorage *s = NS_ARG_AS(NSTextStorage, handle);
        r = (s != nil && [s fixesAttributesLazily]) ? 1 : 0;
    }
    return r;
}

void ns_nstextstorage_invalidate_attributes_in_range(zval *handle, zval *location, zval *length)
{
    @autoreleasepool {
        NSTextStorage *s = NS_ARG_AS(NSTextStorage, handle);
        if (s == nil) return;
        [s invalidateAttributesInRange:ns_arg_range(location, length)];
    }
}

void ns_nstextstorage_ensure_attributes_are_fixed_in_range(zval *handle, zval *location, zval *length)
{
    @autoreleasepool {
        NSTextStorage *s = NS_ARG_AS(NSTextStorage, handle);
        if (s == nil) return;
        [s ensureAttributesAreFixedInRange:ns_arg_range(location, length)];
    }
}

zend_long ns_nstextstorage_text_storage_observer(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextStorage *s = NS_ARG_AS(NSTextStorage, handle);
        h = ns_handle_for(s != nil ? [s textStorageObserver] : nil);
    }
    return h;
}

void ns_nstextstorage_set_text_storage_observer(zval *handle, zval *textStorageObserver)
{
    @autoreleasepool {
        NSTextStorage *s = NS_ARG_AS(NSTextStorage, handle);
        if (s == nil) return;
        [s setTextStorageObserver:ns_arg_object(textStorageObserver)];
    }
}

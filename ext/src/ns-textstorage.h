#ifndef PHP_APPKIT_NS_TEXTSTORAGE_H
#define PHP_APPKIT_NS_TEXTSTORAGE_H

/*
 * Faithful 1:1 binding of AppKit NSTextStorage.h. Every member of
 * the single base interface is either bound or reserved. Nothing is
 * omitted. There are no same-file categories on NSTextStorage; the
 * NSObject(NSDeprecatedTextStorageDelegateInterface) block is on
 * NSObject, not this class. Adopted NSSecureCoding and the
 * NSTextStorageDelegate / NSTextStorageObserving protocols are not
 * class members (delegate methods belong to Bridge). Notification
 * names, the NSTextStorageEditActions options, and the deprecated
 * NSTextStorageEditedOptions typedef are not class members.
 * Scripting properties live in NSTextStorageScripting.h and bind
 * with that header. Inherited NSMutableAttributedString /
 * NSAttributedString / NSObject members stay on those classes. This
 * header declares no initializer — construction is synthesized
 * init / initWithString (allocs NSTextStorage). No member is deprecated or otherwise
 * reserved. layoutManagers is handles. editedRange is an assoc
 * array {location, length}. NSTextStorageEditActions / NSInteger
 * cross as int. Nullable delegate / textStorageObserver cross as
 * int handles (0 = nil). NSRange arguments are location/length
 * ints in.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- construction glue ---- */

/*@zep-construct NS\NSTextStorage init() -> int */
zend_long ns_nstextstorage_init(void);
/*@zep-construct NS\NSTextStorage initWithString(string string_) -> int */
zend_long ns_nstextstorage_init_with_string(zval *string_);

/* ---- Layout manager ---- */

/*@zep NS\NSTextStorage layoutManagers(int handle) -> array */
void ns_nstextstorage_layout_managers(zval *return_value, zval *handle);

/*@zep NS\NSTextStorage addLayoutManager(int handle, int aLayoutManager) -> void */
void ns_nstextstorage_add_layout_manager(zval *handle, zval *aLayoutManager);

/*@zep NS\NSTextStorage removeLayoutManager(int handle, int aLayoutManager) -> void */
void ns_nstextstorage_remove_layout_manager(zval *handle, zval *aLayoutManager);

/* ---- Pending edit info ---- */

/*@zep NS\NSTextStorage editedMask(int handle) -> int */
zend_long ns_nstextstorage_edited_mask(zval *handle);

/*@zep NS\NSTextStorage editedRange(int handle) -> array */
void ns_nstextstorage_edited_range(zval *return_value, zval *handle);

/*@zep NS\NSTextStorage changeInLength(int handle) -> int */
zend_long ns_nstextstorage_change_in_length(zval *handle);

/* ---- Delegate ---- */

/*@zep NS\NSTextStorage delegate(int handle) -> int */
zend_long ns_nstextstorage_delegate(zval *handle);
/*@zep NS\NSTextStorage setDelegate(int handle, int delegate) -> void */
void ns_nstextstorage_set_delegate(zval *handle, zval *delegate);

/* ---- Edit management ---- */

/*@zep NS\NSTextStorage editedRangeChangeInLength(int handle, int editedMask, int location, int length, int delta) -> void */
void ns_nstextstorage_edited_range_change_in_length(zval *handle, zval *editedMask, zval *location, zval *length, zval *delta);

/*@zep NS\NSTextStorage processEditing(int handle) -> void */
void ns_nstextstorage_process_editing(zval *handle);

/* ---- Attribute fixing ---- */

/*@zep NS\NSTextStorage fixesAttributesLazily(int handle) -> bool */
zend_long ns_nstextstorage_fixes_attributes_lazily(zval *handle);

/*@zep NS\NSTextStorage invalidateAttributesInRange(int handle, int location, int length) -> void */
void ns_nstextstorage_invalidate_attributes_in_range(zval *handle, zval *location, zval *length);

/*@zep NS\NSTextStorage ensureAttributesAreFixedInRange(int handle, int location, int length) -> void */
void ns_nstextstorage_ensure_attributes_are_fixed_in_range(zval *handle, zval *location, zval *length);

/* ---- NSTextStorageObserving ---- */

/*@zep NS\NSTextStorage textStorageObserver(int handle) -> int */
zend_long ns_nstextstorage_text_storage_observer(zval *handle);
/*@zep NS\NSTextStorage setTextStorageObserver(int handle, int textStorageObserver) -> void */
void ns_nstextstorage_set_text_storage_observer(zval *handle, zval *textStorageObserver);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTSTORAGE_H */

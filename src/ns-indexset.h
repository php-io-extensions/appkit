#ifndef PHP_APPKIT_NS_INDEXSET_H
#define PHP_APPKIT_NS_INDEXSET_H

/*
 * Foundation NSIndexSet — curated minimum for handing a single-row
 * selection to NSTableView::selectRowIndexesByExtendingSelection.
 * The two factories cover empty and one-index sets; containsIndex
 * is the read-back. The full class (ranges, enumeration, mutation)
 * stays unbound until something needs it.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/*@zep NS\NSIndexSet indexSet() -> int */
zend_long ns_nsindexset_index_set(void);
/*@zep NS\NSIndexSet indexSetWithIndex(int value) -> int */
zend_long ns_nsindexset_index_set_with_index(zval *value);
/*@zep NS\NSIndexSet containsIndex(int handle, int value) -> bool */
zend_long ns_nsindexset_contains_index(zval *handle, zval *value);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_INDEXSET_H */

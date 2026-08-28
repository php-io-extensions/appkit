#include "ns-collectionview.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSCollectionViewItem                                                   */
/* ====================================================================== */

zend_long ns_nscollectionviewitem_init_with_nib_name_bundle(zval *nibName, zval *bundle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewItem *item = [[NSCollectionViewItem alloc] initWithNibName:ns_arg_string(nibName)
                                                                            bundle:NS_ARG_AS(NSBundle, bundle)];
        h = ns_handle_for(item);
    }
    return h;
}

zend_long ns_nscollectionviewitem_collection_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewItem *item = NS_ARG_AS(NSCollectionViewItem, handle);
        h = ns_handle_for(item != nil ? [item collectionView] : nil);
    }
    return h;
}

zend_long ns_nscollectionviewitem_is_selected(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionViewItem *item = NS_ARG_AS(NSCollectionViewItem, handle);
        r = (item != nil && [item isSelected]) ? 1 : 0;
    }
    return r;
}

void ns_nscollectionviewitem_set_selected(zval *handle, zval *selected)
{
    @autoreleasepool {
        NSCollectionViewItem *item = NS_ARG_AS(NSCollectionViewItem, handle);
        if (item == nil) return;
        [item setSelected:ns_arg_bool(selected)];
    }
}

zend_long ns_nscollectionviewitem_highlight_state(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionViewItem *item = NS_ARG_AS(NSCollectionViewItem, handle);
        r = item != nil ? (zend_long) [item highlightState] : 0;
    }
    return r;
}

void ns_nscollectionviewitem_set_highlight_state(zval *handle, zval *highlightState)
{
    @autoreleasepool {
        NSCollectionViewItem *item = NS_ARG_AS(NSCollectionViewItem, handle);
        if (item == nil) return;
        [item setHighlightState:(NSCollectionViewItemHighlightState) ns_arg_long(highlightState)];
    }
}

zend_long ns_nscollectionviewitem_image_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewItem *item = NS_ARG_AS(NSCollectionViewItem, handle);
        h = ns_handle_for(item != nil ? [item imageView] : nil);
    }
    return h;
}

void ns_nscollectionviewitem_set_image_view(zval *handle, zval *imageView)
{
    @autoreleasepool {
        NSCollectionViewItem *item = NS_ARG_AS(NSCollectionViewItem, handle);
        if (item == nil) return;
        [item setImageView:NS_ARG_AS(NSImageView, imageView)];
    }
}

zend_long ns_nscollectionviewitem_text_field(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionViewItem *item = NS_ARG_AS(NSCollectionViewItem, handle);
        h = ns_handle_for(item != nil ? [item textField] : nil);
    }
    return h;
}

void ns_nscollectionviewitem_set_text_field(zval *handle, zval *textField)
{
    @autoreleasepool {
        NSCollectionViewItem *item = NS_ARG_AS(NSCollectionViewItem, handle);
        if (item == nil) return;
        [item setTextField:NS_ARG_AS(NSTextField, textField)];
    }
}

void ns_nscollectionviewitem_dragging_image_components(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCollectionViewItem *item = NS_ARG_AS(NSCollectionViewItem, handle);
        ns_ret_object_array(return_value, item != nil ? [item draggingImageComponents] : nil);
    }
}

/* ====================================================================== */
/* NSCollectionView                                                       */
/* ====================================================================== */

zend_long ns_nscollectionview_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSCollectionView alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

/* ---- Data source / model objects ---- */

zend_long ns_nscollectionview_data_source(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        h = ns_handle_for(cv != nil ? [cv dataSource] : nil);
    }
    return h;
}

void ns_nscollectionview_set_data_source(zval *handle, zval *dataSource)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv setDataSource:ns_arg_object(dataSource)];
    }
}

zend_long ns_nscollectionview_prefetch_data_source(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        h = ns_handle_for(cv != nil ? [cv prefetchDataSource] : nil);
    }
    return h;
}

void ns_nscollectionview_set_prefetch_data_source(zval *handle, zval *prefetchDataSource)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv setPrefetchDataSource:ns_arg_object(prefetchDataSource)];
    }
}

void ns_nscollectionview_content(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        ns_ret_object_array(return_value, cv != nil ? [cv content] : nil);
    }
}

void ns_nscollectionview_set_content(zval *handle, zval *content)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv setContent:ns_arg_object_array(content)];
    }
}

void ns_nscollectionview_reload_data(zval *handle)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv reloadData];
    }
}

/* ---- Delegate ---- */

zend_long ns_nscollectionview_delegate(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        h = ns_handle_for(cv != nil ? [cv delegate] : nil);
    }
    return h;
}

void ns_nscollectionview_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv setDelegate:ns_arg_object(delegate)];
    }
}

/* ---- Decoration ---- */

zend_long ns_nscollectionview_background_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        h = ns_handle_for(cv != nil ? [cv backgroundView] : nil);
    }
    return h;
}

void ns_nscollectionview_set_background_view(zval *handle, zval *backgroundView)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv setBackgroundView:NS_ARG_AS(NSView, backgroundView)];
    }
}

zend_long ns_nscollectionview_background_view_scrolls_with_content(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        r = (cv != nil && [cv backgroundViewScrollsWithContent]) ? 1 : 0;
    }
    return r;
}

void ns_nscollectionview_set_background_view_scrolls_with_content(zval *handle, zval *backgroundViewScrollsWithContent)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv setBackgroundViewScrollsWithContent:ns_arg_bool(backgroundViewScrollsWithContent)];
    }
}

/* ---- Layout ---- */

zend_long ns_nscollectionview_collection_view_layout(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        h = ns_handle_for(cv != nil ? [cv collectionViewLayout] : nil);
    }
    return h;
}

void ns_nscollectionview_set_collection_view_layout(zval *handle, zval *collectionViewLayout)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv setCollectionViewLayout:NS_ARG_AS(NSCollectionViewLayout, collectionViewLayout)];
    }
}

zend_long ns_nscollectionview_layout_attributes_for_item_at_index_path(zval *handle, zval *indexPath)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        h = ns_handle_for(cv != nil ? [cv layoutAttributesForItemAtIndexPath:NS_ARG_AS(NSIndexPath, indexPath)] : nil);
    }
    return h;
}

zend_long ns_nscollectionview_layout_attributes_for_supplementary_element_of_kind_at_index_path(zval *handle, zval *kind, zval *indexPath)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        h = ns_handle_for(cv != nil ? [cv layoutAttributesForSupplementaryElementOfKind:ns_arg_string(kind) atIndexPath:NS_ARG_AS(NSIndexPath, indexPath)] : nil);
    }
    return h;
}

void ns_nscollectionview_frame_for_item_at_index(zval *return_value, zval *handle, zval *index)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        ns_ret_rect(return_value, cv != nil ? [cv frameForItemAtIndex:(NSUInteger) ns_arg_long(index)] : NSZeroRect);
    }
}

void ns_nscollectionview_frame_for_item_at_index_with_number_of_items(zval *return_value, zval *handle, zval *index, zval *numberOfItems)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        ns_ret_rect(return_value, cv != nil ? [cv frameForItemAtIndex:(NSUInteger) ns_arg_long(index) withNumberOfItems:(NSUInteger) ns_arg_long(numberOfItems)] : NSZeroRect);
    }
}

void ns_nscollectionview_background_colors(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        ns_ret_object_array(return_value, cv != nil ? [cv backgroundColors] : nil);
    }
}

void ns_nscollectionview_set_background_colors(zval *handle, zval *backgroundColors)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        zval *z = ns_deref(backgroundColors);
        NSArray *colors = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_object_array(backgroundColors) : nil;
        [cv setBackgroundColors:colors];
    }
}

/* ---- Section and item counts ---- */

zend_long ns_nscollectionview_number_of_sections(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        r = cv != nil ? (zend_long) [cv numberOfSections] : 0;
    }
    return r;
}

zend_long ns_nscollectionview_number_of_items_in_section(zval *handle, zval *section)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        r = cv != nil ? (zend_long) [cv numberOfItemsInSection:(NSInteger) ns_arg_long(section)] : 0;
    }
    return r;
}

/* ---- Selection ---- */

zend_long ns_nscollectionview_is_first_responder(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        r = (cv != nil && [cv isFirstResponder]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nscollectionview_is_selectable(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        r = (cv != nil && [cv isSelectable]) ? 1 : 0;
    }
    return r;
}

void ns_nscollectionview_set_selectable(zval *handle, zval *selectable)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv setSelectable:ns_arg_bool(selectable)];
    }
}

zend_long ns_nscollectionview_allows_empty_selection(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        r = (cv != nil && [cv allowsEmptySelection]) ? 1 : 0;
    }
    return r;
}

void ns_nscollectionview_set_allows_empty_selection(zval *handle, zval *allowsEmptySelection)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv setAllowsEmptySelection:ns_arg_bool(allowsEmptySelection)];
    }
}

zend_long ns_nscollectionview_allows_multiple_selection(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        r = (cv != nil && [cv allowsMultipleSelection]) ? 1 : 0;
    }
    return r;
}

void ns_nscollectionview_set_allows_multiple_selection(zval *handle, zval *allowsMultipleSelection)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv setAllowsMultipleSelection:ns_arg_bool(allowsMultipleSelection)];
    }
}

zend_long ns_nscollectionview_selection_indexes(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        h = ns_handle_for(cv != nil ? [cv selectionIndexes] : nil);
    }
    return h;
}

void ns_nscollectionview_set_selection_indexes(zval *handle, zval *selectionIndexes)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv setSelectionIndexes:NS_ARG_AS(NSIndexSet, selectionIndexes)];
    }
}

void ns_nscollectionview_selection_index_paths(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        ns_ret_object_set(return_value, cv != nil ? [cv selectionIndexPaths] : nil);
    }
}

void ns_nscollectionview_set_selection_index_paths(zval *handle, zval *selectionIndexPaths)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv setSelectionIndexPaths:ns_arg_object_set(selectionIndexPaths)];
    }
}

void ns_nscollectionview_select_items_at_index_paths_scroll_position(zval *handle, zval *indexPaths, zval *scrollPosition)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv selectItemsAtIndexPaths:ns_arg_object_set(indexPaths) scrollPosition:(NSCollectionViewScrollPosition) ns_arg_long(scrollPosition)];
    }
}

void ns_nscollectionview_deselect_items_at_index_paths(zval *handle, zval *indexPaths)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv deselectItemsAtIndexPaths:ns_arg_object_set(indexPaths)];
    }
}

void ns_nscollectionview_select_all(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv selectAll:ns_arg_object(sender)];
    }
}

void ns_nscollectionview_deselect_all(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv deselectAll:ns_arg_object(sender)];
    }
}

/* ---- Registration / dequeue ---- */

void ns_nscollectionview_register_nib_for_item_with_identifier(zval *handle, zval *nib, zval *identifier)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv registerNib:NS_ARG_AS(NSNib, nib) forItemWithIdentifier:ns_arg_string(identifier)];
    }
}

void ns_nscollectionview_register_nib_for_supplementary_view_of_kind_with_identifier(zval *handle, zval *nib, zval *kind, zval *identifier)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv registerNib:NS_ARG_AS(NSNib, nib) forSupplementaryViewOfKind:ns_arg_string(kind) withIdentifier:ns_arg_string(identifier)];
    }
}

zend_long ns_nscollectionview_make_item_with_identifier_for_index_path(zval *handle, zval *identifier, zval *indexPath)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        h = ns_handle_for(cv != nil ? [cv makeItemWithIdentifier:ns_arg_string(identifier) forIndexPath:NS_ARG_AS(NSIndexPath, indexPath)] : nil);
    }
    return h;
}

zend_long ns_nscollectionview_make_supplementary_view_of_kind_with_identifier_for_index_path(zval *handle, zval *elementKind, zval *identifier, zval *indexPath)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        h = ns_handle_for(cv != nil ? [cv makeSupplementaryViewOfKind:ns_arg_string(elementKind) withIdentifier:ns_arg_string(identifier) forIndexPath:NS_ARG_AS(NSIndexPath, indexPath)] : nil);
    }
    return h;
}

/* ---- Finding items ---- */

zend_long ns_nscollectionview_item_at_index(zval *handle, zval *index)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        h = ns_handle_for(cv != nil ? [cv itemAtIndex:(NSUInteger) ns_arg_long(index)] : nil);
    }
    return h;
}

zend_long ns_nscollectionview_item_at_index_path(zval *handle, zval *indexPath)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        h = ns_handle_for(cv != nil ? [cv itemAtIndexPath:NS_ARG_AS(NSIndexPath, indexPath)] : nil);
    }
    return h;
}

void ns_nscollectionview_visible_items(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        ns_ret_object_array(return_value, cv != nil ? [cv visibleItems] : nil);
    }
}

void ns_nscollectionview_index_paths_for_visible_items(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        ns_ret_object_set(return_value, cv != nil ? [cv indexPathsForVisibleItems] : nil);
    }
}

zend_long ns_nscollectionview_index_path_for_item(zval *handle, zval *item)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        h = ns_handle_for(cv != nil ? [cv indexPathForItem:NS_ARG_AS(NSCollectionViewItem, item)] : nil);
    }
    return h;
}

zend_long ns_nscollectionview_index_path_for_item_at_point(zval *handle, zval *x, zval *y)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        h = ns_handle_for(cv != nil ? [cv indexPathForItemAtPoint:ns_arg_point(x, y)] : nil);
    }
    return h;
}

/* ---- Finding supplementary views ---- */

zend_long ns_nscollectionview_supplementary_view_for_element_kind_at_index_path(zval *handle, zval *elementKind, zval *indexPath)
{
    zend_long h = 0;
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        h = ns_handle_for(cv != nil ? [cv supplementaryViewForElementKind:ns_arg_string(elementKind) atIndexPath:NS_ARG_AS(NSIndexPath, indexPath)] : nil);
    }
    return h;
}

void ns_nscollectionview_visible_supplementary_views_of_kind(zval *return_value, zval *handle, zval *elementKind)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        ns_ret_object_array(return_value, cv != nil ? [cv visibleSupplementaryViewsOfKind:ns_arg_string(elementKind)] : nil);
    }
}

void ns_nscollectionview_index_paths_for_visible_supplementary_elements_of_kind(zval *return_value, zval *handle, zval *elementKind)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        ns_ret_object_set(return_value, cv != nil ? [cv indexPathsForVisibleSupplementaryElementsOfKind:ns_arg_string(elementKind)] : nil);
    }
}

/* ---- Modifying items and sections ---- */

void ns_nscollectionview_insert_sections(zval *handle, zval *sections)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv insertSections:NS_ARG_AS(NSIndexSet, sections)];
    }
}

void ns_nscollectionview_delete_sections(zval *handle, zval *sections)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv deleteSections:NS_ARG_AS(NSIndexSet, sections)];
    }
}

void ns_nscollectionview_reload_sections(zval *handle, zval *sections)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv reloadSections:NS_ARG_AS(NSIndexSet, sections)];
    }
}

void ns_nscollectionview_move_section_to_section(zval *handle, zval *section, zval *newSection)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv moveSection:(NSInteger) ns_arg_long(section) toSection:(NSInteger) ns_arg_long(newSection)];
    }
}

void ns_nscollectionview_insert_items_at_index_paths(zval *handle, zval *indexPaths)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv insertItemsAtIndexPaths:ns_arg_object_set(indexPaths)];
    }
}

void ns_nscollectionview_delete_items_at_index_paths(zval *handle, zval *indexPaths)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv deleteItemsAtIndexPaths:ns_arg_object_set(indexPaths)];
    }
}

void ns_nscollectionview_reload_items_at_index_paths(zval *handle, zval *indexPaths)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv reloadItemsAtIndexPaths:ns_arg_object_set(indexPaths)];
    }
}

void ns_nscollectionview_move_item_at_index_path_to_index_path(zval *handle, zval *indexPath, zval *newIndexPath)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv moveItemAtIndexPath:NS_ARG_AS(NSIndexPath, indexPath) toIndexPath:NS_ARG_AS(NSIndexPath, newIndexPath)];
    }
}

/* ---- Section collapse / scrolling ---- */

void ns_nscollectionview_toggle_section_collapse(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv toggleSectionCollapse:ns_arg_object(sender)];
    }
}

void ns_nscollectionview_scroll_to_items_at_index_paths_scroll_position(zval *handle, zval *indexPaths, zval *scrollPosition)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv scrollToItemsAtIndexPaths:ns_arg_object_set(indexPaths) scrollPosition:(NSCollectionViewScrollPosition) ns_arg_long(scrollPosition)];
    }
}

/* ---- Drag and drop ---- */

void ns_nscollectionview_set_dragging_source_operation_mask_for_local(zval *handle, zval *dragOperationMask, zval *localDestination)
{
    @autoreleasepool {
        NSCollectionView *cv = NS_ARG_AS(NSCollectionView, handle);
        if (cv == nil) return;
        [cv setDraggingSourceOperationMask:(NSDragOperation) ns_arg_long(dragOperationMask) forLocal:ns_arg_bool(localDestination)];
    }
}

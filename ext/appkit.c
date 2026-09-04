
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#include "php_ext.h"
#include "appkit.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *appkit_av_avplayer_avplayer_ce;
zend_class_entry *appkit_av_avplayerview_avplayerview_ce;
zend_class_entry *appkit_bridge_bridge_ce;
zend_class_entry *appkit_ns_nsalert_nsalert_ce;
zend_class_entry *appkit_ns_nsapplication_nsapplication_ce;
zend_class_entry *appkit_ns_nsattributedstring_nsattributedstring_ce;
zend_class_entry *appkit_ns_nsbox_nsbox_ce;
zend_class_entry *appkit_ns_nsbutton_nsbutton_ce;
zend_class_entry *appkit_ns_nscell_nscell_ce;
zend_class_entry *appkit_ns_nsclipview_nsclipview_ce;
zend_class_entry *appkit_ns_nscollectionview_nscollectionview_ce;
zend_class_entry *appkit_ns_nscollectionviewflowlayout_nscollectionviewflowlayout_ce;
zend_class_entry *appkit_ns_nscollectionviewflowlayoutinvalidationcontext_nscollectionviewflowlayoutinvalidationcontext_ce;
zend_class_entry *appkit_ns_nscollectionviewgridlayout_nscollectionviewgridlayout_ce;
zend_class_entry *appkit_ns_nscollectionviewitem_nscollectionviewitem_ce;
zend_class_entry *appkit_ns_nscollectionviewlayout_nscollectionviewlayout_ce;
zend_class_entry *appkit_ns_nscollectionviewlayoutattributes_nscollectionviewlayoutattributes_ce;
zend_class_entry *appkit_ns_nscollectionviewlayoutinvalidationcontext_nscollectionviewlayoutinvalidationcontext_ce;
zend_class_entry *appkit_ns_nscollectionviewupdateitem_nscollectionviewupdateitem_ce;
zend_class_entry *appkit_ns_nscolor_nscolor_ce;
zend_class_entry *appkit_ns_nscolorwell_nscolorwell_ce;
zend_class_entry *appkit_ns_nscombobox_nscombobox_ce;
zend_class_entry *appkit_ns_nscomboboxcell_nscomboboxcell_ce;
zend_class_entry *appkit_ns_nscontrol_nscontrol_ce;
zend_class_entry *appkit_ns_nsdatepicker_nsdatepicker_ce;
zend_class_entry *appkit_ns_nsdatepickercell_nsdatepickercell_ce;
zend_class_entry *appkit_ns_nsevent_nsevent_ce;
zend_class_entry *appkit_ns_nsfont_nsfont_ce;
zend_class_entry *appkit_ns_nsfontdescriptor_nsfontdescriptor_ce;
zend_class_entry *appkit_ns_nsgridcell_nsgridcell_ce;
zend_class_entry *appkit_ns_nsgridcolumn_nsgridcolumn_ce;
zend_class_entry *appkit_ns_nsgridrow_nsgridrow_ce;
zend_class_entry *appkit_ns_nsgridview_nsgridview_ce;
zend_class_entry *appkit_ns_nsimage_nsimage_ce;
zend_class_entry *appkit_ns_nsimagerep_nsimagerep_ce;
zend_class_entry *appkit_ns_nsimagesymbolconfiguration_nsimagesymbolconfiguration_ce;
zend_class_entry *appkit_ns_nsimageview_nsimageview_ce;
zend_class_entry *appkit_ns_nslayoutmanager_nslayoutmanager_ce;
zend_class_entry *appkit_ns_nsmenu_nsmenu_ce;
zend_class_entry *appkit_ns_nsmenuitem_nsmenuitem_ce;
zend_class_entry *appkit_ns_nsnotificationcenter_nsnotificationcenter_ce;
zend_class_entry *appkit_ns_nsopenpanel_nsopenpanel_ce;
zend_class_entry *appkit_ns_nsoutlineview_nsoutlineview_ce;
zend_class_entry *appkit_ns_nspathcell_nspathcell_ce;
zend_class_entry *appkit_ns_nspathcomponentcell_nspathcomponentcell_ce;
zend_class_entry *appkit_ns_nspathcontrol_nspathcontrol_ce;
zend_class_entry *appkit_ns_nspathcontrolitem_nspathcontrolitem_ce;
zend_class_entry *appkit_ns_nspopover_nspopover_ce;
zend_class_entry *appkit_ns_nspopupbutton_nspopupbutton_ce;
zend_class_entry *appkit_ns_nsprogressindicator_nsprogressindicator_ce;
zend_class_entry *appkit_ns_nsresponder_nsresponder_ce;
zend_class_entry *appkit_ns_nssavepanel_nssavepanel_ce;
zend_class_entry *appkit_ns_nsscreen_nsscreen_ce;
zend_class_entry *appkit_ns_nsscrollview_nsscrollview_ce;
zend_class_entry *appkit_ns_nssearchfield_nssearchfield_ce;
zend_class_entry *appkit_ns_nssearchfieldcell_nssearchfieldcell_ce;
zend_class_entry *appkit_ns_nssecuretextfield_nssecuretextfield_ce;
zend_class_entry *appkit_ns_nssecuretextfieldcell_nssecuretextfieldcell_ce;
zend_class_entry *appkit_ns_nssegmentedcell_nssegmentedcell_ce;
zend_class_entry *appkit_ns_nssegmentedcontrol_nssegmentedcontrol_ce;
zend_class_entry *appkit_ns_nsslider_nsslider_ce;
zend_class_entry *appkit_ns_nsslidercell_nsslidercell_ce;
zend_class_entry *appkit_ns_nssplitview_nssplitview_ce;
zend_class_entry *appkit_ns_nsstackview_nsstackview_ce;
zend_class_entry *appkit_ns_nsstatusbar_nsstatusbar_ce;
zend_class_entry *appkit_ns_nsstatusbarbutton_nsstatusbarbutton_ce;
zend_class_entry *appkit_ns_nsstatusitem_nsstatusitem_ce;
zend_class_entry *appkit_ns_nsstepper_nsstepper_ce;
zend_class_entry *appkit_ns_nssteppercell_nssteppercell_ce;
zend_class_entry *appkit_ns_nsswitch_nsswitch_ce;
zend_class_entry *appkit_ns_nstablecellview_nstablecellview_ce;
zend_class_entry *appkit_ns_nstablecolumn_nstablecolumn_ce;
zend_class_entry *appkit_ns_nstableheadercell_nstableheadercell_ce;
zend_class_entry *appkit_ns_nstableheaderview_nstableheaderview_ce;
zend_class_entry *appkit_ns_nstablerowview_nstablerowview_ce;
zend_class_entry *appkit_ns_nstableview_nstableview_ce;
zend_class_entry *appkit_ns_nstabview_nstabview_ce;
zend_class_entry *appkit_ns_nstabviewitem_nstabviewitem_ce;
zend_class_entry *appkit_ns_nstext_nstext_ce;
zend_class_entry *appkit_ns_nstextcontainer_nstextcontainer_ce;
zend_class_entry *appkit_ns_nstextfield_nstextfield_ce;
zend_class_entry *appkit_ns_nstextfieldcell_nstextfieldcell_ce;
zend_class_entry *appkit_ns_nstextstorage_nstextstorage_ce;
zend_class_entry *appkit_ns_nstextview_nstextview_ce;
zend_class_entry *appkit_ns_nstoolbar_nstoolbar_ce;
zend_class_entry *appkit_ns_nstoolbaritem_nstoolbaritem_ce;
zend_class_entry *appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_ce;
zend_class_entry *appkit_ns_nsurl_nsurl_ce;
zend_class_entry *appkit_ns_nsview_nsview_ce;
zend_class_entry *appkit_ns_nsviewcontroller_nsviewcontroller_ce;
zend_class_entry *appkit_ns_nsvisualeffectview_nsvisualeffectview_ce;
zend_class_entry *appkit_ns_nswindow_nswindow_ce;
zend_class_entry *appkit_quartzcore_calayer_calayer_ce;

ZEND_DECLARE_MODULE_GLOBALS(appkit)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(appkit)
{
	REGISTER_INI_ENTRIES();
	zephir_module_init();
	ZEPHIR_INIT(AppKit_AV_AVPlayerView_AVPlayerView);
	ZEPHIR_INIT(AppKit_AV_AVPlayer_AVPlayer);
	ZEPHIR_INIT(AppKit_Bridge_Bridge);
	ZEPHIR_INIT(AppKit_NS_NSAlert_NSAlert);
	ZEPHIR_INIT(AppKit_NS_NSApplication_NSApplication);
	ZEPHIR_INIT(AppKit_NS_NSAttributedString_NSAttributedString);
	ZEPHIR_INIT(AppKit_NS_NSBox_NSBox);
	ZEPHIR_INIT(AppKit_NS_NSButton_NSButton);
	ZEPHIR_INIT(AppKit_NS_NSCell_NSCell);
	ZEPHIR_INIT(AppKit_NS_NSClipView_NSClipView);
	ZEPHIR_INIT(AppKit_NS_NSCollectionViewFlowLayoutInvalidationContext_NSCollectionViewFlowLayoutInvalidationContext);
	ZEPHIR_INIT(AppKit_NS_NSCollectionViewFlowLayout_NSCollectionViewFlowLayout);
	ZEPHIR_INIT(AppKit_NS_NSCollectionViewGridLayout_NSCollectionViewGridLayout);
	ZEPHIR_INIT(AppKit_NS_NSCollectionViewItem_NSCollectionViewItem);
	ZEPHIR_INIT(AppKit_NS_NSCollectionViewLayoutAttributes_NSCollectionViewLayoutAttributes);
	ZEPHIR_INIT(AppKit_NS_NSCollectionViewLayoutInvalidationContext_NSCollectionViewLayoutInvalidationContext);
	ZEPHIR_INIT(AppKit_NS_NSCollectionViewLayout_NSCollectionViewLayout);
	ZEPHIR_INIT(AppKit_NS_NSCollectionViewUpdateItem_NSCollectionViewUpdateItem);
	ZEPHIR_INIT(AppKit_NS_NSCollectionView_NSCollectionView);
	ZEPHIR_INIT(AppKit_NS_NSColorWell_NSColorWell);
	ZEPHIR_INIT(AppKit_NS_NSColor_NSColor);
	ZEPHIR_INIT(AppKit_NS_NSComboBoxCell_NSComboBoxCell);
	ZEPHIR_INIT(AppKit_NS_NSComboBox_NSComboBox);
	ZEPHIR_INIT(AppKit_NS_NSControl_NSControl);
	ZEPHIR_INIT(AppKit_NS_NSDatePickerCell_NSDatePickerCell);
	ZEPHIR_INIT(AppKit_NS_NSDatePicker_NSDatePicker);
	ZEPHIR_INIT(AppKit_NS_NSEvent_NSEvent);
	ZEPHIR_INIT(AppKit_NS_NSFontDescriptor_NSFontDescriptor);
	ZEPHIR_INIT(AppKit_NS_NSFont_NSFont);
	ZEPHIR_INIT(AppKit_NS_NSGridCell_NSGridCell);
	ZEPHIR_INIT(AppKit_NS_NSGridColumn_NSGridColumn);
	ZEPHIR_INIT(AppKit_NS_NSGridRow_NSGridRow);
	ZEPHIR_INIT(AppKit_NS_NSGridView_NSGridView);
	ZEPHIR_INIT(AppKit_NS_NSImageRep_NSImageRep);
	ZEPHIR_INIT(AppKit_NS_NSImageSymbolConfiguration_NSImageSymbolConfiguration);
	ZEPHIR_INIT(AppKit_NS_NSImageView_NSImageView);
	ZEPHIR_INIT(AppKit_NS_NSImage_NSImage);
	ZEPHIR_INIT(AppKit_NS_NSLayoutManager_NSLayoutManager);
	ZEPHIR_INIT(AppKit_NS_NSMenuItem_NSMenuItem);
	ZEPHIR_INIT(AppKit_NS_NSMenu_NSMenu);
	ZEPHIR_INIT(AppKit_NS_NSNotificationCenter_NSNotificationCenter);
	ZEPHIR_INIT(AppKit_NS_NSOpenPanel_NSOpenPanel);
	ZEPHIR_INIT(AppKit_NS_NSOutlineView_NSOutlineView);
	ZEPHIR_INIT(AppKit_NS_NSPathCell_NSPathCell);
	ZEPHIR_INIT(AppKit_NS_NSPathComponentCell_NSPathComponentCell);
	ZEPHIR_INIT(AppKit_NS_NSPathControlItem_NSPathControlItem);
	ZEPHIR_INIT(AppKit_NS_NSPathControl_NSPathControl);
	ZEPHIR_INIT(AppKit_NS_NSPopUpButton_NSPopUpButton);
	ZEPHIR_INIT(AppKit_NS_NSPopover_NSPopover);
	ZEPHIR_INIT(AppKit_NS_NSProgressIndicator_NSProgressIndicator);
	ZEPHIR_INIT(AppKit_NS_NSResponder_NSResponder);
	ZEPHIR_INIT(AppKit_NS_NSSavePanel_NSSavePanel);
	ZEPHIR_INIT(AppKit_NS_NSScreen_NSScreen);
	ZEPHIR_INIT(AppKit_NS_NSScrollView_NSScrollView);
	ZEPHIR_INIT(AppKit_NS_NSSearchFieldCell_NSSearchFieldCell);
	ZEPHIR_INIT(AppKit_NS_NSSearchField_NSSearchField);
	ZEPHIR_INIT(AppKit_NS_NSSecureTextFieldCell_NSSecureTextFieldCell);
	ZEPHIR_INIT(AppKit_NS_NSSecureTextField_NSSecureTextField);
	ZEPHIR_INIT(AppKit_NS_NSSegmentedCell_NSSegmentedCell);
	ZEPHIR_INIT(AppKit_NS_NSSegmentedControl_NSSegmentedControl);
	ZEPHIR_INIT(AppKit_NS_NSSliderCell_NSSliderCell);
	ZEPHIR_INIT(AppKit_NS_NSSlider_NSSlider);
	ZEPHIR_INIT(AppKit_NS_NSSplitView_NSSplitView);
	ZEPHIR_INIT(AppKit_NS_NSStackView_NSStackView);
	ZEPHIR_INIT(AppKit_NS_NSStatusBarButton_NSStatusBarButton);
	ZEPHIR_INIT(AppKit_NS_NSStatusBar_NSStatusBar);
	ZEPHIR_INIT(AppKit_NS_NSStatusItem_NSStatusItem);
	ZEPHIR_INIT(AppKit_NS_NSStepperCell_NSStepperCell);
	ZEPHIR_INIT(AppKit_NS_NSStepper_NSStepper);
	ZEPHIR_INIT(AppKit_NS_NSSwitch_NSSwitch);
	ZEPHIR_INIT(AppKit_NS_NSTabViewItem_NSTabViewItem);
	ZEPHIR_INIT(AppKit_NS_NSTabView_NSTabView);
	ZEPHIR_INIT(AppKit_NS_NSTableCellView_NSTableCellView);
	ZEPHIR_INIT(AppKit_NS_NSTableColumn_NSTableColumn);
	ZEPHIR_INIT(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell);
	ZEPHIR_INIT(AppKit_NS_NSTableHeaderView_NSTableHeaderView);
	ZEPHIR_INIT(AppKit_NS_NSTableRowView_NSTableRowView);
	ZEPHIR_INIT(AppKit_NS_NSTableView_NSTableView);
	ZEPHIR_INIT(AppKit_NS_NSTextContainer_NSTextContainer);
	ZEPHIR_INIT(AppKit_NS_NSTextFieldCell_NSTextFieldCell);
	ZEPHIR_INIT(AppKit_NS_NSTextField_NSTextField);
	ZEPHIR_INIT(AppKit_NS_NSTextStorage_NSTextStorage);
	ZEPHIR_INIT(AppKit_NS_NSTextView_NSTextView);
	ZEPHIR_INIT(AppKit_NS_NSText_NSText);
	ZEPHIR_INIT(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup);
	ZEPHIR_INIT(AppKit_NS_NSToolbarItem_NSToolbarItem);
	ZEPHIR_INIT(AppKit_NS_NSToolbar_NSToolbar);
	ZEPHIR_INIT(AppKit_NS_NSURL_NSURL);
	ZEPHIR_INIT(AppKit_NS_NSViewController_NSViewController);
	ZEPHIR_INIT(AppKit_NS_NSView_NSView);
	ZEPHIR_INIT(AppKit_NS_NSVisualEffectView_NSVisualEffectView);
	ZEPHIR_INIT(AppKit_NS_NSWindow_NSWindow);
	ZEPHIR_INIT(AppKit_QuartzCore_CALayer_CALayer);
	
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(appkit)
{
	
	zephir_deinitialize_memory();
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_appkit_globals *appkit_globals)
{
	appkit_globals->initialized = 0;

	/* Cache Enabled */
	appkit_globals->cache_enabled = 1;

	/* Recursive Lock */
	appkit_globals->recursive_lock = 0;

	/* Static cache */
	memset(appkit_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);

	
	
}

/**
 * Initialize globals only on each thread started
 */
static void php_zephir_init_module_globals(zend_appkit_globals *appkit_globals)
{
	
}

static PHP_RINIT_FUNCTION(appkit)
{
	zend_appkit_globals *appkit_globals_ptr;
	appkit_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(appkit_globals_ptr);
	zephir_initialize_memory(appkit_globals_ptr);

	
	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(appkit)
{
	
	zephir_deinitialize_memory();
	return SUCCESS;
}



static PHP_MINFO_FUNCTION(appkit)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_APPKIT_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_APPKIT_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_APPKIT_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_APPKIT_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_APPKIT_ZEPVERSION);
	php_info_print_table_end();
	
	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(appkit)
{
#if defined(COMPILE_DL_APPKIT) && defined(ZTS)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif

	php_zephir_init_globals(appkit_globals);
	php_zephir_init_module_globals(appkit_globals);
}

static PHP_GSHUTDOWN_FUNCTION(appkit)
{
	
}


zend_function_entry php_appkit_functions[] = {
	ZEND_FE_END

};

static const zend_module_dep php_appkit_deps[] = {
	
	ZEND_MOD_END
};

zend_module_entry appkit_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	php_appkit_deps,
	PHP_APPKIT_EXTNAME,
	php_appkit_functions,
	PHP_MINIT(appkit),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(appkit),
#else
	NULL,
#endif
	PHP_RINIT(appkit),
	PHP_RSHUTDOWN(appkit),
	PHP_MINFO(appkit),
	PHP_APPKIT_VERSION,
	ZEND_MODULE_GLOBALS(appkit),
	PHP_GINIT(appkit),
	PHP_GSHUTDOWN(appkit),
#ifdef ZEPHIR_POST_REQUEST
	PHP_PRSHUTDOWN(appkit),
#else
	NULL,
#endif
	STANDARD_MODULE_PROPERTIES_EX
};

/* implement standard "stub" routine to introduce ourselves to Zend */
#ifdef COMPILE_DL_APPKIT
# ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
# endif
ZEND_GET_MODULE(appkit)
#endif

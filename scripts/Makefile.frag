# Objective-C bridge — phpize does not emit correct rules for .m sources.
NS_OBJC_CFLAGS = -fobjc-arc -x objective-c -Wno-deprecated-declarations

$(builddir)/src/ns-app.lo: $(srcdir)/src/ns-app.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-app.m -o $@

$(builddir)/src/ns-window.lo: $(srcdir)/src/ns-window.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-window.m -o $@

$(builddir)/src/ns-view.lo: $(srcdir)/src/ns-view.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-view.m -o $@

$(builddir)/src/ns-menu.lo: $(srcdir)/src/ns-menu.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-menu.m -o $@

$(builddir)/src/ns-button.lo: $(srcdir)/src/ns-button.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-button.m -o $@

$(builddir)/src/ns-switch.lo: $(srcdir)/src/ns-switch.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-switch.m -o $@

$(builddir)/src/ns-slider.lo: $(srcdir)/src/ns-slider.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-slider.m -o $@

$(builddir)/src/ns-stepper.lo: $(srcdir)/src/ns-stepper.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-stepper.m -o $@

$(builddir)/src/ns-progressindicator.lo: $(srcdir)/src/ns-progressindicator.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-progressindicator.m -o $@

$(builddir)/src/ns-popupbutton.lo: $(srcdir)/src/ns-popupbutton.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-popupbutton.m -o $@

$(builddir)/src/ns-combobox.lo: $(srcdir)/src/ns-combobox.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-combobox.m -o $@

$(builddir)/src/ns-segmentedcontrol.lo: $(srcdir)/src/ns-segmentedcontrol.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-segmentedcontrol.m -o $@

$(builddir)/src/ns-textfield.lo: $(srcdir)/src/ns-textfield.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textfield.m -o $@

$(builddir)/src/ns-securetextfield.lo: $(srcdir)/src/ns-securetextfield.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-securetextfield.m -o $@

$(builddir)/src/ns-textview.lo: $(srcdir)/src/ns-textview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textview.m -o $@

$(builddir)/src/ns-colorwell.lo: $(srcdir)/src/ns-colorwell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-colorwell.m -o $@

$(builddir)/src/ns-datepicker.lo: $(srcdir)/src/ns-datepicker.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-datepicker.m -o $@

$(builddir)/src/ns-imageview.lo: $(srcdir)/src/ns-imageview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-imageview.m -o $@

$(builddir)/src/ns-box.lo: $(srcdir)/src/ns-box.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-box.m -o $@

$(builddir)/src/ns-stackview.lo: $(srcdir)/src/ns-stackview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-stackview.m -o $@

$(builddir)/src/ns-scrollview.lo: $(srcdir)/src/ns-scrollview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-scrollview.m -o $@

$(builddir)/src/ns-splitview.lo: $(srcdir)/src/ns-splitview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-splitview.m -o $@

$(builddir)/src/ns-tabview.lo: $(srcdir)/src/ns-tabview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tabview.m -o $@

$(builddir)/src/ns-gridview.lo: $(srcdir)/src/ns-gridview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-gridview.m -o $@

$(builddir)/src/ns-tableview.lo: $(srcdir)/src/ns-tableview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tableview.m -o $@

$(builddir)/src/ns-outlineview.lo: $(srcdir)/src/ns-outlineview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-outlineview.m -o $@

$(builddir)/src/ns-collectionview.lo: $(srcdir)/src/ns-collectionview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-collectionview.m -o $@

$(builddir)/src/ns-toolbar.lo: $(srcdir)/src/ns-toolbar.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-toolbar.m -o $@

$(builddir)/src/ns-popover.lo: $(srcdir)/src/ns-popover.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-popover.m -o $@

$(builddir)/src/ns-statusitem.lo: $(srcdir)/src/ns-statusitem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-statusitem.m -o $@

$(builddir)/src/ns-alert.lo: $(srcdir)/src/ns-alert.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-alert.m -o $@

$(builddir)/src/ns-openpanel.lo: $(srcdir)/src/ns-openpanel.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-openpanel.m -o $@

$(builddir)/src/ns-savepanel.lo: $(srcdir)/src/ns-savepanel.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-savepanel.m -o $@

$(builddir)/src/ns-event.lo: $(srcdir)/src/ns-event.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-event.m -o $@

$(builddir)/src/ns-responder.lo: $(srcdir)/src/ns-responder.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-responder.m -o $@

$(builddir)/src/ns-control.lo: $(srcdir)/src/ns-control.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-control.m -o $@

$(builddir)/src/ns-cell.lo: $(srcdir)/src/ns-cell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-cell.m -o $@

$(builddir)/src/ns-actioncell.lo: $(srcdir)/src/ns-actioncell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-actioncell.m -o $@

$(builddir)/src/ns-viewcontroller.lo: $(srcdir)/src/ns-viewcontroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-viewcontroller.m -o $@

$(builddir)/src/ns-windowcontroller.lo: $(srcdir)/src/ns-windowcontroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-windowcontroller.m -o $@

$(builddir)/src/ns-panel.lo: $(srcdir)/src/ns-panel.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-panel.m -o $@

$(builddir)/src/ns-screen.lo: $(srcdir)/src/ns-screen.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-screen.m -o $@

$(builddir)/src/ns-cursor.lo: $(srcdir)/src/ns-cursor.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-cursor.m -o $@

$(builddir)/src/ns-trackingarea.lo: $(srcdir)/src/ns-trackingarea.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-trackingarea.m -o $@

$(builddir)/src/ns-touch.lo: $(srcdir)/src/ns-touch.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-touch.m -o $@

$(builddir)/src/ns-gesturerecognizer.lo: $(srcdir)/src/ns-gesturerecognizer.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-gesturerecognizer.m -o $@

$(builddir)/src/ns-clickgesturerecognizer.lo: $(srcdir)/src/ns-clickgesturerecognizer.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-clickgesturerecognizer.m -o $@

$(builddir)/src/ns-pangesturerecognizer.lo: $(srcdir)/src/ns-pangesturerecognizer.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-pangesturerecognizer.m -o $@

$(builddir)/src/ns-pressgesturerecognizer.lo: $(srcdir)/src/ns-pressgesturerecognizer.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-pressgesturerecognizer.m -o $@

$(builddir)/src/ns-rotationgesturerecognizer.lo: $(srcdir)/src/ns-rotationgesturerecognizer.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-rotationgesturerecognizer.m -o $@

$(builddir)/src/ns-magnificationgesturerecognizer.lo: $(srcdir)/src/ns-magnificationgesturerecognizer.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-magnificationgesturerecognizer.m -o $@

$(builddir)/src/ns-appearance.lo: $(srcdir)/src/ns-appearance.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-appearance.m -o $@

$(builddir)/src/ns-color.lo: $(srcdir)/src/ns-color.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-color.m -o $@

$(builddir)/src/ns-colorspace.lo: $(srcdir)/src/ns-colorspace.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-colorspace.m -o $@

$(builddir)/src/ns-colorlist.lo: $(srcdir)/src/ns-colorlist.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-colorlist.m -o $@

$(builddir)/src/ns-colorsampler.lo: $(srcdir)/src/ns-colorsampler.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-colorsampler.m -o $@

$(builddir)/src/ns-colorpanel.lo: $(srcdir)/src/ns-colorpanel.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-colorpanel.m -o $@

$(builddir)/src/ns-colorpicker.lo: $(srcdir)/src/ns-colorpicker.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-colorpicker.m -o $@

$(builddir)/src/ns-imagerep.lo: $(srcdir)/src/ns-imagerep.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-imagerep.m -o $@

$(builddir)/src/ns-image.lo: $(srcdir)/src/ns-image.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-image.m -o $@

$(builddir)/src/ns-bitmapimagerep.lo: $(srcdir)/src/ns-bitmapimagerep.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-bitmapimagerep.m -o $@

$(builddir)/src/ns-cachedimagerep.lo: $(srcdir)/src/ns-cachedimagerep.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-cachedimagerep.m -o $@

$(builddir)/src/ns-ciimagerep.lo: $(srcdir)/src/ns-ciimagerep.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-ciimagerep.m -o $@

$(builddir)/src/ns-epsimagerep.lo: $(srcdir)/src/ns-epsimagerep.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-epsimagerep.m -o $@

$(builddir)/src/ns-pdfimagerep.lo: $(srcdir)/src/ns-pdfimagerep.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-pdfimagerep.m -o $@

$(builddir)/src/ns-customimagerep.lo: $(srcdir)/src/ns-customimagerep.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-customimagerep.m -o $@

$(builddir)/src/ns-font.lo: $(srcdir)/src/ns-font.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-font.m -o $@

$(builddir)/src/ns-fontdescriptor.lo: $(srcdir)/src/ns-fontdescriptor.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-fontdescriptor.m -o $@

$(builddir)/src/ns-fontmanager.lo: $(srcdir)/src/ns-fontmanager.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-fontmanager.m -o $@

$(builddir)/src/ns-fontpanel.lo: $(srcdir)/src/ns-fontpanel.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-fontpanel.m -o $@

$(builddir)/src/ns-fontcollection.lo: $(srcdir)/src/ns-fontcollection.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-fontcollection.m -o $@

$(builddir)/src/ns-bezierpath.lo: $(srcdir)/src/ns-bezierpath.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-bezierpath.m -o $@

$(builddir)/src/ns-gradient.lo: $(srcdir)/src/ns-gradient.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-gradient.m -o $@

$(builddir)/src/ns-shadow.lo: $(srcdir)/src/ns-shadow.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-shadow.m -o $@

$(builddir)/src/ns-graphicscontext.lo: $(srcdir)/src/ns-graphicscontext.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-graphicscontext.m -o $@

$(builddir)/src/ns-animationcontext.lo: $(srcdir)/src/ns-animationcontext.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-animationcontext.m -o $@

$(builddir)/src/ns-animation.lo: $(srcdir)/src/ns-animation.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-animation.m -o $@

$(builddir)/src/ns-viewanimation.lo: $(srcdir)/src/ns-viewanimation.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-viewanimation.m -o $@

$(builddir)/src/ns-text.lo: $(srcdir)/src/ns-text.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-text.m -o $@

$(builddir)/src/ns-textfieldcell.lo: $(srcdir)/src/ns-textfieldcell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textfieldcell.m -o $@

$(builddir)/src/ns-securetextfieldcell.lo: $(srcdir)/src/ns-securetextfieldcell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-securetextfieldcell.m -o $@

$(builddir)/src/ns-textcontainer.lo: $(srcdir)/src/ns-textcontainer.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textcontainer.m -o $@

$(builddir)/src/ns-layoutmanager.lo: $(srcdir)/src/ns-layoutmanager.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-layoutmanager.m -o $@

$(builddir)/src/ns-textstorage.lo: $(srcdir)/src/ns-textstorage.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textstorage.m -o $@

$(builddir)/src/ns-textinputcontext.lo: $(srcdir)/src/ns-textinputcontext.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textinputcontext.m -o $@

$(builddir)/src/ns-searchfield.lo: $(srcdir)/src/ns-searchfield.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-searchfield.m -o $@

$(builddir)/src/ns-searchfieldcell.lo: $(srcdir)/src/ns-searchfieldcell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-searchfieldcell.m -o $@

$(builddir)/src/ns-tokenfield.lo: $(srcdir)/src/ns-tokenfield.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tokenfield.m -o $@

$(builddir)/src/ns-tokenfieldcell.lo: $(srcdir)/src/ns-tokenfieldcell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tokenfieldcell.m -o $@

$(builddir)/src/ns-combobutton.lo: $(srcdir)/src/ns-combobutton.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-combobutton.m -o $@

$(builddir)/src/ns-textfinder.lo: $(srcdir)/src/ns-textfinder.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textfinder.m -o $@

$(builddir)/src/ns-spellchecker.lo: $(srcdir)/src/ns-spellchecker.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-spellchecker.m -o $@

$(builddir)/src/ns-textattachment.lo: $(srcdir)/src/ns-textattachment.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textattachment.m -o $@

$(builddir)/src/ns-textattachmentcell.lo: $(srcdir)/src/ns-textattachmentcell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textattachmentcell.m -o $@

$(builddir)/src/ns-textlist.lo: $(srcdir)/src/ns-textlist.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textlist.m -o $@

$(builddir)/src/ns-texttable.lo: $(srcdir)/src/ns-texttable.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-texttable.m -o $@


$(builddir)/src/ns-textblock.lo: $(srcdir)/src/ns-textblock.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textblock.m -o $@

$(builddir)/src/ns-paragraphstyle.lo: $(srcdir)/src/ns-paragraphstyle.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-paragraphstyle.m -o $@

$(builddir)/src/ns-typesetter.lo: $(srcdir)/src/ns-typesetter.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-typesetter.m -o $@

$(builddir)/src/ns-atstypesetter.lo: $(srcdir)/src/ns-atstypesetter.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-atstypesetter.m -o $@

$(builddir)/src/ns-glyphgenerator.lo: $(srcdir)/src/ns-glyphgenerator.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-glyphgenerator.m -o $@

$(builddir)/src/ns-textlayoutmanager.lo: $(srcdir)/src/ns-textlayoutmanager.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textlayoutmanager.m -o $@

$(builddir)/src/ns-textcontentmanager.lo: $(srcdir)/src/ns-textcontentmanager.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textcontentmanager.m -o $@

$(builddir)/src/ns-textcontentstorage.lo: $(srcdir)/src/ns-textcontentstorage.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textcontentstorage.m -o $@

$(builddir)/src/ns-textlayoutfragment.lo: $(srcdir)/src/ns-textlayoutfragment.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textlayoutfragment.m -o $@

$(builddir)/src/ns-textlinefragment.lo: $(srcdir)/src/ns-textlinefragment.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textlinefragment.m -o $@

$(builddir)/src/ns-textelement.lo: $(srcdir)/src/ns-textelement.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textelement.m -o $@

$(builddir)/src/ns-textparagraph.lo: $(srcdir)/src/ns-textparagraph.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textparagraph.m -o $@

$(builddir)/src/ns-textselection.lo: $(srcdir)/src/ns-textselection.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textselection.m -o $@

$(builddir)/src/ns-textviewportlayoutcontroller.lo: $(srcdir)/src/ns-textviewportlayoutcontroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textviewportlayoutcontroller.m -o $@

$(builddir)/src/ns-adaptiveimageglyph.lo: $(srcdir)/src/ns-adaptiveimageglyph.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-adaptiveimageglyph.m -o $@

$(builddir)/src/ns-textinsertionindicator.lo: $(srcdir)/src/ns-textinsertionindicator.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textinsertionindicator.m -o $@

$(builddir)/src/ns-textcheckingcontroller.lo: $(srcdir)/src/ns-textcheckingcontroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textcheckingcontroller.m -o $@

$(builddir)/src/ns-buttoncell.lo: $(srcdir)/src/ns-buttoncell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-buttoncell.m -o $@

$(builddir)/src/ns-popupbuttoncell.lo: $(srcdir)/src/ns-popupbuttoncell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-popupbuttoncell.m -o $@

$(builddir)/src/ns-slidercell.lo: $(srcdir)/src/ns-slidercell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-slidercell.m -o $@

$(builddir)/src/ns-steppercell.lo: $(srcdir)/src/ns-steppercell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-steppercell.m -o $@

$(builddir)/src/ns-segmentedcell.lo: $(srcdir)/src/ns-segmentedcell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-segmentedcell.m -o $@

$(builddir)/src/ns-pathcontrol.lo: $(srcdir)/src/ns-pathcontrol.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-pathcontrol.m -o $@

$(builddir)/src/ns-pathcell.lo: $(srcdir)/src/ns-pathcell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-pathcell.m -o $@

$(builddir)/src/ns-pathcomponentcell.lo: $(srcdir)/src/ns-pathcomponentcell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-pathcomponentcell.m -o $@

$(builddir)/src/ns-dictionary.lo: $(srcdir)/src/ns-dictionary.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-dictionary.m -o $@

$(builddir)/src/ns-levelindicator.lo: $(srcdir)/src/ns-levelindicator.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-levelindicator.m -o $@

$(builddir)/src/ns-levelindicatorcell.lo: $(srcdir)/src/ns-levelindicatorcell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-levelindicatorcell.m -o $@

$(builddir)/src/ns-form.lo: $(srcdir)/src/ns-form.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-form.m -o $@

$(builddir)/src/ns-formcell.lo: $(srcdir)/src/ns-formcell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-formcell.m -o $@

$(builddir)/src/ns-matrix.lo: $(srcdir)/src/ns-matrix.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-matrix.m -o $@

$(builddir)/src/ns-browser.lo: $(srcdir)/src/ns-browser.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-browser.m -o $@

$(builddir)/src/ns-browsercell.lo: $(srcdir)/src/ns-browsercell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-browsercell.m -o $@

$(builddir)/src/ns-predicateeditor.lo: $(srcdir)/src/ns-predicateeditor.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-predicateeditor.m -o $@

$(builddir)/src/ns-ruleeditor.lo: $(srcdir)/src/ns-ruleeditor.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-ruleeditor.m -o $@

$(builddir)/src/ns-statusbarbutton.lo: $(srcdir)/src/ns-statusbarbutton.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-statusbarbutton.m -o $@

$(builddir)/src/ns-tablecolumn.lo: $(srcdir)/src/ns-tablecolumn.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tablecolumn.m -o $@

$(builddir)/src/ns-tableheaderview.lo: $(srcdir)/src/ns-tableheaderview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tableheaderview.m -o $@

$(builddir)/src/ns-tableheadercell.lo: $(srcdir)/src/ns-tableheadercell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tableheadercell.m -o $@

$(builddir)/src/ns-tablerowview.lo: $(srcdir)/src/ns-tablerowview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tablerowview.m -o $@

$(builddir)/src/ns-tablecellview.lo: $(srcdir)/src/ns-tablecellview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tablecellview.m -o $@

$(builddir)/src/ns-tableviewdiffable.lo: $(srcdir)/src/ns-tableviewdiffable.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tableviewdiffable.m -o $@

$(builddir)/src/ns-collectionviewitem.lo: $(srcdir)/src/ns-collectionviewitem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-collectionviewitem.m -o $@

$(builddir)/src/ns-collectionviewlayout.lo: $(srcdir)/src/ns-collectionviewlayout.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-collectionviewlayout.m -o $@

$(builddir)/src/ns-collectionviewflowlayout.lo: $(srcdir)/src/ns-collectionviewflowlayout.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-collectionviewflowlayout.m -o $@

$(builddir)/src/ns-collectionviewgridlayout.lo: $(srcdir)/src/ns-collectionviewgridlayout.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-collectionviewgridlayout.m -o $@

$(builddir)/src/ns-collectionviewcompositionallayout.lo: $(srcdir)/src/ns-collectionviewcompositionallayout.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-collectionviewcompositionallayout.m -o $@

$(builddir)/src/ns-collectionviewtransitionlayout.lo: $(srcdir)/src/ns-collectionviewtransitionlayout.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-collectionviewtransitionlayout.m -o $@

$(builddir)/src/ns-collectionviewdiffable.lo: $(srcdir)/src/ns-collectionviewdiffable.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-collectionviewdiffable.m -o $@

$(builddir)/src/ns-gridrow.lo: $(srcdir)/src/ns-gridrow.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-gridrow.m -o $@

$(builddir)/src/ns-gridcolumn.lo: $(srcdir)/src/ns-gridcolumn.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-gridcolumn.m -o $@

$(builddir)/src/ns-gridcell.lo: $(srcdir)/src/ns-gridcell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-gridcell.m -o $@

$(builddir)/src/ns-statusbar.lo: $(srcdir)/src/ns-statusbar.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-statusbar.m -o $@

$(builddir)/src/ns-document.lo: $(srcdir)/src/ns-document.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-document.m -o $@

$(builddir)/src/ns-documentcontroller.lo: $(srcdir)/src/ns-documentcontroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-documentcontroller.m -o $@

$(builddir)/src/ns-persistentdocument.lo: $(srcdir)/src/ns-persistentdocument.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-persistentdocument.m -o $@

$(builddir)/src/ns-helpmanager.lo: $(srcdir)/src/ns-helpmanager.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-helpmanager.m -o $@

$(builddir)/src/ns-nib.lo: $(srcdir)/src/ns-nib.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-nib.m -o $@

$(builddir)/src/ns-storyboard.lo: $(srcdir)/src/ns-storyboard.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-storyboard.m -o $@

$(builddir)/src/ns-runningapplication.lo: $(srcdir)/src/ns-runningapplication.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-runningapplication.m -o $@

$(builddir)/src/ns-workspace.lo: $(srcdir)/src/ns-workspace.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-workspace.m -o $@

$(builddir)/src/ns-objectcontroller.lo: $(srcdir)/src/ns-objectcontroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-objectcontroller.m -o $@

$(builddir)/src/ns-arraycontroller.lo: $(srcdir)/src/ns-arraycontroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-arraycontroller.m -o $@

$(builddir)/src/ns-treecontroller.lo: $(srcdir)/src/ns-treecontroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-treecontroller.m -o $@

$(builddir)/src/ns-dictionarycontroller.lo: $(srcdir)/src/ns-dictionarycontroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-dictionarycontroller.m -o $@

$(builddir)/src/ns-userdefaultscontroller.lo: $(srcdir)/src/ns-userdefaultscontroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-userdefaultscontroller.m -o $@

$(builddir)/src/ns-controller.lo: $(srcdir)/src/ns-controller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-controller.m -o $@

$(builddir)/src/ns-clipview.lo: $(srcdir)/src/ns-clipview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-clipview.m -o $@

$(builddir)/src/ns-scroller.lo: $(srcdir)/src/ns-scroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-scroller.m -o $@

$(builddir)/src/ns-rulerview.lo: $(srcdir)/src/ns-rulerview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-rulerview.m -o $@

$(builddir)/src/ns-rulermarker.lo: $(srcdir)/src/ns-rulermarker.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-rulermarker.m -o $@

$(builddir)/src/ns-splitviewitem.lo: $(srcdir)/src/ns-splitviewitem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-splitviewitem.m -o $@

$(builddir)/src/ns-splitviewcontroller.lo: $(srcdir)/src/ns-splitviewcontroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-splitviewcontroller.m -o $@

$(builddir)/src/ns-tabviewitem.lo: $(srcdir)/src/ns-tabviewitem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tabviewitem.m -o $@

$(builddir)/src/ns-tabviewcontroller.lo: $(srcdir)/src/ns-tabviewcontroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tabviewcontroller.m -o $@

$(builddir)/src/ns-pagecontroller.lo: $(srcdir)/src/ns-pagecontroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-pagecontroller.m -o $@

$(builddir)/src/ns-visualeffectview.lo: $(srcdir)/src/ns-visualeffectview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-visualeffectview.m -o $@

$(builddir)/src/ns-menuitem.lo: $(srcdir)/src/ns-menuitem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-menuitem.m -o $@

$(builddir)/src/ns-menutoolbaritem.lo: $(srcdir)/src/ns-menutoolbaritem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-menutoolbaritem.m -o $@

$(builddir)/src/ns-toolbaritem.lo: $(srcdir)/src/ns-toolbaritem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-toolbaritem.m -o $@

$(builddir)/src/ns-toolbaritemgroup.lo: $(srcdir)/src/ns-toolbaritemgroup.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-toolbaritemgroup.m -o $@

$(builddir)/src/ns-searchtoolbaritem.lo: $(srcdir)/src/ns-searchtoolbaritem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-searchtoolbaritem.m -o $@

$(builddir)/src/ns-trackingseparatortoolbaritem.lo: $(srcdir)/src/ns-trackingseparatortoolbaritem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-trackingseparatortoolbaritem.m -o $@

$(builddir)/src/ns-sharingservicepickertoolbaritem.lo: $(srcdir)/src/ns-sharingservicepickertoolbaritem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-sharingservicepickertoolbaritem.m -o $@

$(builddir)/src/ns-scrubber.lo: $(srcdir)/src/ns-scrubber.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-scrubber.m -o $@

$(builddir)/src/ns-scrubberarrangedview.lo: $(srcdir)/src/ns-scrubberarrangedview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-scrubberarrangedview.m -o $@

$(builddir)/src/ns-scrubberselectionview.lo: $(srcdir)/src/ns-scrubberselectionview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-scrubberselectionview.m -o $@

$(builddir)/src/ns-scrubberitemview.lo: $(srcdir)/src/ns-scrubberitemview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-scrubberitemview.m -o $@

$(builddir)/src/ns-scrubberlayout.lo: $(srcdir)/src/ns-scrubberlayout.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-scrubberlayout.m -o $@

$(builddir)/src/ns-scrubberflowlayout.lo: $(srcdir)/src/ns-scrubberflowlayout.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-scrubberflowlayout.m -o $@

$(builddir)/src/ns-scrubberproportionallayout.lo: $(srcdir)/src/ns-scrubberproportionallayout.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-scrubberproportionallayout.m -o $@

$(builddir)/src/ns-pagelayout.lo: $(srcdir)/src/ns-pagelayout.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-pagelayout.m -o $@

$(builddir)/src/ns-printer.lo: $(srcdir)/src/ns-printer.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-printer.m -o $@

$(builddir)/src/ns-printinfo.lo: $(srcdir)/src/ns-printinfo.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-printinfo.m -o $@

$(builddir)/src/ns-printpanel.lo: $(srcdir)/src/ns-printpanel.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-printpanel.m -o $@

$(builddir)/src/ns-printoperation.lo: $(srcdir)/src/ns-printoperation.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-printoperation.m -o $@

$(builddir)/src/ns-touchbaritem.lo: $(srcdir)/src/ns-touchbaritem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-touchbaritem.m -o $@

$(builddir)/src/ns-touchbar.lo: $(srcdir)/src/ns-touchbar.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-touchbar.m -o $@

$(builddir)/src/ns-customtouchbaritem.lo: $(srcdir)/src/ns-customtouchbaritem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-customtouchbaritem.m -o $@

$(builddir)/src/ns-candidatelisttouchbaritem.lo: $(srcdir)/src/ns-candidatelisttouchbaritem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-candidatelisttouchbaritem.m -o $@

$(builddir)/src/ns-colorpickertouchbaritem.lo: $(srcdir)/src/ns-colorpickertouchbaritem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-colorpickertouchbaritem.m -o $@

$(builddir)/src/ns-grouptouchbaritem.lo: $(srcdir)/src/ns-grouptouchbaritem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-grouptouchbaritem.m -o $@

$(builddir)/src/ns-pickertouchbaritem.lo: $(srcdir)/src/ns-pickertouchbaritem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-pickertouchbaritem.m -o $@

$(builddir)/src/ns-sharingservicepickertouchbaritem.lo: $(srcdir)/src/ns-sharingservicepickertouchbaritem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-sharingservicepickertouchbaritem.m -o $@

$(builddir)/src/ns-slidertouchbaritem.lo: $(srcdir)/src/ns-slidertouchbaritem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-slidertouchbaritem.m -o $@

$(builddir)/src/ns-steppertouchbaritem.lo: $(srcdir)/src/ns-steppertouchbaritem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-steppertouchbaritem.m -o $@

$(builddir)/src/ns-popovertouchbaritem.lo: $(srcdir)/src/ns-popovertouchbaritem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-popovertouchbaritem.m -o $@

$(builddir)/src/ns-buttontouchbaritem.lo: $(srcdir)/src/ns-buttontouchbaritem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-buttontouchbaritem.m -o $@

$(builddir)/src/ns-storyboardsegue.lo: $(srcdir)/src/ns-storyboardsegue.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-storyboardsegue.m -o $@

$(builddir)/src/ns-pasteboard.lo: $(srcdir)/src/ns-pasteboard.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-pasteboard.m -o $@

$(builddir)/src/ns-pasteboarditem.lo: $(srcdir)/src/ns-pasteboarditem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-pasteboarditem.m -o $@

$(builddir)/src/ns-draggingitem.lo: $(srcdir)/src/ns-draggingitem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-draggingitem.m -o $@

$(builddir)/src/ns-draggingsession.lo: $(srcdir)/src/ns-draggingsession.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-draggingsession.m -o $@

$(builddir)/src/ns-draggingimagecomponent.lo: $(srcdir)/src/ns-draggingimagecomponent.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-draggingimagecomponent.m -o $@

$(builddir)/src/ns-filepromiseprovider.lo: $(srcdir)/src/ns-filepromiseprovider.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-filepromiseprovider.m -o $@

$(builddir)/src/ns-filepromisereceiver.lo: $(srcdir)/src/ns-filepromisereceiver.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-filepromisereceiver.m -o $@

$(builddir)/src/ns-sharingservice.lo: $(srcdir)/src/ns-sharingservice.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-sharingservice.m -o $@

$(builddir)/src/ns-sharingservicepicker.lo: $(srcdir)/src/ns-sharingservicepicker.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-sharingservicepicker.m -o $@

$(builddir)/src/ns-docktile.lo: $(srcdir)/src/ns-docktile.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-docktile.m -o $@

$(builddir)/src/ns-alignmentfeedbackfilter.lo: $(srcdir)/src/ns-alignmentfeedbackfilter.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-alignmentfeedbackfilter.m -o $@

$(builddir)/src/ns-pressureconfiguration.lo: $(srcdir)/src/ns-pressureconfiguration.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-pressureconfiguration.m -o $@

$(builddir)/src/ns-layoutconstraint.lo: $(srcdir)/src/ns-layoutconstraint.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-layoutconstraint.m -o $@

$(builddir)/src/ns-layoutanchor.lo: $(srcdir)/src/ns-layoutanchor.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-layoutanchor.m -o $@

$(builddir)/src/ns-layoutguide.lo: $(srcdir)/src/ns-layoutguide.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-layoutguide.m -o $@

$(builddir)/src/ns-sound.lo: $(srcdir)/src/ns-sound.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-sound.m -o $@

$(builddir)/src/ns-speechsynthesizer.lo: $(srcdir)/src/ns-speechsynthesizer.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-speechsynthesizer.m -o $@

$(builddir)/src/ns-speechrecognizer.lo: $(srcdir)/src/ns-speechrecognizer.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-speechrecognizer.m -o $@

$(builddir)/src/ns-hapticfeedbackmanager.lo: $(srcdir)/src/ns-hapticfeedbackmanager.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-hapticfeedbackmanager.m -o $@

$(builddir)/src/ns-accessibilityelement.lo: $(srcdir)/src/ns-accessibilityelement.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-accessibilityelement.m -o $@

$(builddir)/src/ns-accessibilitycustomrotor.lo: $(srcdir)/src/ns-accessibilitycustomrotor.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-accessibilitycustomrotor.m -o $@

$(builddir)/src/ns-windowtab.lo: $(srcdir)/src/ns-windowtab.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-windowtab.m -o $@

$(builddir)/src/ns-windowtabgroup.lo: $(srcdir)/src/ns-windowtabgroup.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-windowtabgroup.m -o $@

$(builddir)/src/ns-titlebaraccessoryviewcontroller.lo: $(srcdir)/src/ns-titlebaraccessoryviewcontroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-titlebaraccessoryviewcontroller.m -o $@

$(builddir)/src/ns-graphics.lo: $(srcdir)/src/ns-graphics.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-graphics.m -o $@

$(builddir)/src/ns-protocol.lo: $(srcdir)/src/ns-protocol.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-protocol.m -o $@

shared_objects_appkit += src/ns-app.lo src/ns-window.lo src/ns-view.lo src/ns-menu.lo src/ns-button.lo src/ns-switch.lo src/ns-slider.lo src/ns-stepper.lo src/ns-progressindicator.lo src/ns-popupbutton.lo src/ns-combobox.lo src/ns-segmentedcontrol.lo src/ns-textfield.lo src/ns-securetextfield.lo src/ns-textview.lo src/ns-colorwell.lo src/ns-datepicker.lo src/ns-imageview.lo src/ns-box.lo src/ns-stackview.lo src/ns-scrollview.lo src/ns-splitview.lo src/ns-tabview.lo src/ns-gridview.lo src/ns-tableview.lo src/ns-outlineview.lo src/ns-collectionview.lo src/ns-toolbar.lo src/ns-popover.lo src/ns-statusitem.lo src/ns-alert.lo src/ns-openpanel.lo src/ns-savepanel.lo src/ns-event.lo src/ns-responder.lo src/ns-control.lo src/ns-cell.lo src/ns-actioncell.lo src/ns-viewcontroller.lo src/ns-windowcontroller.lo src/ns-panel.lo src/ns-screen.lo src/ns-cursor.lo src/ns-trackingarea.lo src/ns-touch.lo src/ns-gesturerecognizer.lo src/ns-clickgesturerecognizer.lo src/ns-pangesturerecognizer.lo src/ns-pressgesturerecognizer.lo src/ns-rotationgesturerecognizer.lo src/ns-magnificationgesturerecognizer.lo src/ns-appearance.lo src/ns-color.lo src/ns-colorspace.lo src/ns-colorlist.lo src/ns-colorsampler.lo src/ns-colorpanel.lo src/ns-colorpicker.lo src/ns-imagerep.lo src/ns-image.lo src/ns-bitmapimagerep.lo src/ns-cachedimagerep.lo src/ns-ciimagerep.lo src/ns-epsimagerep.lo src/ns-pdfimagerep.lo src/ns-customimagerep.lo src/ns-font.lo src/ns-fontdescriptor.lo src/ns-fontmanager.lo src/ns-fontpanel.lo src/ns-fontcollection.lo src/ns-bezierpath.lo src/ns-gradient.lo src/ns-shadow.lo src/ns-graphicscontext.lo src/ns-animationcontext.lo src/ns-animation.lo src/ns-viewanimation.lo src/ns-text.lo src/ns-textfieldcell.lo src/ns-securetextfieldcell.lo src/ns-textcontainer.lo src/ns-layoutmanager.lo src/ns-textstorage.lo src/ns-textinputcontext.lo src/ns-searchfield.lo src/ns-searchfieldcell.lo src/ns-tokenfield.lo src/ns-tokenfieldcell.lo src/ns-combobutton.lo src/ns-textfinder.lo src/ns-spellchecker.lo src/ns-textattachment.lo src/ns-textattachmentcell.lo src/ns-textlist.lo src/ns-texttable.lo src/ns-textblock.lo src/ns-paragraphstyle.lo src/ns-typesetter.lo src/ns-atstypesetter.lo src/ns-glyphgenerator.lo src/ns-textlayoutmanager.lo src/ns-textcontentmanager.lo src/ns-textcontentstorage.lo src/ns-textlayoutfragment.lo src/ns-textlinefragment.lo src/ns-textelement.lo src/ns-textparagraph.lo src/ns-textselection.lo src/ns-textviewportlayoutcontroller.lo src/ns-adaptiveimageglyph.lo src/ns-textinsertionindicator.lo src/ns-textcheckingcontroller.lo src/ns-buttoncell.lo src/ns-popupbuttoncell.lo src/ns-slidercell.lo src/ns-steppercell.lo src/ns-segmentedcell.lo src/ns-pathcontrol.lo src/ns-pathcell.lo src/ns-pathcomponentcell.lo src/ns-document.lo src/ns-documentcontroller.lo src/ns-persistentdocument.lo src/ns-helpmanager.lo src/ns-nib.lo src/ns-storyboard.lo src/ns-runningapplication.lo src/ns-dictionary.lo src/ns-levelindicator.lo src/ns-levelindicatorcell.lo src/ns-form.lo src/ns-formcell.lo src/ns-matrix.lo src/ns-browser.lo src/ns-browsercell.lo src/ns-predicateeditor.lo src/ns-ruleeditor.lo src/ns-statusbarbutton.lo src/ns-tablecolumn.lo src/ns-tableheaderview.lo src/ns-tableheadercell.lo src/ns-tablerowview.lo src/ns-tablecellview.lo src/ns-tableviewdiffable.lo src/ns-collectionviewitem.lo src/ns-collectionviewlayout.lo src/ns-collectionviewflowlayout.lo src/ns-collectionviewgridlayout.lo src/ns-collectionviewcompositionallayout.lo src/ns-collectionviewtransitionlayout.lo src/ns-collectionviewdiffable.lo src/ns-gridrow.lo src/ns-gridcolumn.lo src/ns-gridcell.lo src/ns-statusbar.lo src/ns-workspace.lo src/ns-objectcontroller.lo src/ns-arraycontroller.lo src/ns-treecontroller.lo src/ns-dictionarycontroller.lo src/ns-userdefaultscontroller.lo src/ns-controller.lo src/ns-clipview.lo src/ns-scroller.lo src/ns-rulerview.lo src/ns-rulermarker.lo src/ns-splitviewitem.lo src/ns-splitviewcontroller.lo src/ns-tabviewitem.lo src/ns-tabviewcontroller.lo src/ns-pagecontroller.lo src/ns-visualeffectview.lo src/ns-menuitem.lo src/ns-menutoolbaritem.lo src/ns-toolbaritem.lo src/ns-toolbaritemgroup.lo src/ns-searchtoolbaritem.lo src/ns-trackingseparatortoolbaritem.lo src/ns-sharingservicepickertoolbaritem.lo src/ns-scrubber.lo src/ns-scrubberarrangedview.lo src/ns-scrubberselectionview.lo src/ns-scrubberitemview.lo src/ns-scrubberlayout.lo src/ns-scrubberflowlayout.lo src/ns-scrubberproportionallayout.lo src/ns-pagelayout.lo src/ns-printer.lo src/ns-printinfo.lo src/ns-printpanel.lo src/ns-printoperation.lo src/ns-touchbaritem.lo src/ns-touchbar.lo src/ns-customtouchbaritem.lo src/ns-candidatelisttouchbaritem.lo src/ns-colorpickertouchbaritem.lo src/ns-grouptouchbaritem.lo src/ns-pickertouchbaritem.lo src/ns-sharingservicepickertouchbaritem.lo src/ns-slidertouchbaritem.lo src/ns-steppertouchbaritem.lo src/ns-popovertouchbaritem.lo src/ns-buttontouchbaritem.lo src/ns-storyboardsegue.lo src/ns-pasteboard.lo src/ns-pasteboarditem.lo src/ns-draggingitem.lo src/ns-draggingsession.lo src/ns-draggingimagecomponent.lo src/ns-filepromiseprovider.lo src/ns-filepromisereceiver.lo src/ns-sharingservice.lo src/ns-sharingservicepicker.lo src/ns-docktile.lo src/ns-alignmentfeedbackfilter.lo src/ns-pressureconfiguration.lo src/ns-layoutconstraint.lo src/ns-layoutanchor.lo src/ns-layoutguide.lo src/ns-sound.lo src/ns-speechsynthesizer.lo src/ns-speechrecognizer.lo src/ns-hapticfeedbackmanager.lo src/ns-accessibilityelement.lo src/ns-accessibilitycustomrotor.lo src/ns-windowtab.lo src/ns-windowtabgroup.lo src/ns-titlebaraccessoryviewcontroller.lo src/ns-graphics.lo src/ns-protocol.lo

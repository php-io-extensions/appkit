---
type: Architecture
title: C ABI surface
description: Opaque uintptr_t handles and ns_* entry points
resource: /config.json
tags: [appkit, abi, c]
status: draft
generated: { by: cursor-agent/grok-4.6, at: "2026-08-17T04:30:00Z" }
sources:
  - id: config
    resource: /config.json
    title: Zephir config (extra-sources)
  - id: patch
    resource: /scripts/patch-config-m4.py
    title: patch-config-m4.py
---

# Conventions

- Success/boolean outcomes: C `int` where `1` = true/success, `0` = false/failure (Zephir maps to `bool`).
- Native objects: `uintptr_t` opaque handles exposed to PHP as `int`; `0` means failure or null.
- Headers are C-linkage (`extern "C"`) and do not expose Objective-C types.
- Prefix: **`ns_*`** (not `mtl_*`). Files: `src/ns-*.{h,m}`.

# Modules (landed)

| Module | Headers | Owns |
|--------|---------|------|
| App | `ns-app.h` | `NSApplication` init / shared / poll / quit |
| Responder | `ns-responder.h` | `NSResponder` wrap / first-responder chain |
| Window | `ns-window.h` | `NSWindow` create / show / contentView / `setDidResize` PHP callback |
| WindowController | `ns-windowcontroller.h` | `NSWindowController` window lifecycle |
| View | `ns-view.h` | plain `NSView` tree (create, wrap, addSubview, frame) — no Metal present |
| ViewController | `ns-viewcontroller.h` | `NSViewController` view lifecycle |
| Control | `ns-control.h` | shared `NSControl` API on view-box handles |
| Cell | `ns-cell.h` | standalone `NSCell` objects |
| ActionCell | `ns-actioncell.h` | `NSActionCell` subclass of `NSCell` |
| Menu | `ns-menu.h` | `NSMenu` / `NSMenuItem` starting selectors |
| Font | `ns-font.h` | `NSFont` factories + metrics |
| FontDescriptor | `ns-fontdescriptor.h` | `NSFontDescriptor` match / convert |
| FontManager | `ns-fontmanager.h` | shared `NSFontManager` |
| FontPanel | `ns-fontpanel.h` | shared `NSFontPanel` |
| FontCollection | `ns-fontcollection.h` | `NSFontCollection` (+ mutable) |
| BezierPath | `ns-bezierpath.h` | `NSBezierPath` path construction and drawing |
| Gradient | `ns-gradient.h` | `NSGradient` linear/radial fills |
| Shadow | `ns-shadow.h` | `NSShadow` drop shadow attributes |
| GraphicsContext | `ns-graphicscontext.h` | `NSGraphicsContext` current context and rendering options |
| AnimationContext | `ns-animationcontext.h` | `NSAnimationContext` implicit animation grouping |
| Animation | `ns-animation.h` | `NSAnimation` timed animation base |
| ViewAnimation | `ns-viewanimation.h` | `NSViewAnimation` view/window fade and frame animations |
| Text | `ns-text.h` | `NSText` field editor (NSView subclass) |
| TextFieldCell | `ns-textfieldcell.h` | `NSTextFieldCell` |
| SecureTextFieldCell | `ns-securetextfieldcell.h` | `NSSecureTextFieldCell` |
| TextContainer | `ns-textcontainer.h` | `NSTextContainer` |
| LayoutManager | `ns-layoutmanager.h` | `NSLayoutManager` |
| TextStorage | `ns-textstorage.h` | `NSTextStorage` |
| TextInputContext | `ns-textinputcontext.h` | `NSTextInputContext` |
| SearchField | `ns-searchfield.h` | `NSSearchField` (view-box) |
| SearchFieldCell | `ns-searchfieldcell.h` | `NSSearchFieldCell` |
| TokenField | `ns-tokenfield.h` | `NSTokenField` (view-box) |
| TokenFieldCell | `ns-tokenfieldcell.h` | `NSTokenFieldCell` |
| ComboButton | `ns-combobutton.h` | `NSComboButton` (view-box) |
| TextFinder | `ns-textfinder.h` | `NSTextFinder` |
| SpellChecker | `ns-spellchecker.h` | shared `NSSpellChecker` |
| TextAttachment | `ns-textattachment.h` | `NSTextAttachment` |
| TextAttachmentCell | `ns-textattachmentcell.h` | `NSTextAttachmentCell` |
| TextList | `ns-textlist.h` | `NSTextList` |
| TextTable | `ns-texttable.h` | `NSTextTable` |

| AdaptiveImageGlyph | `ns-adaptiveimageglyph.h` | `NSAdaptiveImageGlyph` |
| TextInsertionIndicator | `ns-textinsertionindicator.h` | `NSTextInsertionIndicator` (view-box) |
| TextCheckingController | `ns-textcheckingcontroller.h` | `NSTextCheckingController` |
| ButtonCell | `ns-buttoncell.h` | `NSButtonCell` |
| PopUpButtonCell | `ns-popupbuttoncell.h` | `NSPopUpButtonCell` |
| SliderCell | `ns-slidercell.h` | `NSSliderCell` |
| StepperCell | `ns-steppercell.h` | `NSStepperCell` |
| SegmentedCell | `ns-segmentedcell.h` | `NSSegmentedCell` |
| PathControl | `ns-pathcontrol.h` | `NSPathControl` (view-box) |
| PathCell | `ns-pathcell.h` | `NSPathCell` |
| PathComponentCell | `ns-pathcomponentcell.h` | `NSPathComponentCell` |
| Dictionary | `ns-dictionary.h` | `NSDictionary` / `NSMutableDictionary` handles |
| LevelIndicator | `ns-levelindicator.h` | `NSLevelIndicator` (view-box) |
| LevelIndicatorCell | `ns-levelindicatorcell.h` | `NSLevelIndicatorCell` |
| Form | `ns-form.h` | `NSForm` (deprecated view-box) |
| FormCell | `ns-formcell.h` | `NSFormCell` |
| Matrix | `ns-matrix.h` | `NSMatrix` (deprecated view-box) |
| Browser | `ns-browser.h` | `NSBrowser` (view-box) |
| BrowserCell | `ns-browsercell.h` | `NSBrowserCell` |
| PredicateEditor | `ns-predicateeditor.h` | `NSPredicateEditor` (view-box) |
| RuleEditor | `ns-ruleeditor.h` | `NSRuleEditor` (view-box) |
| StatusBarButton | `ns-statusbarbutton.h` | `NSStatusBarButton` (view-box) |
| TableColumn | `ns-tablecolumn.h` | `NSTableColumn` |
| TableHeaderView | `ns-tableheaderview.h` | `NSTableHeaderView` (view-box) |
| TableHeaderCell | `ns-tableheadercell.h` | `NSTableHeaderCell` |
| TableRowView | `ns-tablerowview.h` | `NSTableRowView` (view-box) |
| TableCellView | `ns-tablecellview.h` | `NSTableCellView` (view-box) |
| TableViewDiffable | `ns-tableviewdiffable.h` | `NSTableViewDiffableDataSource` string snapshots |
| CollectionViewItem | `ns-collectionviewitem.h` | `NSCollectionViewItem` |
| CollectionViewLayout | `ns-collectionviewlayout.h` | `NSCollectionViewLayout` |
| CollectionViewFlowLayout | `ns-collectionviewflowlayout.h` | `NSCollectionViewFlowLayout` |
| CollectionViewGridLayout | `ns-collectionviewgridlayout.h` | `NSCollectionViewGridLayout` |
| CollectionViewCompositionalLayout | `ns-collectionviewcompositionallayout.h` | `NSCollectionViewCompositionalLayout` |
| CollectionViewTransitionLayout | `ns-collectionviewtransitionlayout.h` | `NSCollectionViewTransitionLayout` |
| CollectionViewDiffable | `ns-collectionviewdiffable.h` | `NSCollectionViewDiffableDataSource` string snapshots |
| GridRow | `ns-gridrow.h` | `NSGridRow` |
| GridColumn | `ns-gridcolumn.h` | `NSGridColumn` |
| GridCell | `ns-gridcell.h` | `NSGridCell` |
| StatusBar | `ns-statusbar.h` | `NSStatusBar` |
| Workspace | `ns-workspace.h` | `NSWorkspace` |
| Controller | `ns-controller.h` | `NSController` |
| AccessibilityElement | `ns-accessibilityelement.h` | `NSAccessibilityElement` |
| AccessibilityCustomRotor | `ns-accessibilitycustomrotor.h` | `NSAccessibilityCustomRotor` + item result |
| WindowTab | `ns-windowtab.h` | `NSWindowTab` |
| WindowTabGroup | `ns-windowtabgroup.h` | `NSWindowTabGroup` |
| TitlebarAccessory | `ns-titlebaraccessoryviewcontroller.h` | `NSTitlebarAccessoryViewController` |
| Graphics | `ns-graphics.h` | `NSBeep`, `NSRectFill`, NSGraphics.h C functions |
| Protocol | `ns-protocol.h` | protocol poll queue + `@protocol` inventory |

# Modules (planned)

| Module | Headers (target) | Owns |
|--------|------------------|------|
| Button | `ns-button.h` | `NSButton` |
| Fields | `ns-fields.h` | `NSTextField`, `NSSecureTextField`, `NSTextView` |
| Toggles | `ns-toggles.h` | checkbox/radio `NSButton`, `NSSwitch` |
| Values | `ns-values.h` | `NSSlider`, `NSStepper`, `NSProgressIndicator` |
| Picks | `ns-picks.h` | popup / combo / segmented / color / date |
| Image | `ns-image.h` | `NSImageView` |
| Layout | `ns-layout.h` | box / stack / scroll / split / tab / grid |
| Table | `ns-table.h` | `NSTableView` |
| Lists | `ns-lists.h` | `NSOutlineView`, `NSCollectionView` |
| Dialogs | `ns-dialogs.h` | `NSAlert`, open/save panels |
| Chrome | `ns-chrome.h` | toolbar / popover / status item |
| Input | `ns-input.h` | keyboard + mouse (CoreGraphics / `NSEvent`) — **no** gamepad |

# Cross-extension pointers

When metal needs a host for `CAMetalLayer` present, AppKit may export a borrowed `NSView*` / layer pointer as `uintptr_t`. Metal must not call `NSApp` and must not import AppKit. Ownership: [Handle ownership](/conventions/handle-ownership.md).

[^config]: Zephir config (extra-sources)
[^patch]: patch-config-m4.py

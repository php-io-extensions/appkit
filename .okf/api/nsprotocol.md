---
type: CoreType
title: AppKit protocols as poll/callback surfaces
description: NSProtocol poll queue plus named delegate/data-source Zephir classes
resource: /appkit/ns/nsprotocol/nsprotocol.zep
tags: [appkit, api, protocols]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T15:30:00Z" }
sources:
  - id: h
    resource: /src/ns-protocol.h
    title: ns-protocol.h
---

# Schema

AppKit `@protocol` types are **poll/callback surfaces**, not PHP objects implementing ObjC protocols.

| Method | Maps to |
|--------|---------|
| `NSProtocol::attach(handle, name)` | install PHP bridge as `delegate` when the object has one |
| `NSProtocol::poll(name)` | dequeue `{protocol, selector, sender, arg0, arg1}` |
| `NSProtocol::knownCount / knownAt` | inventory of every `@protocol` in MacOSX 15.4 AppKit headers |
| Named classes (`NSApplicationDelegate::poll`, …) | filter `NSProtocol::poll` by protocol name |

`NSApp` / `NSWindow` already install PHP delegates at create/init; those enqueue `NSApplicationDelegate` and `NSWindowDelegate` events.

`NSPasteboardReading` / `NSPasteboardWriting` / `NSAccessibility` / `NSTouchBarProvider` enqueue when a bound type is asked; they are not full custom protocol vending.


| Protocol | Surface |
|----------|---------|
| `NSAccessibility` | named Zephir `AppKit\\NS\\NSAccessibility\\NSAccessibility` poll class |
| `NSAccessibilityButton` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAccessibilityCheckBox` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAccessibilityColor` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAccessibilityContainsTransientUI` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAccessibilityCustomRotorItemLoadDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAccessibilityCustomRotorItemSearchDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAccessibilityElement` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAccessibilityElementLoading` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAccessibilityGroup` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAccessibilityImage` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAccessibilityLayoutArea` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAccessibilityLayoutItem` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAccessibilityList` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAccessibilityNavigableStaticText` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAccessibilityOutline` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAccessibilityProgressIndicator` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAccessibilityRadioButton` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAccessibilityRow` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAccessibilitySlider` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAccessibilityStaticText` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAccessibilityStepper` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAccessibilitySwitch` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAccessibilityTable` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAlertDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAlignmentFeedbackToken` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAnimatablePropertyContainer` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAnimationDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSAppearanceCustomization` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSApplicationDelegate` | named Zephir `AppKit\\NS\\NSApplicationDelegate\\NSApplicationDelegate` poll class |
| `NSBrowserDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSCandidateListTouchBarItemDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSChangeSpelling` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSCloudSharingServiceDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSCloudSharingValidation` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSCollectionLayoutContainer` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSCollectionLayoutEnvironment` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSCollectionLayoutVisibleItem` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSCollectionViewDataSource` | named Zephir `AppKit\\NS\\NSCollectionViewDataSource\\NSCollectionViewDataSource` poll class |
| `NSCollectionViewDelegate` | named Zephir `AppKit\\NS\\NSCollectionViewDelegate\\NSCollectionViewDelegate` poll class |
| `NSCollectionViewDelegateFlowLayout` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSCollectionViewElement` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSCollectionViewPrefetching` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSCollectionViewSectionHeaderView` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSColorChanging` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSColorPickingCustom` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSColorPickingDefault` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSComboBoxCellDataSource` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSComboBoxDataSource` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSComboBoxDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSControlTextEditingDelegate` | named Zephir `AppKit\\NS\\NSControlTextEditingDelegate\\NSControlTextEditingDelegate` poll class |
| `NSDatePickerCellDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSDockTilePlugIn` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSDraggingDestination` | named Zephir `AppKit\\NS\\NSDraggingDestination\\NSDraggingDestination` poll class |
| `NSDraggingInfo` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSDraggingSource` | named Zephir `AppKit\\NS\\NSDraggingSource\\NSDraggingSource` poll class |
| `NSDrawerDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSEditor` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSEditorRegistration` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSExtensionRequestHandling` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSFilePromiseProviderDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSFontChanging` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSGestureRecognizerDelegate` | named Zephir `AppKit\\NS\\NSGestureRecognizerDelegate\\NSGestureRecognizerDelegate` poll class |
| `NSGlyphStorage` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSHapticFeedbackPerformer` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSIgnoreMisspelledWords` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSImageDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSInputServerMouseTracker` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSInputServiceProvider` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSLayoutManagerDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSMatrixDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSMenuDelegate` | named Zephir `AppKit\\NS\\NSMenuDelegate\\NSMenuDelegate` poll class |
| `NSMenuItem` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSMenuItemValidation` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSOpenSavePanelDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSOutlineViewDataSource` | named Zephir `AppKit\\NS\\NSOutlineViewDataSource\\NSOutlineViewDataSource` poll class |
| `NSOutlineViewDelegate` | named Zephir `AppKit\\NS\\NSOutlineViewDelegate\\NSOutlineViewDelegate` poll class |
| `NSPageControllerDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSPasteboardItemDataProvider` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSPasteboardReading` | named Zephir `AppKit\\NS\\NSPasteboardReading\\NSPasteboardReading` poll class |
| `NSPasteboardTypeOwner` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSPasteboardWriting` | named Zephir `AppKit\\NS\\NSPasteboardWriting\\NSPasteboardWriting` poll class |
| `NSPathCellDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSPathControlDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSPopoverDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSPreviewRepresentableActivityItem` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSPrintPanelAccessorizing` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSRuleEditorDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSScrubberDataSource` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSScrubberDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSScrubberFlowLayoutDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSSearchFieldDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSSeguePerforming` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSServicesMenuRequestor` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSSharingServiceDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSSharingServicePickerDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSSharingServicePickerToolbarItemDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSSharingServicePickerTouchBarItemDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSSoundDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSSpeechRecognizerDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSSpeechSynthesizerDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSSplitViewDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSSpringLoadingDestination` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSStackViewDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSStandardKeyBindingResponding` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTabViewDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTableViewDataSource` | named Zephir `AppKit\\NS\\NSTableViewDataSource\\NSTableViewDataSource` poll class |
| `NSTableViewDelegate` | named Zephir `AppKit\\NS\\NSTableViewDelegate\\NSTableViewDelegate` poll class |
| `NSTextAttachmentCell` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTextAttachmentContainer` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTextAttachmentLayout` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTextCheckingClient` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTextContent` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTextContentManagerDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTextContentStorageDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTextDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTextElementProvider` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTextFieldDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTextFinderBarContainer` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTextFinderClient` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTextInput` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTextInputClient` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTextInputTraits` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTextLayoutManagerDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTextLayoutOrientationProvider` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTextLocation` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTextSelectionDataSource` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTextStorageDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTextStorageObserving` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTextViewDelegate` | named Zephir `AppKit\\NS\\NSTextViewDelegate\\NSTextViewDelegate` poll class |
| `NSTextViewportLayoutControllerDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTokenFieldCellDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTokenFieldDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSToolbarDelegate` | named Zephir `AppKit\\NS\\NSToolbarDelegate\\NSToolbarDelegate` poll class |
| `NSToolbarItemValidation` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTouchBarDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSTouchBarProvider` | named Zephir `AppKit\\NS\\NSTouchBarProvider\\NSTouchBarProvider` poll class |
| `NSUserActivityRestoring` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSUserInterfaceCompression` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSUserInterfaceItemIdentification` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSUserInterfaceItemSearching` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSUserInterfaceValidations` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSValidatedToolbarItem` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSValidatedUserInterfaceItem` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSViewContentSelectionInfo` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSViewControllerPresentationAnimator` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSViewLayerContentScaleDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSViewToolTipOwner` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSWindowDelegate` | named Zephir `AppKit\\NS\\NSWindowDelegate\\NSWindowDelegate` poll class |
| `NSWindowRestoration` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |
| `NSWritingToolsCoordinatorDelegate` | bound as part of `NSProtocol` (`attach` / `poll` / `knownAt`) |

Parsed **151** `@protocol` types from MacOSX 15.4 CLT SDK.

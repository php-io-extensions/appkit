---
type: CoreType
title: AppKit\NS\NSPopUpButtonCell\NSPopUpButtonCell
description: NSPopUpButtonCell used by NSPopUpButton
resource: /appkit/ns/nspopupbuttoncell/nspopupbuttoncell.zep
tags: [appkit, api, nspopupbuttoncell]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T03:45:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nspopupbuttoncell/nspopupbuttoncell.zep
    title: nspopupbuttoncell.zep
  - id: h
    resource: /src/ns-popupbuttoncell.h
    title: ns-popupbuttoncell.h
  - id: m
    resource: /src/ns-popupbuttoncell.m
    title: ns-popupbuttoncell.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `createText / wrap / destroy / nsPopUpButtonCell` | ownership |
| `title / menu` | NSMenuCell base |
| `pullsDown / autoenablesItems / usesItemFromMenu / altersStateOfSelectedItem` | behavior |
| `addItemWithTitle / removeAllItems / numberOfItems` | item list |
| `selectItemAtIndex / indexOfSelectedItem / titleOfSelectedItem` | selection |
| `arrowPosition` | appearance |

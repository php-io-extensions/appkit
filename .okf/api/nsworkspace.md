---
type: CoreType
title: AppKit\\NS\\NSWorkspace\\NSWorkspace
description: NSWorkspace shared desktop workspace
resource: /appkit/ns/nsworkspace/nsworkspace.zep
tags: [appkit, api, nsworkspace]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:40:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsworkspace/nsworkspace.zep
    title: nsworkspace.zep
  - id: h
    resource: /src/ns-workspace.h
    title: ns-workspace.h
  - id: m
    resource: /src/ns-workspace.m
    title: ns-workspace.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `shared / wrap / destroy / nsWorkspace` | sharedWorkspace retain |
| `openURL` | openURL: |
| `selectFile` | selectFile:inFileViewerRootedAtPath: |
| `showSearchResults` | showSearchResultsForQueryString: |
| `isFilePackage` | isFilePackageAtPath: |
| `iconForFile` | iconForFile: as NSImage handle |
| `hideOtherApplications` | hideOtherApplications |
| `urlForApplicationWithBundleIdentifier / urlForApplicationToOpenURL` | application URL strings |
| `frontmostApplicationName` | frontmostApplication.localizedName (NSRunningApplication bound as part of NSWorkspace) |

`NSWorkspaceOpenConfiguration` and `NSRunningApplication` are bound as part of `NSWorkspace` (open/select/icon/frontmost name).

---
type: CoreType
title: AppKit\\NS\\NSRunningApplication\\NSRunningApplication
description: Running application process metadata and activation
resource: /appkit/ns/nsrunningapplication/nsrunningapplication.zep
tags: [appkit, api, nsrunningapplication]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:45:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsrunningapplication/nsrunningapplication.zep
    title: nsrunningapplication.zep
  - id: h
    resource: /src/ns-runningapplication.h
    title: ns-runningapplication.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `current / wrap / destroy / nsRunningApplication` | retain handle lifecycle |
| `withProcessIdentifier` | `+runningApplicationWithProcessIdentifier:` |
| `withBundleIdentifierCount / withBundleIdentifierAt` | `+runningApplicationsWithBundleIdentifier:` |
| `terminateAutomaticallyTerminableApplications` | class method |
| `isTerminated / isFinishedLaunching / isHidden / isActive / ownsMenuBar` | properties |
| `activationPolicy / processIdentifier` | policy + pid |
| `localizedName / bundleIdentifier / bundleURL / executableURL` | strings |
| `icon` | `icon` as NSImage handle |
| `hide / unhide / activateWithOptions / terminate / forceTerminate` | actions |

# NSApplicationActivationPolicy (int)

0 Regular, 1 Accessory, 2 Prohibited.

# NSApplicationActivationOptions (bitfield int)

`ALL_WINDOWS=1`. `IGNORING_OTHER_APPS=2` (deprecated macOS 14+).

Use `NSWorkspace::runningApplicationsCount` / `runningApplicationAt` for the workspace snapshot array.

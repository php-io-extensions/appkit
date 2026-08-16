---
type: CoreType
title: AppKit\NS\NSSound\NSSound
description: Named and file-based sound playback
resource: /appkit/ns/nssound/nssound.zep
tags: [appkit, api, nssound]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:55:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nssound/nssound.zep
    title: nssound.zep
  - id: h
    resource: /src/ns-sound.h
    title: ns-sound.h
  - id: m
    resource: /src/ns-sound.m
    title: ns-sound.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `soundNamed` | `+soundNamed:` |
| `createWithContentsOfFile / createWithContentsOfURL` | init by file or URL |
| `wrap / destroy / nsSound` | retain/release borrowed pointer |
| `setName / name` | sound name |
| `play / pause / resume / stop / isPlaying` | playback control |
| `duration / volume / currentTime / loops` | playback properties |
| `playbackDeviceIdentifier / setPlaybackDeviceIdentifier` | output device UID |
| `canInitWithPasteboard / createWithPasteboard / writeToPasteboard` | pasteboard integration |
| `unfilteredTypesCount / unfilteredTypeAt` | `+soundUnfilteredTypes` |

# Bound as part of NSSound

`NSSoundDelegate` — delegate callbacks not bound (no PHP delegate bridge yet).

`NSBundle (NSBundleSoundExtensions) pathForSoundResource:` — use file path + `createWithContentsOfFile`.

Deprecated `soundUnfilteredFileTypes` / `soundUnfilteredPasteboardTypes` — superseded by `soundUnfilteredTypes`.

Deprecated `setChannelMapping` / `channelMapping` — not bound.

`initWithData:` — not bound (binary payload bridge deferred).

---
type: CoreType
title: AppKit\NS\NSSpeechRecognizer\NSSpeechRecognizer
description: Spoken command recognition
resource: /appkit/ns/nsspeechrecognizer/nsspeechrecognizer.zep
tags: [appkit, api, nsspeechrecognizer]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:55:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsspeechrecognizer/nsspeechrecognizer.zep
    title: nsspeechrecognizer.zep
  - id: h
    resource: /src/ns-speechrecognizer.h
    title: ns-speechrecognizer.h
  - id: m
    resource: /src/ns-speechrecognizer.m
    title: ns-speechrecognizer.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsSpeechRecognizer` | instance lifecycle |
| `startListening / stopListening` | listen control |
| `setCommands / commandsCount / commandAt` | command phrase list |
| `displayedCommandsTitle / setDisplayedCommandsTitle` | menu title |
| `listensInForegroundOnly / setListensInForegroundOnly` | foreground-only flag |
| `blocksOtherRecognizers / setBlocksOtherRecognizers` | exclusivity flag |

# Bound as part of NSSpeechRecognizer

`NSSpeechRecognizerDelegate` — `-speechRecognizer:didRecognizeCommand:` not bound (no delegate bridge yet).

---
type: CoreType
title: AppKit\NS\NSSpeechSynthesizer\NSSpeechSynthesizer
description: Text-to-speech synthesizer (deprecated macOS 14)
resource: /appkit/ns/nsspeechsynthesizer/nsspeechsynthesizer.zep
tags: [appkit, api, nsspeechsynthesizer, deprecated]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:55:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsspeechsynthesizer/nsspeechsynthesizer.zep
    title: nsspeechsynthesizer.zep
  - id: h
    resource: /src/ns-speechsynthesizer.h
    title: ns-speechsynthesizer.h
  - id: m
    resource: /src/ns-speechsynthesizer.m
    title: ns-speechsynthesizer.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsSpeechSynthesizer` | instance lifecycle |
| `startSpeakingString / startSpeakingStringToURL` | speak to output or file |
| `isSpeaking / stopSpeaking / stopSpeakingAtBoundary / pauseSpeakingAtBoundary / continueSpeaking` | playback control |
| `voice / setVoice / rate / volume / usesFeedbackWindow` | voice + tuning |
| `phonemesFromText` | `-phonemesFromText:` |
| `isAnyApplicationSpeaking / defaultVoice / availableVoicesCount / availableVoiceAt` | class queries |
| `attributeForVoice` | `+attributesForVoice:` string/number values |

# Deprecated

Apple marks `NSSpeechSynthesizer` deprecated in macOS 14 in favor of `AVSpeechSynthesizer` (AVFoundation). This bind remains for legacy AppKit scripts.

# Enum ints (use backed PHP Enums in user code)

**NSSpeechBoundary**

| int | case |
|-----|------|
| 0 | IMMEDIATE |
| 1 | WORD |
| 2 | SENTENCE |

# Bound as part of NSSpeechSynthesizer

`NSSpeechSynthesizerDelegate` — not bound.

`addSpeechDictionary:` / `objectForProperty:` / `setObject:forProperty:error:` — not bound (NSDictionary property bridge deferred).

Voice attribute keys (`NSVoiceName`, `NSVoiceIdentifier`, etc.) — pass as strings to `attributeForVoice`.

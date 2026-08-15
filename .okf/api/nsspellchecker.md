---
type: CoreType
title: AppKit\NS\NSSpellChecker\NSSpellChecker
description: Shared NSSpellChecker spelling service
resource: /appkit/ns/nsspellchecker/nsspellchecker.zep
tags: [appkit, api, nsspellchecker]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsspellchecker/nsspellchecker.zep
    title: nsspellchecker.zep
  - id: h
    resource: /src/ns-spellchecker.h
    title: ns-spellchecker.h
  - id: m
    resource: /src/ns-spellchecker.m
    title: ns-spellchecker.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `shared / destroy` | sharedSpellChecker retain/release |
| `uniqueSpellDocumentTag` | class tag allocator |
| `checkSpelling` | range [location, length] |
| `countWordsInString / ignoreWord / ignoredWords*` | document ignore list |
| `updateSpellingPanelWithMisspelledWord / updatePanels` | panels |
| `isAutomaticSpellingCorrectionEnabled / set` | class property (readonly on modern macOS; setter is a no-op) |

---
type: CoreType
title: AppKit\\NS\\NSFilePromiseReceiver\\NSFilePromiseReceiver
description: Promised file drag destination
resource: /appkit/ns/nsfilepromisereceiver/nsfilepromisereceiver.zep
tags: [appkit, api, nsfilepromisereceiver]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:05:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `readableDraggedTypes` | `+readableDraggedTypes` |
| `wrap / destroy / nsFilePromiseReceiver` | handle lifecycle |
| `fileTypes / fileNames` | promised metadata arrays |
| `receiveAtDestination / pollReceivedFile` | `-receivePromisedFilesAtDestination:options:operationQueue:reader:` polling |

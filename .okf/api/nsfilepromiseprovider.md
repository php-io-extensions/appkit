---
type: CoreType
title: AppKit\\NS\\NSFilePromiseProvider\\NSFilePromiseProvider
description: Promised file drag source
resource: /appkit/ns/nsfilepromiseprovider/nsfilepromiseprovider.zep
tags: [appkit, api, nsfilepromiseprovider]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:05:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsFilePromiseProvider` | handle lifecycle |
| `setFileType / getFileType` | `fileType` UTI |
| `setFileName` | delegate `fileNameForType:` via associated-object box |
| `setUserInfoTag / getUserInfoTag` | PHP correlation tag stored in delegate box |
| `pollWriteRequest / completeWrite` | delegate write cycle polling |

# Not bound

Full custom delegate with arbitrary write bodies; `operationQueueForFilePromiseProvider:`.

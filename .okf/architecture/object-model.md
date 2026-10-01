---
type: Module
title: Object model
description: One PHP object per native object, retained while PHP holds it, boxed as its nearest bound class.
resource: src/runtime.m
tags: [appkit, zend, lifetime]
status: draft
generated: { by: claude-opus/5.5, at: 2026-09-30T20:37:59Z }
sources:
  - id: runtime
    resource: src/runtime.m
    title: Boxing, handlers
  - id: header
    resource: src/runtime.h
    title: appkit_object, globals
---

# Overview

Every NS and CF class uses one struct: `appkit_object { void *ptr; bool cf; zend_object std; }`.[^header] `ptr` holds a retained `id` (`-retain`) or `CFTypeRef` (`CFRetain`); `free_obj` releases it (`-release` inside a pool, or `CFRelease`).

Identity: module global `boxes` maps native address → `zend_object*` (no refcount). Boxing looks there first, so the same native object always yields the same PHP object (`NSApplication::sharedApplication() === NSApplication::sharedApplication()`). `free_obj` removes the entry. Table is persistent per thread (GINIT/GSHUTDOWN), so objects freed after RSHUTDOWN still find it.[^runtime]

Class choice when boxing:

* ObjC: walk `object_getClass()` → superclasses; first name registered with `appkit_map_objc_class()` wins; fallback `NSObject`.
* CF: `CFGetTypeID()` against the bound types; fallback `CFType`.

Wrappers are not constructible (private `__construct`), not cloneable (`clone_obj = NULL`), not serializable, and `==` between two different wrappers is uncomparable (identity is `===`).

Autorelease: every binding body runs in `@autoreleasepool` (`APPKIT_BEGIN/END`). Returned objects are boxed (retained) before the pool drains.

[^runtime]: Boxing, handlers
[^header]: appkit_object, globals

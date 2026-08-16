#ifndef PHP_APPKIT_NS_APP_H
#define PHP_APPKIT_NS_APP_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/** Initialize NSApplication (shared). Idempotent. Returns 1 on success. */
int ns_app_init(void);

/** Borrowed NSApplication* (sharedApplication), or NULL if not initialized. */
void *ns_app_shared(void);

/** Process pending AppKit events once. Returns 1 if the app should keep running. */
int ns_app_poll(void);

/** Blocking NSApp run loop (rarely used from PHP; prefer poll). */
void ns_app_run(void);

/** Request application termination. */
void ns_app_terminate(void);

/** Returns 1 when termination was requested (window close / Quit menu / terminate). */
int ns_app_should_quit(void);

/** Reset the quit flag (after a previous run). */
void ns_app_reset_quit(void);

/** NSApp global pointer (same as shared after init). */
void *ns_app_nsapp(void);

/** NSAppKitVersionNumber. */
double ns_app_kit_version_number(void);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_APP_H */

#ifndef PHP_APPKIT_NS_RESPONDER_H
#define PHP_APPKIT_NS_RESPONDER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Wrap a borrowed NSResponder* (NSView*, NSWindow*, NSViewController*, etc.).
 * Caller owns the box until ns_responder_destroy.
 */
uintptr_t ns_responder_wrap(void *responder);

void ns_responder_destroy(uintptr_t responder);

/** Borrowed NSResponder* (0 if invalid). Do not free. */
void *ns_responder_nsresponder(uintptr_t responder);

int ns_responder_accepts_first_responder(uintptr_t responder);

int ns_responder_become_first_responder(uintptr_t responder);

int ns_responder_resign_first_responder(uintptr_t responder);

/** Borrowed nextResponder pointer, or 0. */
void *ns_responder_next_responder(uintptr_t responder);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_RESPONDER_H */

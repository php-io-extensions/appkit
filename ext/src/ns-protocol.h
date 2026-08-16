#ifndef PHP_APPKIT_NS_PROTOCOL_H
#define PHP_APPKIT_NS_PROTOCOL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void ns_protocol_enqueue(const char *protocol, const char *selector, uintptr_t sender, long long arg0, const char *arg1);
int ns_protocol_attach(uintptr_t object, const char *protocol_name);
int ns_protocol_poll(const char *protocol_filter, char *protocol_out, int protocol_len, char *selector_out, int selector_len, uintptr_t *sender, long long *arg0, char *arg1_out, int arg1_len);
int ns_protocol_known_count(void);
int ns_protocol_known_at(int index, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PROTOCOL_H */

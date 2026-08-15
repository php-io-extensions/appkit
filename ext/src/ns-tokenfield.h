#ifndef PHP_APPKIT_NS_TOKENFIELD_H
#define PHP_APPKIT_NS_TOKENFIELD_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_TOKEN_STYLE_DEFAULT = 0,
    NS_TOKEN_STYLE_NONE = 1,
    NS_TOKEN_STYLE_ROUNDED = 2,
    NS_TOKEN_STYLE_SQUARED = 3,
    NS_TOKEN_STYLE_PLAIN_SQUARED = 4
} ns_token_style;

uintptr_t ns_tokenfield_create(double x, double y, double width, double height, const char *value);
void ns_tokenfield_destroy(uintptr_t field);
void ns_tokenfield_set_string(uintptr_t field, const char *value);
int ns_tokenfield_get_string(uintptr_t field, char *out, int out_len);
void ns_tokenfield_set_token_style(uintptr_t field, int style);
int ns_tokenfield_get_token_style(uintptr_t field);
void ns_tokenfield_set_completion_delay(uintptr_t field, double delay);
double ns_tokenfield_get_completion_delay(uintptr_t field);
double ns_tokenfield_default_completion_delay(void);
int ns_tokenfield_poll_change(uintptr_t field);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TOKENFIELD_H */

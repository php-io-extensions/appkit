#ifndef PHP_APPKIT_NS_FILEPROMISEPROVIDER_H
#define PHP_APPKIT_NS_FILEPROMISEPROVIDER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_filepromiseprovider_create(const char *file_type);
uintptr_t ns_filepromiseprovider_wrap(void *provider);
void ns_filepromiseprovider_destroy(uintptr_t provider);
void *ns_filepromiseprovider_nsfilepromiseprovider(uintptr_t provider);
void ns_filepromiseprovider_set_file_type(uintptr_t provider, const char *file_type);
int ns_filepromiseprovider_file_type(uintptr_t provider, char *out, int out_len);
void ns_filepromiseprovider_set_user_info_tag(uintptr_t provider, long long tag);
long long ns_filepromiseprovider_user_info_tag(uintptr_t provider);
void ns_filepromiseprovider_set_file_name(uintptr_t provider, const char *file_name);
int ns_filepromiseprovider_poll_write_request(uintptr_t provider, char *file_type_out, int file_type_len, char *url_out, int url_len);
void ns_filepromiseprovider_complete_write(uintptr_t provider, int success);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_FILEPROMISEPROVIDER_H */

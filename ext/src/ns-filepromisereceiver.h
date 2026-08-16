#ifndef PHP_APPKIT_NS_FILEPROMISERECEIVER_H
#define PHP_APPKIT_NS_FILEPROMISERECEIVER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

int ns_filepromisereceiver_readable_dragged_types_count(void);
int ns_filepromisereceiver_readable_dragged_type_at(int index, char *out, int out_len);
uintptr_t ns_filepromisereceiver_wrap(void *receiver);
void ns_filepromisereceiver_destroy(uintptr_t receiver);
void *ns_filepromisereceiver_nsfilepromisereceiver(uintptr_t receiver);
int ns_filepromisereceiver_file_types_count(uintptr_t receiver);
int ns_filepromisereceiver_file_type_at(uintptr_t receiver, int index, char *out, int out_len);
int ns_filepromisereceiver_file_names_count(uintptr_t receiver);
int ns_filepromisereceiver_file_name_at(uintptr_t receiver, int index, char *out, int out_len);
void ns_filepromisereceiver_receive_at_destination(uintptr_t receiver, const char *destination_dir);
int ns_filepromisereceiver_poll_received_file(uintptr_t receiver, char *url_out, int url_len, int *error_flag);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_FILEPROMISERECEIVER_H */

#include <stddef.h>
#include <stdint.h>
int parse_record(const uint8_t *data, size_t size);
int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  parse_record(data, size);
  return 0;
}

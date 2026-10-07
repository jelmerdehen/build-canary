#include <stddef.h>
#include <stdint.h>
int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  unsigned sum = 0;
  for (size_t i = 0; i < size; i++) sum += data[i];
  return sum == 0xFFFFFFFF;
}

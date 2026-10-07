// build-canary: a deliberately vulnerable parser for build.gcb.io end-to-end tests.
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int parse_record(const uint8_t *data, size_t size) {
  if (size >= 3 && data[0] == 'F' && data[1] == 'U' && data[2] == 'Z') {
    char *buf = malloc(4);
    memcpy(buf, data, size); /* heap-buffer-overflow when size > 4 */
    int r = buf[0];
    free(buf);
    return r;
  }
  return 0;
}

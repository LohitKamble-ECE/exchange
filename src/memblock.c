#include "../inc/exchange.h"

/**
 * Exchange the content present at one memory block with other memory block
 * present at different location.
 */

void swap_memblock(void *a, void *b, size_t sz) {
  if (a != b) {
    char *p = (char *)a;
    char *q = (char *)b;
    for (size_t i = 0; i < sz; ++i) {
      *p ^= *q;
      *q ^= *p;
      *p ^= *q;
      ++p;
      ++q;
    }
  }
}
#include "../inc/exchange.h"
#include <stdlib.h>
#include <string.h>

/**
 * Exchange the values of two variable.
 * This is generic implementation means it can work on any type.
 * You need to pass one additional parameter which is size of variable.
 * For example, if you are using this function to exhange the values of two
 * double type variables, then you should call this function as follows:
 * swap_generic(&p, &q, sizeof(double));
 */
void swap_generic(void *a, void *b, size_t sz) {
  if (a != b) {
    void *temp = malloc(sz);
    memmove(temp, a, sz);
    memmove(a, b, sz);
    memmove(b, temp, sz);
  }
}
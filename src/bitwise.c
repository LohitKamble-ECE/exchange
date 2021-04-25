#include "../inc/exchange.h"

/**
 * Exchanges the values of two variable without using third variable.
 * Approach: Using bitwise x-or operator.
 */

void swap_bitwise(int *a, int *b) {
  if (a != b) {
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
  }
}
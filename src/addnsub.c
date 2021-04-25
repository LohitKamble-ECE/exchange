#include "../inc/exchange.h"

/**
 * Exchanges the value of two variables without using third variable.
 * Approach: Using the addition and subtraction operator.
 * Limitition: function failed to exchanging values of two variables if the
 * values of two variables is large because overflow may happen which cause
 * unpredictable result.
 */

void swap_addnsub(int *a, int *b) {
  if (a != b) {
    *a += *b;
    *b = *a - *b;
    *a -= *b;
  }
}
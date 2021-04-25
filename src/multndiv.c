#include "../inc/exchange.h"

/**
 * Exchanges the values of two variable without using third variable.
 * Approach: Using operation multiplication and division.
 * Limitation: function failed to exchange values if the values of two variable
 * are large because overflow may happens.
 */

void swap_multindiv(int *a, int *b) {
  if (a != b) {
    *a *= *b;
    *b = *a / *b;
    *a /= *b;
  }
}
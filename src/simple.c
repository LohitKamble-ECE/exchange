#include "../inc/exchange.h"
/**
 * Exchange the values of two variable.
 */
void swap_simple(int *a, int *b) {
  if (a != b) {
    // Two address passed are pointing to two different variables.
    int tmp = *a;
    *a = *b;
    *b = tmp;
  }
}
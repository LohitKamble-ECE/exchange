#include "../inc/exchange.h"
/**
 * Exchange the values of four variable as follows:
 *      a <-- b <-- c <-- d
 *      |_________________^
 * Approach: Using one extra temporary variable.
 */

void swap_four(int *a, int *b, int *c, int *d) {
  int temp = *a;
  *a = *b;
  *b = *c;
  *c = *d;
  *d = temp;
}
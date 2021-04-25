#include "../inc/exchange.h"
/**
 * Exchanges the values of three variable as shown in figure below.
 *          a --> b --> c
 *          ^___________|
 * Approach: Using one extra temporary variable.
 */
void swap_three(int *a, int *b, int *c) {
  int temp = *a;
  *a = *c;
  *c = *b;
  *b = temp;
}
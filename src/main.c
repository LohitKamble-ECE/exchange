#include "../inc/exchange.h"
#include <stdio.h>

int main(void) {
  int a = 10;
  int b = 20;
  int c = 30;
  int d = 40;

  printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
  swap_four(&a, &b, &c, &d);
  printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
  return 0;
}
#include "../inc/exchange.h"
#include <stdio.h>

int main(void) {
  int a = 10;
  int b = 20;
  int c = 30;

  printf("a = %d, b = %d, c = %d\n", a, b, c);
  swap_three(&a, &b, &c);
  printf("a = %d, b = %d, c = %d\n", a, b, c);
  return 0;
}
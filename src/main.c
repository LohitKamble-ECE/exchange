#include "../inc/exchange.h"
#include <stdio.h>

int main(void) {
  int a = 10;
  int b = 20;

  printf("a = %d, b = %d\n", a, b);
  swap_addnsub(&a, &b);
  printf("a = %d, b = %d\n", a, b);
  return 0;
}
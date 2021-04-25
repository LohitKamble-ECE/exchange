#include "../inc/exchange.h"
#include <stdio.h>

int main(void) {
  int a = 10;
  int b = 20;

  printf("a = %d, b = %d\n", a, b);
  swap_generic(&a, &b, sizeof(int));
  printf("a = %d, b = %d\n", a, b);
  return 0;
}
#include "../inc/exchange.h"
#include <stdio.h>

void print_arr(const int *const arr, const size_t sz) {
  for (size_t i = 0; i != sz; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main(void) {
  int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

  const size_t length1 = sizeof(arr1) / sizeof(arr1[0]);
  const size_t length2 = sizeof(arr2) / sizeof(arr2[0]);

  printf("Initial configuration: \n");
  printf("array1: ");
  print_arr(arr1, length1);
  printf("array2: ");
  print_arr(arr2, length2);

  swap_memblock(arr1, arr2, length1 * sizeof(int));

  printf("Final configuration: \n");
  printf("array1: ");
  print_arr(arr1, length1);
  printf("array2: ");
  print_arr(arr2, length2);
  return 0;
}
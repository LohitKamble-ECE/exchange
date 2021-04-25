#ifndef EXCHANGE_H
#define EXCHANGE_H

#include <stddef.h>

void swap_simple(int *, int *);
void swap_generic(void *, void *, size_t);
void swap_three(int *, int *, int *);
void swap_four(int *, int *, int *, int *);
void swap_addnsub(int *, int *);
void swap_multindiv(int *, int *);
void swap_bitwise(int *, int *);
void swap_memblock(void *, void *, size_t);
#endif
#ifndef FUNCTION_POINTER
#define FUNCTION_POINTER
#include <stdlib.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif /* FUNCTION_POINTER */

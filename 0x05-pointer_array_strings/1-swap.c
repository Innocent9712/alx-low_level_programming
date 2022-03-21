#include "main.h"
/**
 * swap_int - swap values of 2 integers
 * @a: pointer to integer a
 * @b: pointer to integer b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}

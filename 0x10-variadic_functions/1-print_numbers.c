#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - print_numbers : print numbers followed by a new line
 * @separator: character separator
 * @n: number of numbers
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	if (n != 0)
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, unsigned int));
			if (separator != NULL && i != n-1)
				printf("%s", separator);

		}
	printf("\n");
}

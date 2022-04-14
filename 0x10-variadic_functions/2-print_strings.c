#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print strings, followed by a new line
 * @separator: string separator
 * @n: number of strings
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *val;

	va_start(list, n);

	if (n != 0)
		for (i = 0; i < n; i++)
		{
			val = va_arg(list, char  *);

			if (val != NULL)
				printf("%s", val);
			else
				printf("(nil)");
			if (separator != NULL && i != n - 1)
				printf("%s", separator);
		}
	va_end(list);
	printf("\n");
}

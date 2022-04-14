#include "variadic_functions.h"
/**
 * sum_them_all - sums all of its parameters
 * @n: first number
 *
 * Return: the total sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int sum = 0, i;

	va_start(x, n);

	if (n != 0)
		for (i = 0; i < n; sum += va_arg(x, unsigned int), i++)
			;
	va_end(x);

	return (sum);
}

#include "main.h"
/**
 * print_square - print a square
 * @n: number of times parameter
 *
 * Return: void
 */

void print_square(int n)
{
	int val, i;

	if (n == 0)
	{
		_putchar('\n');
	}

	
	val = n;
	while (val > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
		val--;
	}
}

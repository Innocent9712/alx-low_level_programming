#include "main.h"
/**
 * print_line - print an underscore for n number of times
 * @n: number of times parameter
 *
 * Return: void
 */

void print_line(int n)
{
	if (n >= 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}

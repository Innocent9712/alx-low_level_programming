#include "main.h"
/**
 * print_diagonal - print a \ diagonally for n number of times
 * @n: number of times parameter
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int c, ctemp;

	c = 0;

	while (n > 0 && n > c)
	{
		ctemp = 0;
		while (ctemp < c)
		{
			_putchar(' ');
			ctemp++;
		}
		_putchar(92);
		_putchar('\n');
		c++;
	}
	if (c == 0)
	{
		_putchar('\n');
	}
}

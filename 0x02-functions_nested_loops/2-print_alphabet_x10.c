#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet a-z followed by a new line 10 times
 *
 */

void print_alphabet_x10(void)
{
	int x;
	char c;

	x = 0;
	while (x < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		x++;
	}
}

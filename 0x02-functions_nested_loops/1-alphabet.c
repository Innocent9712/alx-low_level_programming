#include "main.h"

/**
 * print_alphabet - prints the alphabet a-z followed by a new line
 *
 */

void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
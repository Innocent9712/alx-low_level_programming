#include "main.h"
/**
 * print_rev - prints string to stdoutput in reverse
 * @s: pointer to string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i])
		i++;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

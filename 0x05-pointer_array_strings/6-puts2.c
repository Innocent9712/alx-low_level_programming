#include "main.h"
/**
 * puts2 - prints every other character
 * @str: pointer to a string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	i = 0;

	for (;str[i];i += 2)
		_putchar(str[i]);
	_putchar('\n');
}

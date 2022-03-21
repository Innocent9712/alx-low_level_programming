#include "main.h"
/**
 * puts_half - prints half of a string to stdoutput
 * @str: pointer to string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int fLen, hLen;

	for (fLen = 0; str[fLen] != '\0'; fLen++)
		;

	hLen = fLen / 2;

	while (str[hLen] != '\0')
	{
		_putchar(str[hLen]);
		hLen++;
	}
	_putchar('\n');
}

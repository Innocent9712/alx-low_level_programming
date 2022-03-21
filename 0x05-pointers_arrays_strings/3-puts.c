#include "main.h"
/**
 * _puts - prints string to stdoutput
 * @str: pointer to string
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

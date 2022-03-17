#include "main.h"
/**
 * more_numbers - print numbers 0 - 14 ten times
 *
 * Return: void
 */

void print_numbers(void)
{
	int num, counter;

	counter = 0;

	while (counter < 10)
	{
		num = 0;
		
		while (num < 14)
		{
			_putchar(num + '0');
			num++;
		}
		_putchar('\n');
		counter++;
	}
	_putchar('\n');
}

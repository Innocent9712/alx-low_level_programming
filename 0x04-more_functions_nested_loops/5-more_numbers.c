#include "main.h"
/**
 * more_numbers - print numbers 0 - 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int num, counter, hvh;

	counter = 0;

	while (counter < 10)
	{
		num = 0;

		while (num <= 14)
		{
			hvh = num;
			if (num > 9)
			{
				_putchar('1');
				hvh = num % 10;
			}
			_putchar(hvh + '0');
			num++;
		}
		_putchar('\n');
		counter++;
	}
}

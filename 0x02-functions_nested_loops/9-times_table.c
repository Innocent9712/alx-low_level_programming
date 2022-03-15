#include "main.h"

/**
 * times_table - prints the times table of 9
 *
 *Return: void
 */

void times_table(void)
{
	int value, multiplier;

	value = 0;
	while (value < 10)
	{
		multiplier = 0;
		while (multiplier < 10)
		{
			int result;

			result = multiplier * value;

			if (multiplier > 0)
			{
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
				}
			}

			if (result > 9)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(result + '0');
			}

			if (multiplier < 9)
			{
				_putchar(',');
			}
			multiplier++;
		}
		_putchar('\n');
		value++;
	}
}

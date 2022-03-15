#include "main.h"

/**
 * jack_bauer - prints time from 00:00 - 23:59
 *
 * Return: void
 */

void jack_bauer(void)
{
	int uh, lh, m, s;

	uh = 0;
	while (uh < 3)
	{
		lh = 0;
		while (lh < 4)
		{
			m = 0;
			while (m < 6)
			{
				s = 0;
				while (s < 10)
				{
					_putchar(uh + '0');
					_putchar(lh + '0');
					_putchar(':');
					_putchar(m + '0');
					_putchar(s + '0');
					_putchar('\n');
					s++;
				}
				m++;
			}
			lh++;
		}
		uh++;
	}
}

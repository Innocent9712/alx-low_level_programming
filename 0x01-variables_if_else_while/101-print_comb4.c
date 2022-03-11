#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints to string
 *
 * Description: Prints tripple digit numbers from 000 - 999
 * without repeating two digits.
 *
 * Return: 0
 */

int main(void)
{
	/* your code goes there */
	int n1, n2, n3;

	n1 = 0;
	n2 = 0;
	n3 = 0;
	while (n1 < 10)
	{
		n2 = 0;
		while (n2 < 10)
		{
			n3 = 0;
			while (n3 < 10)
			{
				if (n1 != n2 && n1 != n3 && n2 != n3 && n3 > n2 && n2 > n1 && n3 > n1)
				{
					putchar(n1 + 48);
					putchar(n2 + 48);
					putchar(n3 + 48);

					if (n1 + n2 + n3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				n3++;
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - create 2 pairs of numbers that do not repeat
 * Return: 0
 */
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 99; n1++)
	{
		for (n2 = n1; n2 <= 99; n2++)
		{
			if (n2 != n1)
			{

				putchar(n1 / 10 + 48);
				putchar(n1 % 10 + 48);
				putchar(' ');
				putchar(n2 / 10 + 48);
				putchar(n2 % 10 + 48);

				if (n1 * 100 + n2 != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}

	}
	putchar('\n');
	return (0);
}

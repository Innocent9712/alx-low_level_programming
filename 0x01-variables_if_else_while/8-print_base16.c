#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints to string
 *
 * Description: Prints single digit numbers of base 16.
 *
 * Return: 0
 */

int main(void)
{
	/* your code goes there */
	int n;

	n = 0;
	while (n < 16)
	{
		if (n < 10)
		{
			putchar(n + 48);
			n++;
		} else
		{
			putchar(n + 87);
			n++;
		}
	}
	putchar('\n');
	return (0);
}

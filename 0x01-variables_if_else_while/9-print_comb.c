#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints to string
 *
 * Description: Prints single digit numbers of base 10 in csv.
 *
 * Return: 0
 */

int main(void)
{
	/* your code goes there */
	int n;

	n = 0;
	while (n < 10)
	{
		putchar(n + 48);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}

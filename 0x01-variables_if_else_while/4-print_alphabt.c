#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints to string
 *
 * Description: Prints values from a - z except q and e
 *
 * Return: 0
 */

int main(void)
{
	char n;

	n = 'a';
	/* your code goes there */
	while (n <= 'z')
	{
		if (n == 'e' || n == 'q')
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

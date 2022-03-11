#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints to string
 *
 * Description: Prints values from a - z
 *
 * Return: 0
 */

int main(void)
{
	char n;

	n = 'z';
	/* your code goes there */
	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}

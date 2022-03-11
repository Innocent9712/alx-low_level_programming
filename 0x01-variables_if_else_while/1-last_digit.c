#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints to string
 *
 * Description: Prints value of n and its sign
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int mod_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	mod_n = n % 10;
	if (mod_n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, mod_n);
	else if (mod_n == 0)
		printf("Last digit of %d is %d and is 0\n", n, mod_n);
	else if (mod_n < 6 && mod_n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mod_n);
	return (0);
}

#include <stdio.h>
/**
 * main - print number from 1 - 100 with some caveats
 *
 * Return: 0
 */

int main(void)
{
	int n;

	n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			if (n % 3 == 0 && n % 5 == 0)
				printf("FizzBuzz");
			else if (n % 3 == 0)
				printf("Fizz");
			else
				printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		printf(" ");
		n++;
	}
	return (0);
}

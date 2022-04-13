#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - run the sub functions
 * @argc: number of parameters
 * @argv: array of parameters
 *
 * Return: 0
 */

int main(int argc, char* argv[])
{
	int (*func)(int, int);
	int num1, num2;
	char *symbol;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 =  atoi(argv[1]);
	symbol = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(symbol) == NULL || symbol[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*symbol == '/' || *symbol == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(symbol);


	printf("%d\n", func(num1, num2));

	return (0);
}

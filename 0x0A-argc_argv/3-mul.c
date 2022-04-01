#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints program name to console
 * @argc: parameter count
 * @argv: parameter array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int firstNum, secondNum, multiple;

		firstNum = atoi(argv[1]);
		secondNum = atoi(argv[2]);
		multiple = firstNum * secondNum;

		printf("%d\n", multiple);
	}
	else
		printf("Error\n");

	return (0);
}

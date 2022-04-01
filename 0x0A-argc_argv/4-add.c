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
	if (argc > 1)
	{
		int i, count;

		for (i = 1; i < argc; i++)
		{
			int temp_holder;

			temp_holder = atoi(argv[i]);
			if (temp_holder > 0)
				count += temp_holder;
			else
			{
				printf("Error\n");
				return (0);
			}
		}
		printf("%d\n", count);
	}
	else
		printf("0\n");

	return (0);
}

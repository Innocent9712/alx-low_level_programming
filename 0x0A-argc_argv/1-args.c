#include <stdio.h>
/**
 * main - prints program name to console
 * @argc: parameter count
 * @argv: parameter array
 *
 * Return: 0
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	if (argc > 1)
		printf("%d\n", argc - 1);

	return (0);
}

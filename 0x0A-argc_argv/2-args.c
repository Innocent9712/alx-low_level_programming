#include <stdio.h>
/**
 * main - prints program name to console
 * @argc: parameter count
 * @argv: parameter array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

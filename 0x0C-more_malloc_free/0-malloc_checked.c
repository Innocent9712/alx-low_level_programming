#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: integer
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);

	if (mem == 0)
		exit(98);

	return (mem);
}

#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: array size
 * @size: bytes of each
 *
 * Return: array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == 0)
		return (NULL);

	i = 0;

	while (*arr + i)
		arr[i] = 0;

	return (arr);
}

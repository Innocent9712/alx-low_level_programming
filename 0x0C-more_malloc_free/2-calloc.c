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
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == 0)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;

	return ((void *)arr);
}

#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars with a specific char
 * @size: size of array
 * @c: character initialized
 *
 * Return: character
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == 0)
		return (0);

	while (size--)
		arr[size] = c;

	return (arr);
}

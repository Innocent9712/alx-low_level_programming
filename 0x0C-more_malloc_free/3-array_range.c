#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: array
 */

int  *array_range(int min, int max)
{
	int i, *arr, j = max - min + 1;

	if (min > max)
		return (NULL);

	arr = malloc(j * sizeof(*arr));

	if (arr == 0)
		return (NULL);

	for (i = 0; i < j; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}

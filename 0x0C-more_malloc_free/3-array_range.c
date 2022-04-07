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
	int i, *arr, j = 0;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(*arr));

	if (arr == 0)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}

	arr[j] = '\0';

	return (arr);
}

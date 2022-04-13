/**
 * int_index - searches for an integer
 * @array: array to search through
 * @size: size of the array
 * @cmp: compare function
 *
 * Return: response
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res = -1;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (res);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (res);
}

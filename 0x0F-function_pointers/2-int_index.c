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

	if (size <= 0)
		return (res);

	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);

		if (res)
			return (i);
	}

	return (res);
}

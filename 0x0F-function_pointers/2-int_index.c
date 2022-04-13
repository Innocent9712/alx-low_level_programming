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
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}

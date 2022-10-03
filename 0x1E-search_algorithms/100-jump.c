#include "search_algos.h"
#include <math.h>
#include <stdio.h>
/**
 * jump_search - search for a value in an array using jump search
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the value or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, curr, forw;
	int result = -1;

	if (!array)
		return (result);

	jump = (size_t)sqrt(size);
	curr = 0;

	while (curr < size)
	{
		forw = curr + jump;
		printf("Value checked array[%ld] = [%d]\n", curr, array[curr]);
		if (forw >= size - 1 ||  array[forw] > value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			       curr, forw);
			i = curr;
			while (i <= forw && i < size)
			{
				printf("Value checked array[%ld] = [%d]\n",
				       i, array[i]);
				if (array[i] == value)
					return ((int)i);
				i++;
			}
			break;
		}
		curr = forw;
	}

	return (result);
}

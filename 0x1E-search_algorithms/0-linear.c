#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - searches for a value in an array of integers linearly
 * @array: array to search
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

#include "search_algos.h"
#include <stdio.h>

size_t get_pos(int *array, size_t low, size_t high, int value);
/**
 * interpolation_search - search algorithm with interpoalation search
 * @array: array to search in
 * @size: size of the array
 * @value: value to look for
 *
 * Return: index of the value or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pivot, start, end;

	if (!array)
		return (-1);
	start = 0;
	end = size - 1;

	while (start <= end)
	{
		pivot = get_pos(array, start, end, value);
		if (pivot > end)
		{
			printf("Value checked array[%ld] is out of range\n",
			       pivot);
			break;
		}

		printf("Value checked array[%ld] = [%d]\n",
		       pivot, array[pivot]);

		if (array[pivot] == value)
			return (pivot);
		if (array[pivot] > value)
			end = pivot - 1;
		else
			start = pivot + 1;
	}
	return (-1);
}

/**
 * get_pos - get the interpolated position
 * @low: lower bound of array values
 * @high: higer bound of array values
 * @value: value constant being checked for
 * @array: array to check in
 *
 * Return: the calculated position
 */

size_t get_pos(int *array, size_t low, size_t high, int value)
{
	return (low +
		(((double)(high - low) /
		  (array[high] - array[low])) * (value - array[low])));
}

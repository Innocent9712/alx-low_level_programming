#include "search_algos.h"
#include <stdio.h>

void print_arr(int *array, int start, int end);

/**
 * binary_search - searches for a value in an array of integers using BS
 * @array: array to search
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, mid;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_arr(array, left, right);
		mid = (left + right) / 2;

		if (array[mid] > value)
			right = mid - 1;
		else if (array[mid] < value)
			left = mid + 1;
		else
			return (mid);
	}
	return (-1);
}

/**
  * print_arr - print array
  * @array: array
  * @start: starting print
  * @end: ending print
  */

void print_arr(int *array, int start, int end)
{
	int i = start;

		printf("Searching in array:");
	while (i <= end)
	{
		printf(" %d", array[i]);
		if (i < end)
			printf(",");
		i++;
	}
	printf("\n");
}

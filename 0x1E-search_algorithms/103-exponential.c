#include "search_algos.h"
#include <stdio.h>

size_t get_bigger(size_t a, size_t b);
int bin_search(int *array, size_t start, size_t end, int value);
void print_arr(int *array, int start, int end);

/**
 * exponential_search - search algorithm with exponential search
 * @array: array to search in
 * @size: size of the array
 * @value: value to look for
 *
 * Return: index of the value or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t pivot, end;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	pivot = 1;

	while (1)
	{
		end = get_bigger(pivot, size - 1);
		if (array[pivot] > value || pivot >= size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			       (pivot / 2), end);
			return (bin_search(array, (pivot / 2), end, value));
		}
		printf("Value checked array[%ld] = [%d]\n",
		       pivot, array[pivot]);
		pivot *= 2;
	}
	return (-1);
}

/**
 * get_bigger - get the larger of 2 numbers
 * @a: Integer 1
 * @b: Integer 2
 *
 * Return: a or b
 */

size_t get_bigger(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

/**
 * bin_search - binary search this array
 * @array: array to search in
 * @start: index to start
 * @end: index to end at
 * @value: value to search for
 *
 * Return: index position or -1
 */


int bin_search(int *array, size_t start, size_t end, int value)
{
	size_t left = start, mid;

	while (left <= end)
	{
		print_arr(array, left, end);
		mid = (left + end) / 2;

		if (array[mid] > value)
			end = mid - 1;
		else if (array[mid] < value)
			left = mid + 1;
		else
			return ((int)mid);
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

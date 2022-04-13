#include "function_pointers.h"
/**
 * array_iterator - executes func given as parameter on elements of an array.
 * @array: array to iterate
 * @size: size of array
 * @action: function to run
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; (size_t)i < size; i++)
		{
			action(array[i]);
		}
	}
}

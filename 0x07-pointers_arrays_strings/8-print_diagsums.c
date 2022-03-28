#include <stdio.h>
/**
 * print_diagsums - print the diagonal sums of an array
 * @a: array
 * @size: diagonals
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, count1, count2;

	count1 = 0;
	count2 = 0;

	for (i = 0; i < size; i++)
	{
		count1 += a[i];
		count2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", count1);
	printf("%d\n", count2);
}

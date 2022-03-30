#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * @num: number to check
 *
 * Return: result
 */

int get_square(int n, int num);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 2)
		return (1);
	return (get_square(n, 1));
}

/**
 * get_square - calculate for the square of a number
 * @n: number
 * @num: number to check
 *
 * Return: result
 */

int get_square(int n, int num)
{
	if (n == num)
		return (-1);
	if (num * num == n)
		return (num);
	return (get_square(n, num + 1));
}

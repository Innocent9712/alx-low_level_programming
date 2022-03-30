#include "main.h"
/**
 * is_prime_number - returns  1 if the input is a prime number else returns 0
 * @a: number
 * @b: number
 *
 * Return: resuit
 */

int check_prime(int a, int b);

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - iteratively checks if input is prime number
 * @a: number
 * @b: check
 *
 * Return: resuit
 */

int check_prime(int a, int b)
{
	if (b >= a && a > 1)
		return (1);
	else if (a % b == 0 || a <= 1)
		return (0);
	else
		return (check_prime(a, b + 1));
}

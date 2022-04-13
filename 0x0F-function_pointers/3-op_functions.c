#include "3-calc.h"
/**
 * op_add - adds two values
 * @a: num 1
 * @b: num 2
 *
 * Return: resulting value
 */

int op_add(int a, int b)
{
	int res;

	res = a + b;

	return (res);
}

/**
 * op_sub - subtracts 1 value from another
 * @a: num 1
 * @b: num 2
 *
 * Return: resulting value
 */

int op_sub(int a, int b)
{
	int res;

	res = a - b;

	return (res);
}

/**
 * op_mul - multiples two values
 * @a: num 1
 * @b: num 2
 *
 * Return: resulting value
 */

int op_mul(int a, int b)
{
	int res;

	res = a * b;

	return (res);
}

/**
 * op_div - divides 1 value with another
 * @a: num 1
 * @b: num 2
 *
 * Return: resulting value
 */

int op_div(int a, int b)
{
	int res;

	res = a / b;

	return (res);
}

/**
 * op_mod - find the modulus of 1 value from another
 * @a: num 1
 * @b: num 2
 *
 * Return: resulting value
 */

int op_mod(int a, int b)
{
	int res;

	res = a % b;

	return (res);
}

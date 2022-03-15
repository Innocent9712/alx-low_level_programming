#include "main.h"

/**
 * print_sign - checks if input is a positive, negative or zero
 * @n : parameter for the function ASCII value
 *
 * Description: It receives an input and checks if its value.
 *
 * Return: 1 (success) 0 (failure)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

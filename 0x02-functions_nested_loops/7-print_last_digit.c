#include "main.h"

/**
 * print_last_digit - prints the last digit of an input value
 * @num : parameter for the function ASCII value
 *
 *
 * Return: 1 (success) 0 (failure)
 */

int print_last_digit(int num)
{
	int value;

	if (num > 0)
	{
		value = num % 10;
	}
	else
	{
		value = -1 * (num % 10);
	}

	_putchar(value + 48);
	return (value);
}

#include "main.h"
#include <ctype.h>

/**
 * _islower - checks if input is lowercase or uppercase
 * @c : parameter for the function ASCII value
 *
 * Description: It receives an input and checks if it is a lower case.
 *
 * Return: 1 (success) 0 (failure)
 */

int _islower(int c)
{
	return (c >= 97 && c <= 122);
}

#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks if input is lowercase or uppercase
 * @c : parameter for the function ASCII value
 *
 * Description: It receives an input and checks if it is an upper case.
 *
 * Return: 1 (success) 0 (failure)
 */

int _isalpha(int c)
{
	return (c >= 65 && c <= 90) || (c >=97 && c <= 122);
}

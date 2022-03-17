#include <ctype.h>

/**
 * _isupper - checks if a character is uppercase
 * @c: character parameter passed in
 *
 * Return: 1 (if uppercase) 0 (if not)
 */

int _isupper(int c)
{
	return (c >= 65 && c <= 90);
}

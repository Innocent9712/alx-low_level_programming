#include "main.h"
/**
 * binary_to_uint - convert binary to an unsigned int
 * @b: binary string
 *
 * Return: integer value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;

	if (!b)
		return (0);

	while (b && *b)
	{
		if (*b < '0' || *b > '1')
			return (0);

		dec = dec * 2 + *b - '0';
		b++;
	}

	return (dec);

}


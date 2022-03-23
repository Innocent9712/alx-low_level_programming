#include "main.h"
/**
 * _strncat - concatenate two strings with some conditions
 * @dest: first string
 * @src: second string
 * @n: number of character from the src string
 *
 * Return: char concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int count2, count;

	for (count = 0; dest[count] != '\0'; count++)
	;

	for (count2 = 0; count2 < n && src[count2] != '\0'; count2++)
		dest[count + count2] = src[count2];
	dest[count + count2] = '\0';

	return (dest);
}

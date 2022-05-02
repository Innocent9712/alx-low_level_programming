#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: first string
 * @src: second string
 *
 * Return: char concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int count2 = -1, count;

	for (count = 0; dest[count] != '\0'; count++)
	;

	do {
		count2++;
		dest[count] = src[count2];
		count++;
	} while (src[count2] != '\0');

	return (dest);
}

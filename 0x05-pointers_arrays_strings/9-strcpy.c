#include "main.h"
/**
 * *_strcpy - copy from one string variable to another
 * @dest: points to a string array
 * @src: holds a string
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	do {
		i++;
		dest[i] = src[i];
	}
	while (src[i] != '\0')
	return (dest);
}

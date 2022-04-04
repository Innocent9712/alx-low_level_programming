#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a duplicate of str
 * @str: string
 *
 * Return: duplicate string
 */

char *_strdup(char *str)
{
	char *duplicate_str;

	int size;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;
	if (duplicate_str == 0)
		return (NULL);
	while (size--)
		duplicate_str[size] = str[size];

	return (duplicate_str);
}

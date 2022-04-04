#include <stdlib.h>
/**
 * strlent - get string length
 * @str: string
 *
 * Return: number
 */

int strlent(char *str)
{
	int size;

	for (size = 0; str[size] != '\0'; size++)
		;

	return (size);
}

/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: concatenated form of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;

	int size1, size2, total;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = strlent(s1);
	size2 = strlent(s2);

	concat_str = malloc(sizeof(char) * (size1 + size2));

	if (concat_str == 0)
		return (NULL);

	for (total = 0; total <= size1 + size2; total++)
	{
		if (total < size1)
			concat_str[total] = s1[total];
		else
			concat_str[total] = s2[total - size1];
	}

	concat_str[total] = '\0';

	return (concat_str);
}

#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: pointer to string s
 *
 * Return: i
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		if (s[i])
			i++;
		else
			break;
	}
	return (i);
}

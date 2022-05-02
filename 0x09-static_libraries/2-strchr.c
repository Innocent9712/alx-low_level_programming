/**
 * _strchr - locates a character from a string
 * @s: variable to search in
 * @c: charachter to find
 *
 * Return: pointer to c in s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) >= '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return ('\0');
}

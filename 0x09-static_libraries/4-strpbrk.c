/**
 * _strpbrk - searches for any of a set of bytes
 * @s: variable to search in
 * @accept: charachters to compare with
 *
 * Return: pointer to c in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (k = 0; *(accept + k) != '\0'; k++)
		{
			if (*(s + i) == *(accept + k))
				return ((s + i));
		}
	}
	return (0);
}

/**
 * _strspn - find the number of occurence of charachters from a string
 * @s: string to check in
 * @accept: characters to check for
 *
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, k;

	for (j = 0; *(s + j) != '\0'; j++)
	{
		for (k = 0; *(s + j) != *(accept + k); k++)
		{
			if (*(accept + k) == '\0')
				return (j);
		}
	}

	return (j);
}

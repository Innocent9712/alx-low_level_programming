/**
 * _memset - set specific memory areas to a specific value
 * @s: variable to change
 * @b: value to replace with
 * @n: number of memory space to change
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}

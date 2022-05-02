/**
 * _memcpy - set specific memory areas to specific value from another variable
 * @dest: variable to change
 * @src: variable to get value from
 * @n: number of memory space to change
 *
 * Return: s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}

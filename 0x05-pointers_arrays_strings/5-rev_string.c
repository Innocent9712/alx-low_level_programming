#include "main.h"
/**
 * rev_string - prints string to stdoutput in reverse
 * @s: pointer to string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int fLen, hLen, i;
	char temp;

	for (fLen = 0; s[fLen] != '\0'; fLen++)
		;

	i = 0;

	hLen = fLen / 2;

	while (hLen--)
	{
		temp = s[fLen - i - 1];
		s[fLen - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}

#include <unistd.h>
#include "main.h"
/**
 * main - prints to string
 *
 * Description: Prints "_putchar" to output.
 *
 * Return: 0
 */

int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

/**
 * print_name - prints a name
 * @name: name to pass to function
 * @f: function
 *
 * Return: void
 */

void print_name(char *name, void  (*f)(char *))
{
	f(name);
}

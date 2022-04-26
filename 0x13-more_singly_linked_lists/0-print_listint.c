#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of the list
 *
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t node_num = 0;

	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		node_num++;
	}
	return (node_num);
}

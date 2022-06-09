#include "lists.h"
/**
 * print_dlistint - print every item in a linked list h
 * @h: head of linked list
 *
 * Return: number of nodes in linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num;
	dlistint_t *current;

	if (h == NULL)
		return (0);

	current = malloc(sizeof(dlistint_t));
	current->prev = h->prev;
	current->n = h->n;
	current->next = h->next;
	num = 0;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		num++;
		current = current->next;
	}

	free(current);
	return (num);
}

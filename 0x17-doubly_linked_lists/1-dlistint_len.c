#include "lists.h"
/**
 * dlistint_len - print the length of a doubly linked list h
 * @h: head of the list
 *
 * Return: The number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;
	dlistint_t *current;

	current = malloc(sizeof(dlistint_t));
	current->prev = h->prev;
	current->n = h->n;
	current->next = h->next;

	while (current != NULL)
	{
		num++;
		current = current->next;
	}
	free(current);
	return (num);
}

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
	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}

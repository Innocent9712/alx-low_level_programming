#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at a particular index
 * @h: address of the head of list
 * @idx: index to add node at
 * @n: value of node
 *
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *temp, *next;

	/*
	if (*h == NULL)
		return (NULL);
	*/
	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	current = *h;

	while (idx > 1)
	{
		if (current != NULL)
			current = current->next;
		else
			return (NULL);
		idx--;
	}

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	next = current->next;
	current->next = temp;
	next->prev = temp;
	temp->prev = current;
	temp->next = next;
	return (temp);
}

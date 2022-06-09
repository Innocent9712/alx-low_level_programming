#include "lists.h"
/**
 * get_dnodeint_at_index - get value at an index
 * @head: head of the list
 * @index: index of node to get
 *
 * Return: the node at that index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	while (index)
	{
		if (head->next != NULL)
			head = head->next;
		else
			return (NULL);
		index--;
	}
	return (head);
}

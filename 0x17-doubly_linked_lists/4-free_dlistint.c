#include "lists.h"
/**
 * free_dlistint - free every node in a list
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

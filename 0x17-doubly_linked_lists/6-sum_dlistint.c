#include "lists.h"
/**
 * sum_dlistint - sum all values in a list
 * @head: head of the list
 *
 * Return: sum total
 */

int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (count);
	while (head)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}

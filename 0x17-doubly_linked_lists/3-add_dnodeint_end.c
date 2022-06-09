#include "lists.h"
/**
 * add_dnodeint_end - add new node to end of list h
 * @head: address to head of the list
 * @n: data of the node
 *
 * Return: address of the new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = temp;
	temp->prev = current;
	return (temp);
}

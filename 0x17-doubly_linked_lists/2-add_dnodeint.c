#include "lists.h"
/**
 * add_dnodeint - add a node to the beginning of dlist h
 * @head: address of head of list
 * @n: data for the node
 *
 * Return: address of new node or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;
	return (temp);
}

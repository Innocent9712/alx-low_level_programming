#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of listint_t list
 * @head: head of the list
 * @n: value to add
 *
 * Return: node added
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}

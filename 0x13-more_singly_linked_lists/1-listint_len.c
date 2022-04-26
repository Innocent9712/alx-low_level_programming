#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head of the ist
 *
 * Return: number of items
 */

size_t listint_len(const listint_t *h)
{
	size_t node_num = 0;

	while (h)
	{
		h = h->next;
		node_num++;
	}
	return (node_num);
}

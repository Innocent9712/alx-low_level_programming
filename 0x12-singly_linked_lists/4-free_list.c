#include "lists.h"
/**
 * free_list - function that frees a list_t
 * @head: beginning of list pointer
 *
 */

void free_list(list_t *head)
{
	list_t *current, *nxt;

	while (current != NULL)
	{
		nxt = curret->next
		free(current->str);
		free(current);
		current = nxt;
	}
}

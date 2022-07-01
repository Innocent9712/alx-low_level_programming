#include "hash_tables.h"
/**
 * hash_table_print - print all values in a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int check = 0;

	if (ht == NULL || ht->array == NULL ||
	     ht->size == 0)
		exit(EXIT_FAILURE);
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				if (check == 1)
					printf(", ");
				printf("'%s': '%s'", current->key,
				       current->value);
				check = 1;

				current = current->next;
			}
		}
	}
	printf("}\n");
	free(current);
}

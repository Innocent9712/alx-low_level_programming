#include "hash_tables.h"
/**
 * hash_table_get - gets a value from a hash table from a given key
 * @ht: hash table to look in
 * @key: key to search for
 *
 * Return: value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || ht->array == NULL || key == NULL ||
	    strlen(key) == 0 )
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}

	return (NULL);
}

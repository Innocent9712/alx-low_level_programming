#include "hash_tables.h"
/**
 * key_index - generate the array index to store an entry
 * @key: key of the entry
 * @size: size of the array
 *
 * Return: array index position
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash_value;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}

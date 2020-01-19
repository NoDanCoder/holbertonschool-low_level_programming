#include <stdlib.h>
#include "hash_tables.h"

/**
 * free_content_at_index - free linked list at given index,
 * for hash tables
 * @ht: is the hash table
 * @index: position in the array of "ht" to free
 *
 * Return: 1 on success
 * On error: 0 on fail
 */

int free_content_at_index(hash_table_t *ht, unsigned long index)
{
	hash_node_t *current, *after;

	if (!ht || index >= ht->size)
		return (0);

	current = ht->array[index];
	for (; current; current = after)
	{
		after = current->next;
		free(current->value), free(current->key);
		free(current);
	}

	return (1);
}

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 *
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long i = 0;

	if (!ht)
		return;

	for (; i < ht->size; i++)
		if (ht->array[i])
			free_content_at_index(ht, i);

	free(ht->array);
	free(ht);
}

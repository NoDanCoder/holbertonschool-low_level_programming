#include <stdio.h>
#include "hash_tables.h"

/**
 * print_content_at_index - print linked list at given index,
 * for hash tables
 * @ht: is the hash table
 * @index: position in the array of "ht" to print
 *
 * Return: 1 on success
 * On error: 0 on fail
 */

int print_content_at_index(const hash_table_t *ht, unsigned long index)
{
	hash_node_t *current;

	if (!ht || index >= ht->size)
		return (0);

	current = ht->array[index];
	for (; current; current = current->next)
	{
		printf("'%s': '%s'", current->key, current->value);
		printf("%s", (current->next) ? ", " : "");
	}

	return (1);
}

/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table to print
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long i = 0;
	char *divisor = "";

	if (!ht)
		return;

	printf("%c", '{');
	for (; i < ht->size; i++)
		if (ht->array[i])
		{
			printf("%s", divisor);
			print_content_at_index(ht, i);
			divisor = ", ";
		}
	printf("%c\n", '}');
}

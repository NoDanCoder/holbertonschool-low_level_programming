#include <stdlib.h>
#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hst;
	hash_node_t **buff;

	hst = malloc(sizeof(hash_table_t));
	if (!hst)
		return NULL;

	buff = malloc(size * sizeof(hash_node_t *));
	if (!buff)
		return NULL;

	hst->size = size;
	hst->array = buff;

	return hst;
}

#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * (Using djb2 algorithm)
 * @key: is the key of data
 * @size: the size of the array of the hash table
 *
 * Return:  the index at which the key/value pair should be
 * stored in the array of the hash table
 * On error: 0 inapropiate entry
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || !*key || size == 0)
		return (0);

	return (hash_djb2(key) % size);
}

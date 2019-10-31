#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that returns the number of elements in a
 * linked list_t list
 * @h: address list to measure
 *
 *
 * Return: the number of nodes
 * On error: -1 inapropiate entry
 */

size_t list_len(const list_t *h)
{
	list_t *value = (list_t *) h;
	int nodes = 0;

	for (; value; value = value->next)
		nodes++;

	return (nodes);
}

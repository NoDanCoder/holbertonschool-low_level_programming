#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list
 * @h: dlistint_t list
 *
 * Return: the number of nodes
 * On error: Nothing
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t cnt = 0;

	for (; h; h = h->next)
		cnt++;

	return (cnt);
}

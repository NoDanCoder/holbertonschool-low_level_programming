#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements in
 * a linked listint_t lis
 * @h: listint_t list to handle
 *
 *
 * Return: the number of nodes
 * On error: -1 inapropiate entry
 */

size_t listint_len(const listint_t *h)
{
	int cnt = 0;

	for (; h; h = h->next)
		cnt++;

	return (cnt);
}

#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a
 * listint_t list
 * @h: listint_t list to handle
 *
 *
 * Return: the number of nodes
 * On error: -1 inapropiate entry
 */

size_t print_listint(const listint_t *h)
{
	int cnt = 0;

	for (; h; h = h->next, cnt++)
		printf("%d\n", h->n);

	return (cnt);
}

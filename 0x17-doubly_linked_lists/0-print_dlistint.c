#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: dlistint_t list
 *
 * Return: the number of nodes
 * On error: Nothing
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t cnt = 0;

	for (; h; h = h->next, cnt++)
		printf("%d\n", h->n);

	return (cnt);
}

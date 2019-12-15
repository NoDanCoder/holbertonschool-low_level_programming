#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given
 * position
 * @h: dlistint_t list address
 * @idx: is the index of the list where the new node should be added. Index
 * starts at 0
 * @n: number to insert into new node
 *
 * Return: the address of the new element, or NULL if it failed
 * On error: if it is not possible to add the new node at index idx, do not
 * add the new node and return NULL
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current && i < idx)
		current = current->next, i++;

	if (i == idx)
	{
		if (!current)
			return (add_dnodeint_end(h, n));

		else
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);

			new->n = n;
			new->prev = current->prev;
			new->next = current;

			(current->prev)->next = new;
			current->prev = new;

			return (new);
		}
	}

	return (NULL);
}

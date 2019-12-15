#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning
 * of a dlistint_t list
 * @head: dlistint_t list address
 * @n: data to insert into new node
 *
 * Return: the address of the new element, or NULL if it failed
 * On error: Nothing
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

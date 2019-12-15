#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a
 * dlistint_t list
 * @head: dlistint_t list address
 * @n: data to insert into new node
 *
 * Return: the address of the new element, or NULL if it failed
 * On error: Nothing
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current = *head;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	while (current && current->next)
		current = current->next;

	new->prev = current;
	new->next = NULL;

	if (current)
		current->next = new;
	else
		*head = new;

	return (new);
}

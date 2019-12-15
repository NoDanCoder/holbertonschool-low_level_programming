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

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = (int) n;
	new->prev = NULL;
	new->next = (*head) ? *head : NULL;
	*head = new;

	return (new);
}

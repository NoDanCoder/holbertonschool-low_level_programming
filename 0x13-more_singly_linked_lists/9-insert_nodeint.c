#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 * @head: double pointer listint_t list to add the element
 * @idx: index to add the element
 * @n: value of the element
 *
 *
 * Return: the address of the new node, or NULL if it failed
 * On error: -1 inapropiate entry
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *pastValue = (idx) ? *head : NULL;
	listint_t *new = NULL;

	while (pastValue && --idx)
		pastValue = pastValue->next;

	if (!idx)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);

		new->n = n;
		if (*head)
			new->next = (pastValue) ? pastValue->next : *head;
		else
			new->next = NULL;

		if (pastValue)
			pastValue->next = new;
		else
			*head = new;
	}

	return (new);
}

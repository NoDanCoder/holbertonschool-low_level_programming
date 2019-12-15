#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * "index" of a "dlistint_t" linked list
 * @head: dlistint_t listi address
 * @index: is the index of the node, starting from 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 * On error: Nothing
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *next;
	unsigned int i = 0;

	if (!head || !*head)
		return (0);

	for (; current && i < index; current = next, i++)
		next = current->next;

	if (i == index && current)
	{
		if (current->prev)
			(current->prev)->next = current->next;
		else
			*head = current->next;
		if (current->next)
			(current->next)->prev = current->prev;

		free(current);
		return (1);
	}

	return (-1);
}

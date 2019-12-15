#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - function that free a dlistint_t list
 * @head: dlistint_t list
 *
 * Return: Nothing
 * On error: Nothing
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *next;

	for (; current; current = next)
	{
		next = current->next;
		free(current);
	}
}

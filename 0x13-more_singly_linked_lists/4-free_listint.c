#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: listint_t list to free
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void free_listint(listint_t *head)
{
	listint_t *value = head;

	if (value)
	{
		while (value->next)
		{
			head = value;
			value = value->next;
			free(head);
		}

		free(value);
	}
}

#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node at a given position
 * @head: double pointer listint_t list to delete the element
 * @index: index to delete the element
 *
 *
 * Return: 1 if it succeeded, -1 if it failed
 * On error: -1 inapropiate entry
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *value = *head;
	listint_t *pastValue = (index) ? *head : NULL;

	while (pastValue && --index)
		pastValue = pastValue->next;

	if (!index && *head)
	{
		if (pastValue)
		{
			value = pastValue->next;
			pastValue->next = (pastValue->next)->next;
			free(value);
		}
		else
		{
			*head = value->next;
			free(value);
		}

		return (1);
	}

	return (-1);
}

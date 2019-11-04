#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list
 * @head: double pointer listint_t list to free
 *
 *
 * Return: "value->n" of freed node
 * On error: -1 inapropiate entry
 */

int pop_listint(listint_t **head)
{
	listint_t *value = *head;
	int valueDeleted = 0;

	if (value)
	{
		*head = value->next;
		valueDeleted = value->n;
		free(value);
		value = *head;
	}

	return (valueDeleted);
}

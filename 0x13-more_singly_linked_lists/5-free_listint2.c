#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * reciving a pointer to pointer list as parameter
 * @head: double pointer listint_t list to free
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void free_listint2(listint_t **head)
{
	listint_t *value;

	while (head && *head)
	{
		value = *head;
		*head = value->next;
		free(value);
	}
}

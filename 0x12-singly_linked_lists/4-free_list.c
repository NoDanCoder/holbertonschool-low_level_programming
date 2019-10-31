#include "lists.h"
#include <stdlib.h>

/**
 * free_list - unction that frees a list_t list
 * @head: address list to free
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void free_list(list_t *head)
{
	list_t *value = head;
	list_t *delete = head;

	while (value)
	{
		value = delete->next;
		free(delete->str);
		free(delete);
		delete = value;
	}
}

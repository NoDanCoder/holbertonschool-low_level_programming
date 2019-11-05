#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: double pointer listint_t list to reverse
 *
 *
 * Return: a pointer to the first node of the reversed list
 * On error: -1 inapropiate entry
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *past = NULL;
	listint_t *next;

	while (head && *head)
	{
		next = head[0]->next;
		head[0]->next = past;
		past = head[0];
		head[0] = next;
	}

	*head = past;
	return (*head);
}

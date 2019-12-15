#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: dlistint_t list
 *
 * Return: the sum of all nodes, if the list is empty, return 0
 * On error: Nothing
 *
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	for (; current; current = current->next)
		sum += current->n;

	return (sum);
}

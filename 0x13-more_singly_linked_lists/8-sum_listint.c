#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all
 * the data "object.n" of a listint_t linked list
 * @head: listint_t list to iterate
 *
 *
 * Return: the sum of all the data "object.n", if the list is empty, return 0
 * On error: -1 inapropiate entry
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head; head = head->next)
		sum += head->n;

	return (sum);
}

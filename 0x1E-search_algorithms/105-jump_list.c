#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list -  searches for a value in a sorted linked list of
 * integers using the Jump search algorithm
 * @list: pointer to start of linked list
 * @size: size of the linked list
 * @value: value to search
 *
 * Return: index property of node where value was found
 * On error: -1
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t block = sqrt(size);
	size_t step = 0;
	size_t r = 0, l = 0;
	listint_t *curr = list;
	listint_t *prev = list;

	if (!list)
		return (NULL);

	do {
		step += block;

		prev = curr;
		while (curr->next && curr->index != step)
			curr = curr->next;

		printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);

	} while (step < size && value > curr->n);

	r = (step < size) ? step : size - 1;
	l = step - block;
	printf("Value found between indexes [%ld] and [%ld]\n", l, r);

	for (; prev != curr; prev = prev->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);

		if (prev->n == value)
			return (prev);
	}

	printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
	return ((prev->n == value) ? prev : NULL);
}

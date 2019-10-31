#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: address list to print
 *
 *
 * Return: the number of nodes
 * On error: -1 inapropiate entry
 */

size_t print_list(const list_t *h)
{
	list_t *value = (list_t *) h;
	int nodes = 0;
	char *isNull = NULL;

	while (value)
	{
		isNull = (!value->str) ? "(nil)" : value->str;
		printf("[%d] %s\n", value->len, isNull);
		value = value->next;
		nodes++;
	}

	return (nodes);
}

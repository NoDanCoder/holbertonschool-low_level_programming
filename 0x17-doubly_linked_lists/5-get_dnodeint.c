#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t
 * linked list
 * @head: dlistint_t list
 * @index: is the index of the node, starting from 0
 *
 * Return: Node address, if the node does not exist, return NULL
 * On error: Nothing
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head, *next;
	unsigned int i = 0;

	for (; current && i < index; current = next, i++)
		next = current->next;

	return (current);
}

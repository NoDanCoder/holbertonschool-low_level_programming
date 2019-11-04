#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the node of of position "index"
 * in a listint_t linked list
 * @head: listint_t list to search in
 * @index: is the index of the node, starting at 0
 *
 *
 * Return: "node" of specified index, if the node does not exist, return NULL
 * On error: -1 inapropiate entry
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head && index--)
		head = head->next;

	return (head);
}

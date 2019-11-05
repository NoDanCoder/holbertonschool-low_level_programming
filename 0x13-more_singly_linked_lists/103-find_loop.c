#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - function that cheacks if a list is a cycle
 * linked list
 * @head: listint_t list
 *
 *
 * Return: a pointer to the first node where is foint the start
 * of the cycle or null if doesnt
 * On error: -1 inapropiate entry
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head;
	listint_t *slow = head;

	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;

		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				fast = fast->next;
				slow = slow->next;
			}
			return (slow);
		}
	}

	return (NULL);
}

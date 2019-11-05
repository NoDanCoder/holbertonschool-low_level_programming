#include <stdlib.h>
#include "lists.h"

/**
 * isCycleList - function that cheacks if a list is a cycle
 * linked list
 * @head: listint_t list
 *
 *
 * Return: a pointer to the first node where is foint the start
 * of the cycle or null if doesnt
 * On error: -1 inapropiate entry
 */

const listint_t *isCycleList(const listint_t *head)
{
	const listint_t *fast = head;
	const listint_t *slow = head;

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

/**
 * print_listint_safe - function that prints a listint_t linked list safety
 * @head: listint_t list
 *
 *
 * Return: the number of nodes in the list
 * On error: -1 inapropiate entry
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *breakPoint = isCycleList(head);
	int ommitOnce = 0;
	int cnt = 0;

	while (head && ommitOnce != 2)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		head = head->next;
		if (head == breakPoint)
			ommitOnce++;
		cnt++;
	}

	if (ommitOnce == 2)
		printf("-> [%p] %d\n", (void *) breakPoint, breakPoint->n);

	return (cnt);
}

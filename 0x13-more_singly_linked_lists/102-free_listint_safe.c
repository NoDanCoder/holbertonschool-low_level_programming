#include <stdlib.h>
#include "lists.h"

/**
 * isCycleList2 - function that cheacks if a list is a cycle
 * linked list, diference with 1, handle const variables
 * @head: listint_t list
 *
 *
 * Return: a pointer to the first node where is foint the start
 * of the cycle or null if doesnt
 * On error: -1 inapropiate entry
 */

listint_t *isCycleList2(listint_t *head)
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

/**
 * free_listint_safe - function that frees a listint_t linked list safety
 * @h: double pointer listint_t list
 *
 *
 * Return: the number of nodes freed in the list
 * On error: -1 inapropiate entry
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *breakPoint = isCycleList2(*h);
	listint_t *value;
	int cnt = 0;

	while (h && *h)
	{
		if (*h == breakPoint && breakPoint != NULL)
		{
			value = *h;
			*h = value->next;
			value->next = NULL;
		}

		if (h && *h)
		{
			value = *h;
			*h = value->next;
			free(value);
		}

		cnt++;
	}

	return (cnt);
}

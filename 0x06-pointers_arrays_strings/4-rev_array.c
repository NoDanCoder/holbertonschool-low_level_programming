#include "holberton.h"

/**
 * reverse_array - reverse a given array
 * @a: array to reverse
 * @n: size of the array
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int dummie = 0;

	for (i = 0; i < n / 2; i++)
	{
		dummie = *(a + i);
		*(a + i) = *(a + (n - 1 - i));
		*(a + (n - 1 - i)) = dummie;
	}
}

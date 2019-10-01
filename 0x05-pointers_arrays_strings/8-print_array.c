#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array given
 * @a: array input
 * @n: number of elements to be printed
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
		printf((i < n - 1) ? "%d, " : "%d\n", *(a + i));

	printf((n <= 0) ? "\n" : "");
}

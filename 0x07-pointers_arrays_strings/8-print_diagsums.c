#include "holberton.h"

/**
 * print_diagsums - print a diagonal add, of an matrix
 * by right and left side
 * @a: matrix to operate
 * @size: size of matrix
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int carry[] = {0, 0};

	for (i = 0; i < size; i++)
	{
		carry[0] += *(a + ((size * i) + i));
		carry[1] += *(a + ((size * (i + 1)) - (i + 1)));
	}

	printf("%d, ", carry[0]);
	printf("%d\n", carry[1]);
}

#include "holberton.h"

/**
 * swap_int - swap between two values
 * @a: addr of first value
 * @b: addr of second value
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void swap_int(int *a, int *b)
{
	int dummie = *a;
	*a = *b;
	*b = dummie;
}

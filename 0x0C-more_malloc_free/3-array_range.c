#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * it works like range() function on python
 * @min: (included)number start to operate
 * @max: (included)last number of array
 *
 *
 * Return: address where is stored the result
 * On error: -1 inapropiate entry
 */

int *array_range(int min, int max)
{
	int *ptr;
	int arrSize = (max - min) ? (max - min + 1) : 1;
	int i = 0;

	if (arrSize < 0)
		return (NULL);

	ptr = malloc(arrSize * sizeof(*ptr));

	if (!ptr)
		return (NULL);

	for (i = 0; i < arrSize; i++, min++, ptr++)
		*ptr = min;

	return (ptr - i);
}

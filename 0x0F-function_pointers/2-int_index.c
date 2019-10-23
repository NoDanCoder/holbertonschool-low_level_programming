#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array start address to operate
 * @size: size of array
 * @cmp: compare funtion
 *
 * for explample you can use a function to compare and
 * find a element into array
 *
 * Return: index posistion array of true comparation
 * On error: -1 inapropiate entry
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp && size > 0)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);

	return (-1);
}

#include "function_pointers.h"

/**
 * array_iterator -  function that executes a function given as a parameter
 * on each element of an array.
 * @array: array start address to operate
 * @size: size of the array
 * @action: funtion to operate, for example print, add, etc.
 *
 * for explample you can use a function to print in uppercase the
 * value of "element" in "array"
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action && size > 0)
		for (i = 0; i < size; i++)
			action(array[i]);
}

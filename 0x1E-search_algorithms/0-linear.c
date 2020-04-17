#include <stdio.h>

/**
 * linear_search - Search a value using a lineal algorithm
 * @array: pointer to start of array
 * @size: size of the array
 * @value: value to search
 *
 * Return: index where value was found
 * On error: -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || !*array)
		return (-1);

	for (; i != size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, *(array + i));

		if (*(array + i) == value)
			return (i);
	}

	return (-1);
}

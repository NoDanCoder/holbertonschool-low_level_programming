#include "holberton.h"
#include <stdlib.h>

/**
 * _memset_int - replace from start to "n", the numbers
 * to int "b", into "s" address
 * @s: var where changes will be stored
 * @b: number to set into "s"
 * @n: delimiter
 *
 * like memset, instead of char is for int
 *
 * Return: address where is stored the result
 * On error: -1 inapropiate entry
 */

int *_memset_int(int *s, int b, unsigned int n)
{
	int *org = s;
	unsigned int i = 0;

	for (; i < n; i++, s++)
		*s = b;

	return (org);
}

/**
 * create_array_int - function that creates an array of int, and
 * initializes it with a specific value
 * @size: size of the array
 * @c: number to set into array elements
 *
 * like create_array, instead of char array is for int array
 *
 * Return: address where is stored the result
 * On error: -1 inapropiate entry
 */

int *create_array_int(unsigned int size, int c)
{
	int *arr = malloc(size * sizeof(*arr));

	if (!arr)
		return (NULL);

	arr = _memset_int(arr, c, size);

	return ((size) ? arr : NULL);
}

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers, inizialized with 0
 * @width: width of the matrix
 * @height: height of the matrix
 *
 *
 * Return: address where is stored the result
 * On error: -1 inapropiate entry
 */

int **alloc_grid(int width, int height)
{
	int **arr = NULL;
	int i = 0;

	arr = malloc(height * sizeof(char *));

	if (!arr || width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = create_array_int(width, 0);
		if (!arr[i])
			for (; i >= 0; i--)
				free(arr[i]);
	}

	return (arr);
}

#include "holberton.h"
#include <stdlib.h>

/**
 * _memset - replace from start to "n", the characters
 * to char "b", into "s" address
 * @s: var where changes will be stored
 * @b: char to set into "s"
 * @n: delimiter
 *
 *
 * Return: address where is stored the result
 * On error: -1 inapropiate entry
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *org = s;
	unsigned int i = 0;

	for (; i < n; i++, s++)
		*s = b;

	return (org);
}

/**
 * create_array - function that creates an array of chars, and
 * initializes it with a specific char
 * @size: size of the array
 * @c: char to set into array elements
 *
 *
 * Return: address where is stored the result
 * On error: -1 inapropiate entry
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(*arr));

	if (!arr)
		return (NULL);

	arr = _memset(arr, c, size);

	return ((size) ? arr : NULL);
}

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
 * _calloc - function that allocates memory for an array, using malloc
 * and inicializating his values to zero "0"
 * @nmemb: number of elements
 * @size: datatype size
 *
 *
 * Return: address where is stored the result
 * On error: -1 inapropiate entry
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *oprPtr;
	void *outPtr;

	if (!nmemb || !size)
		return (NULL);

	oprPtr = malloc(nmemb * size);

	if (!oprPtr)
		return (NULL);

	_memset(oprPtr, 0, nmemb * size);

	outPtr = oprPtr;

	return (outPtr);
}

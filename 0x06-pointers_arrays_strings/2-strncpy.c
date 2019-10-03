#include "holberton.h"

/**
 * _strncpy - copy a string into dest upto n if
 * n is greater than src, copy upto '\0'
 * @dest: var where changes will be stored
 * @src: source to copy
 *
 *
 * Return: address where is stores the result
 * On error: -1 inapropiate entry
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; *(src + i) && i < n; i++)
		*(dest + i) = *(src + i);

	for (; i < n; i++)
		*(dest + i) = 0;

	return (dest);
}

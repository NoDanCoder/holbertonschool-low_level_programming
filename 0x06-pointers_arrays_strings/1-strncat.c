#include "holberton.h"

/**
 * _strncat - concatenate two strings into dest upto n if
 * n is greater than src, copy upto '\0'
 * @dest: var where changes will be stored
 * @src: source to concat
 *
 *
 * Return: address where is stores the result
 * On error: -1 inapropiate entry
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int count = 0;

	for (i = 0; *(dest + i); i++)
		count++;

	for (i = 0; *(src + i) && i < n; i++)
		*(dest + count + i) = *(src + i);

	*(dest + count + i) = 0;

	return (dest);
}

#include "holberton.h"

/**
 * _strcat - concatenate two strings into dest
 * @dest: var where changes will be stored
 * @src: source to concat
 *
 *
 * Return: address where is stores the result
 * On error: -1 inapropiate entry
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int count = 0;

	for (i = 0; *(dest + i); i++)
		count++;

	for (i = 0; *(src + i); i++)
		*(dest + count + i) = *(src + i);

	*(dest + count + i) = *(src + i);

	return (dest);
}

#include "holberton.h"

/**
 * _memcpy - replace from "dest" to "n", to chars from "src",
 * into "dest" address
 * @dest: var where changes will be stored
 * @src: source to replace
 * @n: delimiter
 *
 *
 * Return: address where is stored the result
 * On error: -1 inapropiate entry
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *org = dest;
	unsigned int i = 0;

	for (; i < n; i++, dest++, src++)
		*dest = *src;

	return (org);
}

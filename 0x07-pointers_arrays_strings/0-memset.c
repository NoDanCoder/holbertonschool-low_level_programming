#include "holberton.h"

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

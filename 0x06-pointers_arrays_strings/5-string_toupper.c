#include "holberton.h"

/**
 * string_toupper - lowercase to uppercase conveter
 * @n: input char
 *
 *
 * Return: uppercase text
 * On error: -1 inapropiate entry
 */

char *string_toupper(char *n)
{
	int cnt = 0;

	for (cnt = 0; *n; n++, cnt++)
		if (*n >= 'a' && *n <= 'z')
			*n -= 32;

	return (n - cnt);
}

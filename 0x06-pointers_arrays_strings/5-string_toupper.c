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

	for (cnt = 0; *n && *n <= 'a' && *n >= 'z'; n++, cnt++)
		*n = *n - 32;

	return (n - cnt);
}

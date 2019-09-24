#include "holberton.h"

/**
 * _islower - get a ascii number character and if
 * is lowercase 1 else 0
 * @c: The int or character to process
 *
 *
 * Return: 1 if is lower case, 0 else
 * On error: -1 inapropiate entry
 */

int _islower(int c)
{
	int i = 0;
	int offset = 97;

	for (i = offset; i < (offset + 26); i++)
		if (c == i)
			return (1);

	return (0);
}

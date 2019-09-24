#include "holberton.h"

/**
 * _isalpha - get a ascii number character and if
 * is lowercase or upper case 1 else 0
 * @c: The int or character to process
 *
 *
 * Return: 1 if is lower case or lower case, 0 else
 * On error: -1 inapropiate entry
 */

int _isalpha(int c)
{
	int i = 0;
	int offset[2] = {65, 97};

	for (i = offset[0]; i < (offset[0] + 26); i++)
		if (c == i)
			return (1);

	for (i = offset[1]; i < (offset[1] + 26); i++)
		if (c == i)
			return (1);

	return (0);
}

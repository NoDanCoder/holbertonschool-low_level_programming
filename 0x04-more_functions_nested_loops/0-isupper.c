#include "holberton.h"

/**
 * _isupper - detect a upper case letter
 * @c: character to evaluate
 *
 *
 * Return: 1 if upper, 0 else
 * On error: -1 inapropiate entry
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}

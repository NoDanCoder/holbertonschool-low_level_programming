#include "holberton.h"

/**
 * _isdigit - detect a digit
 * @c: digit to evaluate
 *
 *
 * Return: 1 if digit, 0 else
 * On error: -1 inapropiate entry
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}

#include "holberton.h"

/**
 * _abs - absolute number
 * @n: The int to process
 *
 *
 * Return: absolutu number of n
 * On error: -1 inapropiate entry
 */

int _abs(int n)
{
	int result;

	if (n < 0)
		result = n * (-1);
	else
		result = n;

	return (result);
}

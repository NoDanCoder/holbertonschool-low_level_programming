#include "holberton.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: number to operate
 *
 *
 * Return: factorial number of n
 * On error: -1 inapropiate entry
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	return ((n == 0) ? 1 : n * factorial(n - 1));
}

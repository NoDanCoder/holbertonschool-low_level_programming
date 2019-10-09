#include "holberton.h"

/**
 * _pow_recursion - function that returns the value of x raised
 * to the power of y
 * @x: base of power
 * @y: power
 *
 *
 * Return: x^y, if y < 0 then -1
 * On error: -1 inapropiate entry
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	return ((y == 0) ? 1 : x * _pow_recursion(x, y - 1));
}

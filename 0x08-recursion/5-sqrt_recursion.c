#include "holberton.h"

/**
 * _sqrt_opr - function that returns the sqrt of x
 * doing a loop adding y upto y * y = x;
 * @x: number to operate
 * @y: result and operator
 *
 *
 * Return: y, if y*y < x then -1
 * On error: -1 inapropiate entry
 */

int _sqrt_opr(int x, int y)
{
	if (y * y > x)
		return (-1);

	return ((y * y == x) ? y : _sqrt_opr(x, y + 1));
}

/**
 * _sqrt_recursion - function that returns the sqrt of x
 * @n: number to operate
 *
 *
 * Return: sqrt of n
 * On error: -1 inapropiate entry
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_opr(n, 0));
}

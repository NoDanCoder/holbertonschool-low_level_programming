#include "holberton.h"

/**
 * print_sign - get a number and set if is +, - or 0
 * @n: The int or character to process
 *
 *
 * Return: 1 if n > 0, 0 if n = 0, -1 if n < 0
 * On error: -1 inapropiate entry
 */

int print_sign(int n)
{
	int asciiPlus = 43;
	int asciiMinus = 45;

	if (n > 0)
	{
		_putchar(asciiPlus);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar(asciiMinus);
		return (-1);
	}

	return (0);
}

#include "holberton.h"

/**
 * pot - gives power of a number
 * @base: base
 * @opr: power
 *
 *
 * Return: power of base given
 * On error: -1 inapropiate entry
 */

int pot(int base, int opr)
{
	int i = 0;
	int result = base;

	for (i = 1; i < opr; i++)
	{
		result *= base;
	}

	if (opr < 1)
		result = 1;

	return (result);
}

/**
 * print_number - print numbers by char
 * @n: number input
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void print_number(int n)
{
	int cont = 1;
	unsigned int tmp = 0;
	int i = 0;
	int digit = 0;

	tmp = (n < 0) ? n * (-1) : n;

	while (tmp >= 10)
	{
		tmp /= 10;
		cont++;
	}

	tmp = (n < 0) ? n * (-1) : n;

	if (n < 0)
		_putchar('-');

	for (i = cont - 1; i >= 0; i--)
	{
		if (i == cont - 1)
			digit = (tmp / pot(10, i));
		else
			digit = (tmp / pot(10, i)) % 10;

		_putchar(digit + '0');
	}
}

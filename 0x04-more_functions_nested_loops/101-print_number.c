#include "holberton.h"

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
	int tmp = 0;
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
		int dummie = 0;
		int pot = 10;

		for (dummie = 1; dummie < i; dummie++)
			pot *= 10;

		if (i < 1)
			pot = 1;

		if (i == cont - 1)
			digit = (tmp / pot);
		else
			digit = (tmp / pot) % 10;

		_putchar(digit + '0');
	}
}

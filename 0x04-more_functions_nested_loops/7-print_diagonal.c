#include "holberton.h"

/**
 * print_diagonal - print a great backslash of height n
 * @n: height of the backslash
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}

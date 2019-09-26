#include "holberton.h"

/**
 * print_square - print a square of "x" size
 * @size: size of the backslash
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}

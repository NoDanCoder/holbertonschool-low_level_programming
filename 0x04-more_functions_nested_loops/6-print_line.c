#include "holberton.h"

/**
 * print_line - print underscore n times
 * @n: how much underscores should be printed
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void print_line(int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}

#include "holberton.h"

/**
 * print_most_numbers - print only digit numbers, without 2 & 4
 * does not have parameters
 *
 *
 * Return: all digit numbers, without 2 & 4
 * On error: nothing
 */

void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
		if (i != 2 && i != 4)
			_putchar(i + '0');

	_putchar('\n');
}

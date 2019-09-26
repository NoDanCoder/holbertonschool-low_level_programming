#include "holberton.h"

/**
 * print_numbers - print only digit numbers
 * does not have parameters
 *
 *
 * Return: all digit numbers
 * On error: nothing
 */

void print_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');

	_putchar('\n');
}

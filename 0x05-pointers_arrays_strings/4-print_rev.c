#include "holberton.h"

/**
 * print_rev - prints reversed input
 * @s: char input
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	for (i -= 1; s - i != s + 1; i--)
		_putchar(*(s + i));

	_putchar('\n');
}

#include "holberton.h"

/**
 * _puts - puts a given str-char
 * @str: char input
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void _puts(char *str)
{
	int i = 0;

	for (i = 0; *(str + i) != '\0'; i++)
		_putchar(*(str + i));

	_putchar('\n');
}

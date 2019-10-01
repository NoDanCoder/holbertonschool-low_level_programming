#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - prints even character given
 * @str: char input
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void puts2(char *str)
{
	int i = 0;

	for (i = 0; *str != '\0'; str++, i++)
		if (i % 2 == 0 && *str != '\0')
			_putchar(*str);

	_putchar('\n');
}

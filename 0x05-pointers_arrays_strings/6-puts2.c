#include "holberton.h"

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
	for (; *str != '\0'; str += 2)
		_putchar(*str);

	_putchar('\n');
}

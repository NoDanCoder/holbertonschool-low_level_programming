#include "holberton.h"

/**
 * puts_half - prints superior middle part of str
 * @str: char input
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void puts_half(char *str)
{
	int len = 0;

	for (; *str != '\0'; str++)
		len++;

	for (str = str - ((len + 1) / 2); *str != '\0'; str++)
		_putchar(*str);

	_putchar('\n');
}

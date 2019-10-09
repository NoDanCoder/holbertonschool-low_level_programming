#include "holberton.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string address
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void _print_rev_recursion(char *s)
{
	if (!*s)
		return;

	_print_rev_recursion(s + 1);

	_putchar(*s);
}

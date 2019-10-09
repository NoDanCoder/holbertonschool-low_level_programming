#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string address
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

int _strlen_recursion(char *s)
{
	return ((!*s) ? 0 : 1 + _strlen_recursion(s + 1));
}

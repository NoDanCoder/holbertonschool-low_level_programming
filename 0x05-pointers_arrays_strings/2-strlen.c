#include "holberton.h"

/**
 * _strlen - give lenght of string
 * @s: char input
 *
 *
 * Return: input lenght
 * On error: -1 inapropiate entry
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}

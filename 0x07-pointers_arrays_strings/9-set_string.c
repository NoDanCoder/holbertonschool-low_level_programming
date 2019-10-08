#include "holberton.h"

/**
 * set_string - change pointer addres to another pointer
 * address
 * @s: pointer to be changed
 * @to: pointer to dest
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void set_string(char **s, char *to)
{
	*s = to;
}

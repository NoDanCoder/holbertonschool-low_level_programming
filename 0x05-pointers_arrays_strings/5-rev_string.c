#include "holberton.h"

/**
 * rev_string - retuns reversed input
 * @s: char input
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void rev_string(char *s)
{
	int i = 0;
	int k = 0;
	char copy[] = s;

	while (*(s + i) != '\0')
		i++;

	for (i -= 1; s - i != s + 1; i--, k++)
		*(copy + k) = *(s + i);

	for (i = 0; *(s + i) != '\0'; i++)
		*(s + i) = *(copy + i);
}

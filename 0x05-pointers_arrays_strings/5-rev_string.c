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
	int len = 0;
	char dummie = '\0';

	while (*(s + len) != '\0')
		len++;

	for (i = 0; i < (len) / 2; i++)
	{
		dummie = *(s + i);
		*(s + i) = *(s + ((len - 1)) - i);
		*(s + ((len - 1)) - i) = dummie;
	}
}

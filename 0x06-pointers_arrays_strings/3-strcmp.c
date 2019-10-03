#include "holberton.h"

/**
 * _strcmp - compare two words, (char different) a > b = 15,
 * (char different) a < b = -15, (complete string) a == b = 0
 * @s1: first string "a"
 * @s2: second string "b"
 *
 *
 * Return: address where is stores the result
 * On error: -1 inapropiate entry
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int equal = 0;

	for (i = 0; (*(s1 + i) || *(s2 + i)) && !equal; i++)
		if (*(s1 + i) < *(s2 + i))
			equal = -15;
		else if (*(s1 + i) > *(s2 + i))
			equal = 15;

	return (equal);
}

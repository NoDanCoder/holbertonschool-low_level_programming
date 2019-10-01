#include "holberton.h"
#include <stdio.h>

/**
 * _pow - power func, only positive power
 * @base: base of power
 * @pot: power
 *
 *
 * Return: result of power
 * On error: -1 inapropiate entry
 */

int _pow(int base, int pot)
{
	int i = 0;
	int res = 1;

	for (i = 0; i < pot; i++)
		res *= base;

	return (res);
}

/**
 * _atoi - convert a char input to int
 * @s: char input
 *
 *
 * Return: input transformed to integer
 * On error: -1 inapropiate entry
 */

int _atoi(char *s)
{
	int i = 0;
	int k = 0;
	int len = 0;
	int result = 0;
	int minus = 0;
	int offset = 48;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) >= 48 && *(s + i) <= 57)
			len++;
		else if (len != 0)
			break;

		if (*(s + i) == '-')
			minus++;
	}

	for (i--; len > 0; i--, k++, len--)
		result +=  (*(s + i) - offset) * _pow(10, k);

	result = (minus % 2 != 0) ? result * (-1) : result;

	return (result);
}

#include "holberton.h"
#include <stdlib.h>

/**
 * _pow - function that returns the value of x raised
 * to the power of y
 * @x: base of power
 * @y: power
 *
 *
 * Return: x^y, if y < 0 then -1
 * On error: -1 inapropiate entry
 */

int _pow(int x, int y)
{
	if (y < 0)
		return (-1);

	return ((y == 0) ? 1 : x * _pow(x, y - 1));
}


/**
 * _strcat_size - concatenate two strings into dest, upto n size
 * of second input
 * @dest: var where changes will be stored
 * @src: source to concat
 * @size: number of caracters of second string to concat
 *
 *
 * Return: address where is stores the result
 * On error: -1 inapropiate entry
 */

char *_strcat_size(char *dest, char *src, unsigned int size)
{
	unsigned int i = 0;
	int count = 0;

	if (!size || !*src)
		return (dest);

	for (i = 0; *(dest + i); i++)
		count++;

	for (i = 0; *(src + i) && (i < size); i++)
		*(dest + count + i) = *(src + i);

	i = (i) ? i : 1;

	*(dest + count + i) = '\0';

	return (dest);
}

/**
 * _strlen - function that returns the length of a string
 * @s: string address
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

unsigned int _strlen(char *s)
{
	return ((!*s) ? 0 : 1 + _strlen(s + 1));
}

/**
 * string_nconcat - function that concatenates two strings
 * into new address using malloc
 * @s1: first string
 * @s2: second string
 * @n: number of caracters of second string to concat
 *
 *
 * Return: address where is stores the result
 * On error: -1 inapropiate entry
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr = NULL;
	int lenConcat = 0;
	unsigned int intMax = _pow(2, (sizeof(unsigned int) * 8)) - 1;

	s1 = (s1) ? s1 : "";
	s2 = (s2) ? s2 : "";

	lenConcat = (_strlen(s2) < n) ? _strlen(s2) : n;

	arr = malloc(((_strlen(s1) + lenConcat)  * sizeof(*arr)) + 1);

	if (!arr)
		return (NULL);

	*arr = '\0';
	_strcat_size(arr, s1, intMax);
	_strcat_size(arr, s2, n);

	return (arr);
}

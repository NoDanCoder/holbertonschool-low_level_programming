#include "holberton.h"
#include <stdlib.h>

/**
 * _strcat - concatenate two strings into dest
 * @dest: var where changes will be stored
 * @src: source to concat
 *
 *
 * Return: address where is stores the result
 * On error: -1 inapropiate entry
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int count = 0;

	for (i = 0; *(dest + i); i++)
		count++;

	for (i = 0; *(src + i); i++)
		*(dest + count + i) = *(src + i);

	*(dest + count + i) = *(src + i);

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

int _strlen(char *s)
{
	return ((!*s) ? 0 : 1 + _strlen(s + 1));
}

/**
 * str_concat - function that concatenates two strings
 * into other pointer, and return this ponter
 * @s1: first string
 * @s2: second string
 *
 *
 * Return: address where is stores the result
 * On error: -1 inapropiate entry
 */

char *str_concat(char *s1, char *s2)
{
	char *arr = NULL;

	s1 = (s1) ? s1 : "";
	s2 = (s2) ? s2 : "";

	arr = malloc(((_strlen(s1) + _strlen(s2))  * sizeof(*arr)) + 1);
	_strcat(arr, s1);
	_strcat(arr, s2);

	return (arr);
}

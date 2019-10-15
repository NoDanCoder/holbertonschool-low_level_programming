#include "holberton.h"
#include <stdlib.h>

/**
 * _strcat_jump - concatenate two strings into dest
 * but adds at the end '\n' instead of '\0'
 * @dest: var where changes will be stored
 * @src: source to concat
 *
 * like _strcat, instead of add at the end '\0', it add
 * '\n'
 *
 * Return: address where is stores the result
 * On error: -1 inapropiate entry
 */

char *_strcat_jump(char *dest, char *src)
{
	int i = 0;
	int count = 0;

	for (i = 0; *(dest + i); i++)
		count++;

	for (i = 0; *(src + i); i++)
		*(dest + count + i) = *(src + i);

	*(dest + count + i) = '\n';

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
 * argstostr - function that concatenates all the arguments of your program
 * adding ever concatenation a '\n' char
 * @ac: lenght of the array
 * @av: array to be operated
 *
 *
 * Return: address where is stored the result
 * On error: -1 inapropiate entry
 */

char *argstostr(int ac, char **av)
{
	char *arr = NULL;
	int sizeBytes = 0;
	int i = 0;

	if (!ac || !av)
		return (NULL);

	for (i = ac; i--;)
	{
		av[i] = (av[i]) ? av[i] : "";
		sizeBytes += _strlen(av[i]) + 1; /*add 1 for '\n' character*/
	}

	arr = malloc((sizeBytes  * sizeof(*arr)) + 1);

	if (!arr)
		return (NULL);

	for (i = 0; i < ac; i++)
		_strcat_jump(arr, av[i]);

	return (arr);
}

#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - copy a source input ont destinated input
 * @dest: target where will be stored the input
 * @src: source to copy from
 *
 *
 * Return: dest address
 * On error: -1 inapropiate entry
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);

	*(dest + i) = *(src + i); /* adding '\0' character */

	return (dest);
}

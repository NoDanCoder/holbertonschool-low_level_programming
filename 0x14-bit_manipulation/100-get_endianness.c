#include "holberton.h"

/**
 * get_endianness - function that checks the endianness
 *
 *
 * Return: 0 if big endian, 1 if little endian
 * On error: nothing
 */

int get_endianness(void)
{
	unsigned int check = 1;
	char *c = (char *)&check;

	return ((*c) ? 1 : 0);
}

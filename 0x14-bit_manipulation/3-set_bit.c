#include "holberton.h"

/**
 * set_bit - function that set the value to "1" of a bit at
 * a given index
 * @n: value to set the bit
 * @index: position of the bit which will be set
 *
 *
 * Return: 1 if it worked, or -1 if an error occurred
 * On error: -1 inapropiate entry
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set = 1;

	if ((sizeof(unsigned long int) * 8) - 1 < index)
		return (-1);

	set <<= index;
	*n |= set;

	return (1);
}

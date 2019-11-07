#include "holberton.h"

/**
 * clear_bit - function that clear the value to "0" of a bit at
 * a given index
 * @n: value to clear the bit
 * @index: position of the bit which will be cleared
 *
 *
 * Return: 1 if it worked, or -1 if an error occurred
 * On error: -1 inapropiate entry
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set = 1;

	if ((sizeof(unsigned long int) * 8) - 1 < index)
		return (-1);

	set <<= index;
	*n &= ~set;

	return (1);
}

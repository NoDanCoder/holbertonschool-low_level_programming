#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: value to shearch the bit
 * @index: position of the bit which is required
 *
 *
 * Return: value of a bit "n" into index position
 * On error: -1 inapropiate entry
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(unsigned long int) * 8 < index)
		return (-1);

	while (index--)
		n  >>= 1;

	return ((n & 1) ? 1 : 0);
}

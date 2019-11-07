#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: value to take reference
 * @m: value to choose the changes
 *
 *
 * Return: the number of bits you would need to flip to get from one
 * number to another
 * On error: -1 inapropiate entry
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value = n ^ m;
	unsigned int cnt = 0;

	for (; value; value >>= 1)
		if (value & 1)
			cnt++;

	return (cnt);
}

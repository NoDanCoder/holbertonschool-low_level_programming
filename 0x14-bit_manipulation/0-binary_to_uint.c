#include "holberton.h"

/**
 * binary_to_uint - function that converts a binary number (string)
 * to an unsigned int
 * @b: string binary number to convert
 *
 *
 * Return: the converted number, or 0 if:
 * there is one or more chars in the string b that is not 0 or 1 or,
 * b is NULL
 * On error: -1 inapropiate entry
 */

unsigned int binary_to_uint(const char *b)
{
	bits state = {'0', '1'};
	int step = 0;
	unsigned int output = 0;

	for (; b && *b; b++)
	{
		if (*b != state.zero && *b != state.one)
			return (0);

		step = (!step && *b == state.one) ? 1 : step;

		if (step)
		{
			output <<= 1;
			output |= *b - '0';
		}
	}

	return (output);
}

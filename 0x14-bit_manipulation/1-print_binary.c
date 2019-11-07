#include "holberton.h"

/**
 * print_binary - function that prints the binary representation
 * of a number
 * @n: number to print
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void print_binary(unsigned long int n)
{
	if (n && (n >> 1))
		print_binary(n >> 1);

	putchar((n & 01) ? '1' : '0');
}

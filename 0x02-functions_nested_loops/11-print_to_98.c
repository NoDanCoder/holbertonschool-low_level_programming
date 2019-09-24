#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print a sequence of numbers
 * upto 98, decreasing and increasing
 * @n: start point to operate
 *
 *
 * Return: sequence from n
 * On error: -1 inapropiate entry
 */

void print_to_98(int n)
{
	if (n == 98)
		printf("%d\n", n);
	else
	{
		printf("%d, ", n);

		if (n < 98)
			n++;
		else
			n--;

		print_to_98(n);
	}
}

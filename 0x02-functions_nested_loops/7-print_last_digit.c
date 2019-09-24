#include "holberton.h"

/**
 * print_last_digit - print a return the last digit
 * @n: The int to process
 *
 *
 * Return: last digit of n
 * On error: -1 inapropiate entry
 */

int print_last_digit(int n)
{
	int lastDig = 0;

	lastDig = n % 10;
	if (lastDig < 0)
		lastDig *= -1;

	_putchar(lastDig + '0');

	return (lastDig);
}

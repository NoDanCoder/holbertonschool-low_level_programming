#include "holberton.h"

/**
 * _prime_opr - function that returns if n is prime
 * doing a loop adding i upto i = prime;
 * @n: number to operate
 * @i: iterator
 *
 *
 * Return: i if prime, 0 else
 * On error: -1 inapropiate entry
 */

int _prime_opr(int n, int i)
{
	if (n == i)
		return (1);

	return ((n % i == 0 || n <= 1) ? 0 : _prime_opr(n, i + 1));
}

/**
 * is_prime_number - function to determinate if n is prime
 * @n: number to operate
 *
 *
 * Return: 1 if prime, 0 else
 * On error: -1 inapropiate entry
 */

int is_prime_number(int n)
{
	return (_prime_opr(n, 2));
}

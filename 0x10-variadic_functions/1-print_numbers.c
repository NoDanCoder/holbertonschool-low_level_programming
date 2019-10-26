#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of elements
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < (n - 1); i++)
		if (!separator)
			printf("%ld", va_arg(args, long));
		else
			printf("%ld%s", va_arg(args, long), separator);

	printf("%ld\n", va_arg(args, long));

	va_end(args);
}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: the string to be printed between strings
 * @n: number of elements
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;

	va_list args;

	va_start(args, n);

	for (i = 0; i < (n - 1); i++)
	{
		str = va_arg(args, char *);

		printf("%s", (!str) ? "(nil)" : str);

		if (separator)
			printf("%s", separator);
	}

	str = va_arg(args, char *);
	printf("%s\n", (!str) ? "(nil)" : str);

	va_end(args);
}

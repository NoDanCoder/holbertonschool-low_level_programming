#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - function that prints char caracters
 * @inp: varidic-list where is stored the caracter
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void print_char (va_list inp)
{
	/**
	 * some strage reason, when va_arg is called from other function
	 * the char is converted into int
	 */
	printf("%c", va_arg(inp, int));
}

/**
 * print_integer - function that prints integer caracters
 * @inp: varidic-list where is stored the integer
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void print_integer(va_list inp)
{
	printf("%d", va_arg(inp, int));
}

/**
 * print_float - function that prints float caracters
 * @inp: varidic-list where is stored the float number
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void print_float (va_list inp)
{
	/**
	 * some strage reason, when va_arg is called from other function
	 * the float is converted into double
	 */
	printf("%f", va_arg(inp, double));
}

/**
 * print_string - function that prints strings
 * @inp: varidic-list where is stored the string
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void print_string(va_list inp)
{
	char *temp = va_arg(inp, char *);
	char *strToPrint = temp;

	if (!temp)
		strToPrint = "(nil)";

	printf("%s", strToPrint);
}

/**
 * print_all - function that prints anything according to
 * the format characters
 * @format: s a list of types of arguments passed to the function
 *	c: char
 *	i: integer
 *	f: float
 *	s: char * (if the string is NULL, print (nil) instead
 *	any other char should be ignored
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int k = 0;
	char *separator = "";

	/* structure for all cases */
	dt options[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string}
	};

	va_list args;

	va_start(args, format);

	/* search letter by letter */
	i = 0;
	while (format && format[i])
	{
		/* search for compatible function */
		k = 0;
		while (k < 4)
		{
			if (options[k].set == format[i])
			{
				printf("%s", separator);
				options[k].f(args);
			}
			k++;
		}
		separator = ", ";

		i++;
	}
	printf("\n");
	va_end(args);
}

#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: string to print
 * @f: function to use to print
 *
 * for explample you can use a function to print in uppercase the
 * value of "name"
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

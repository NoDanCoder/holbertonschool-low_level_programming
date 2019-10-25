#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>

/**
 * struct DataTypes - Struct for all flags to operate according to
 * data type
 *
 * @set: The datatype flag
 * @f: The function associated
 */

typedef struct DataTypes
{
	char set;
	void (*f)(va_list);
} dt;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */

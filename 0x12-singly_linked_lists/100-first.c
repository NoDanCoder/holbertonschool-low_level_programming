#include <stdio.h>

void printBefore(void) __attribute__ ((constructor));

/**
 * printBefore - function that prints a message before the main function
 * is executed
 *
 *
 * Return: nothing
 * On error: nothing
 */

void printBefore(void)
{
	char *first = "You're beat! and yet, you must allow,\n";
	char *second = "I bore my house upon my back!\n";

	printf("%s%s", first, second);
}

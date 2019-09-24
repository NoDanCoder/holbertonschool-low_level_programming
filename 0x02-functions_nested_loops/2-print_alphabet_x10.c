#include "holberton.h"

/**
 * print_alphabet_x10 - print lower case alphabet 10 times
 * does no have input elements
 *
 * Return: Nothing
 * On error: Nothing
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int j = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
			_putchar(alpha[j]);

		_putchar('\n');

	}
}

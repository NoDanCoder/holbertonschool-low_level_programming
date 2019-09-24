#include "holberton.h"

/**
 * print_alphabet - prints alphabet to _putchar()
 * does no have input elements
 *
 * Return: Nothing
 * On error: Nothing
 */

void print_alphabet(void)
{
	int i = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
		_putchar(alpha[i]);

	_putchar('\n');
}

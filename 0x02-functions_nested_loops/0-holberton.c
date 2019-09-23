#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char wordInp[] = "Holberton";

	for (i = 0; i < 9; i++)
	{
		_putchar(wordInp[i]);
	}

	_putchar('\n');

	return (0);
}

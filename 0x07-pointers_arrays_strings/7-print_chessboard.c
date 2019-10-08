#include "holberton.h"

/**
 * print_chessboard - print a 8x8 matriz
 * @a: matrix to print
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int k = 0;

	for (i = 0; i < 8; i++)
		for (k = 0; k < 8; k++)
		{
			_putchar(a[i][k]);
			if (k == 7)
				_putchar('\n');
		}
}

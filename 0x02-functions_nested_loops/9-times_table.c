#include "holberton.h"

/**
 * times_table - print multiply table
 * does not have parameters
 *
 *
 * Return: multiply table divide by ", "
 * On error: nothing
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	int digits[2];
	int spaceChar = -16;
	int result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;

			digits[0] = result / 10;
			digits[1] = result % 10;

			if (digits[0] == 0)
				digits[0] = spaceChar;

			if (j != 0)
				_putchar(digits[0] + '0');

			_putchar(digits[1] + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

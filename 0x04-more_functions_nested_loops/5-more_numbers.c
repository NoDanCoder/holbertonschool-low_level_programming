#include "holberton.h"

/**
 * more_numbers - print numbers up to 14, 10 times
 * does not have parameters
 *
 *
 * Return: 10 columns with numbers from 0 to 14
 * On error: nothing
 */

void more_numbers(void)
{
	int i = 0;
	int h = 0;
	int digits[2];

	for (h = 0; h < 10; h++)
	{
		for (i = 0; i < 15; i++)
		{
			digits[0] = i / 10;
			digits[1] = i % 10;

			if (digits[0] != 0)
				_putchar(digits[0] + '0');

			_putchar(digits[1] + '0');
		}

		_putchar('\n');
	}
}

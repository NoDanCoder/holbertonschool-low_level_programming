#include "holberton.h"

/**
 * print_times_table - print a multiply table of size n
 * @n: Gives the size of the table
 *
 *
 * Return: table sized
 * On error: -1 inapropiate entry
 */

void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int dummie = 0;
	int digits[2];
	int spaceChar = -16;
	int result;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;

				digits[0] = result / 100;
				digits[1] = (result / 10) % 10;
				digits[2] = result % 10;

				if (digits[0] == 0)
					digits[0] = spaceChar;

				if (digits[1] == 0 && digits[0] == spaceChar)
					digits[1] = spaceChar;

				if (j != 0)
					for (dummie = 1; dummie < 3; dummie++)
						_putchar(digits[dummie] + '0');
				else
					_putchar('0');

				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}

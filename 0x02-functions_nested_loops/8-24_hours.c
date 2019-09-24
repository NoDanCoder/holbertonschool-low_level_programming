#include "holberton.h"

/**
 * jack_bauer - print all minutes of the day
 * does no have inputs
 *
 *
 * Return: all minutes of the day
 * On error: nothing
 */

void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int hours = 24;
	int minutes = 60;
	int digits[4];
	int dummie = 0;

	for (i = 0; i < hours; i++)
	{
		for (j = 0; j < minutes; j++)
		{
			digits[0] = i / 10;
			digits[1] = i % 10;
			digits[2] = j / 10;
			digits[3] = j % 10;

			for (dummie = 0; dummie < 4; dummie++)
			{
				if (dummie == 2)
					_putchar(58);
					_putchar(digits[dummie] + '0');
			}

			_putchar('\n');
		}
	}
}

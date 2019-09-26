#include <stdio.h>

/**
 * main - print fibonnacci succession up to 50
 *
 * Return: Always 0.
 */

int main(void)
{
	int  i = 0;
	unsigned long x = 0, y = 1;
	unsigned long result = 0;
	int times = 50;

	for (i = 0; i < times; i++)
	{
		result = x + y;
		printf("%lu", result);
		if (i != (times - 1))
			printf(", ");
		x = y;
		y = result;
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - print fibonnacci adding only pair numbers up to 4000000
 *
 * Return: Always 0.
 */

int main(void)
{
	int  i = 0;
	unsigned long x = 0, y = 1;
	unsigned long result = 0;
	unsigned long sum = 0;
	unsigned int limit = 4000000;

	while (1)
	{
		result = x + y;

		if (result >= limit)
			break;

		if (result % 2 == 0)
			sum += result;

		x = y;
		y = result;
	}
	printf("%lu", sum);
	putchar('\n');

	return (0);
}

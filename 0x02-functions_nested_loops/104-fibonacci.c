#include <stdio.h>

/**
 * main - print fibonnacci up to 98
 *
 * Return: Always 0.
 */

int main(void)
{
	int  i = 0;

	long double x = 0;
	long double y = 1;
	long double result = 0;

	for (i = 0; i < 98; i++)
	{
		result = x + y;
		printf("%.40Lg", result);
		if (i != (n - 1))
			printf(", ");
		x = y;
		y = result;
	}
	putchar('\n');

	return (0);
}

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
	int top = 98;

	for (i = 0; i < top; i++)
	{
		result = x + y;
		printf("%.21Lg", result);

		if (i != (top - 1))
			printf(", ");

		x = y;
		y = result;
	}

	putchar('\n');

	return (0);
}

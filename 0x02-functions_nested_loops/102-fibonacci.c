#include <stdio.h>

/**
 * fibonacci - print fibonnacci succession up to n times
 * @n: defines the number of outputs
 *
 * Return: Always 0.
 */

int fibonacci(int n)
{
	int  i = 0;
	unsigned long x = 0, y = 1;
	unsigned long result = 0;

	for (i = 0; i < n; i++)
	{
		result = x + y;
		printf("%lu", result);
		if (i != (n - 1))
			printf(", ");
		x = y;
		y = result;
	}
	putchar('\n');
}

/**
 * main - print fibonnacci succession up to 50
 *
 * Return: Always 0.
 */

int main(void)
{
	fibonacci(50);

	return (0);
}

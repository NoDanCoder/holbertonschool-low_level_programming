#include <stdio.h>

/**
 * fibonacci_even_add - print fibonnacci adding only pair numbers
 * @n: defines the limit
 *
 * Return: Always 0.
 */

int fibonacci_even_add(int n)
{
	int  i = 0;
	unsigned long x = 0, y = 1;
	unsigned long result = 0;
	unsigned long sum = 0;

	while (1)
	{
		result = x + y;

		if (result >= n)
			break;

		if (result % 2 == 0)
			sum += result;

		x = y;
		y = result;
	}
	printf("%lu", sum);
	putchar('\n');
}

/**
 * main - print the adding up to 4000000
 *
 * Return: Always 0.
 */

int main(void)
{
	fibonacci_even_add(4000000);

	return (0);
}

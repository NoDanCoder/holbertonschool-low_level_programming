#include <stdio.h>

/**
 * main - Entry point
 * print multipliers of 3 as Fizz
 *       multipliers of 5 as Buzz
 *       multipliers of 3 and 5 as FizzBuzz
 *       from 1 to 100
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 * largest prime number of factorial numbers of
 * the target/objetive
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long objetive = 612852475143;
	long i = 0;
	long last = 0;

	for (i = 2; i <= objetive; i++)
	{
		if (objetive % i == 0)
		{
			if (i > last)
				last = i;

			objetive /= i;
		}

		if (objetive == 1)
			break;
	}
	printf("%ld\n", last);

	return (0);
}

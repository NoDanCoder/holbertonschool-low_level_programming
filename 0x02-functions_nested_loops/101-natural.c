#include <stdio.h>

/**
 * main - gives the adding multiples 5 and 3 up to 1023.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 0;
	int result = 0;

	for (i = 0; i < 1024; i++)
		if ((i % 3) == 0 || (i % 5) == 0)
			result += i;

	printf("%d\n", result);

	return (0);
}

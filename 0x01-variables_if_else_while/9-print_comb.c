#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* get LastDigit of random number "n"  and set his position */
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		if (i != 9)
		{
			putchar(i + '0');
			putchar(44);
			putchar(32);
		}
		else
			putchar(i + '0');
	}

	putchar('\n');

	return (0);
}

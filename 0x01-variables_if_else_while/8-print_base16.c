#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* get LastDigit of random number "n"  and set his position */
	unsigned int i = 0;
	char alpha[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
		putchar(alpha[i]);

	putchar('\n');

	return (0);
}

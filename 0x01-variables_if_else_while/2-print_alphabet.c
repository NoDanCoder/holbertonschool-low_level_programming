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
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < strlen(alpha); i++)
		putchar(alpha[i]);

	putchar('\n');

	return (0);
}

#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* get LastDigit of random number "n"  and set his position */
	int i = 0;
	char alpha[] = "0123456789";

	for (i = 0; i < strlen(alpha); i++)
		putchar(alpha[i]);

	putchar('\n');

	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;
	char msg[100];

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* get LastDigit of random number "n"  and set his position */
	lastDigit = n % 10;

	if (lastDigit > 5)
		strcpy(msg, "and is greater than 5");
	else if (lastDigit == 0)
		strcpy(msg, "and is 0");
	else if (lastDigit < 6 && lastDigit != 0)
		strcpy(msg, "and is less than 6 and not 0");

	printf("Last digit of %d is %d %s\n", n, lastDigit, msg);

	return (0);
}

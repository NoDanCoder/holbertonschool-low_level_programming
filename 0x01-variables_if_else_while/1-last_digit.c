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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* get LastDigit of random number "n"  and set his position */
	int LastDigit = n % 10;
	char msg[100];

	if (LastDigit > 5)
		strcpy(msg, "and is greater than 5");
	else if (LastDigit == 0)
		strcpy(msg, "and is 0");
	else if (LastDigit < 6 && LastDigit != 0)
		strcpy(msg, "and is less than 6 and not 0");

	printf("Last digit of %d is %d %s\n", n, LastDigit, msg);

	return (0);
}

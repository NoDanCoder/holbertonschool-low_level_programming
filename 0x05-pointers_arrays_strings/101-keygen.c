#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * _rand - aleatory number generator, change every iteration
 * @limit: limit number
 * @changer: iterator to change the number generated
 *
 *
 * Return: random number
 * On error: -1 inapropiate entry
 */

int _rand (int limit, int changer)
{
	int result = 0;

	srand (time(0) + changer);
	result = rand() % (limit - 32) + 32;

	return(result);
}


/**
 * main - create a random password
 *
 *
 * Return: 0 correct work
 */

int main(void)
{
	int asciiChar = 0;
	int limit = 2772;
	int asciiLimit = 126;
	int sum = 0;

	for (sum = 0; sum < limit - asciiLimit; sum += asciiChar)
	{
		asciiChar = _rand(asciiLimit, sum);
		putchar(asciiChar);
	}

	putchar(limit - sum);

	return (0);
}

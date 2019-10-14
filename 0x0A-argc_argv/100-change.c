#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: size of **argv
 * @argv: pointer to parameters
 *
 *
 * Return: EXIT_SUCCESS
 * On error: EXIT_FAILURE
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	int cents[] = {25, 10, 5, 2, 1};
	int amount = 0;
	int coins = 0;
	int i = 0;

	if (argc == 2)
	{
		amount = atoi(argv[1]);
	}
	else
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	while (amount > 0)
	{
		for (; cents[i] > amount; )
			i++;

		amount -= cents[i];
		coins++;
	}

	printf("%d\n", coins);

	exit(EXIT_SUCCESS);
}

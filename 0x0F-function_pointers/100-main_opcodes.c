#include <stdio.h>
#include <stdlib.h>


/**
 * main - program that prints the opcodes of its own main function.
 * @argc: number of input arguments
 * @argv: array of pinters to inputs
 *
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *dir = (char *)main;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int inpNum = atoi(argv[1]);

	if (inpNum < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < (inpNum - 1); i++)
		printf("%02hhx ", dir[i]);

	printf("%02hhx\n", dir[i]);

	return (0);
}

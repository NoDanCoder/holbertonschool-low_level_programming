#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: size of **argv
 * @argv: pointer to parameters
 *
 *
 * Return: EXIT_SUCCESS
 * On error: EXIT_FAILURE
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", (argc) ? --argc : argc);

	return (0);
}

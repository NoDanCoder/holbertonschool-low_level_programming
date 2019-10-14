#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: size of **argv
 * @argv: pointer to parameters
 *
 *
 * Return: EXIT_SUCCESS
 * On error: EXIT_FAILURE
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}

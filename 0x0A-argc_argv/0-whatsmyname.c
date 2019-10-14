#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: size of **argv
 * @argv: pointer to parameters
 *
 *
 * Return: EXIT_SUCCESS
 * On error: EXIT_FAILURE
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", *argv);

	return (0);
}

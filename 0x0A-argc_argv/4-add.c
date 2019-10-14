#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _has_alpha - program that checks if a string has
 * characters non digits
 * @str: string to operate
 *
 *
 * Return: 1 if has it, 0 if doesnt
 * On error: -1 inapropiate entry
 */

int _has_alpha(char *str)
{
	char i = ' ';

	for (; i < '0'; i++)
		if (strchr(str, i) != NULL)
			return (1);

	i = '9' + 1;

	for (; i <= '~'; i++)
		if (strchr(str, i) != NULL)
			return (1);

	return (0);
}

/**
 * main - program that multiplies two numbers
 * @argc: size of **argv
 * @argv: pointer to parameters
 *
 *
 * Return: EXIT_SUCCESS
 * On error: EXIT_FAILURE
 */

int main(int argc, char **argv)
{
	int carry = 0;

	while (--argc)
	{
		if (!_has_alpha(*(argv + argc)))
			carry += atoi(*(argv + argc));
		else
		{
			printf("Error\n");
			exit(EXIT_FAILURE);
		}
	}

	printf("%d\n", carry);
	exit(EXIT_SUCCESS);
}

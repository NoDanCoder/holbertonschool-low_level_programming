#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - function that operate add, sustract, multiply, divide and
 * module
 * @argc: number of input elements
 * @argv: input elements
 *
 *
 * Return: result of operation
 * 0 - operation successfully done
 * 98 - incorrect number of inputs
 * 99 - operator does not exist
 * 100 - divide by 0
 * On error: -1 inapropiate entry
 */

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char userOpr = *argv[2];
	int result;
	char opr[] = "+-*/%";

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	else if (opr[0] != userOpr && opr[1] != userOpr && opr[2] != userOpr &&
		opr[3] != userOpr && opr[4] != userOpr)
	{
		printf("Error\n");
		return (99);
	}

	else if ((opr[3] == userOpr || opr[4] == userOpr) && !b)
	{
		printf("Error\n");
		return (100);
	}

	result = get_op_func(&userOpr) (a, b);
	printf("%d\n", result);

	return (0);
}

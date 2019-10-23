#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - function that selects the correct function to perform
 * the operation asked by the user
 * @s: operator input to set the operator function
 *
 *
 * Return: index posistion array of true comparation
 * On error: -1 inapropiate entry
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 5;

	while (i--)
		if (*s == *ops[i].op)
			return (ops[i].f);

	return (NULL);
}

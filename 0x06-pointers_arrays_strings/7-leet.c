#include "holberton.h"

/**
 * leet - leet codification
 * @str: string to operate
 *
 *
 * Return: codificated text
 * On error: -1 inapropiate entry
 */

char *leet(char *str)
{
	char original[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char replace[] = {'4', '3', '0', '7', '1', '\0'};
	int cnt = 0;
	int i = 0;

	for (cnt = 0; *str; str++, cnt++)
		for (i = 0; original[i]; i++)
			if (original[i] == *str || original[i] + 32 == *str)
			{
				*str = replace[i];
				break;
			}

	return (str -= cnt);
}

#include "holberton.h"

/**
 * leet - replace a set of letter for numbers, in other words,
 * function that encodes a string into 1337.
 * @str: string to operate
 *
 *
 * Return: coded text
 * On error: -1 inapropiate entry
 */

char *leet(char *str)
{
	char original[] = {'A', 'E', 'O', 'T', 'L'};
	char replace[] = {'4', '3', '0', '7', '1'};
	int cnt = 0;
	int i = 0;

	for(cnt = 0; *str; str++, cnt++)
		for (i = 0; replace[i]; i++)
			if (original[i] == *str || original[i] + 32 == *str)
			{
				*str = replace[i];
				break;
			}

	return (str - cnt);
}

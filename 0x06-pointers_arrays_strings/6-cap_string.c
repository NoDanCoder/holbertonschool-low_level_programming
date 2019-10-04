#include "holberton.h"

/**
 * cap_string - capitalize characters after given
 * chars/separators
 * @str: string to operate
 *
 *
 * Return: capitalize text
 * On error: -1 inapropiate entry
 */

char *cap_string(char *str)
{
	char separators[] = {' ', '\t', '\n', ',', ';', '.', '!',
				'?', '"', '(', ')', '{', '}'};
	int cnt = 0;
	int i = 0;

	if (*str >= 'a' &&  *str <= 'z')
		*str -= 32;

	for (cnt = 0; *str; str++, cnt++)
		for (i = 0; separators[i] && *(str + 1) >= 'a' &&  *(str + 1) <= 'z'; i++)
			if (separators[i] == *str)
				*(str + 1) -= 32;

	return (str - cnt);
}

#include "holberton.h"

/**
 * rot13 - root 13 codification
 * @str: string to operate
 *
 *
 * Return: codificated text
 * On error: -1 inapropiate entry
 */

char *rot13(char *str)
{
	int cnt = 0;
	int i = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alpha13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (cnt = 0; *str; str++, cnt++)
		for (i = 0; alpha[i]; i++)
			if (alpha[i] == *str)
			{
				*str = alpha13[i];
				break;
			}

	return (str -= cnt);
}

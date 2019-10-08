#include "holberton.h"

/**
 * _strchr - search into "s" upto find "c", then gives the addres
 * where was found
 * @s: string input
 * @c: char to search
 *
 *
 * Return: address where is the char into string if not found,
 * then return 'NULL'
 * On error: -1 inapropiate entry
 */

char *_strchr(char *s, char c)
{
	while (*s && !(*s == c))
		s++;

	return ((*s == c) ? s : 0);
}

/**
 * _strstr - search "needle" string into "haystack",
 * if found gives the addres where was found, else NULL
 * @haystack: string base
 * @needle: string to search on base
 *
 *
 * Return: (2) address where string was found
 * On error: -1 inapropiate entry
 */

char *_strstr(char *haystack, char *needle)
{
	int cnt = 0;
	char *search = _strchr(haystack, *needle);

	if (!*needle)
		return (haystack);

	while (search)
	{
		for (haystack = search; *needle && *haystack == *needle; needle++)
			cnt++, haystack++;

		if (!*needle)
			return (haystack - cnt);

		needle -= cnt;
		cnt = 0;
		search = _strchr(haystack, *needle);
	}

	return (0);
}

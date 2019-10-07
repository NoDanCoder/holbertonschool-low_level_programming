#include "holberton.h"

/**
 * _strstr - search "needle" string into "haystack",
 * if found gives the addres where was found, else NULL
 * @haystack: string base
 * @needle: string to search on base
 *
 *
 * Return: address where string was found
 * On error: -1 inapropiate entry
 */


char *_strstr(char *haystack, char *needle)
{
	int cnt = 0;
	char *org = needle;

	for (; *haystack && *needle; haystack++)
	{
		needle = org;
		cnt = 0;
		if (*needle == *haystack)
			for (; *needle && (*haystack == *needle); needle++, haystack++)
				cnt++;
	}

	return ((*org && *haystack) ? haystack - (cnt + 1) : 0);
}

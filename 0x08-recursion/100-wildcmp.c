#include "holberton.h"

/**
 * _strchr - search the position of a char into "s" if
 * find a "*" jump it if jump = 1
 * @s: string address
 * @c: character to search
 * @jump: jump or noy (no usable, will be deleted on next releases)
 *
 *
 * Return: address of character on "s"
 * On error: -1 inapropiate entry
 */

char *_strchr(char *s, char *c, int jump)
{
	if ((*c == '*') && jump)
		return (_strchr(s, c + 1, 1));

	if (*s && !(*s == *c))
		return (_strchr(s + 1, c, 0));

	return ((*s == *c) ? s : 0);
}

/**
 * _strcmp - compare two strings upto *s1 or *s2 == '*'
 * if are equal will give s2, NULL else
 * @s1: first string
 * @s2: second string
 *
 *
 * Return: address of last character operated of "s2"
 * or NULL if not equal
 * On error: -1 inapropiate entry
 */

char *_strcmp(char *s1, char *s2)
{
	if (!s1)
		return (NULL);

	if (*s1 != *s2 && *s2 != '*')
		return (NULL);

	return ((*s1 && *s2 != '*') ? _strcmp(s1 + 1, s2 + 1) : s2);
}

/**
 * _strcmp_normal - compare two strings upto last, the diference between
 * _strcmp is, this search from the right to left
 * @s1: first string
 * @s2: second string
 * @last: last position to operate
 *
 *
 * Return: 1 if equal. 0 else
 * On error: -1 inapropiate entry
 */

int _strcmp_normal(char *s1, char *s2, char *last)
{
	if (!s1)
		return (0);

	if (*s1 != *s2)
		return (0);

	return ((s2 != last) ? _strcmp_normal(s1 - 1, s2 - 1, last) : 1);
}

/**
 * wildcmp - emulate the funtion of * on CLI linux
 * to search compatibilities between s1 and s2
 * @s1: first string
 * @s2: string to search the compatibility
 *
 *
 * Return: 1 if equal. 0 else
 * On error: -1 inapropiate entry
 */


int wildcmp(char *s1, char *s2)
{
	char dummie[] = "a";
	int checker = 0;
	char *addr;
	char flag = '*';

	if (!*s2)
		return (1);

	if (*s2 == '*' && !*(s2 + 1))
		return (1);

	/* entra sin "*" */
	if (*s2 != '*')
	{
		addr = _strcmp(s1, s2);
		return ((addr) ? wildcmp(s1, addr) : 0);
	}

	/* entra ultimo "*" */
	if (*s2 == '*' && (_strchr(s2 + 1, &flag, 0) == NULL))
		checker = _strcmp_normal(
						_strchr(s1, dummie + 1, 0),
						_strchr(s2, dummie + 1, 0),
						s2 + 1
					);

	else
	{
		addr = _strcmp(_strchr(s1, s2, 1), s2 + 1);
		return ((addr) ? wildcmp(s1, addr) : 0);
	}

	return (checker);
}

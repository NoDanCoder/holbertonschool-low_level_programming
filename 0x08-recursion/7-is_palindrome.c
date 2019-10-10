#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string address
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

int _strlen_recursion(char *s)
{
	return ((!*s) ? 0 : 1 + _strlen_recursion(s + 1));
}

/**
 * _palindrome_opr - function that check if a word is
 * palindrome
 * @s: string address
 * @i: size of the word without '\0'
 *
 *
 * Return: 1 if palindrome, 0 else
 * On error: -1 inapropiate entry
 */

int _palindrome_opr(char *s, int i)
{
	if (s > s + i)
		return (1);

	if (*s == *(s + i))
		return (_palindrome_opr(s + 1, i - 2));

	return (0);
}

/**
 * is_palindrome - function that check if a word is
 * palindrome
 * @s: string address
 *
 *
 * Return: 1 if palindrome, 0 else
 * On error: -1 inapropiate entry
 */

int is_palindrome(char *s)
{
	return (_palindrome_opr(s, _strlen_recursion(s) - 1));
}

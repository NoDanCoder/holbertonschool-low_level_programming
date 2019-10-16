#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid_char - function that frees a 2 dimensional grid previously created
 * @grid: matrix to free
 *
 * like free_grid, intead of int, this is for char matrix
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void free_grid_char(char **grid)
{
	int i = 0;

	if (!grid)
		return;

	for (i = 0; grid[i]; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}

	free(grid);
	grid = NULL;
}

/**
 * get_single_word - function that gives the complete, next single word
 * into new address
 * @str: group of words
 *
 * explample inp:"hello beautiful world" > out:"beautiful"
 *
 * Return: the next single word of "str"
 * On error: -1 inapropiate entry
 */

char  *get_single_word(char *str)
{
	char *org = str;
	char *arr;
	int cnt = 0;

	while (*str != ' ')
		str++, cnt++;

	arr = malloc(cnt * sizeof(*arr) + 1);

	if (!arr)
		return (NULL);

	for (str = org; *str != ' '; str++, arr++)
		*arr = *str;

	*arr = '\0';

	return (arr - cnt);
}

/**
 * next_word - function that gives the address of the start of the next
 * word
 * @str: group of words
 *
 * explample inp:"hello beautiful world" > out:"b"
 *                      ^                       ^
 *
 * Return: the address of the first letter of the next word
 * On error: -1 inapropiate entry
 */

char *next_word(char *str)
{
	for (; *str != ' '; str++)
		if (!*str)
			return (0);

	for (; *str == ' '; str++)
		if (!*str)
			return (0);

	return (str);
}

/**
 * _strlen - function that returns the length of a string
 * @s: string address
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

int _strlen(char *s)
{
	return ((!*s) ? 0 : 1 + _strlen(s + 1));
}

/**
 * strtow - function that recive a sentence of multiple words,
 * and gives a matrix where each word is a element
 * @str: string address
 *
 *
 * Return: address of matrix
 * On error: -1 inapropiate entry
 */

char **strtow(char *str)
{
	char **arr = NULL;
	char *orgStr = str;
	char **orgArr = NULL;
	int words = 0;

	if (!str || !*str)
		return (NULL);

	for (; str; str = next_word(str))
		if (*str != ' ' && *str)
			words++;

	if (!words)
		return (NULL);

	/* adding 'sizeof(char *)' for NULL pointer at last element (flag)*/
	arr = malloc((words  * sizeof(char *)) + 1);
	orgArr = arr;

	if (!arr)
		return (NULL);

	for (str = orgStr; str; str = next_word(str))
		if (*str != ' ' && *str)
		{
			*arr = get_single_word(str);

			if (!*arr)
			{
				free_grid_char(orgArr);
				return (NULL);
			}
			else
				arr++;
		}

	*arr = NULL;

	return (orgArr);
}

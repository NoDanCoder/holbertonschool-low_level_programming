#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

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
 * create_file - function that creates a file, and inserts inside some
 * text
 * @filename: PATH file to create
 * @text_content: amount of bytes to copy into "filename"
 *
 *
 * Return: 1 on success, -1 on failure (file can not be created, file
 * can not be written, write “fails”, etc…)
 * On error: -1 inapropiate entry
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t writeStatus;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	writeStatus = write(file, text_content, _strlen(text_content));
	if (writeStatus == -1)
		return (-1);

	close(file);

	return (1);
}

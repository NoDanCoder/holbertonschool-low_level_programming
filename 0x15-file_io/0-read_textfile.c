#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * read_textfile - function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: PATH file to read
 * @letters: amount of bytes to print
 *
 *
 * Return: the actual number of letters it could read and print
 * On error: -1 inapropiate entry
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t readStatus;
	ssize_t writeStatus;
	char *buffer;

	if (!filename)
		return(0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return(0);

	buffer = malloc(letters + 1);
		if (!buffer)
			return(0);

	readStatus = read(file, buffer, letters);
	if (readStatus == -1)
		return(0);

	buffer[readStatus] = '\0';

	writeStatus = write(STDOUT_FILENO, buffer, readStatus);
	if (writeStatus == -1)
		return(0);

	free(buffer);

	return(writeStatus);
}

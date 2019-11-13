#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "holberton.h"

/**
 * catchError - function that catch an integer error and gives his
 * respective exit of the program
 * @stdError: number flag to select the type of error
 * @argv: input user files (this function was designed for this program,
 * no replicable)
 * @fileTrouble: file ID where was succed the problem, only for "100"
 * stdError, else you can apply a 0, on this parameter
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void catchError(int stdError, char *argv[], int fileTrouble)
{
	switch (stdError)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileTrouble);
			exit(100);
			break;
	}
}

/**
 * main - program that take user input and make a copy of a file
 * like "cp" linux command
 * @argc: number of input from user
 * @argv: input user parameters
 *
 *
 * Return: 0 on succes, else "see catchError function"
 */

int main(int argc, char *argv[])
{
	int srcFile, destFile;
	ssize_t readStatus = 1, writeStatus = 0, isClose[2];
	char buffer[1024];

	/* load files */
	if (argc != 3)
		catchError(97, argv, 0);

	srcFile = open(argv[1], O_RDONLY);
	if (srcFile == -1)
		catchError(98, argv, 0);

	destFile = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (destFile == -1)
		catchError(99, argv, 0);

	/* copy and paste */
	while (readStatus)
	{
		readStatus = read(srcFile, buffer, 1024);
		if (readStatus == -1)
			catchError(98, argv, 0);

		writeStatus = write(destFile, buffer, readStatus);
		if (writeStatus == -1)
			catchError(99, argv, 0);
	}

	/* close files */
	isClose[0] = close(srcFile);
	if (isClose[0] == -1)
		catchError(100, argv, srcFile);

	isClose[1] = close(destFile);
	if (isClose[1] == -1)
		catchError(100, argv, destFile);

	return (0);
}

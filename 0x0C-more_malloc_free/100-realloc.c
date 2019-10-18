#include "holberton.h"
#include <stdlib.h>

/**
 * _strcpy - copy a source input ont destinated input
 * @dest: target where will be stored the input
 * @src: source to copy from
 *
 *
 * Return: dest address
 * On error: -1 inapropiate entry
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);

	*(dest + i) = *(src + i); /* adding '\0' character */

	return (dest);
}

/**
 * realloc - function that reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously allocated with a call to
 * malloc: malloc(old_size)
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 *
 * Return: address where is stored the result
 * On error: -1 inapropiate entry
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newPtr;

	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
	{
		newPtr = malloc(new_size);

		if (!newPtr)
			return (NULL);
	}

	else if (new_size <= old_size)
		return (ptr);

	else if (new_size > old_size)
	{
		newPtr = malloc(new_size);

		if (!newPtr)
			return (NULL);

		*newPtr = '\0';

		_strcpy(newPtr, ptr);
	}

	free(ptr);
	ptr = NULL;

	return (newPtr);
}

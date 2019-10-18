#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
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
	unsigned int i;
	char *dummie = ptr;

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

	else if (new_size == old_size)
		return (ptr);

	else
	{
		newPtr = malloc(new_size);

		if (!newPtr)
			return (NULL);

		for (i = 0; i < new_size && i < old_size; i++)
			*(newPtr + i) = *(dummie + i);

		*(newPtr + i) = '\0';

	}

	free(ptr);
	ptr = NULL;

	return (newPtr);
}

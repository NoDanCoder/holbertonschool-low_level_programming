#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees "dog structure pointer"
 * @d: pointer to the struct
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

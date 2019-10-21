#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable of
 * type "struct dog"
 * @d: pointer to the struct
 * @name: name property of "struct dog *d"
 * @age: age property of "struct dog *d"
 * @owner: owner property of "struct dog *d"
 *
 *
 * Return: nothing|
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

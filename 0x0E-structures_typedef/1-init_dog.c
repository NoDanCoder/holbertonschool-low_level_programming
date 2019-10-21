#include "dog.h"

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

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

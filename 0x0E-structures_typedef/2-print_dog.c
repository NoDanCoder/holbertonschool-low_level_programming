#include "dog.h"
#include <stdio.h>

/**
 * print_dog -  function that prints a "struct dog"
 * @d: pointer to the struct
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}

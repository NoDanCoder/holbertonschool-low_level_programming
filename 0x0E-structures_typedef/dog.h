#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define a dog object with info of name, age and owner
 * @name: name of the "dog object"
 * @age: age of the "dog object"
 * @owner: owner of the "dog object"
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */

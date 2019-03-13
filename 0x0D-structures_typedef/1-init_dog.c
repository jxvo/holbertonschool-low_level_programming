#include "dog.h"

#ifndef NULL
#define NULL ((void *)0)
#endif

/**
 * init_dog - initializes a doggo with a name, age, and owner
 * @d: pointer to doggo
 * @name: string name of doggo
 * @age: float age of doggo (in human years)
 * @owner: string name of human
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

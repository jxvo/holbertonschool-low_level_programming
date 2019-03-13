#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated by doggos
 * @d: pointer to doggo type dog_t of struct dog
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}

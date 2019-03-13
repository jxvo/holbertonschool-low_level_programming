#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new doggo of type dog_t of struct dog
 * @name: string name of doggo
 * @age: float age of doggo (in human years)
 * @owner: string name of human
 *
 * Return: pointer to the new doggo
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	char *d_name, *d_owner;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);
	doggo->name = NULL;
	if (name != NULL)
	{
		d_name = _strdup(name);
		if (d_name == NULL)
		{
			free(doggo);
			return (NULL);
		}
		doggo->name = d_name;
	}
	doggo->owner = NULL;
	if (owner != NULL)
	{
		d_owner = _strdup(owner);
		if (d_owner == NULL)
		{
			free(d_name);
			free(doggo);
			return (NULL);
		}
		doggo->owner = d_owner;
	}
	doggo->age = age;
	return (doggo);
}

/**
 * _strdup - allocates memory for a given string
 * @str: string to allocate
 *
 * Return: pointer to allocated memory in heap
 */
char *_strdup(char *str)
{
	char *ret;
	int x;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x]; x++)
		;
	ret = malloc(sizeof(char) * (x + 1));
	if (ret == NULL)
		return (NULL);
	for (x = 0; str[x]; x++)
		ret[x] = str[x];
	ret[x] = '\0';
	return (ret);
}

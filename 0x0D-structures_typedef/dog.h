#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - 1 whole doggo
 * @name: *char name of the best doggo
 * @age: float age (in human years)
 * @owner: *char name of human
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
void free_dog(dog_t *d);

#endif

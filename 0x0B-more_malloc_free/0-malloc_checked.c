#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocates memory to heap using malloc
 * @b: unsigned integer size of bytes to allocate
 * Return: pointer to new memory block, if malloc fails exit status 98
 */
void *malloc_checked(unsigned int b)
{
	void *ret;

	ret = malloc(b);
	if (ret == NULL)
		exit(98);
	return (ret);
}

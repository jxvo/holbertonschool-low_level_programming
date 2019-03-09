#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: unsigned int number of elements in array
 * @size: bytes of each element
 *
 * Return: pointer to allocated memory block, NULL if malloc fails or arg is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	for (x = 0; x < nmemb * size; x++)
		memory[x] = 0;
	return (memory);
}

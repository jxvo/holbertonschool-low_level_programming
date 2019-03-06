#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars, and initializes it with a char
 * @size: unsigned int size of the array
 * @c: character to print as int
 * Return: pointer to the array, or NULL if the function fails
 */
char *create_array(unsigned int size, char c)
{
	if (size <= 0)
		return (NULL);
	else
	{
		char *arr;
		int i;

		arr = malloc(size * sizeof(char));
		for (x = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (*arr);
	}
}

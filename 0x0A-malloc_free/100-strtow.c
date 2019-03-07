#include <stdlib.h>
#include "holberton.h"

/**
 * strtow - splits a string with words separated by spaces to an array of words
 * @str: string to split
 * Return: pointer to an array of words
 */
char **strtow(char *str)
{
	char **arr;
	int a = 0, b = 0, x, y;

	for (y = 0; str[y]; y++)
	{
		if (str[y] != ' ')
		{
			for (x = y; str[x] && str[x] != ' '; x++, b++)
				if (;
			a++;
		}
	}
}

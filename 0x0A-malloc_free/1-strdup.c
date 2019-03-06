#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a copy of @str at it's newly allocated space
 * @str: string to allocate
 * Return: pointer to a new string, which is a duplicate of @str
 */
char *_strdup(char *str)
{
	char *ret;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	ret = malloc((i + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		ret[i] = str[i];
	return (ret);
}

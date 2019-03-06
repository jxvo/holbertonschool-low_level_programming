#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concatenates two string of different sizes
 * @s1: string to append to
 * @s2: string to add
 * Return: pointer to newly allocated string in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *ret;
	int a, b;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (a = 0; s1[a]; a++)
		;
	for (b = 0; s2[b]; b++)
		;
	ret = malloc((a + ++b) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	for (a = 0; s1[a]; a++)
		ret[a] = s1[a];
	for (b = 0; s2[b]; b++)
		ret[a + b] = s2[b];
	return (ret);
}

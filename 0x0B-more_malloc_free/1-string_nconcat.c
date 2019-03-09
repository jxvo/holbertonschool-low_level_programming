#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string to append to
 * @s2: string to append
 * @n: integer first bytes of @s2 to copy
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ret;
	unsigned int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a]; a++)
		;
	for (b = 0; b < n; b++)
		;
	ret = malloc(sizeof(char) * a + ++b);
	if (ret == NULL)
		return (NULL);
	for (a = 0; s1[a]; a++)
		ret[a] = s1[a];
	for (b = 0; b < n && s2[b]; b++, a++)
		ret[a] = s2[b];
	ret[a] = '\0';
	return (ret);
}

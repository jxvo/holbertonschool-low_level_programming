#include "holberton.h"

/**
 * string_toupper - changes all lowercase characters of a string to uppercase
 * @s: string to change
 * Return: changed string
 */
char *string_toupper(char *s)
{
	char *x;

	for (x = s; *x; x++)
	{
		if (*x >= 'a' && *x <= 'z')
			*x -= 32;
	}
	return (s);
}

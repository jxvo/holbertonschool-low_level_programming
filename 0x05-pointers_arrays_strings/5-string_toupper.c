#include "holberton.h"

/**
 * string_toupper - changes all lowercase characters of a string to uppercase
 * @s: string to change
 * Return: changed string
 */
char *string_toupper(char *s)
{
	for (; *s; s++)
	{
		if (*s >= 97 && *s <= 122)
			*s -= 32;
	}
	return (s);
}

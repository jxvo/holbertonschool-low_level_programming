#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to look for
 * Return: pointer to first occurence, 'NULL' if not found
 */
char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
		return (s);
	return (0);
}

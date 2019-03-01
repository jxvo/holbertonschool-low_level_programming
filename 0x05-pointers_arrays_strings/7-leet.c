#include "holberton.h"

/**
 * leet - encodes a string into 1337 speak
 * @s: string to encode
 * Return: changed string
 */
char *leet(char *s)
{
	char *t;
	char *c = "aAeEoOtTlL";
	char *r = "43071";
	int x;

	for (t = s; *t; t++)
	{
		for (x = 0; c[x]; x++)
		{
			if (*t == c[x])
				*t = r[x / 2];
		}
	}
	return (s);
}

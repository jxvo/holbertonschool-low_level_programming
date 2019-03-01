#include "holberton.h"

/**
 * rot13 - encodes a string to rot13 using only one 'if' statement
 * @s: string to change
 * Return: modified string
 */
char *rot13(char *s)
{
	char *sub;
	char *a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *z = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i;

	for (sub = s; *sub; sub++)
	{
		for (i = 0; a[i] && z[i]; i++)
		{
			if (*sub == a[i])
			{
				*sub = z[i];
				break;
			}
		}
	}
	return (s);
}

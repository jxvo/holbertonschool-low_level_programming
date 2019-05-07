#include "holberton.h"

/**
 * _strpbrk - locates first occurence of any byte in @accept within @s
 * @s: string to check
 * @accept: bytes to check
 * Return: pointer to rest of string after first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	char *sub;

	for (; *s; s++)
	{
		for (sub = accept; *sub; sub++)
		{
			if (*s == *sub)
				return (s);
		}
	}
	return (0);
}

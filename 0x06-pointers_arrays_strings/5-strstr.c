#include "holberton.h"

/**
 * _strstr - searches for first occurence of substring @needle in @haystack
 * @needle: substring to search for
 * @haystack: string to check
 * Return: pointer to char with rest of string after first occurence
 */
char *_strstr(char *haystack, char *needle)
{
	char *sub, *base;

	for (; *haystack; haystack++)
	{
		base = haystack;
		sub = needle;
		while (*base && *sub && *base == *sub)
		{
			base++;
			sub++;
		}
		if (!*sub)
			return (haystack);
	}
	return (0);
}
